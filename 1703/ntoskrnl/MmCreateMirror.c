/*
 * XREFs of MmCreateMirror @ 0x1406B4F80
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140180800 (ZwQueryLicenseValue.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS MmCreateMirror(void)
{
  KPROCESSOR_MODE PreviousMode; // dl
  int v2; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+38h] [rbp-38h]
  _QWORD v4[4]; // [rsp+40h] [rbp-30h] BYREF
  int v5; // [rsp+60h] [rbp-10h]
  int v6; // [rsp+80h] [rbp+10h] BYREF
  int v7; // [rsp+88h] [rbp+18h]
  char v8; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v3 = L"Kernel-MemoryMirroringSupported";
  v2 = 4194366;
  v7 = 4;
  if ( (int)ZwQueryLicenseValue((__int64)&v2, (__int64)&v8, (__int64)&v6) < 0 || v6 != 1 )
    return -1073741206;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return -1073741727;
  if ( (dword_1403E3118 & 1) == 0 )
    return -1073741637;
  v4[0] = off_14033C790[0];
  v4[1] = off_14033C798[0];
  v4[2] = off_14033C7A0[0];
  v4[3] = (unsigned __int64)off_14033C7B0 & -(__int64)((dword_1403E3118 & 2) != 0);
  v5 = 2;
  return MmDuplicateMemory((__int64)v4);
}

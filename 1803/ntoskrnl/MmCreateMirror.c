/*
 * XREFs of MmCreateMirror @ 0x14074BE90
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1401A9E20 (ZwQueryLicenseValue.c)
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
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
  if ( (dword_14044B178 & 1) == 0 )
    return -1073741637;
  v4[0] = off_140397E10[0];
  v4[1] = off_140397E18[0];
  v4[2] = off_140397E20[0];
  v4[3] = (unsigned __int64)off_140397E30 & -(__int64)((dword_14044B178 & 2) != 0);
  v5 = 2;
  return MmDuplicateMemory((__int64)v4);
}

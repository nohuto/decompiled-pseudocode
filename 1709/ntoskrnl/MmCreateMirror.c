/*
 * XREFs of MmCreateMirror @ 0x1406E10D0
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1401801E0 (ZwQueryLicenseValue.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS MmCreateMirror(void)
{
  KPROCESSOR_MODE PreviousMode; // dl
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-10h]
  int Data; // [rsp+80h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+88h] [rbp+18h] BYREF
  ULONG Type; // [rsp+90h] [rbp+20h] BYREF

  Data = 0;
  ValueName.Buffer = L"Kernel-MemoryMirroringSupported";
  *(_DWORD *)&ValueName.Length = 4194366;
  ResultDataSize = 4;
  if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0 || Data != 1 )
    return -1073741206;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return -1073741727;
  if ( (dword_140400118 & 1) == 0 )
    return -1073741637;
  v3[0] = off_140354FC0[0];
  v3[1] = off_140354FC8[0];
  v3[2] = off_140354FD0[0];
  v3[3] = (unsigned __int64)off_140354FE0 & -(__int64)((dword_140400118 & 2) != 0);
  v4 = 2;
  return MmDuplicateMemory((__int64)v3);
}

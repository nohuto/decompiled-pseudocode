/*
 * XREFs of RtlLockBootStatusData @ 0x140585800
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 *     PoClearTransitionMarker @ 0x1405B8BC8 (PoClearTransitionMarker.c)
 *     PopRecordPhysicalPowerButton @ 0x1406C547C (PopRecordPhysicalPowerButton.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1401704A0 (wcscpy_s.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 */

NTSTATUS __stdcall RtlLockBootStatusData(PHANDLE FileHandle)
{
  HANDLE v2; // rbx
  NTSTATUS result; // eax
  HANDLE FileHandlea; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  wchar_t Dst[264]; // [rsp+90h] [rbp-70h] BYREF

  wcscpy_s(Dst, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.ObjectName = &DestinationString;
  v2 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( result >= 0 )
    v2 = FileHandlea;
  *FileHandle = v2;
  return result;
}

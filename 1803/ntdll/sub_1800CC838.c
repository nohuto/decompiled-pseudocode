/*
 * XREFs of sub_1800CC838 @ 0x1800CC838
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     sub_180076D50 @ 0x180076D50 (sub_180076D50.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009B3E0 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall sub_1800CC838(_UNICODE_STRING *a1, __int64 a2)
{
  int v2; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v5; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING *v6; // [rsp+50h] [rbp-B0h] BYREF
  int v7; // [rsp+58h] [rbp-A8h] BYREF
  char *v8; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v12; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0x1000000;
  v5 = 0;
  v8 = &v12;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)sub_180076D50(0, a2, a1, (unsigned __int16 *)&v7, &UnicodeString.Length, &v6) >= 0 )
  {
    ObjectAttributes.ObjectName = v6;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation) >= 0 )
    {
      v2 = dword_18015D400;
      if ( (dword_18015D400 & v5) != 0 )
        v2 = 0;
      dword_18015D400 = v2;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
}

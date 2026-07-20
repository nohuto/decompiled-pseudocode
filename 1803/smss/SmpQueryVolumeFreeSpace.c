/*
 * XREFs of SmpQueryVolumeFreeSpace @ 0x1400111BC
 * Callers:
 *     SmpGetDumpDestination @ 0x140010B48 (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQueryVolumeFreeSpace(__m128i *a1, _QWORD *a2)
{
  __int16 *v3; // rcx
  unsigned __int16 v4; // ax
  int v5; // r8d
  __int16 v6; // ax
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  __m128i v10; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _BYTE FsInformation[8]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+27h]
  unsigned int v15; // [rsp+98h] [rbp+2Fh]
  unsigned int v16; // [rsp+9Ch] [rbp+33h]

  v10 = *a1;
  v3 = (__int16 *)v10.m128i_i64[1];
  v4 = _mm_cvtsi128_si32(v10);
  v10.m128i_i16[0] = 0;
  v5 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *v3++;
      if ( v6 == 58 && *v3 == 92 )
        break;
      v5 -= 2;
      if ( !v5 )
        goto LABEL_7;
    }
    LOWORD(v3) = (_WORD)v3 + 2;
  }
LABEL_7:
  v10.m128i_i16[0] = (_WORD)v3 - v10.m128i_i16[4];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  if ( result >= 0 )
  {
    v8 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    NtClose(FileHandle);
    if ( v8 >= 0 )
    {
      result = 0;
      *a2 = v14 * v15 * (unsigned __int64)v16;
    }
    else
    {
      return v8;
    }
  }
  return result;
}

/*
 * XREFs of EtwpCovSampModuleGetName @ 0x1407B6654
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1407B47B0 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     FsRtlGetFileNameInformation @ 0x1404B6AA0 (FsRtlGetFileNameInformation.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x140518E60 (RtlDuplicateUnicodeString.c)
 *     FsRtlReleaseFileNameInformation @ 0x14057B7A0 (FsRtlReleaseFileNameInformation.c)
 */

__int64 __fastcall EtwpCovSampModuleGetName(__int64 a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 v4; // rcx
  NTSTATUS v6; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING StringOut; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)&StringOut.Length = 0LL;
  StringOut.Buffer = 0LL;
  if ( v4 && (int)FsRtlGetFileNameInformation() >= 0 )
  {
    v6 = 0;
    *(_QWORD *)(a1 + 112) = v11;
    *(_WORD *)(a1 + 120) = v10 >> 1;
    *(_QWORD *)(a1 + 104) = 1LL;
  }
  else if ( a3 && a3->Length )
  {
    v6 = RtlDuplicateUnicodeString(0, a3, &StringOut);
    if ( v6 >= 0 )
    {
      v6 = 0;
      Buffer = StringOut.Buffer;
      *(_WORD *)(a1 + 120) = StringOut.Length >> 1;
      *(_QWORD *)&StringOut.Length = 0LL;
      StringOut.Buffer = 0LL;
      *(_QWORD *)(a1 + 112) = Buffer;
      *(_QWORD *)(a1 + 104) = Buffer;
    }
  }
  else
  {
    v6 = -1073741275;
  }
  RtlFreeAnsiString(&StringOut);
  return (unsigned int)v6;
}

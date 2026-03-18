/*
 * XREFs of RtlUnicodeStringCopy @ 0x1C0004148
 * Callers:
 *     ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00A6C9C (-SaveHKCUPathInSessionData@@YAJXZ.c)
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00ADB2C (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C0004224 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  size_t v7; // rdx
  __int64 v8; // rcx
  ULONG v9; // r8d
  wchar_t *v10; // r10
  int v11; // r11d
  wchar_t *Buffer; // r14
  unsigned __int64 v13; // rdi
  int v14; // r10d
  __int16 v15; // cx
  __int64 v16; // r15

  v4 = 0LL;
  v5 = 0LL;
  v11 = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  if ( v11 >= 0 )
  {
    if ( v8 )
    {
      v4 = *(_QWORD *)(v8 + 8);
      v5 = (unsigned __int64)*(unsigned __int16 *)(v8 + 2) >> 1;
    }
    Buffer = v10;
    v13 = (unsigned __int64)v10;
    v11 = RtlUnicodeStringValidateWorker(SourceString, v7, v9);
    if ( v11 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v13 = (unsigned __int64)SourceString->Length >> 1;
      }
      v11 = v14;
      v15 = v14;
      if ( !v5 )
        goto LABEL_15;
      v16 = v4 - (_QWORD)Buffer;
      do
      {
        if ( !v13 )
          break;
        --v13;
        *(wchar_t *)((char *)Buffer + v16) = *Buffer;
        ++v15;
        ++Buffer;
        --v5;
      }
      while ( v5 );
      if ( !v5 )
      {
LABEL_15:
        if ( v13 )
          v11 = -2147483643;
      }
      LOWORD(v14) = v15;
    }
    DestinationString->Length = 2 * v14;
  }
  return v11;
}

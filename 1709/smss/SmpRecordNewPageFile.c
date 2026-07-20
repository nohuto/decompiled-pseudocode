/*
 * XREFs of SmpRecordNewPageFile @ 0x1400090EC
 * Callers:
 *     SmpCreatePagingFile @ 0x140009078 (SmpCreatePagingFile.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x140009004 (SmpDeallocSavedRegistryEntry.c)
 */

void __fastcall SmpRecordNewPageFile(PCUNICODE_STRING String2)
{
  UNICODE_STRING *v1; // rbx
  struct _UNICODE_STRING *v3; // rdi
  LONG v4; // eax
  __int64 v5; // rax
  _QWORD *Buffer; // rcx

  v1 = (UNICODE_STRING *)SmpExistingPageFilesList;
  while ( v1 != (UNICODE_STRING *)&SmpExistingPageFilesList )
  {
    v3 = v1;
    v4 = RtlCompareUnicodeString(v1 + 1, String2, 1u);
    v1 = *(UNICODE_STRING **)&v1->Length;
    if ( !v4 )
    {
      v5 = *(_QWORD *)&v3->Length;
      if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v3->Length + 8LL) != v3
        || (Buffer = v3->Buffer, (struct _UNICODE_STRING *)*Buffer != v3) )
      {
        __fastfail(3u);
      }
      *Buffer = v5;
      *(_QWORD *)(v5 + 8) = Buffer;
      SmpDeallocSavedRegistryEntry(v3);
    }
  }
}

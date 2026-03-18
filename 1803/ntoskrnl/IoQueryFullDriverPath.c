/*
 * XREFs of IoQueryFullDriverPath @ 0x140186560
 * Callers:
 *     PiGetDriverImageDirectory @ 0x140725044 (PiGetDriverImageDirectory.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall IoQueryFullDriverPath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  wchar_t *Pool; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221226021LL;
  Pool = (wchar_t *)IopVerifierExAllocatePool(PagedPool, *(unsigned __int16 *)(v2 + 74));
  a2->Buffer = Pool;
  if ( !Pool )
    return 3221225626LL;
  a2->MaximumLength = *(_WORD *)(v2 + 74);
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v2 + 72));
  return 0LL;
}

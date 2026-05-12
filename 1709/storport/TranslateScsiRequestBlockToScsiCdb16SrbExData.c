/*
 * XREFs of TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C0039DD0
 * Callers:
 *     TranslateToExtendedSrb @ 0x1C0039F50 (TranslateToExtendedSrb.c)
 * Callees:
 *     memmove @ 0x1C001F340 (memmove.c)
 */

void *__fastcall TranslateScsiRequestBlockToScsiCdb16SrbExData(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  void *result; // rax

  *(_DWORD *)a1 = 64;
  *(_DWORD *)(a1 + 4) = 32;
  *(_BYTE *)(a1 + 10) = *(_BYTE *)(a2 + 10);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 9) = *(_BYTE *)(a2 + 11);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 32);
  v2 = *(_BYTE *)(a2 + 10);
  if ( v2 )
    return memmove((void *)(a1 + 24), (const void *)(a2 + 72), v2);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}

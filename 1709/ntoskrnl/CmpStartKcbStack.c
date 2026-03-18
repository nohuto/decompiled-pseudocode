/*
 * XREFs of CmpStartKcbStack @ 0x140481B10
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x14047F860 (CmpConstructNameFromKeyNodes.c)
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  PVOID v2; // rsi
  __int64 result; // rax
  SIZE_T v6; // rbp
  PVOID TransientPoolWithTag; // rax

  v2 = 0LL;
  if ( a2 < 2 || a2 == 1 )
    goto LABEL_2;
  v6 = 8LL * (unsigned int)(a2 - 1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, v6, 0x35364D43u);
  v2 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v6);
LABEL_2:
    *(_WORD *)a1 = a2;
    *(_WORD *)(a1 + 2) = -1;
    result = 0LL;
    *(_QWORD *)(a1 + 24) = v2;
    return result;
  }
  return 3221225626LL;
}

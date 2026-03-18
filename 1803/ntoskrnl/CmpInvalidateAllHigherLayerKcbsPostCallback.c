/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1406FB0B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x14061445C (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2)
{
  CmpInvalidateSubtree(a1, *(_DWORD *)(a2 + 4), 0LL);
  if ( *(_BYTE *)a2 )
  {
    CmpMarkKeyUnbacked(a1);
    CmpFlushNotifiesOnKeyBodyList(a1, *(unsigned int *)(a2 + 4), 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}

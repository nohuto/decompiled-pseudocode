/*
 * XREFs of CmpDisableLazyFlush @ 0x14003CCEC
 * Callers:
 *     CmSetLazyFlushState @ 0x1405779D8 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1406689BC (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}

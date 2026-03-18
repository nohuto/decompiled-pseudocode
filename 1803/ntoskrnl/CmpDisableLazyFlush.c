/*
 * XREFs of CmpDisableLazyFlush @ 0x1400D2EE8
 * Callers:
 *     CmSetLazyFlushState @ 0x1405EF43C (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x1406F68BC (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}

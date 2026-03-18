/*
 * XREFs of CmpDisableLazyFlush @ 0x14013267C
 * Callers:
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     CmSetLazyFlushState @ 0x14069430C (CmSetLazyFlushState.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}

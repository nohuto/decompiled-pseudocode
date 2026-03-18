/*
 * XREFs of CmpEnableLazyFlush @ 0x1400D1D1C
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1400D1CA0 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x140222600 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x1405EF43C (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1400690C0 (CmpArmLazyWriter.c)
 */

void __fastcall CmpEnableLazyFlush(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&CmpHoldLazyFlush);
  if ( _InterlockedAnd(&CmpHoldLazyFlush, ~a1) == a1 )
  {
    for ( i = 0; i < 2; ++i )
      CmpArmLazyWriter(i, 0LL, 1);
  }
}

/*
 * XREFs of CmpEnableLazyFlush @ 0x14012E024
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14012DFA0 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1401E3D40 (CmpCoalescingCallback.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     CmSetLazyFlushState @ 0x14069430C (CmSetLazyFlushState.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140016954 (CmpArmLazyWriter.c)
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

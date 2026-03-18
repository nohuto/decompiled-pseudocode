/*
 * XREFs of CmpEnableLazyFlush @ 0x14003B3E4
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14003B360 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1401DFA00 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x1405779D8 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1400A8190 (CmpArmLazyWriter.c)
 */

__int64 __fastcall CmpEnableLazyFlush(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  unsigned int i; // ebx

  v1 = (unsigned int)~a1;
  _m_prefetchw(&CmpHoldLazyFlush);
  result = (unsigned int)_InterlockedAnd(&CmpHoldLazyFlush, v1);
  if ( (_DWORD)result == a1 )
  {
    for ( i = 0; i < 2; ++i )
    {
      LOBYTE(v1) = 1;
      result = CmpArmLazyWriter(i, 0LL, v1);
    }
  }
  return result;
}

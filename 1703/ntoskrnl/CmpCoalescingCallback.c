/*
 * XREFs of CmpCoalescingCallback @ 0x1401DFA00
 * Callers:
 *     <none>
 * Callees:
 *     CmpForceFlushForCoalescing @ 0x14066971C (CmpForceFlushForCoalescing.c)
 */

__int64 __fastcall CmpCoalescingCallback(int a1)
{
  int v1; // ecx
  int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        CmpForceFlushForCoalescing();
        return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      return CmpEnableLazyFlush(8);
    }
  }
  else
  {
    _InterlockedOr(&CmpHoldLazyFlush, 8u);
  }
  return result;
}

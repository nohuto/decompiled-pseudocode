/*
 * XREFs of KiAcquireReleaseThreadLock @ 0x1401114A0
 * Callers:
 *     KeRundownApcQueues @ 0x140540148 (KeRundownApcQueues.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireReleaseThreadLock(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  _InterlockedOr(v4, 0);
  if ( *(_QWORD *)(a1 + 64) )
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( *(_QWORD *)(a1 + 64) );
    }
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

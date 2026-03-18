/*
 * XREFs of KeEnumerateQueueApc @ 0x140245830
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x140223AC4 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateQueueApc(
        __int64 a1,
        void (__fastcall *a2)(_QWORD *, __int64, __int64),
        __int64 a3,
        char *a4)
{
  char v7; // bl
  char v8; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD **v11; // r14
  _QWORD *i; // rsi
  __int64 result; // rax
  int v14; // [rsp+50h] [rbp+8h] BYREF

  if ( a4 )
  {
    v7 = *a4;
    v8 = *a4;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(a1 + 64) );
  }
  do
  {
    v11 = (_QWORD **)(16LL * v7 + a1 + 152);
    for ( i = *v11; i != v11; i = (_QWORD *)*i )
      a2(i - 2, 88LL, a3);
    ++v7;
  }
  while ( v7 <= v8 );
  result = KiReleaseThreadLockSafe(a1);
  __writecr8(CurrentIrql);
  return result;
}

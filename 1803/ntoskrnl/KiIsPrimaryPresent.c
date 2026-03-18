/*
 * XREFs of KiIsPrimaryPresent @ 0x14024C570
 * Callers:
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     NtUmsThreadYield @ 0x14074337C (NtUmsThreadYield.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KiIsPrimaryPresent(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v3; // bl
  bool v5; // r13
  _QWORD *Object; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  struct _KPRCB *CurrentPrcb; // r12
  int v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 CurrentIrql; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v5 = 0;
  Object = CurrentThread->WaitBlock[3].Object;
  v7 = Object[4];
  v8 = Object[5];
  if ( v7 && v8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v12);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v7 )
      v5 = !_interlockedbittestandset((volatile signed __int32 *)v7, 7u);
    KiReleaseThreadLockSafe((__int64)CurrentThread);
    if ( !v5 )
      goto LABEL_18;
    if ( *(_QWORD *)(v7 + 24) == v8 && *(_DWORD *)(v8 - 72) == *((_DWORD *)Object + 6) )
    {
      if ( !a1 )
      {
LABEL_16:
        v3 = 1;
        goto LABEL_17;
      }
      if ( !*(_QWORD *)(v8 + 16) )
      {
        *(_QWORD *)(v8 + 24) = a2;
        *(_QWORD *)(v8 + 16) = a1;
        goto LABEL_16;
      }
    }
LABEL_17:
    _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
LABEL_18:
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return v3;
}

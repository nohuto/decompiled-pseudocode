/*
 * XREFs of KiFlushQueueApc @ 0x140041320
 * Callers:
 *     KeRundownApcQueues @ 0x1404B9854 (KeRundownApcQueues.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiFlushQueueApc(__int64 a1, __int64 a2)
{
  char v2; // di
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // r11
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r11
  struct _KPRCB *v12; // rsi
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  if ( (_BYTE)a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v13);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      KiReleaseThreadLockSafe(a1);
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * (char)a2 + 152) == a1 + 16LL * (char)a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v12 = KeGetCurrentPrcb();
    v14 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(v12, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v12, 0LL);
      do
        KeYieldProcessorEx(&v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v7 = (_QWORD *)(16LL * v2 + a1 + 152);
  v8 = (_QWORD *)*v7;
  if ( (_QWORD *)*v7 != v7 )
  {
    v9 = (_QWORD *)v7[1];
    if ( (_QWORD *)v8[1] != v7 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    v10 = v8;
    do
    {
      *((_BYTE *)v10 + 66) = 0;
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != v8 );
    v7[1] = v7;
    *v7 = v7;
  }
  KiReleaseThreadLockSafe(a1);
  __writecr8(CurrentIrql);
  return v11;
}

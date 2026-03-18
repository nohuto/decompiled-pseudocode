/*
 * XREFs of KeTryToFreezeThreadStack @ 0x1400025D8
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiIsKernelStackSwappable @ 0x14024A2B0 (KiIsKernelStackSwappable.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  char result; // al
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v5 = KiAcquireThreadStateLock(a1, &v9, &v10);
  if ( v5 <= 4u )
  {
LABEL_5:
    KiReleaseThreadStateLock(v6, v9, v10);
    KiReleaseThreadLockSafe(a1);
    return 0;
  }
  if ( v5 == 5 )
  {
    if ( !(unsigned int)KiIsKernelStackSwappable(a1) )
      goto LABEL_5;
    LOBYTE(v6) = *(_BYTE *)(a1 + 113);
    if ( (_BYTE)v6 )
      goto LABEL_5;
  }
  else if ( v5 == 7 || v5 == 9 )
  {
    goto LABEL_5;
  }
  result = 1;
  *v2 = v9;
  return result;
}

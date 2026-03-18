/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x14006B340
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  unsigned int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 *v12; // r8
  bool v13; // di
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  int v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v19 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_1403B46D8);
  v7 = (__int64 *)qword_1403B46C8;
  while ( v7 != &qword_1403B46C8 )
  {
    v8 = v7 - 179;
    v9 = v6 - *((_DWORD *)v7 - 2);
    v7 = (__int64 *)*v7;
    if ( v9 < KiForegroundBoostTicks )
    {
      if ( v9 > v5 )
        v5 = v9;
    }
    else
    {
      v10 = v8 + 179;
      v11 = v8[179];
      v12 = (__int64 *)v8[180];
      if ( *(__int64 **)(v11 + 8) != v8 + 179 || (_QWORD *)*v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = v4;
      v4 = v8 + 179;
      v8[180] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v8 + 710, 1u);
    }
  }
  v13 = qword_1403B46C8 != (_QWORD)&qword_1403B46C8;
  KxReleaseSpinLock(&qword_1403B46D8);
  if ( v13 )
  {
    v20[1] = -1LL;
    v20[0] = 0LL;
    KeSetTimer2((__int64)&KiForegroundState, -150000LL * (KiForegroundBoostTicks - v5), 0LL, (__int64)v20);
  }
  while ( v4 )
  {
    v15 = v4;
    v4 = (_QWORD *)*v4;
    v16 = (__int64)(v15 - 179);
    *(_QWORD *)(v16 + 1432) = 1LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = 0;
    while ( 1 )
    {
      LOBYTE(v14) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v14);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)(v16 + 64) );
    }
    KiApplyForegroundBoostThread(v16, &v19);
    KiReleaseThreadLockSafe(v16);
    _InterlockedAdd16((volatile signed __int16 *)(v16 + 1420), 0xFFFFu);
  }
  KiReadyDeferredReadyList(KeGetCurrentPrcb(), &v19);
}

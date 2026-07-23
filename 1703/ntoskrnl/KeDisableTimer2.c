/*
 * XREFs of KeDisableTimer2 @ 0x14012ADA8
 * Callers:
 *     ExDeleteTimer @ 0x1401491C0 (ExDeleteTimer.c)
 *     PopPowerButtonWorkCallback @ 0x1402346D0 (PopPowerButtonWorkCallback.c)
 *     ExpDeleteTimer2 @ 0x14055E090 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     EtwTraceTimedEvent @ 0x140020870 (EtwTraceTimedEvent.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KiUpdateTimer2Flags @ 0x14012AFB0 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14012B04C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14012B098 (KiAcquireTimer2LockUnlessDisabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiTraceCancelTimer2 @ 0x140206444 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v4; // rbx
  char v5; // r15
  __int64 v6; // r14
  char updated; // r13
  char v10; // r12
  char v11; // cl
  char v12; // r14
  unsigned int v13; // esi
  char v14; // si
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  char v21; // al
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C0h]
  _QWORD v26[4]; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v27[3]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v28[44]; // [rsp+80h] [rbp-80h] BYREF

  v25 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  updated = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v10 = 1;
    v25 = *(_QWORD *)(a1 + 96);
    memset(v26, 0, sizeof(v26));
  }
  else
  {
    v10 = 0;
  }
  if ( a4 )
  {
    v16 = *a4;
    v17 = a4[1];
    if ( v10 && v16 )
    {
      LOBYTE(v26[3]) |= 8u;
      v26[1] = v16;
      v26[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever));
    }
    v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever);
    v4 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( v11 )
  {
    __writecr8(CurrentIrql);
    v14 = a3;
    v12 = a2;
    goto LABEL_17;
  }
  if ( a4 )
  {
    *(_QWORD *)(a1 + 112) = v6;
    *(_QWORD *)(a1 + 120) = v4;
  }
  v12 = a2;
  if ( a2 )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v5 = 1;
    }
    else if ( (*(_BYTE *)(a1 + 1) & 0xA) != 0 )
    {
      v13 = 36;
      v5 = 1;
      goto LABEL_11;
    }
  }
  v13 = 32;
LABEL_11:
  if ( v10 )
    EtwGetKernelTraceTimestamp(v27, 0x40020000u);
  updated = KiUpdateTimer2Flags(a1, v13, v5 != 0 ? 4 : 6);
  __writecr8(CurrentIrql);
  v14 = a3;
  if ( a3 && !updated )
  {
    v28[0] = 1310721;
    memset(&v28[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v28, KiClockTimerOwner);
    KeGenericProcessorCallback(
      (unsigned __int16 *)v28,
      (void (__fastcall *)(struct _KPRCB *, struct _SINGLE_LIST_ENTRY *))xHalTimerWatchdogStop,
      0LL,
      2LL);
  }
  v11 = 0;
LABEL_17:
  if ( v10 && !v11 )
  {
    v18 = KiWaitNever;
    v19 = KiWaitAlways;
    v20 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v25 ^ KiWaitNever, KiWaitNever));
    if ( v5 )
    {
      KiTraceCancelTimer2(a1, v20);
      v19 = KiWaitAlways;
      v18 = KiWaitNever;
    }
    v26[0] = 0x7E35C6C7F3DD7277LL * (v18 ^ __ROR8__(v20 ^ _byteswap_uint64(a1 ^ v19), v18));
    v21 = v26[3];
    if ( v12 )
    {
      v21 = LOBYTE(v26[3]) | 1;
      LOBYTE(v26[3]) |= 1u;
    }
    if ( v14 )
    {
      v21 |= 2u;
      LOBYTE(v26[3]) = v21;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)v26, 32, 4197890, (__int64)v27);
    }
    else
    {
      LOBYTE(v26[3]) = v21 | 4;
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)v26, 32, 1538, (__int64)v27);
    }
  }
  return v5;
}

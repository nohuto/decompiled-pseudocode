/*
 * XREFs of KeDisableTimer2 @ 0x140087498
 * Callers:
 *     ExDeleteTimer @ 0x1400846E0 (ExDeleteTimer.c)
 *     PopPowerButtonWorkCallback @ 0x14027FBD0 (PopPowerButtonWorkCallback.c)
 *     ExpDeleteTimer2 @ 0x14052EE50 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14003830C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140038350 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiUpdateTimer2Flags @ 0x140087660 (KiUpdateTimer2Flags.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400B76E4 (EtwTraceTimedEvent.c)
 *     KiRemoveTimer2 @ 0x1400E9160 (KiRemoveTimer2.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiTraceCancelTimer2 @ 0x14024AD58 (KiTraceCancelTimer2.c)
 */

unsigned __int8 __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // r15
  __int64 v6; // r14
  char updated; // r13
  char v10; // r12
  bool v11; // cl
  char v12; // r14
  unsigned int v13; // esi
  char v14; // si
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  char v19; // al
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  _QWORD v24[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v25[40]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[22]; // [rsp+90h] [rbp-70h] BYREF

  v23 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  updated = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v10 = 1;
    v23 = *(_QWORD *)(a1 + 96);
    memset(v24, 0, sizeof(v24));
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
      LOBYTE(v24[3]) |= 8u;
      v24[1] = v16;
      v24[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever));
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
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
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
    EtwGetKernelTraceTimestamp(v25, 1073872896LL);
  updated = KiUpdateTimer2Flags(a1, v13, 2 * (v5 ^ 1u) + 4);
  __writecr8(CurrentIrql);
  v14 = a3;
  if ( a3 && !updated )
  {
    LODWORD(v26[0]) = 1310721;
    memset((char *)v26 + 4, 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v26, KiClockTimerOwner);
    KeGenericProcessorCallback(v26, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 2);
  }
  v11 = 0;
LABEL_17:
  if ( v10 && !v11 )
  {
    v18 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v23 ^ KiWaitNever, KiWaitNever));
    if ( v5 )
      KiTraceCancelTimer2(a1, v18);
    v19 = v24[3];
    v24[0] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v18 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
    if ( v12 )
    {
      v19 = LOBYTE(v24[3]) | 1;
      LOBYTE(v24[3]) |= 1u;
    }
    if ( v14 )
    {
      v19 |= 2u;
      LOBYTE(v24[3]) = v19;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)v24, 32, 4197890, (__int64)v25);
    }
    else
    {
      LOBYTE(v24[3]) = v19 | 4;
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)v24, 32, 1538, (__int64)v25);
    }
  }
  return v5;
}

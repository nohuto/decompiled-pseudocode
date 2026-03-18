/*
 * XREFs of UsbhDispatch_HardResetEvent @ 0x1C0009330
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhResumeHardReset @ 0x1C000566C (UsbhResumeHardReset.c)
 *     UsbhFinishStart @ 0x1C0009190 (UsbhFinishStart.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003D350 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003D5B0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003D720 (UsbhQueueOvercurrentReset.c)
 *     UsbhDisableHardReset @ 0x1C0046808 (UsbhDisableHardReset.c)
 *     UsbhHardResetWorker @ 0x1C0046850 (UsbhHardResetWorker.c)
 *     UsbhQueueHardReset @ 0x1C0046B90 (UsbhQueueHardReset.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B980 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     Usbh_HRS_Paused @ 0x1C0008618 (Usbh_HRS_Paused.c)
 *     Usbh_HRS_WaitReady @ 0x1C00086EC (Usbh_HRS_WaitReady.c)
 *     UsbhReleaseResetLock @ 0x1C00087A0 (UsbhReleaseResetLock.c)
 *     Usbh_HRS_Disabled @ 0x1C0009618 (Usbh_HRS_Disabled.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C0046B44 (UsbhIncrementConcurrentResetCounter.c)
 *     Usbh_HRS_PausedWaitDone @ 0x1C0046E5C (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x1C0046F40 (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x1C00471DC (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x1C00472E4 (Usbh_HRS_WaitDone.c)
 */

__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rbp
  KIRQL v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  char v18; // cl
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2800));
  v9 = UsbhLogMask;
  v10 = *(int *)(v6 + 2808);
  v11 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v12 = 829576018;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = v3;
      v9 = UsbhLogMask;
    }
  }
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v10 == 3 )
  {
    if ( *(_BYTE *)(v6 + 5268) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 5260));
      UsbhIncrementConcurrentResetCounter(a1, v8, 0LL);
    }
    Log(a1, 16, 1381200434, 3, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v11);
    return (unsigned int)v10;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 863130450;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = v10;
      *(_QWORD *)(v14 + 24) = v3;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v7);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267890;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = a2;
      *(_QWORD *)(v16 + 24) = v3;
    }
  }
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v17 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeWaitForSingleObject((PVOID)(v17 + 2816), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 64) = 2018792274;
  *(_DWORD *)(a2 + 72) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v10 = *(int *)(v17 + 2808);
  *(_DWORD *)(a2 + 68) = v10;
  v18 = *(_DWORD *)(v17 + 920) + 1;
  *(_QWORD *)(v17 + 1320) = a2;
  v19 = v18 & 7;
  *(_DWORD *)(v17 + 920) = v19;
  v19 *= 32LL;
  *(_DWORD *)(v19 + v17 + 924) = v3;
  *(_DWORD *)(v19 + v17 + 928) = *(_DWORD *)(v17 + 2808);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 757953394;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = a2;
      *(_QWORD *)(v21 + 24) = v10;
    }
  }
  switch ( (_DWORD)v10 )
  {
    case 1:
      return Usbh_HRS_Disabled(a2, (unsigned int)v3);
    case 2:
      return Usbh_HRS_WaitReady(a2, v3);
    case 3:
      return Usbh_HRS_Queued(a2, (unsigned int)v3);
    case 4:
      return Usbh_HRS_ResetStop(a2, (unsigned int)v3);
    case 5:
      return Usbh_HRS_WaitDone(a2, (unsigned int)v3);
    case 6:
      return Usbh_HRS_Paused(a2, v3);
  }
  if ( (_DWORD)v10 != 7 )
  {
    UsbhReleaseResetLock(a1, a2, v10);
    return (unsigned int)v10;
  }
  return Usbh_HRS_PausedWaitDone(a2, (unsigned int)v3);
}

/*
 * XREFs of UsbhDispatch_HardResetEvent @ 0x1C00141E0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhResumeHardReset @ 0x1C0005098 (UsbhResumeHardReset.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     UsbhFinishStart @ 0x1C0017D60 (UsbhFinishStart.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E200 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E460 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E5D0 (UsbhQueueOvercurrentReset.c)
 *     UsbhDisableHardReset @ 0x1C004768C (UsbhDisableHardReset.c)
 *     UsbhHardResetWorker @ 0x1C00476D0 (UsbhHardResetWorker.c)
 *     UsbhQueueHardReset @ 0x1C0047A10 (UsbhQueueHardReset.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004C7F0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     Usbh_HRS_Paused @ 0x1C0007598 (Usbh_HRS_Paused.c)
 *     Usbh_HRS_WaitReady @ 0x1C0007670 (Usbh_HRS_WaitReady.c)
 *     UsbhReleaseResetLock @ 0x1C0007724 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     Usbh_HRS_Disabled @ 0x1C0026D88 (Usbh_HRS_Disabled.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C00479C4 (UsbhIncrementConcurrentResetCounter.c)
 *     Usbh_HRS_PausedWaitDone @ 0x1C0047CE0 (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x1C0047DC4 (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x1C0048060 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x1C004816C (Usbh_HRS_WaitDone.c)
 */

__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // r14
  KIRQL v9; // r13
  int v10; // r9d
  __int64 v11; // rdi
  char v12; // cl
  __int64 v13; // rcx
  __int64 result; // rax

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
  LODWORD(v8) = *(_DWORD *)(v6 + 2808);
  v9 = v7;
  Log(a1, 16, 1381200433, v8, v3);
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v8 == 3 )
  {
    if ( *(_BYTE *)(v6 + 5268) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 5260));
      UsbhIncrementConcurrentResetCounter(a1);
    }
    Log(a1, 16, 1381200434, 3, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v9);
    return (unsigned int)v8;
  }
  else
  {
    Log(a1, 16, 1381200435, v10, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v9);
    Log(a1, 16, 1920150315, a2, v3);
    v11 = *(_QWORD *)(a1 + 64);
    if ( !v11 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v11 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    KeWaitForSingleObject((PVOID)(v11 + 2816), Executive, 0, 0, 0LL);
    *(_DWORD *)(a2 + 64) = 2018792274;
    *(_DWORD *)(a2 + 72) = v3;
    *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
    v8 = *(int *)(v11 + 2808);
    *(_DWORD *)(a2 + 68) = v8;
    v12 = *(_DWORD *)(v11 + 920) + 1;
    *(_QWORD *)(v11 + 1320) = a2;
    v13 = v12 & 7;
    *(_DWORD *)(v11 + 920) = v13;
    v13 *= 32LL;
    *(_DWORD *)(v13 + v11 + 924) = v3;
    *(_DWORD *)(v13 + v11 + 928) = *(_DWORD *)(v11 + 2808);
    Log(a1, 16, 1920150829, a2, v8);
    if ( (_DWORD)v8 == 1 )
    {
      return Usbh_HRS_Disabled(a2, (unsigned int)v3);
    }
    else
    {
      switch ( (int)v8 )
      {
        case 2:
          result = Usbh_HRS_WaitReady(a2, v3);
          break;
        case 3:
          result = Usbh_HRS_Queued(a2, (unsigned int)v3);
          break;
        case 4:
          result = Usbh_HRS_ResetStop(a2, (unsigned int)v3);
          break;
        case 5:
          result = Usbh_HRS_WaitDone(a2, (unsigned int)v3);
          break;
        case 6:
          result = Usbh_HRS_Paused(a2, v3);
          break;
        case 7:
          result = Usbh_HRS_PausedWaitDone(a2, (unsigned int)v3);
          break;
        default:
          UsbhReleaseResetLock(a1, a2, v8);
          return (unsigned int)v8;
      }
    }
  }
  return result;
}

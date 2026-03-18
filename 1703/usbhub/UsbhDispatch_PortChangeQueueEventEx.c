/*
 * XREFs of UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0
 * Callers:
 *     UsbhPCE_QueueDriverReset @ 0x1C00070F0 (UsbhPCE_QueueDriverReset.c)
 *     UsbhBusReset_Action @ 0x1C0008450 (UsbhBusReset_Action.c)
 *     UsbhPCE_wRun @ 0x1C0008D5C (UsbhPCE_wRun.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhHubProcessChangeWorker @ 0x1C000DCE0 (UsbhHubProcessChangeWorker.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C000E190 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhBusResume_Action @ 0x1C000E1D0 (UsbhBusResume_Action.c)
 *     UsbhBusPause_Action @ 0x1C000E8D0 (UsbhBusPause_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000F560 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhPCE_Suspend @ 0x1C002726C (UsbhPCE_Suspend.c)
 *     UsbhPCE_psSUSPEND @ 0x1C00273D4 (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00403A4 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Check @ 0x1C0040478 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C0040538 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C004060C (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C0040754 (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040828 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C0040908 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C00409F0 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C0040AE4 (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C0040BB8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0040C8C (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x1C0040D60 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0040E24 (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1C0040F14 (UsbhPCE_wChangeERROR.c)
 *     UsbhQueuePauseChange @ 0x1C0040FE8 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     Usbh_PCE_BusReset_Action @ 0x1C0007410 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0007A08 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C00098B8 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000BF20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C730 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C000CC80 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000D5A0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C000FE10 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C00103B0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0010890 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0016310 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C0016B34 (Usbh_PCE_HardwareWake_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00236A0 (Usbh_PCE_psPAUSED_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041410 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C00415F4 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C004170C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041914 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0041B6C (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0041C94 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0041E8C (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0041FDC (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042290 (Usbh_PCE_wChangeERROR_Action.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueEventEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-18h]

  v9 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a3);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1346662768;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a4;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 5:
      Usbh_PCE_wRun_Action(a1, a2, a4);
      break;
    case 0x10:
      return Usbh_PCE_wChange_Action(a1, a2, a4);
    case 6:
      Usbh_PCE_wDone_Action(a1, a2, a4);
      break;
    case 4:
      LODWORD(v15) = a6;
      Usbh_PCE_QueueChange_Action(a1, a2, a4, a5, v15, a7);
      break;
    default:
      switch ( (int)v9 )
      {
        case 1:
          Usbh_PCE_Enable_Action(a1, a2);
          break;
        case 2:
          Usbh_PCE_Disable_Action(a1, a2);
          break;
        case 3:
          Usbh_PCE_Resume_Action(a1, a2, a4);
          break;
        case 8:
          Usbh_PCE_SoftDisconnect_Action(a1, a2, a4);
          break;
        case 9:
          Usbh_PCE_BusReset_Action(a1, a2);
          break;
        case 10:
          Usbh_PCE_Suspend_Action(a1, a2, a4, a8);
          break;
        case 11:
          Usbh_PCE_BusDisconnect_Action(a1, a2, a4);
          break;
        case 12:
          Usbh_PCE_HardwareWake_Action(a1, a2);
          break;
        case 13:
          Usbh_PCE_SD_Resume_Action(a1, a2, a4);
          break;
        case 14:
          Usbh_PCE_ResumeTimeout_Action(a1, a2);
          break;
        case 15:
          LODWORD(v15) = a6;
          Usbh_PCE_QueueDriverReset_Action(a1, a2, a4, a5, v15, a7);
          break;
        case 17:
          Usbh_PCE_HW_Stop_Action(a1, a2, a4);
          break;
        case 18:
          Usbh_PCE_psSUSPEND_Action(a1, a2, a4);
          break;
        case 19:
          Usbh_PCE_psPAUSED_Action(a1, a2, a4);
          break;
        case 20:
          a8 = Usbh_PCE_Check_Action(a1, a2, a4, a8);
          break;
        case 21:
          Usbh_PCE_ResumeDone_Action(a1, a2, a4);
          break;
        case 22:
          Usbh_PCE_Close_Action(a1, a2, a4);
          break;
        case 23:
          Usbh_PCE_wChangeERROR_Action(a1, a2, a4, a5, v15, a7);
          break;
        default:
          return a8;
      }
      break;
  }
  return a8;
}

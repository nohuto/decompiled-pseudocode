/*
 * XREFs of UsbhSS_PdoWakeWorker @ 0x1C00017C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoWakeIrp @ 0x1C0001978 (UsbhCompletePdoWakeIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     GET_FDO_POWER_STATE @ 0x1C0004FA4 (GET_FDO_POWER_STATE.c)
 *     UsbhSetPdoPowerState @ 0x1C000577C (UsbhSetPdoPowerState.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhSS_PdoWakeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  KIRQL v9; // dl
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  unsigned __int8 v13; // al
  int v14; // edx
  int v15; // r8d
  char v16; // r10

  FdoExt(a1);
  v5 = PdoExt(a3);
  v6 = PdoExt(a3) + 944;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_ffb6dafc59903cb34fef89ac9d19df64_Traceguids,
      *(_WORD *)(v5 + 1420));
  Log(a1, 0x10000, 1936945239, a3, *(unsigned __int16 *)(v5 + 1420));
  UsbhAcquirePdoStateLock(v7, v6, 12LL);
  v8 = *(_DWORD *)(PdoExt(a3) + 1124) == 3;
  *(_DWORD *)(v6 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v6 + 88) = 1734964085;
  v9 = *(_BYTE *)(v6 + 132);
  if ( v8 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
    UsbhAcquireFdoPwrLock(a1, v6, 126LL, 1986356311LL);
    v10 = GET_FDO_POWER_STATE(v6);
    v12 = *(_DWORD *)(PdoExt(a3) + 1128);
    if ( v10 == 201 && (v12 != 1 || (*(_DWORD *)(v5 + 1412) & 4) != 0) )
    {
      UsbhSetPdoPowerState(v6, a3, v11, v12, 12);
      UsbhReleaseFdoPwrLock(a1, v6);
      v13 = UsbhCompletePdoWakeIrp(a1, a3, 0LL);
      Log(a1, 0x10000, 1936938801, v13, a3);
      if ( v16 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          v15,
          11,
          (__int64)&WPP_ffb6dafc59903cb34fef89ac9d19df64_Traceguids,
          *(_WORD *)(v5 + 1420),
          a3);
    }
    else
    {
      UsbhReleaseFdoPwrLock(a1, v6);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  }
  return UsbhUnlatchPdo(a1, a3, 0LL, 1936945239LL);
}

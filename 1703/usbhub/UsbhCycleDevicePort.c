/*
 * XREFs of UsbhCycleDevicePort @ 0x1C0042860
 * Callers:
 *     UsbhFdoCyclePdoPort @ 0x1C003D91C (UsbhFdoCyclePdoPort.c)
 *     UsbhIoctlCyclePort @ 0x1C00478CC (UsbhIoctlCyclePort.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0027744 (UsbhAcquirePdoStateLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResumePort @ 0x1C00442D4 (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhCycleDevicePort(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // ebx
  _DWORD *v7; // r15
  _DWORD *v8; // r13
  _DWORD *v9; // rsi
  __int64 PortData; // r12
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  bool v14; // zf
  KIRQL v15; // dl
  int v16; // eax

  v6 = -1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x51u,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
  v7 = PdoExt(a2);
  v8 = FdoExt(a1);
  v9 = PdoExt(a2) + 236;
  PortData = UsbhGetPortData(a1, *((_WORD *)v7 + 710));
  if ( !PortData )
  {
    Log(a1, 4, 1129932081, 0LL, 0LL);
    v6 = -1073741811;
    goto LABEL_16;
  }
  v11 = v8[640];
  if ( (v11 & 0x4000) != 0 )
  {
    Log(a1, 4, 1132029234, 0LL, 0LL);
    *a3 = -1073713152;
LABEL_7:
    v6 = -1073741810;
    goto LABEL_16;
  }
  if ( (v11 & 0x10) != 0 )
  {
    Log(a1, 4, 1132029235, 0LL, 0LL);
    *a3 = -1073704960;
    v6 = -1073741630;
    goto LABEL_16;
  }
  v12 = UsbhLatchPdo(a1, *((_WORD *)v7 + 710), 0LL, 0x6C435943u);
  Log(a1, 4, 1668899692, *((unsigned __int16 *)v7 + 710), v12);
  if ( !v12 )
    goto LABEL_7;
  if ( a2 == v12 )
  {
    UsbhAcquirePdoStateLock(v13, (__int64)v9, 14);
    v14 = PdoExt(a2)[281] == 3;
    v9[34] = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v9[22] = 1734964085;
    v15 = *((_BYTE *)v9 + 132);
    if ( v14 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v15);
      Log(a1, 8, 1668899655, *((unsigned __int16 *)v7 + 710), *((unsigned __int16 *)v7 + 710));
      _InterlockedIncrement((volatile signed __int32 *)(PortData + 412));
      v16 = UsbhSyncResumePort(a1);
      Log(a1, 8, 1668895315, *((unsigned __int16 *)v7 + 710), v16);
      UsbhQueueSoftConnectChange(a1, *((_WORD *)v7 + 710), (__int64)v9, 1);
      v6 = 0;
    }
    else
    {
      v6 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v15);
    }
  }
  UsbhUnlatchPdo(a1, v12, 0LL, 0x6C435943u);
LABEL_16:
  Log(a1, 8, 1668899655, *((unsigned __int16 *)v7 + 710), v6);
  return (unsigned int)v6;
}

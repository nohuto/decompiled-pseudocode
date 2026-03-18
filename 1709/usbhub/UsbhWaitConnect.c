/*
 * XREFs of UsbhWaitConnect @ 0x1C00121B0
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhLogSignalResumeEvent @ 0x1C00068E0 (UsbhLogSignalResumeEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhRequestPortSuspend @ 0x1C00268FC (UsbhRequestPortSuspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0050FFC (WPP_RECORDER_SF_DDD.c)
 *     UsbhBusUnlatchPdo @ 0x1C0051360 (UsbhBusUnlatchPdo.c)
 *     UsbhHandleOvercurrent @ 0x1C00515E0 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  __int64 v15; // rdx
  int v17; // r9d
  KIRQL v18; // r10
  unsigned int v19; // ebx
  __int64 v20; // r9
  __int64 (__fastcall *v21)(); // rax
  int v23; // edx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // rsi
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-48h]

  v5 = *(_DWORD *)(a4 + 400);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1313754947;
        *(_QWORD *)(v11 + 24) = a2;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a4;
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a4 + 4),
      a3,
      10,
      (__int64)&WPP_2de0652197c239c8e2f1ef214ff7695f_Traceguids,
      *(_WORD *)(a4 + 4),
      a3,
      a2);
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 1884180291;
          *(_QWORD *)(v13 + 16) = a3;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 24) = 0LL;
        }
      }
    }
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        43,
        (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
        *(_WORD *)(a4 + 4));
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( a1 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v14 = (PDEVICE_OBJECT)(*(_QWORD *)(v15 + 888)
                               + 32LL
                               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884)));
          *(_DWORD *)&v14->Type = 1313175651;
          v14->DriverObject = 0LL;
          v14->NextDevice = (_DEVICE_OBJECT *)a4;
          v14->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v31 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock((__int64)v14, v31, 19);
      if ( *(_DWORD *)(PdoExt(a5) + 1124) == 2 )
      {
        UsbhBusUnlatchPdo(a1, a5, a4, v32, v31 + 132);
        UsbhDeletePdo(a1, a5, 2LL);
      }
      else
      {
        v33 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v33 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(v33 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v33 + 132));
      }
    }
    return 4;
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 16 )
    {
      Log(a1, 4, 1129270898, a3, 0LL);
      v21 = off_1C005D708[2 * v29];
    }
    else
    {
      v19 = a2 - 1;
      if ( v19 )
      {
        v24 = v19 - 1;
        if ( v24 )
        {
          v25 = v24 - 2;
          if ( v25 )
          {
            if ( v25 != 4 )
              return v5;
            Log(a1, 4, 1129270902, a3, 0LL);
            return (unsigned int)UsbhHandleOvercurrent(a1, a5);
          }
          Log(a1, 4, 1129270899, a3, 0LL);
          v21 = (__int64 (__fastcall *)())qword_1C005C4C8[2 * v26];
        }
        else
        {
          Log(a1, 4, 1129270885, a3, 0LL);
          v21 = off_1C005D908[2 * v28];
        }
      }
      else
      {
        Log(a1, 4, 1129270883, a3, 0LL);
        v21 = off_1C005C2C8[2 * v20];
      }
    }
LABEL_31:
    if ( !v21 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v21)(a1, a4, a5);
  }
  switch ( a2 )
  {
    case 0x40000u:
      Log(a1, 4, 1129270867, a3, 0LL);
      return (unsigned int)UsbhRequestPortSuspend(a1, v23, a3, a4, a5);
    case 0x20000u:
      Log(a1, 4, 1129270904, a3, 0LL);
      v21 = (__int64 (__fastcall *)())qword_1C005C0C8[2 * v27];
      goto LABEL_31;
    case 0x10000u:
      Log(a1, 4, 1129270900, a3, 0LL);
      v21 = off_1C005DB08[2 * v30];
      goto LABEL_31;
    case 0x100000u:
      Log(a1, 4, 1129270893, a3, 0LL);
      if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a4) )
      {
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
        v17 = *(_DWORD *)(a4 + 12);
        v34 = *(unsigned __int16 *)(a4 + 4);
        *(_DWORD *)(a4 + 448) = 1;
        Log(a1, 16, 1886479734, v17, v34);
        *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
        *(_DWORD *)(a4 + 448) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v18);
      }
      break;
  }
  return v5;
}

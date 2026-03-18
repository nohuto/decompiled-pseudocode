/*
 * XREFs of UsbhWaitConnect @ 0x1C0014410
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhRequestPortSuspend @ 0x1C00261D4 (UsbhRequestPortSuspend.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0027744 (UsbhAcquirePdoStateLock.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004D47C (WPP_RECORDER_SF_DDD.c)
 *     UsbhBusUnlatchPdo @ 0x1C005059C (UsbhBusUnlatchPdo.c)
 *     UsbhHandleOvercurrent @ 0x1C0050820 (UsbhHandleOvercurrent.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 */

__int64 __fastcall UsbhWaitConnect(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rax
  KSPIN_LOCK *v21; // r14
  KIRQL v22; // r15
  __int64 v23; // r9
  KIRQL v24; // r10
  int v25; // edx
  unsigned int v26; // ebx
  __int64 v27; // r9
  __int64 (__fastcall *v28)(); // rax
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // rsi
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-48h]

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
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a4 + 4),
      a3,
      10,
      (__int64)&WPP_2de0652197c239c8e2f1ef214ff7695f_Traceguids,
      *(_WORD *)(a4 + 4),
      a3,
      a2);
    v12 = WPP_GLOBAL_Control;
  }
  if ( a2 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 1884180291;
          *(_QWORD *)(v14 + 16) = a3;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 24) = 0LL;
          v12 = WPP_GLOBAL_Control;
        }
      }
    }
    if ( LOWORD(v12->DeviceType) )
      WPP_RECORDER_SF_d(
        v12->DeviceExtension,
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
          v12 = (PDEVICE_OBJECT)(*(_QWORD *)(v15 + 888)
                               + 32LL
                               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884)));
          *(_DWORD *)&v12->Type = 1313175651;
          v12->DriverObject = 0LL;
          v12->NextDevice = (_DEVICE_OBJECT *)a4;
          v12->AttachedDevice = 0LL;
        }
      }
    }
    if ( a5 )
    {
      v37 = *(_QWORD *)(a4 + 376);
      UsbhAcquirePdoStateLock(v12, v37, 19LL);
      if ( *(_DWORD *)(PdoExt(a5) + 1124) == 2 )
      {
        UsbhBusUnlatchPdo(a1, a5, a4, v38, v37 + 132);
        UsbhDeletePdo(a1, a5, 2LL);
      }
      else
      {
        v39 = *(_QWORD *)(a4 + 376);
        *(_DWORD *)(v39 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(v39 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v39 + 132));
      }
    }
    return 4;
  }
  if ( a2 <= 0x10 )
  {
    if ( a2 == 16 )
    {
      Log(a1, 4, 1129270898, a3, 0LL);
      v28 = off_1C005C708[2 * v35];
    }
    else
    {
      v26 = a2 - 1;
      if ( v26 )
      {
        v30 = v26 - 1;
        if ( v30 )
        {
          v31 = v30 - 2;
          if ( v31 )
          {
            if ( v31 != 4 )
              return v5;
            Log(a1, 4, 1129270902, a3, 0LL);
            return (unsigned int)UsbhHandleOvercurrent(a1, a5);
          }
          Log(a1, 4, 1129270899, a3, 0LL);
          v28 = (__int64 (__fastcall *)())qword_1C005B4C8[2 * v32];
        }
        else
        {
          Log(a1, 4, 1129270885, a3, 0LL);
          v28 = off_1C005C908[2 * v34];
        }
      }
      else
      {
        Log(a1, 4, 1129270883, a3, 0LL);
        v28 = off_1C005B2C8[2 * v27];
      }
    }
LABEL_41:
    if ( !v28 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v28)(a1, a4, a5);
  }
  switch ( a2 )
  {
    case 0x40000u:
      Log(a1, 4, 1129270867, a3, 0LL);
      return (unsigned int)UsbhRequestPortSuspend(a1, v25, a3, a4, a5);
    case 0x20000u:
      Log(a1, 4, 1129270904, a3, 0LL);
      v28 = (__int64 (__fastcall *)())qword_1C005B0C8[2 * v33];
      goto LABEL_41;
    case 0x10000u:
      Log(a1, 4, 1129270900, a3, 0LL);
      v28 = off_1C005CB08[2 * v36];
      goto LABEL_41;
    case 0x100000u:
      if ( (UsbhLogMask & 4) != 0 )
      {
        if ( a1 )
        {
          v17 = *(_QWORD *)(a1 + 64);
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
            *(_DWORD *)v18 = 1833848643;
            *(_QWORD *)(v18 + 16) = a3;
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)(v18 + 24) = 0LL;
          }
        }
      }
      v19 = 0;
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v20 = *(_QWORD *)(a1 + 64);
      if ( !v20 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v20 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v21 = (KSPIN_LOCK *)(v20 + 4944);
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 4944));
      Log(a1, 16, 1936282195, *(int *)(a4 + 696), *(unsigned __int16 *)(a4 + 4));
      if ( *(_DWORD *)(a4 + 696) == 3 )
      {
        Log(a1, 16, 1936282232, 3LL, *(unsigned __int16 *)(a4 + 4));
        *(_DWORD *)(a4 + 696) = 0;
        KeSetEvent((PRKEVENT)(a4 + 712), 0, 0);
        v19 = 1;
      }
      KeReleaseSpinLock(v21, v22);
      if ( v19 )
      {
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 440));
        v23 = *(int *)(a4 + 12);
        v40 = *(unsigned __int16 *)(a4 + 4);
        *(_DWORD *)(a4 + 448) = 1;
        Log(a1, 16, 1886479734, v23, v40);
        *(_DWORD *)(32 * (*(unsigned int *)(a4 + 2400) + 43LL) + a4 + 20) = 30;
        *(_DWORD *)(a4 + 448) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 440), v24);
      }
      break;
  }
  return v5;
}

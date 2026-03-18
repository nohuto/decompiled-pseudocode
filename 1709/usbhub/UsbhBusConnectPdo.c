/*
 * XREFs of UsbhBusConnectPdo @ 0x1C001B7E0
 * Callers:
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C0006A00 (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0007CD8 (UsbhSignalSyncDeviceResetPdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001FF38 (UsbhEtwGetDeviceInfo.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C0027C80 (UsbhBusIoInvalidateDeviceRelations.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_c @ 0x1C0029394 (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 */

void __fastcall UsbhBusConnectPdo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  _DWORD *v7; // r13
  _DWORD *v8; // rbx
  int v9; // edx
  int v10; // r8d
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  int v16; // r8d
  _BYTE v17[48]; // [rsp+78h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a2 + 376);
  *(_BYTE *)(v2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v2 + 136) = 1;
  *(_DWORD *)(v2 + 88) = 2018460752;
  *(_DWORD *)(v2 + 92) = 2;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v2;
  *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
  v5 = *(_QWORD *)(a2 + 392);
  if ( v5 )
  {
    v6 = (int)PdoExt(v5)[281];
    v7 = FdoExt(a1);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 1);
    v8 = PdoExt(v5);
    Log(a1, 4, 1919248208, v5, v6);
    if ( (_DWORD)v6 == 3 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)WPP_GLOBAL_Control,
          v10,
          41,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_QWORD *)(a2 + 392));
      *(_DWORD *)(v2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
      UsbhSignalSyncDeviceResetPdo(a1, v5, 0);
      UsbhSignalDriverResetEvent(a1, a2);
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          42,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_WORD *)v8 + 710),
          v5);
      v11 = (_QWORD *)*((_QWORD *)v7 + 602);
      v12 = v8 + 328;
      if ( (_DWORD *)*v11 != v7 + 1202 )
        __fastfail(3u);
      *v12 = v7 + 1202;
      *((_QWORD *)v8 + 165) = v11;
      *v11 = v12;
      *((_QWORD *)v7 + 602) = v12;
      if ( dword_1C006A650 )
      {
        FdoExt(*((_QWORD *)v8 + 147));
        UsbhEtwGetDeviceInfo(v8, v17);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_DEVICE_ADD, 0LL);
      }
      v13 = PdoExt(v5);
      v14 = ((unsigned __int8)v13[1] + 1) & 7;
      v13[1] = v14;
      v14 *= 32LL;
      *(_DWORD *)((char *)v13 + v14 + 16) = 2;
      *(_DWORD *)((char *)v13 + v14 + 20) = v13[281];
      *(_DWORD *)((char *)v13 + v14 + 24) = 2;
      v13[281] = 2;
      v7[226] = 1;
      *(_DWORD *)(v2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
      if ( (v8[353] & 0x100) != 0 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          44,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          45,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          46,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1392));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_c(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          47,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1393));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          48,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_WORD *)v8 + 697));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_c(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          49,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1160));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          50,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1396));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          51,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1397));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          52,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1398));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          53,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1399));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          54,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_WORD *)v8 + 700));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          55,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_WORD *)v8 + 701));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          56,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_WORD *)v8 + 702));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          57,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1406));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          58,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1407));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          59,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1408));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          60,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_BYTE *)v8 + 1409));
      if ( *((_QWORD *)v8 + 260) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v16,
          61,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_QWORD *)v8 + 260));
      if ( *((_QWORD *)v8 + 262) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v16,
          62,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_QWORD *)v8 + 262));
      if ( *((_QWORD *)v8 + 264) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v16,
          63,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_QWORD *)v8 + 264));
      if ( *((_QWORD *)v8 + 268) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v16,
          64,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_QWORD *)v8 + 268));
      if ( *((_QWORD *)v8 + 266) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v16,
          65,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_QWORD *)v8 + 266));
      if ( *((_QWORD *)v8 + 270) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v16,
          66,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
          *((_QWORD *)v8 + 270));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          67,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          68,
          (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
      UsbhBusIoInvalidateDeviceRelations(a1, v2);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
  }
}

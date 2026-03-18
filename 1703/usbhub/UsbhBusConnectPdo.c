/*
 * XREFs of UsbhBusConnectPdo @ 0x1C002557C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C0007D84 (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0019120 (SET_PDO_HWPNPSTATE.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C0025818 (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0025994 (UsbhEtwLogDeviceInformation.c)
 *     WPP_RECORDER_SF_c @ 0x1C002845C (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 */

void __fastcall UsbhBusConnectPdo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  _DWORD *v7; // r15
  _DWORD *v8; // rdi
  int v9; // edx
  int v10; // r8d
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  int v15; // edx
  int v16; // edx

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
    v6 = (int)PdoExt(*(_QWORD *)(a2 + 392))[281];
    v7 = FdoExt(a1);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 1);
    v8 = PdoExt(v5);
    Log(a1, 4, 1919248208, v5, v6);
    if ( (_DWORD)v6 != 3 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          42,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          *((_WORD *)v8 + 710),
          v5);
      v11 = (_QWORD *)*((_QWORD *)v7 + 602);
      v12 = v8 + 328;
      if ( (_DWORD *)*v11 != v7 + 1202 )
        __fastfail(3u);
      *((_QWORD *)v8 + 165) = v11;
      *v12 = v7 + 1202;
      *v11 = v12;
      *((_QWORD *)v7 + 602) = v12;
      LOBYTE(v12) = 1;
      UsbhEtwLogDeviceInformation(v8, &USBHUB_ETW_EVENT_DEVICE_ADD, v12);
      SET_PDO_HWPNPSTATE(v5, 2, 2);
      v7[226] = 1;
      *(_DWORD *)(v2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
        v14 = WPP_GLOBAL_Control;
      }
      if ( (v8[353] & 0x100) != 0 )
      {
        if ( !LOWORD(v14->DeviceType) )
          goto LABEL_10;
        WPP_RECORDER_SF_(v14->DeviceExtension, 0, 1, 44, (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
        v14 = WPP_GLOBAL_Control;
      }
      if ( LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_(v14->DeviceExtension, 0, 1, 45, (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
        v14 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            46,
            (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
            *((_BYTE *)v8 + 1392));
          v14 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_c(
              WPP_GLOBAL_Control->DeviceExtension,
              v15,
              v13,
              47,
              (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
              *((_BYTE *)v8 + 1393));
            v14 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                48,
                (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                *((_WORD *)v8 + 697));
              v14 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_c(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v16,
                  v13,
                  49,
                  (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                  *((_BYTE *)v8 + 1160));
                v14 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    50,
                    (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                    *((_BYTE *)v8 + 1396));
                  v14 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      0,
                      1,
                      51,
                      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                      *((_BYTE *)v8 + 1397));
                    v14 = WPP_GLOBAL_Control;
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        52,
                        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                        *((_BYTE *)v8 + 1398));
                      v14 = WPP_GLOBAL_Control;
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          53,
                          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                          *((_BYTE *)v8 + 1399));
                        v14 = WPP_GLOBAL_Control;
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          WPP_RECORDER_SF_d(
                            WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1,
                            54,
                            (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                            *((_WORD *)v8 + 700));
                          v14 = WPP_GLOBAL_Control;
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          {
                            WPP_RECORDER_SF_d(
                              WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1,
                              55,
                              (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                              *((_WORD *)v8 + 701));
                            v14 = WPP_GLOBAL_Control;
                            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            {
                              WPP_RECORDER_SF_d(
                                WPP_GLOBAL_Control->DeviceExtension,
                                0,
                                1,
                                56,
                                (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                                *((_WORD *)v8 + 702));
                              v14 = WPP_GLOBAL_Control;
                              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                              {
                                WPP_RECORDER_SF_d(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  0,
                                  1,
                                  57,
                                  (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                                  *((_BYTE *)v8 + 1406));
                                v14 = WPP_GLOBAL_Control;
                                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                {
                                  WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    0,
                                    1,
                                    58,
                                    (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                                    *((_BYTE *)v8 + 1407));
                                  v14 = WPP_GLOBAL_Control;
                                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                  {
                                    WPP_RECORDER_SF_d(
                                      WPP_GLOBAL_Control->DeviceExtension,
                                      0,
                                      1,
                                      59,
                                      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                                      *((_BYTE *)v8 + 1408));
                                    v14 = WPP_GLOBAL_Control;
                                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                    {
                                      WPP_RECORDER_SF_d(
                                        WPP_GLOBAL_Control->DeviceExtension,
                                        0,
                                        1,
                                        60,
                                        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
                                        *((_BYTE *)v8 + 1409));
                                      v14 = WPP_GLOBAL_Control;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_10:
      if ( *((_QWORD *)v8 + 260) && LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v14->DeviceExtension,
          0,
          v13,
          61,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          *((_QWORD *)v8 + 260));
        v14 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v8 + 262) && LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v14->DeviceExtension,
          0,
          v13,
          62,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          *((_QWORD *)v8 + 262));
        v14 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v8 + 264) && LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v14->DeviceExtension,
          0,
          v13,
          63,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          *((_QWORD *)v8 + 264));
        v14 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v8 + 268) && LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v14->DeviceExtension,
          0,
          v13,
          64,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          *((_QWORD *)v8 + 268));
        v14 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v8 + 266) && LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          v14->DeviceExtension,
          0,
          v13,
          65,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          *((_QWORD *)v8 + 266));
        v14 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)v8 + 270) )
      {
        if ( !LOWORD(v14->DeviceType) )
        {
LABEL_25:
          UsbhBusIoInvalidateDeviceRelations(a1, v2);
          return;
        }
        WPP_RECORDER_SF_S(
          v14->DeviceExtension,
          0,
          v13,
          66,
          (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
          *((_QWORD *)v8 + 270));
        v14 = WPP_GLOBAL_Control;
      }
      if ( LOWORD(v14->DeviceType) )
      {
        WPP_RECORDER_SF_(v14->DeviceExtension, 0, 1, 67, (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            68,
            (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
      }
      goto LABEL_25;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v10,
        41,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
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
    *(_DWORD *)(v2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
  }
}

/*
 * XREFs of Usbh_BusRemove_PdoEvent @ 0x1C00458DC
 * Callers:
 *     Usbh_BS_BusStop @ 0x1C000A758 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusPause @ 0x1C000B548 (Usbh_BS_BusPause.c)
 * Callees:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0003908 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044DF8 (UsbhSetPdo_FailIo.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusRemove_PdoEvent(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  __int64 v5; // rcx
  _DWORD *v6; // r14
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // r14
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int16 v18; // r9
  __int16 v19; // r12
  unsigned __int16 i; // bx
  __int64 PortData; // rax
  __int64 v22; // r14
  _DWORD *v23; // rax
  __int64 v24; // rcx

  Log(a1, 2, 1716736630, 0LL, a2);
  v4 = FdoExt(a1);
  UsbhAcquirePdoStateLock(v5, a2, 11);
  if ( (v4[640] & 0x40000000) != 0 )
    UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  Log(a1, 2, 1718374961, 0LL, a2);
  v6 = v4 + 1206;
  while ( *(_DWORD **)v6 != v6 )
  {
    v7 = *(__int64 **)v6;
    if ( *(_DWORD **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *v7, *(__int64 **)(*v7 + 8) != v7) )
      __fastfail(3u);
    v9 = v7 - 164;
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    Log(a1, 4, 1718374962, (__int64)v9, 0LL);
    v10 = v9[105];
    v9[164] = 0LL;
    v9[165] = 0LL;
    v11 = PdoExt(v10);
    UsbhDeletePdo(a1, v9[105], (unsigned int)v11[281]);
    UsbhAcquirePdoStateLock(v12, a2, 11);
  }
  v13 = v4 + 1210;
  while ( *(_DWORD **)v13 != v13 )
  {
    v14 = *(__int64 **)v13;
    if ( *(_DWORD **)(*(_QWORD *)v13 + 8LL) != v13 || (v15 = *v14, *(__int64 **)(*v14 + 8) != v14) )
      __fastfail(3u);
    v16 = (__int64)(v14 - 164);
    *(_QWORD *)v13 = v15;
    *(_QWORD *)(v15 + 8) = v13;
    Log(a1, 4, 1346650466, v16, 0LL);
    v17 = *(_QWORD *)(v16 + 840);
    *(_QWORD *)(v16 + 1312) = 0LL;
    *(_QWORD *)(v16 + 1320) = 0LL;
    PdoExt(v17);
    *(_DWORD *)(v16 + 1412) |= 0x40000u;
  }
  Log(a1, 2, 1718374963, 0LL, a2);
  v19 = v18 + 1;
  for ( i = v18 + 1; (v4[640] & 0x400000) != 0 && i <= *((unsigned __int8 *)FdoExt(a1) + 2938); i += v19 )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v22 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526259, v22, 0LL);
      if ( v22 )
      {
        UsbhSetPdo_FailIo(v22);
        v23 = PdoExt(v22);
        UsbhDeletePdo(a1, v22, (unsigned int)v23[281]);
        UsbhAcquirePdoStateLock(v24, a2, 11);
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
}

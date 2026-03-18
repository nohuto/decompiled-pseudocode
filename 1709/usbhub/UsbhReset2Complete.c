/*
 * XREFs of UsbhReset2Complete @ 0x1C00143E0
 * Callers:
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhWait @ 0x1C0005CE4 (UsbhWait.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00070F0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhRawWait @ 0x1C00096A0 (UsbhRawWait.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0009A64 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0009AA4 (UsbhAllocateTimeoutObject.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A898 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0017370 (UsbhAcquireEnumBusLock.c)
 *     UsbhInitializeDevice @ 0x1C0018F5C (UsbhInitializeDevice.c)
 *     UsbhResetPort @ 0x1C0019070 (UsbhResetPort.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhBusConnectPdo @ 0x1C001B7E0 (UsbhBusConnectPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 *     UsbhDerefPdo @ 0x1C0025AD0 (UsbhDerefPdo.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C0027B18 (UsbhBusIf_GetContainerIdForPort.c)
 *     UsbhBuildContainerID @ 0x1C0028130 (UsbhBuildContainerID.c)
 *     UsbhFreeID @ 0x1C0028A88 (UsbhFreeID.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C0041268 (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C0043BCC (UsbhDisablePort.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0045B84 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C0050EF0 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhBusUnlatchPdo @ 0x1C0051360 (UsbhBusUnlatchPdo.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r15d
  __int64 v7; // r13
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  int FrameCounter; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // r14
  char v14; // r13
  unsigned int v15; // r12d
  __int64 v16; // rdi
  KIRQL v17; // al
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  KIRQL v24; // di
  KSPIN_LOCK *v26; // r13
  int v27; // r12d
  KIRQL v28; // al
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // al
  int v32; // r9d
  int v33; // r9d
  int v34; // r9d
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  int v39; // r9d
  int v40; // [rsp+20h] [rbp-A8h]
  int v41; // [rsp+28h] [rbp-A0h]
  int v42; // [rsp+30h] [rbp-98h]
  int v43; // [rsp+38h] [rbp-90h]
  int v44; // [rsp+48h] [rbp-80h]
  KIRQL v45; // [rsp+50h] [rbp-78h]
  char v46; // [rsp+51h] [rbp-77h]
  __int64 v47; // [rsp+58h] [rbp-70h]
  unsigned int v48; // [rsp+60h] [rbp-68h]
  int v49; // [rsp+64h] [rbp-64h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  int v51[2]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v52; // [rsp+78h] [rbp-50h]

  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884435043, a2, 0LL);
  v47 = FdoExt(a1);
  v7 = v47;
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 3064);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v11 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v51[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v51[1] = v11;
  v52 = FrameCounter;
  Log(a1, 1024, 1701720625, a2, v11);
  if ( *(_DWORD *)(a2 + 544) )
  {
    UsbhWait(a1, 100);
  }
  else
  {
    Log(a1, 8, 2002872692, 15, 0LL);
    UsbhRawWait(v12);
  }
  v13 = (int)UsbhInitializeDevice(a1);
  UsbhEtwLogHubIrpEvent(
    a1,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE,
    *(unsigned __int16 *)(a2 + 4),
    0);
  Log(a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v13);
  if ( (int)v13 < 0 )
  {
LABEL_14:
    if ( (v13 & 0xC0000000) == 0xC0000000 )
    {
      v34 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log(a1, 1024, 1936025137, v34, (int)v13);
      v35 = (int)UsbhAllocateTimeoutObject(a1, a2, &P);
      v36 = *(_DWORD *)(a2 + 544);
      if ( v36 >= 3 || (int)v35 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v35);
        UsbhSetEnumerationFailed(a1, (int)v51, v35, v42, v43, 2065);
        return 0;
      }
      else
      {
        Log(a1, 1024, 1936025138, v36, v35);
        UsbhDisablePort(a1);
        v37 = *(unsigned __int16 *)(a2 + 4);
        v38 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v38, v37);
        UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897, 1);
        UsbhBusUnlatchPdo(a1, a3, a2, v39, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v35);
        UsbhResetPort(a1);
      }
    }
    else
    {
      v22 = PdoExt(a3);
      v23 = v22;
      if ( !*(_BYTE *)(v22 + 2724) && (*(_DWORD *)(v22 + 1412) & 0x200) != 0 && (*(_DWORD *)(v22 + 1172) & 0x10) == 0 )
        UsbhBuildContainerID(a1, a3);
      if ( *(_BYTE *)(v23 + 2724) )
      {
        if ( (*(_DWORD *)(v7 + 2560) & 1) != 0 )
          UsbhBusIf_SetContainerIdForPort(a1, *(unsigned __int16 *)(v23 + 1420), v23 + 2708);
        if ( *(_BYTE *)(v23 + 2724) )
          goto LABEL_27;
      }
      if ( (*(_DWORD *)(v7 + 2560) & 1) == 0 )
      {
LABEL_27:
        v6 = 0;
      }
      else
      {
        if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *(unsigned __int16 *)(v23 + 1420), v23 + 2708) >= 0 )
          *(_BYTE *)(v23 + 2724) = 1;
        v6 = 0;
        LODWORD(v13) = 0;
      }
      Log(a1, 1024, 1970032689, a3, a2);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      *(_DWORD *)(a2 + 416) = 0;
      Log(a1, 1024, 1970032690, a3, a2);
      UsbhDerefPdo(a1, a3, 0LL, 1884308559LL);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v13);
      *(_DWORD *)(PdoExt(a3) + 2812) = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return v6;
  }
  v14 = 0;
  v46 = 0;
  v15 = 0;
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  v16 = *(_QWORD *)(a2 + 376);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v16 + 136) = 1;
  *(_BYTE *)(v16 + 132) = v17;
  *(_DWORD *)(v16 + 88) = 2018460752;
  *(_DWORD *)(v16 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v16;
  *(_QWORD *)(v16 + 24) = KeGetCurrentThread();
  if ( a3 && *(_DWORD *)(PdoExt(a3) + 1124) == 3 )
  {
    Log(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v30 = *(_QWORD *)(a2 + 376);
    v46 = 1;
    LODWORD(v13) = 0;
    v14 = 1;
    *(_DWORD *)(v30 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v30 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v30 + 132));
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v18 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v18 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v18 + 132));
    v19 = UsbhSetupDevice(a1);
    v13 = v19;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v19);
    Log(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v13);
  }
  while ( 1 )
  {
    if ( (int)v13 >= 0 )
    {
      v13 = (int)UsbhSyncSendInternalIoctl(a1, 2228243LL, &v49, 0LL);
      Log(a1, 8, 1970303827, v49, v13);
      Log(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v13);
    }
    Log(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (v13 & 0xC0000000) == 0xC0000000 )
      break;
    v20 = PdoExt(a3);
    v21 = v20;
    if ( (*(_DWORD *)(v20 + 1412) & 0x200) == 0 || v14 == 1 )
      goto LABEL_13;
    v26 = (KSPIN_LOCK *)(v20 + 2800);
    v48 = v15 + 1;
    v27 = 4;
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 2800));
    v45 = v28;
    if ( !*(_DWORD *)(v21 + 2808) )
    {
      v29 = PdoExt(a3);
      if ( (*(_DWORD *)(v29 + 1412) & 0x200) != 0 )
      {
        v42 = v29 + 2120;
        LOWORD(v41) = *(_WORD *)(v29 + 1402);
        LOWORD(v40) = *(_WORD *)(v29 + 1400);
        v27 = USBD_AddDeviceToGlobalList(a3, a1, *(unsigned __int16 *)(v29 + 1420), 0LL, v40, v41);
        if ( v27 == 1 )
          goto LABEL_32;
      }
      else
      {
        v27 = 1;
LABEL_32:
        *(_DWORD *)(v21 + 2808) = 1;
      }
      v28 = v45;
    }
    KeReleaseSpinLock(v26, v28);
    if ( v27 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v44) = 0;
      UsbhException(
        a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        *(_QWORD *)(v21 + 2128),
        *(_DWORD *)(v21 + 2124),
        v13,
        0,
        usbfile_busfunc_c,
        1932,
        v44);
      UsbhFreeID(v21 + 2120);
      *(_DWORD *)(v21 + 1412) &= ~0x200u;
      goto LABEL_13;
    }
    if ( v27 != 2 )
    {
      v7 = v47;
      if ( v27 == 4 )
        LODWORD(v13) = -1073741823;
      goto LABEL_14;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v13) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_13;
    }
    UsbhWait(a1, (int)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    v15 = v48;
    v14 = v46;
    if ( v48 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v13) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v44) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1987, v44);
      *(_DWORD *)(PdoExt(a3) + 2812) = 1073807363;
LABEL_13:
      v7 = v47;
      goto LABEL_14;
    }
  }
  v31 = Usb_Disconnected(v13);
  v32 = *(unsigned __int16 *)(a2 + 4);
  if ( !v31 )
  {
    Log(a1, 1024, 1701725522, v32, (int)v13);
    UsbhDisablePort(a1);
    goto LABEL_13;
  }
  Log(a1, 1024, 1701720644, v32, (int)v13);
  UsbhBusUnlatchPdo(a1, a3, a2, v33, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v13);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}

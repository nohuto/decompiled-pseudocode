/*
 * XREFs of UsbhReset2Complete @ 0x1C0015860
 * Callers:
 *     UsbhReset1Complete @ 0x1C0021170 (UsbhReset1Complete.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00071B0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhWait @ 0x1C0007FB8 (UsbhWait.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0009EC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A028 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhDerefPdo @ 0x1C000B1A0 (UsbhDerefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0018B28 (Usbh_UsbdReadFrameCounter.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 *     UsbhRawWait @ 0x1C0021530 (UsbhRawWait.c)
 *     UsbhCancelResetTimeout @ 0x1C00218C4 (UsbhCancelResetTimeout.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0021CC4 (UsbhAllocateTimeoutObject.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhFreeID @ 0x1C0022140 (UsbhFreeID.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhBusConnectPdo @ 0x1C002557C (UsbhBusConnectPdo.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0025AA4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhInitializeDevice @ 0x1C0026FA0 (UsbhInitializeDevice.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C00279B4 (UsbhBusIf_GetContainerIdForPort.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C0040478 (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C0042D8C (UsbhDisablePort.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044D4C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C0050210 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhBusUnlatchPdo @ 0x1C005059C (UsbhBusUnlatchPdo.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildContainerID @ 0x1C00523B0 (UsbhBuildContainerID.c)
 */

__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r15d
  _DWORD *v7; // r13
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  int FrameCounter; // eax
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rbp
  char v14; // r13
  __int64 v15; // rdi
  KIRQL v16; // al
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  KIRQL v23; // di
  __int64 v25; // rax
  KIRQL v26; // al
  __int64 v27; // rax
  bool v28; // al
  __int64 v29; // r9
  int v30; // r9d
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned __int16 v34; // r8
  __int64 v35; // rdx
  int v36; // r9d
  int v37; // [rsp+20h] [rbp-A8h]
  int v38; // [rsp+28h] [rbp-A0h]
  int v39; // [rsp+30h] [rbp-98h]
  int v40; // [rsp+38h] [rbp-90h]
  int v41; // [rsp+48h] [rbp-80h]
  KIRQL v42; // [rsp+50h] [rbp-78h]
  int v43; // [rsp+54h] [rbp-74h]
  unsigned int v44; // [rsp+58h] [rbp-70h]
  _DWORD *v45; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v47[8]; // [rsp+70h] [rbp-58h] BYREF
  int v48[2]; // [rsp+78h] [rbp-50h] BYREF
  __int16 v49; // [rsp+80h] [rbp-48h]

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
  v45 = FdoExt(a1);
  v7 = v45;
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v11 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v48[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v48[1] = v11;
  v49 = FrameCounter;
  Log(a1, 1024, 1701720625, a2, v11);
  if ( *(_DWORD *)(a2 + 544) )
  {
    UsbhWait(a1, 100);
  }
  else
  {
    Log(a1, 8, 2002872692, 15LL, 0LL);
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
      v31 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log(a1, 1024, 1936025137, v31, (int)v13);
      v32 = (int)UsbhAllocateTimeoutObject(a1, a2, &P);
      v33 = *(_DWORD *)(a2 + 544);
      if ( v33 < 3 && (int)v32 >= 0 )
      {
        Log(a1, 1024, 1936025138, v33, v32);
        UsbhDisablePort(a1);
        v34 = *(_WORD *)(a2 + 4);
        v35 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v35, v34);
        UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897, 1);
        UsbhBusUnlatchPdo(a1, a3, a2, v36, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v32);
        UsbhResetPort(a1);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v32);
      UsbhSetEnumerationFailed(a1, (int)v48, v32, v39, v40, 2065);
    }
    else
    {
      v21 = PdoExt(a3);
      v22 = v21;
      if ( !*(_BYTE *)(v21 + 2708) && (*(_DWORD *)(v21 + 1412) & 0x200) != 0 && (*(_DWORD *)(v21 + 1172) & 0x10) == 0 )
        UsbhBuildContainerID(a1, a3);
      if ( !*(_BYTE *)(v22 + 2708) )
        goto LABEL_18;
      if ( (v7[640] & 1) != 0 )
        UsbhBusIf_SetContainerIdForPort(a1, *(unsigned __int16 *)(v22 + 1420), v22 + 2692);
      if ( !*(_BYTE *)(v22 + 2708) )
      {
LABEL_18:
        if ( (v7[640] & 1) != 0 )
        {
          if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *(unsigned __int16 *)(v22 + 1420), v22 + 2692) >= 0 )
            *(_BYTE *)(v22 + 2708) = 1;
          LODWORD(v13) = 0;
        }
      }
      Log(a1, 1024, 1970032689, a3, a2);
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      *(_DWORD *)(a2 + 416) = 0;
      Log(a1, 1024, 1970032690, a3, a2);
      UsbhDerefPdo(a1, a3, 0LL, 0x7050444Fu);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v13);
      *(_DWORD *)(PdoExt(a3) + 2796) = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return 0;
  }
  v44 = 0;
  v14 = 0;
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  v15 = *(_QWORD *)(a2 + 376);
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v15 + 136) = 1;
  *(_BYTE *)(v15 + 132) = v16;
  *(_DWORD *)(v15 + 88) = 2018460752;
  *(_DWORD *)(v15 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v15;
  *(_QWORD *)(v15 + 24) = KeGetCurrentThread();
  if ( a3 && *(_DWORD *)(PdoExt(a3) + 1124) == 3 )
  {
    Log(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v25 = *(_QWORD *)(a2 + 376);
    v14 = 1;
    LODWORD(v13) = 0;
    *(_DWORD *)(v25 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v25 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v25 + 132));
  }
  else
  {
    v17 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v17 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v17 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v17 + 132));
    v18 = UsbhSetupDevice(a1);
    v13 = v18;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v18);
    Log(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v13);
  }
  while ( 1 )
  {
    if ( (int)v13 >= 0 )
    {
      v13 = (int)UsbhFdoCheckUpstreamConnectionState(a1, v47);
      Log(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v13);
    }
    Log(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (v13 & 0xC0000000) == 0xC0000000 )
      break;
    v19 = PdoExt(a3);
    v20 = v19;
    if ( (*(_DWORD *)(v19 + 1412) & 0x200) == 0 || v14 == 1 )
      goto LABEL_13;
    ++v44;
    v43 = 4;
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 2784));
    v42 = v26;
    if ( !*(_DWORD *)(v20 + 2792) )
    {
      v27 = PdoExt(a3);
      if ( (*(_DWORD *)(v27 + 1412) & 0x200) == 0 )
      {
        v43 = 1;
        goto LABEL_32;
      }
      v39 = v27 + 2120;
      LOWORD(v38) = *(_WORD *)(v27 + 1402);
      LOWORD(v37) = *(_WORD *)(v27 + 1400);
      v43 = USBD_AddDeviceToGlobalList(a3, a1, *(unsigned __int16 *)(v27 + 1420), 0LL, v37, v38);
      if ( v43 == 1 )
LABEL_32:
        *(_DWORD *)(v20 + 2792) = 1;
      v26 = v42;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 2784), v26);
    if ( v43 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v41) = 0;
      UsbhException(
        a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        *(_QWORD *)(v20 + 2128),
        *(_DWORD *)(v20 + 2124),
        v13,
        0,
        usbfile_busfunc_c,
        1932,
        v41);
      UsbhFreeID(v20 + 2120);
      *(_DWORD *)(v20 + 1412) &= ~0x200u;
      goto LABEL_13;
    }
    if ( v43 != 2 )
    {
      if ( v43 == 4 )
        LODWORD(v13) = -1073741823;
      goto LABEL_13;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v13) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_13;
    }
    UsbhWait(a1, (int)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    if ( v44 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v13) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v41) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1987, v41);
      *(_DWORD *)(PdoExt(a3) + 2796) = 1073807363;
LABEL_13:
      v7 = v45;
      goto LABEL_14;
    }
  }
  v28 = Usb_Disconnected(v13);
  v29 = *(unsigned __int16 *)(a2 + 4);
  if ( !v28 )
  {
    Log(a1, 1024, 1701725522, v29, (int)v13);
    UsbhDisablePort(a1);
    goto LABEL_13;
  }
  Log(a1, 1024, 1701720644, v29, (int)v13);
  UsbhBusUnlatchPdo(a1, a3, a2, v30, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v13);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}

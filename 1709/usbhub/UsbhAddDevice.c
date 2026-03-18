/*
 * XREFs of UsbhAddDevice @ 0x1C0017EF0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_FDO_Pnp_State @ 0x1C00085E0 (Usbh_FDO_Pnp_State.c)
 *     UsbhRawWait @ 0x1C00096A0 (UsbhRawWait.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhReferenceListOpen @ 0x1C0023760 (UsbhReferenceListOpen.c)
 *     UsbhAssignHubNumber @ 0x1C0027128 (UsbhAssignHubNumber.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhReleaseHubNumber @ 0x1C004C75C (UsbhReleaseHubNumber.c)
 */

__int64 __fastcall UsbhAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT TargetDevice)
{
  struct _DEVICE_OBJECT *v3; // r15
  char *DeviceExtension; // r14
  NTSTATUS v6; // ebx
  PDEVICE_OBJECT v7; // rcx
  PDEVICE_OBJECT v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rsi
  _DWORD *v11; // rbx
  PDEVICE_OBJECT v12; // rax
  PDEVICE_OBJECT v13; // rax
  PDEVICE_OBJECT v14; // rax
  PDEVICE_OBJECT v15; // rax
  PDEVICE_OBJECT v16; // rax
  PDEVICE_OBJECT v17; // rax
  int v18; // ebx
  _DWORD *v19; // rax
  PDEVICE_OBJECT v20; // rsi
  _DWORD *v21; // rdi
  unsigned int i; // ebx
  void (__fastcall **v23)(PDEVICE_OBJECT, __int64); // rdx
  KIRQL v24; // al
  _DWORD *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r10
  PDEVICE_OBJECT SourceDevice; // [rsp+80h] [rbp+40h] BYREF

  SourceDevice = 0LL;
  v3 = 0LL;
  DeviceExtension = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids);
  v6 = IoCreateDevice(
         DriverObject,
         (WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12) + 5280,
         0LL,
         0x8600u,
         0x80u,
         0,
         &SourceDevice);
  if ( v6 >= 0 )
  {
    if ( !SourceDevice )
      return 3221225473LL;
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(SourceDevice, DriverObject);
    *(_DWORD *)DeviceExtension = 541218120;
    *((_QWORD *)DeviceExtension + 1) = USBHUB_Triage_Info;
  }
  v7 = SourceDevice;
  if ( !SourceDevice )
    return 3221225473LL;
  if ( v6 >= 0 )
  {
    v8 = IoAttachDeviceToDeviceStack(SourceDevice, TargetDevice);
    v7 = SourceDevice;
    v3 = v8;
    if ( !v8 )
    {
      IoDeleteDevice(SourceDevice);
      return 3221225473LL;
    }
  }
  if ( !v7 )
    UsbhTrapFatal_Dbg(0LL, DriverObject);
  if ( v6 < 0 )
    UsbhTrapFatal_Dbg(v7, DriverObject);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), 0x42554855u, 0, 0, 0x20u);
  *((_QWORD *)DeviceExtension + 150) = SourceDevice;
  *((_QWORD *)DeviceExtension + 149) = TargetDevice;
  *((_QWORD *)DeviceExtension + 171) = Usbh_FDO_WaitPnpAdd;
  *((_QWORD *)DeviceExtension + 151) = v3;
  *((_QWORD *)DeviceExtension + 100) = DeviceExtension + 2936;
  *((_DWORD *)DeviceExtension + 340) = 1;
  *((_DWORD *)DeviceExtension + 685) = 1;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2744), NotificationEvent, 0);
  KeInitializeSemaphore((PRKSEMAPHORE)DeviceExtension + 155, 1, 1);
  *((_QWORD *)DeviceExtension + 161) = -1LL;
  *((_QWORD *)DeviceExtension + 162) = -1LL;
  *(_QWORD *)(DeviceExtension + 1268) = -1LL;
  *(_QWORD *)(DeviceExtension + 1276) = -1LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 632);
  UsbhRawWait(Usbh_Long_AddDevice);
  UsbhAssignHubNumber(SourceDevice);
  v9 = WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12;
  v10 = WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12;
  v11 = FdoExt((__int64)SourceDevice) + 1320;
  memset(v11, 0, v9);
  *((_QWORD *)DeviceExtension + 111) = v11;
  *((_DWORD *)DeviceExtension + 220) = 0;
  *((_DWORD *)DeviceExtension + 221) = (v9 >> 5) - 1;
  *((_QWORD *)DeviceExtension + 112) = (char *)v11 + (v10 & 0xFFFFFFFFFFFFFFE0uLL) - 32;
  v12 = SourceDevice;
  *((_QWORD *)DeviceExtension + 175) = SourceDevice;
  *((_QWORD *)DeviceExtension + 174) = v12;
  *((_QWORD *)DeviceExtension + 173) = 2017613128LL;
  *((_DWORD *)DeviceExtension + 374) = 1734964085;
  *((_DWORD *)DeviceExtension + 362) = 1734964085;
  *((_DWORD *)DeviceExtension + 358) = 1734964085;
  *((_DWORD *)DeviceExtension + 354) = 1734964085;
  *((_DWORD *)DeviceExtension + 365) = 1734964085;
  *((_DWORD *)DeviceExtension + 368) = 1734964085;
  *((_DWORD *)DeviceExtension + 371) = 1734964085;
  *((_DWORD *)DeviceExtension + 376) = 1734964085;
  *((_DWORD *)DeviceExtension + 384) = 0;
  v13 = SourceDevice;
  *((_QWORD *)DeviceExtension + 197) = SourceDevice;
  *((_QWORD *)DeviceExtension + 196) = v13;
  *((_QWORD *)DeviceExtension + 195) = 2017613128LL;
  *((_DWORD *)DeviceExtension + 418) = 1734964085;
  *((_DWORD *)DeviceExtension + 406) = 1734964085;
  *((_DWORD *)DeviceExtension + 402) = 1734964085;
  *((_DWORD *)DeviceExtension + 398) = 1734964085;
  *((_DWORD *)DeviceExtension + 409) = 1734964085;
  *((_DWORD *)DeviceExtension + 412) = 1734964085;
  *((_DWORD *)DeviceExtension + 415) = 1734964085;
  *((_DWORD *)DeviceExtension + 420) = 1734964085;
  v14 = SourceDevice;
  *((_QWORD *)DeviceExtension + 219) = SourceDevice;
  *((_DWORD *)DeviceExtension + 434) = 2017613128;
  *((_DWORD *)DeviceExtension + 435) = 4;
  *((_QWORD *)DeviceExtension + 218) = v14;
  *((_DWORD *)DeviceExtension + 462) = 1734964085;
  *((_DWORD *)DeviceExtension + 450) = 1734964085;
  *((_DWORD *)DeviceExtension + 446) = 1734964085;
  *((_DWORD *)DeviceExtension + 442) = 1734964085;
  *((_DWORD *)DeviceExtension + 453) = 1734964085;
  *((_DWORD *)DeviceExtension + 456) = 1734964085;
  *((_DWORD *)DeviceExtension + 459) = 1734964085;
  *((_DWORD *)DeviceExtension + 464) = 1734964085;
  v15 = SourceDevice;
  *((_QWORD *)DeviceExtension + 241) = SourceDevice;
  *((_QWORD *)DeviceExtension + 240) = v15;
  *((_DWORD *)DeviceExtension + 478) = 2017613128;
  *((_DWORD *)DeviceExtension + 479) = 5;
  *((_DWORD *)DeviceExtension + 506) = 1734964085;
  *((_DWORD *)DeviceExtension + 494) = 1734964085;
  *((_DWORD *)DeviceExtension + 490) = 1734964085;
  *((_DWORD *)DeviceExtension + 486) = 1734964085;
  *((_DWORD *)DeviceExtension + 497) = 1734964085;
  *((_DWORD *)DeviceExtension + 500) = 1734964085;
  *((_DWORD *)DeviceExtension + 503) = 1734964085;
  *((_DWORD *)DeviceExtension + 508) = 1734964085;
  v16 = SourceDevice;
  *((_QWORD *)DeviceExtension + 263) = SourceDevice;
  *((_QWORD *)DeviceExtension + 262) = v16;
  *((_DWORD *)DeviceExtension + 522) = 2017613128;
  *((_DWORD *)DeviceExtension + 523) = 6;
  *((_DWORD *)DeviceExtension + 550) = 1734964085;
  *((_DWORD *)DeviceExtension + 538) = 1734964085;
  *((_DWORD *)DeviceExtension + 534) = 1734964085;
  *((_DWORD *)DeviceExtension + 530) = 1734964085;
  *((_DWORD *)DeviceExtension + 541) = 1734964085;
  *((_DWORD *)DeviceExtension + 544) = 1734964085;
  *((_DWORD *)DeviceExtension + 547) = 1734964085;
  *((_DWORD *)DeviceExtension + 552) = 1734964085;
  v17 = SourceDevice;
  *((_QWORD *)DeviceExtension + 285) = SourceDevice;
  *((_QWORD *)DeviceExtension + 284) = v17;
  *((_DWORD *)DeviceExtension + 566) = 2017613128;
  *((_DWORD *)DeviceExtension + 567) = 8;
  *((_DWORD *)DeviceExtension + 594) = 1734964085;
  *((_DWORD *)DeviceExtension + 582) = 1734964085;
  *((_DWORD *)DeviceExtension + 578) = 1734964085;
  *((_DWORD *)DeviceExtension + 574) = 1734964085;
  *((_DWORD *)DeviceExtension + 585) = 1734964085;
  *((_DWORD *)DeviceExtension + 588) = 1734964085;
  *((_DWORD *)DeviceExtension + 591) = 1734964085;
  *((_DWORD *)DeviceExtension + 596) = 1734964085;
  IoRegisterShutdownNotification(SourceDevice);
  v18 = UsbhReferenceListOpen(SourceDevice);
  if ( v18 >= 0 )
  {
    v19 = FdoExt((__int64)SourceDevice);
    v20 = SourceDevice;
    v21 = v19;
    for ( i = 0; i < 0xA; ++i )
    {
      v23 = (void (__fastcall **)(PDEVICE_OBJECT, __int64))((char *)&HubModule + 56 * i);
      if ( v23 && *v23 )
        (*v23)(v20, (__int64)(v21 + 346));
    }
    SourceDevice->Flags |= 0x2000u;
    SourceDevice->Flags &= ~0x80u;
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)DeviceExtension + 314) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
    v25 = FdoExt((__int64)SourceDevice);
    v18 = Usbh_FDO_Pnp_State((__int64)(v25 + 346), 1);
  }
  Log((__int64)SourceDevice, 2, 1749116004, 0LL, v18);
  if ( (v18 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)SourceDevice, 2, 1749115937, v26, v27);
    UsbhReleaseHubNumber(SourceDevice);
    IoDetachDevice(v3);
    IoDeleteDevice(SourceDevice);
  }
  return (unsigned int)v18;
}

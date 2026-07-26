/*
 * XREFs of ndisMCommonHaltMiniport @ 0x1C00FE9B4
 * Callers:
 *     ndisMHaltMiniport @ 0x1C00AB944 (ndisMHaltMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisPmHaltMiniport @ 0x1C010DDEC (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisMAbortRequests @ 0x1C0001808 (ndisMAbortRequests.c)
 *     ndisMAbortPackets @ 0x1C0001868 (ndisMAbortPackets.c)
 *     ndisMDeQueueWorkItem @ 0x1C0001920 (ndisMDeQueueWorkItem.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C504 (ndisCancelMediaDisconnectTimer.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C001F308 (ndisCancelWakeUpDpcTimer.c)
 *     ndisWaitForResetCompletion @ 0x1C001F3B8 (ndisWaitForResetCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_LqZ @ 0x1C00483E8 (WPP_SF_LqZ.c)
 *     ndisMInvokeHalt @ 0x1C00AB9C8 (ndisMInvokeHalt.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00BF928 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C5CB4 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisNDKCleanup @ 0x1C00EDEAC (ndisNDKCleanup.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00EE3DC (ndisNdkPcwMiniportCleanup.c)
 *     ndisSelectiveSuspendFree @ 0x1C00F2BF0 (ndisSelectiveSuspendFree.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00F75A4 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

void __fastcall ndisMCommonHaltMiniport(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  void (__fastcall *v2)(__int64, struct _NDIS_PACKET **, unsigned int); // r12
  char v3; // r13
  KIRQL v6; // al
  char v7; // bl
  _NDIS_HALT_ACTION v8; // esi
  __int64 v9; // rcx
  KIRQL v10; // r14
  KIRQL v11; // al
  KIRQL v12; // r14
  char v13; // bl
  KIRQL v14; // al
  KIRQL v15; // bl
  int v16; // ecx
  int v17; // eax
  KIRQL v18; // al
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  char v23; // bl
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  struct _NDIS_PD_BLOCK *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  KIRQL v42; // al
  __int64 v43; // rdx
  struct _NDIS_STACK_RESERVED *v44; // r8
  KIRQL v45; // si
  _QWORD *v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  void *v49; // rcx
  _QWORD *v50; // rbx
  __int64 v51; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int i; // [rsp+A0h] [rbp+48h]
  unsigned int j; // [rsp+A0h] [rbp+48h]
  char v55; // [rsp+A8h] [rbp+50h]
  unsigned int k; // [rsp+A8h] [rbp+50h]
  struct NDISWATCHDOG__ *v57; // [rsp+B0h] [rbp+58h] BYREF
  LARGE_INTEGER Timeout; // [rsp+B8h] [rbp+60h] BYREF

  v55 = a2;
  v2 = ndisMDummyIndicatePacket;
  v3 = a2 & 0x10;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, BugCheckParameter2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_DWORD *)(BugCheckParameter2 + 124) |= 0xA0000u;
  v7 = 0;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v6);
  ndisWaitForResetCompletion(BugCheckParameter2);
  if ( (a2 & 4) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 360), 0);
  if ( (a2 & 0x40) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 4176), 0);
  if ( (a2 & 0x100) != 0 && *(_QWORD *)(BugCheckParameter2 + 4864) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 4856), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(BugCheckParameter2 + 4856));
    v7 = 0;
    *(_QWORD *)(BugCheckParameter2 + 4864) = 0LL;
  }
  v8 = NdisHaltDevicePoweredDown;
  if ( (a2 & 2) != 0 )
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 3848), 2u);
  if ( (a2 & 8) != 0 )
    ndisCancelWakeUpDpcTimer(BugCheckParameter2);
  ndisCancelInitModeTimeoutTimer(BugCheckParameter2, 1);
  v9 = *(_QWORD *)(BugCheckParameter2 + 4128);
  if ( v9 )
    ndisNdkPcwMiniportCleanup(v9);
  while ( 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1442852;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v10);
    for ( i = 0; i < 0x32; ++i )
      ;
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1860) = 1442852;
  *(_QWORD *)(BugCheckParameter2 + 1864) = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 2200) != BugCheckParameter2 + 2200
    || (*(_DWORD *)(BugCheckParameter2 + 4452) & 1) != 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v7 = 1;
    *(_QWORD *)(BugCheckParameter2 + 1616) = &Event;
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1856) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v10);
  if ( v7 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v12 = v11;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1442877;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v12);
    for ( j = 0; j < 0x32; ++j )
      ;
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1860) = 1442877;
  *(_QWORD *)(BugCheckParameter2 + 1864) = KeGetCurrentThread();
  if ( *(_DWORD *)(BugCheckParameter2 + 4280) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v13 = 1;
    *(_QWORD *)(BugCheckParameter2 + 4288) = &Event;
  }
  else
  {
    v13 = 0;
  }
  *(_QWORD *)(BugCheckParameter2 + 1856) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v12);
  if ( v13 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  v15 = v14;
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 1856) = 1442902;
  if ( *(_DWORD *)(BugCheckParameter2 + 3132) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 3144) = &Event;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v15);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 3144) = 0LL;
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v14);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
  {
    v2 = *(void (__fastcall **)(__int64, struct _NDIS_PACKET **, unsigned int))(BugCheckParameter2 + 432);
    *(_QWORD *)(BugCheckParameter2 + 432) = ndisMDummyIndicatePacket;
    while ( *(_DWORD *)(BugCheckParameter2 + 1828) )
      NdisMSleep(0x3E8u);
  }
  if ( v3 )
  {
    v16 = *(_DWORD *)(BugCheckParameter2 + 120);
    if ( v16 >= 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x100) != 0 )
      {
        v8 = NdisHaltDeviceFailed;
      }
      else
      {
        v8 = NdisHaltDeviceSurpriseRemoved;
        if ( (v16 & 0x8000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1520) == 3 )
        {
          v8 = NdisHaltDeviceInstanceDeInitialized;
        }
        else if ( (v16 & 4) == 0 )
        {
          v17 = 0;
          if ( *(_DWORD *)(BugCheckParameter2 + 1520) == 3 )
            v17 = 6;
          v8 = v17;
        }
      }
    }
  }
  else
  {
    v8 = NdisHaltDeviceInitializationFailed;
  }
  if ( (unsigned __int8)byte_1C0098750 >= 4u )
    WPP_SF_LqZ(
      0x1Cu,
      &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids,
      v8,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 3880));
  if ( *(_BYTE *)(BugCheckParameter2 + 32) < 6u )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(BugCheckParameter2 + 3784) + 144LL))(*(_QWORD *)(BugCheckParameter2 + 24));
  }
  else
  {
    ndisMakeWatchdog(
      (struct _NDIS_REFCOUNT_BLOCK **)&v57,
      (_QWORD *)BugCheckParameter2,
      (_NDIS_REFCOUNT_STACK_ENTRY)34,
      *(void **)(*(_QWORD *)(BugCheckParameter2 + 3784) + 144LL),
      0x41EB0u,
      0LL);
    ndisMInvokeHalt(BugCheckParameter2, v8);
    if ( v57 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v57);
  }
  *(_DWORD *)(BugCheckParameter2 + 2256) = 1;
  ndisLogMiniportEvent(BugCheckParameter2, 0x34u);
  if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 432) = v2;
  *(_DWORD *)(BugCheckParameter2 + 124) &= ~0x80000u;
  ndisCancelMediaDisconnectTimer(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40) != 0 )
      ndisDereferenceDmaAdapter(*(PVOID *)(BugCheckParameter2 + 504));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
    v19 = *(_QWORD *)(BugCheckParameter2 + 504);
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1443027;
    if ( v19 )
    {
      *(_QWORD *)(v19 + 80) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v18);
      KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v18);
    }
    *(_DWORD *)(BugCheckParameter2 + 120) &= ~0x40u;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2720) )
    *(_QWORD *)(BugCheckParameter2 + 2720) = 0LL;
  while ( *(_QWORD *)(BugCheckParameter2 + 960) )
  {
    v47 = *(_QWORD **)(BugCheckParameter2 + 960);
    if ( v47 )
      *(_QWORD *)(BugCheckParameter2 + 960) = *v47;
    ExFreePoolWithTag(v47, 0);
  }
  while ( *(_QWORD *)(BugCheckParameter2 + 968) )
  {
    v20 = *(_QWORD **)(BugCheckParameter2 + 968);
    if ( v20 )
      *(_QWORD *)(BugCheckParameter2 + 968) = *v20;
    ExFreePoolWithTag(v20, 0);
  }
  while ( *(_QWORD *)(BugCheckParameter2 + 976) )
  {
    v48 = *(_QWORD **)(BugCheckParameter2 + 976);
    if ( v48 )
      *(_QWORD *)(BugCheckParameter2 + 976) = *v48;
    ExFreePoolWithTag(v48, 0);
  }
  v21 = *(void **)(BugCheckParameter2 + 768);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(BugCheckParameter2 + 768) = 0LL;
  }
  v22 = *(void **)(BugCheckParameter2 + 2744);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(BugCheckParameter2 + 2744) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 2752) = 0;
  }
  v23 = v55;
  if ( v55 < 0 )
  {
    v49 = *(void **)(BugCheckParameter2 + 3416);
    if ( v49 )
    {
      ExFreePoolWithTag(v49, 0);
      *(_QWORD *)(BugCheckParameter2 + 3416) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 3424) = 0;
    }
  }
  v24 = *(void **)(BugCheckParameter2 + 3496);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    *(_QWORD *)(BugCheckParameter2 + 3496) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 3504) = 0;
  }
  v25 = *(void **)(BugCheckParameter2 + 3528);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    *(_QWORD *)(BugCheckParameter2 + 3528) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 3536) = 0;
  }
  v26 = *(void **)(BugCheckParameter2 + 4792);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0);
    *(_QWORD *)(BugCheckParameter2 + 4792) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4800) = 0;
  }
  v27 = *(void **)(BugCheckParameter2 + 3552);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(BugCheckParameter2 + 3552) = 0LL;
  }
  v28 = *(void **)(BugCheckParameter2 + 3560);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(BugCheckParameter2 + 3560) = 0LL;
  }
  v29 = *(void **)(BugCheckParameter2 + 3568);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(BugCheckParameter2 + 3568) = 0LL;
  }
  v30 = *(void **)(BugCheckParameter2 + 3576);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0);
    *(_QWORD *)(BugCheckParameter2 + 3576) = 0LL;
  }
  v31 = *(void **)(BugCheckParameter2 + 3584);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(BugCheckParameter2 + 3584) = 0LL;
  }
  v32 = *(void **)(BugCheckParameter2 + 3592);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(BugCheckParameter2 + 3592) = 0LL;
  }
  v33 = *(void **)(BugCheckParameter2 + 4632);
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    *(_QWORD *)(BugCheckParameter2 + 4632) = 0LL;
  }
  v34 = *(void **)(BugCheckParameter2 + 4640);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(BugCheckParameter2 + 4640) = 0LL;
  }
  v35 = *(void **)(BugCheckParameter2 + 4936);
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0);
    *(_QWORD *)(BugCheckParameter2 + 4936) = 0LL;
  }
  v36 = *(void **)(BugCheckParameter2 + 4944);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(BugCheckParameter2 + 4944) = 0LL;
  }
  v37 = *(void **)(BugCheckParameter2 + 4952);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(BugCheckParameter2 + 4952) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4960) = 0;
  }
  v38 = *(void **)(BugCheckParameter2 + 4968);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(BugCheckParameter2 + 4968) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4976) = 0;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 4128) )
  {
    ndisNDKCleanup((struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2);
    *(_QWORD *)(BugCheckParameter2 + 4128) = 0LL;
  }
  v39 = *(struct _NDIS_PD_BLOCK **)(BugCheckParameter2 + 5512);
  if ( v39 )
    ndisPDCleanupPDBlock(v39);
  v40 = *(void **)(BugCheckParameter2 + 4600);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(BugCheckParameter2 + 4600) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 4480) )
    ndisSelectiveSuspendFree(BugCheckParameter2);
  if ( (struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2 == ndisMiniportTrackAlloc )
    ndisMiniportTrackAlloc = 0LL;
  v41 = *(void **)(BugCheckParameter2 + 3160);
  if ( v41 )
    memset(v41, 0, 112LL * ndisMaxNumberOfProcessors);
  if ( *(_QWORD *)(BugCheckParameter2 + 560) )
    goto LABEL_160;
  if ( *(_QWORD *)(BugCheckParameter2 + 112) )
    goto LABEL_156;
  if ( *(_QWORD *)(BugCheckParameter2 + 784) )
  {
LABEL_160:
    if ( !*(_QWORD *)(BugCheckParameter2 + 112) )
    {
      v51 = *(_QWORD *)(BugCheckParameter2 + 3880);
      if ( *(_QWORD *)(BugCheckParameter2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v51, "Halting without deregistering interrupt");
        KeBugCheckEx(
          0x7Cu,
          (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13,
          BugCheckParameter2,
          *(_QWORD *)(BugCheckParameter2 + 784),
          0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v51, "Halting without deregistering timer");
      KeBugCheckEx(
        0x7Cu,
        (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 14,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 560),
        0LL);
    }
LABEL_156:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(BugCheckParameter2 + 3880),
      "Halting without deregistering interrupt");
    KeBugCheckEx(
      0x7Cu,
      (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 112),
      0LL);
  }
  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v45 = v42;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1443325;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v45);
    for ( k = 0; k < 0x32; ++k )
      ;
    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1860) = 1443325;
  *(_QWORD *)(BugCheckParameter2 + 1864) = KeGetCurrentThread();
  ndisMAbortPackets(BugCheckParameter2, v43, v44);
  ndisMDeQueueWorkItem(BugCheckParameter2, 0, 0LL, 0LL);
  ndisMAbortRequests(BugCheckParameter2);
  if ( (v23 & 0x20) != 0 )
  {
    v46 = *(_QWORD **)(BugCheckParameter2 + 512);
    *(_QWORD *)(BugCheckParameter2 + 512) = 0LL;
    if ( v46 )
    {
      do
      {
        v50 = (_QWORD *)*v46;
        ExFreePoolWithTag(v46, 0);
        v46 = v50;
      }
      while ( v50 );
    }
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1856) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v45);
  if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x80u) == 0 )
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Du, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, BugCheckParameter2);
}

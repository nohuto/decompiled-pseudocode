/*
 * XREFs of UsbhQueryBusRelations @ 0x1C0013BC0
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0008230 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001E6C0 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0043344 (SET_PDO_HWPNPSTATE.c)
 */

__int64 __fastcall UsbhQueryBusRelations(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 v2; // r13
  IRP *v3; // rsi
  int ActivityIdIrp; // r15d
  int *DeviceExtension; // rbx
  __int128 *v7; // rdx
  const GUID *v8; // rdx
  __int64 v9; // r8
  void *v10; // rdx
  __int64 v11; // rcx
  unsigned int *Information; // rdi
  __int64 v13; // rax
  _DWORD *PoolWithTag; // r12
  __int64 v15; // rax
  __int64 v16; // rdi
  int *v17; // r13
  int *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int128 *v24; // rbx
  __int64 v25; // rax
  const GUID *v26; // rdx
  NTSTATUS v28; // eax
  unsigned int v29; // r10d
  __int128 v30; // xmm0
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // r13
  _QWORD *v34; // r13
  __int64 v35; // rcx
  void **v36; // rcx
  PVOID *v37; // rbx
  KIRQL v38; // [rsp+60h] [rbp-A0h]
  __int64 *v39; // [rsp+88h] [rbp-78h]
  _BYTE v41[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v43; // [rsp+100h] [rbp+0h] BYREF
  char v44[40]; // [rsp+110h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = a2;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, v41);
  else
    ActivityIdIrp = -1073741823;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (int *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  if ( ActivityIdIrp >= 0 )
    v7 = (__int128 *)v41;
  else
    v7 = 0LL;
  if ( dword_1C006A650 )
  {
    if ( v7 )
    {
      v30 = *v7;
      v8 = (const GUID *)&v42;
      v42 = v30;
    }
    else
    {
      v8 = 0LL;
    }
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, v8);
  }
  v9 = DeviceExtension[340];
  if ( (UsbhLogMask & 2) != 0 )
  {
    v10 = a1->DeviceExtension;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 827474513;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v3;
      *(_QWORD *)(v11 + 24) = v9;
    }
  }
  Information = (unsigned int *)v3->IoStatus.Information;
  if ( Information )
    v2 = *Information;
  if ( DeviceExtension[340] == 5 )
  {
    FdoExt(a1);
    Usbh_SSH_Event(a1);
    v13 = FdoExt(a1);
    PoolWithTag = ExAllocatePoolWithTag(
                    ExDefaultNonPagedPoolType,
                    8LL * ((unsigned int)v2 + *(unsigned __int8 *)(v13 + 2938) - 1) + 16,
                    0x42554855u);
    if ( PoolWithTag )
    {
      v15 = FdoExt(a1);
      memset(PoolWithTag, 0, 8LL * ((unsigned int)v2 + *(unsigned __int8 *)(v15 + 2938) - 1) + 16);
      if ( (_DWORD)v2 )
      {
        *PoolWithTag = v2;
        memmove(PoolWithTag + 4, Information + 2, 8LL * (unsigned int)v2);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log((_DWORD)a1, 2, 1363300914, (_DWORD)v3, (__int64)PoolWithTag);
      v16 = FdoExt(a1) + 1384;
      *(_BYTE *)(v16 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      *(_DWORD *)(v16 + 136) = 1;
      *(_DWORD *)(v16 + 88) = 2018460752;
      *(_DWORD *)(v16 + 92) = 8;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v16;
      *(_QWORD *)(v16 + 24) = KeGetCurrentThread();
      v17 = (int *)*((_QWORD *)DeviceExtension + 601);
      DeviceExtension[226] = 0;
      if ( v17 != DeviceExtension + 1202 )
      {
        do
        {
          v18 = v17 - 328;
          Log((_DWORD)a1, 2, 1902277169, (_DWORD)v17 - 1312, 0LL);
          FdoExt(a1);
          if ( !*((_QWORD *)v17 + 152) )
            *((_QWORD *)v18 + 316) = MEMORY[0xFFFFF78000000014];
          ObfReferenceObject(*((PVOID *)v18 + 105));
          *(_QWORD *)&PoolWithTag[2 * (*PoolWithTag)++ + 2] = *((_QWORD *)v18 + 105);
          v19 = PdoExt(*((_QWORD *)v18 + 105));
          v20 = ((unsigned __int8)*(_DWORD *)(v19 + 4) + 1) & 7;
          *(_DWORD *)(v19 + 4) = v20;
          v20 *= 32LL;
          *(_DWORD *)(v20 + v19 + 16) = 8;
          *(_DWORD *)(v20 + v19 + 20) = *(_DWORD *)(v19 + 1124);
          *(_DWORD *)(v20 + v19 + 24) = 3;
          *(_DWORD *)(v19 + 1124) = 3;
          v17 = *(int **)v17;
        }
        while ( v17 != DeviceExtension + 1202 );
        v3 = a2;
      }
      v21 = (char *)(DeviceExtension + 1206);
      while ( *(char **)v21 != v21 )
      {
        v31 = *(__int64 **)v21;
        if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 || (v32 = *v31, *(__int64 **)(*v31 + 8) != v31) )
          __fastfail(3u);
        *(_QWORD *)v21 = v32;
        v33 = v31 - 164;
        *(_QWORD *)(v32 + 8) = v21;
        v39 = v31 - 164;
        Log((_DWORD)a1, 2, 1902277170, (_DWORD)v31 - 1312, 0LL);
        SET_PDO_HWPNPSTATE(v33[105], 5LL, 9LL);
        v34 = v33 + 164;
        v39[165] = 0LL;
        *v34 = 0LL;
        v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v39 + 350);
        if ( *((_DWORD *)v39 + 702) == 1 )
        {
          v35 = v39[105];
          *((_DWORD *)v39 + 702) = 0;
          USBD_RemoveDeviceFromGlobalList(v35);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v39 + 350, v38);
        v36 = (void **)*((_QWORD *)DeviceExtension + 606);
        if ( *v36 != DeviceExtension + 1210 )
          __fastfail(3u);
        *v34 = DeviceExtension + 1210;
        v34[1] = v36;
        *v36 = v34;
        *((_QWORD *)DeviceExtension + 606) = v34;
      }
      v22 = FdoExt(a1);
      *(_DWORD *)(v22 + 1520) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v22 + 1472) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v22 + 1516));
      ++v3->CurrentLocation;
      ++v3->Tail.Overlay.CurrentStackLocation;
      v3->IoStatus.Status = 0;
      v3->IoStatus.Information = (unsigned __int64)PoolWithTag;
      v23 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), v3);
    }
    else
    {
      v23 = -1073741670;
      Log((_DWORD)a1, 2, 1363300915, (_DWORD)v3, 0LL);
      v3->IoStatus.Information = 0LL;
      if ( (_DWORD)v2 )
      {
        v37 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v37++);
          --v2;
        }
        while ( v2 );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      v3->IoStatus.Status = -1073741670;
      IofCompleteRequest(v3, 0);
    }
    if ( ActivityIdIrp >= 0 )
      v24 = (__int128 *)v41;
    else
      v24 = 0LL;
    if ( dword_1C006A650 )
    {
      v25 = FdoExt(a1);
      UsbhEtwGetHubInfo(v25, v44);
      if ( v24 )
      {
        v26 = (const GUID *)&v43;
        v43 = *v24;
      }
      else
      {
        v26 = 0LL;
      }
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v26);
    }
    return v23;
  }
  else
  {
    ++v3->CurrentLocation;
    ++v3->Tail.Overlay.CurrentStackLocation;
    v3->IoStatus.Status = 0;
    v28 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), v3);
    Log((_DWORD)a1, 2, 1363300897, 0, v28);
    return v29;
  }
}

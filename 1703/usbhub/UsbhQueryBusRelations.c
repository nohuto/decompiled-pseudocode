/*
 * XREFs of UsbhQueryBusRelations @ 0x1C0015090
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0018800 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C00082F0 (UsbhEtwGetHubInfo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0019120 (SET_PDO_HWPNPSTATE.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhQueryBusRelations(__int64 a1, KSPIN_LOCK *a2)
{
  __int64 v2; // r13
  IRP *v3; // rbx
  int ActivityIdIrp; // r15d
  __int64 v6; // rsi
  __int128 *v7; // rdi
  _DWORD *v8; // rax
  int v9; // ecx
  const GUID *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *Information; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  _DWORD *PoolWithTag; // r12
  _DWORD *v18; // rax
  _DWORD *v19; // rdi
  _QWORD *v20; // r13
  _QWORD *v21; // rdi
  __int64 **v22; // rdi
  _DWORD *v23; // rax
  unsigned int v24; // esi
  __int128 *v25; // rbx
  _DWORD *v26; // rax
  const GUID *v27; // rdx
  NTSTATUS v29; // eax
  unsigned int v30; // r10d
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // r13
  __int64 *v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  PVOID *v38; // r12
  KIRQL v39; // [rsp+60h] [rbp-A0h]
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v44; // [rsp+88h] [rbp-78h]
  PKSPIN_LOCK SpinLock; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h] BYREF
  __int16 v47; // [rsp+9Ch] [rbp-64h]
  __int16 v48; // [rsp+9Eh] [rbp-62h]
  __int16 v49; // [rsp+A0h] [rbp-60h]
  __int16 v50; // [rsp+A2h] [rbp-5Eh]
  int v51; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v52; // [rsp+ACh] [rbp-54h]
  __int16 v53; // [rsp+AEh] [rbp-52h]
  __int16 v54; // [rsp+B0h] [rbp-50h]
  __int16 v55; // [rsp+B2h] [rbp-4Eh]
  _BYTE v56[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v57; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v59[40]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v60[40]; // [rsp+110h] [rbp+10h] BYREF

  SpinLock = a2;
  v2 = 0LL;
  v3 = (IRP *)a2;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, v56);
  else
    ActivityIdIrp = -1073741823;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( ActivityIdIrp >= 0 )
    v7 = (__int128 *)v56;
  else
    v7 = 0LL;
  v40 = 0;
  v41 = 0;
  if ( dword_1C0069650 )
  {
    v8 = FdoExt(a1);
    v46 = v8[1298];
    v47 = *((_WORD *)v8 + 2598);
    v9 = v8[1300];
    v48 = v9;
    LODWORD(v44) = v9;
    v49 = *((_WORD *)v8 + 2614);
    v50 = *((_WORD *)v8 + 2615);
    UsbhEtwGetHubInfo((__int64)v8, (__int64)v59);
    if ( v7 )
    {
      v10 = (const GUID *)&v57;
      v57 = *v7;
    }
    else
    {
      v10 = 0LL;
    }
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH,
      v10,
      (unsigned __int64)&v46,
      12LL,
      v59,
      36LL,
      &v41,
      4LL,
      &v40,
      4LL,
      0LL);
  }
  v11 = *(int *)(v6 + 1360);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 827474513;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v3;
      *(_QWORD *)(v13 + 24) = v11;
    }
  }
  Information = (unsigned int *)v3->IoStatus.Information;
  if ( Information )
    v2 = *Information;
  if ( *(_DWORD *)(v6 + 1360) == 5 )
  {
    v15 = FdoExt(a1);
    Usbh_SSH_Event(a1, 6LL, v15 + 346);
    v16 = FdoExt(a1);
    PoolWithTag = ExAllocatePoolWithTag(
                    ExDefaultNonPagedPoolType,
                    8LL * ((unsigned int)v2 + *((unsigned __int8 *)v16 + 2938) - 1) + 16,
                    0x42554855u);
    if ( PoolWithTag )
    {
      v18 = FdoExt(a1);
      memset(PoolWithTag, 0, 8LL * ((unsigned int)v2 + *((unsigned __int8 *)v18 + 2938) - 1) + 16);
      if ( (_DWORD)v2 )
      {
        *PoolWithTag = v2;
        memmove(PoolWithTag + 4, Information + 2, 8LL * (unsigned int)v2);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log(a1, 2, 1363300914, (__int64)v3, (__int64)PoolWithTag);
      v19 = FdoExt(a1) + 346;
      *((_BYTE *)v19 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v19[34] = 1;
      v19[22] = 2018460752;
      v19[23] = 8;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v19;
      *((_QWORD *)v19 + 3) = KeGetCurrentThread();
      v20 = *(_QWORD **)(v6 + 4808);
      *(_DWORD *)(v6 + 904) = 0;
      if ( v20 != (_QWORD *)(v6 + 4808) )
      {
        do
        {
          v21 = v20 - 164;
          Log(a1, 2, 1902277169, (__int64)(v20 - 164), 0LL);
          FdoExt(a1);
          if ( !v20[150] )
            v21[314] = MEMORY[0xFFFFF78000000014];
          ObfReferenceObject((PVOID)v21[105]);
          *(_QWORD *)&PoolWithTag[2 * (*PoolWithTag)++ + 2] = v21[105];
          SET_PDO_HWPNPSTATE(v21[105], 3LL, 8LL);
          v20 = (_QWORD *)*v20;
        }
        while ( v20 != (_QWORD *)(v6 + 4808) );
        v3 = (IRP *)SpinLock;
      }
      v22 = (__int64 **)(v6 + 4824);
      while ( *v22 != (__int64 *)v22 )
      {
        v31 = *v22;
        v32 = **v22;
        if ( (__int64 **)(*v22)[1] != v22 || *(__int64 **)(v32 + 8) != v31 )
          __fastfail(3u);
        *v22 = (__int64 *)v32;
        v33 = v31 - 164;
        *(_QWORD *)(v32 + 8) = v22;
        v44 = v31 - 164;
        Log(a1, 2, 1902277170, (__int64)(v31 - 164), 0LL);
        SET_PDO_HWPNPSTATE(v33[105], 5LL, 9LL);
        v34 = v44;
        v35 = v33 + 164;
        v44[165] = 0LL;
        *v35 = 0LL;
        SpinLock = (PKSPIN_LOCK)(v34 + 348);
        v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v34 + 348);
        if ( *((_DWORD *)v44 + 698) == 1 )
        {
          v36 = v44[105];
          *((_DWORD *)v44 + 698) = 0;
          USBD_RemoveDeviceFromGlobalList(v36);
        }
        KeReleaseSpinLock(SpinLock, v39);
        v37 = *(_QWORD **)(v6 + 4848);
        if ( *v37 != v6 + 4840 )
          __fastfail(3u);
        *v35 = v6 + 4840;
        v35[1] = v37;
        *v37 = v35;
        *(_QWORD *)(v6 + 4848) = v35;
      }
      v23 = FdoExt(a1);
      v23[380] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v23[368] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v23 + 1516));
      ++v3->CurrentLocation;
      ++v3->Tail.Overlay.CurrentStackLocation;
      v3->IoStatus.Status = 0;
      v3->IoStatus.Information = (unsigned __int64)PoolWithTag;
      v24 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), v3);
    }
    else
    {
      v24 = -1073741670;
      Log(a1, 2, 1363300915, (__int64)v3, 0LL);
      v3->IoStatus.Information = 0LL;
      if ( (_DWORD)v2 )
      {
        v38 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v38++);
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
      v25 = (__int128 *)v56;
    else
      v25 = 0LL;
    v42 = 0;
    v43 = 0;
    if ( dword_1C0069650 )
    {
      v26 = FdoExt(a1);
      v51 = v26[1298];
      v52 = *((_WORD *)v26 + 2598);
      v53 = v26[1300];
      v54 = *((_WORD *)v26 + 2614);
      v55 = *((_WORD *)v26 + 2615);
      UsbhEtwGetHubInfo((__int64)v26, (__int64)v60);
      if ( v25 )
      {
        v27 = (const GUID *)&v58;
        v58 = *v25;
      }
      else
      {
        v27 = 0LL;
      }
      UsbhEtwWrite(
        &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE,
        v27,
        (unsigned __int64)&v51,
        12LL,
        v60,
        36LL,
        &v43,
        4LL,
        &v42,
        4LL,
        0LL);
    }
    return v24;
  }
  else
  {
    ++v3->CurrentLocation;
    ++v3->Tail.Overlay.CurrentStackLocation;
    v3->IoStatus.Status = 0;
    v29 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), v3);
    Log(a1, 2, 1363300897, 0LL, v29);
    return v30;
  }
}

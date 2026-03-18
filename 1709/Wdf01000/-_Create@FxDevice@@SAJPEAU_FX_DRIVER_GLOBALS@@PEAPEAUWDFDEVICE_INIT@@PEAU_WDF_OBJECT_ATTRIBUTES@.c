/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0019320
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C0019230 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001D760 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C001E140 (-SetInitialState@FxDevice@@AEAAXXZ.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E800 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E850 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001EA40 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0020A90 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C007D574 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        __int64 DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // r15
  _POOL_TYPE v5; // r14d
  ULONG v7; // r12d
  unsigned __int64 flags; // r8
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  signed int id; // esi
  void *Caller; // rax
  _QWORD *v16; // rax
  _FX_DRIVER_GLOBALS *v17; // rdx
  _QWORD *v18; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v19; // rax
  unsigned __int64 ContextSizeOverride; // r8
  __int64 v21; // rdi
  _IRP ***v22; // r12
  __int64 v23; // rax
  int v24; // r14d
  int v25; // eax
  int v26; // eax
  _FX_DRIVER_GLOBALS *v27; // rdi
  unsigned __int64 v28; // r9
  _DEVICE_OBJECT *v29; // rax
  _POOL_TYPE v30; // r8d
  bool v31; // zf
  ULONG v32; // ecx
  void *v33; // rax
  _QWORD *v34; // rax
  _FX_DRIVER_GLOBALS *v35; // rdx
  _QWORD *v36; // rsi
  __int64 v37; // rax
  _POOL_TYPE v38; // r8d
  unsigned __int64 v39; // r9
  _FX_DRIVER_GLOBALS *v40; // r13
  void *v41; // rax
  _QWORD *v42; // rax
  _FX_DRIVER_GLOBALS *v43; // rdx
  _QWORD *v44; // r14
  __int64 v45; // rax
  _DEVICE_OBJECT *v46; // rcx
  _FX_DRIVER_GLOBALS *v47; // rdi
  PIO_WORKITEM WorkItem; // rax
  _FX_DRIVER_GLOBALS *ParentObject; // rdx
  PDEVICE_OBJECT v50; // rax
  PDEVICE_OBJECT v51; // rdi
  _DEVICE_OBJECT *v52; // rsi
  KIRQL v53; // al
  KIRQL v54; // si
  KIRQL v55; // r14
  struct _IO_TIMER *Timer; // rcx
  unsigned __int16 v57; // ax
  char *v58; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rcx
  _QWORD *i; // rdx
  __int64 v66; // rcx
  _QWORD *v68; // rdx
  int v69; // eax
  KIRQL v70; // al
  bool v71; // cf
  _FX_DRIVER_GLOBALS *v72; // rdx
  _FX_DRIVER_GLOBALS *v73; // rdx
  _FX_DRIVER_GLOBALS *v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // r9
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  WDFDEVICE_INIT **v81; // [rsp+A8h] [rbp+10h]
  FxVerifierLock *VerifierLock; // [rsp+B0h] [rbp+18h] BYREF
  FxDevice **v83; // [rsp+B8h] [rbp+20h]

  v83 = Device;
  v81 = (WDFDEVICE_INIT **)DeviceInit;
  v4 = *(_QWORD *)DeviceInit;
  v5 = ExDefaultNonPagedPoolType;
  v7 = FxDriverGlobals->Tag;
  *Device = 0LL;
  flags = 0LL;
  if ( DeviceAttributes )
  {
    ContextTypeInfo = DeviceAttributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      flags = DeviceAttributes->ContextSizeOverride;
      if ( !flags )
        flags = ContextTypeInfo->ContextSize;
    }
  }
  v11 = 752LL;
  if ( flags )
  {
    v12 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v12 < flags )
    {
LABEL_102:
      v24 = -1073741670;
LABEL_103:
      v18 = 0LL;
      goto LABEL_93;
    }
    v13 = v12 + 752;
    if ( v13 < 0x2F0 )
    {
      id = -1073741675;
LABEL_101:
      WPP_IFR_SF_DDxd(FxDriverGlobals, DeviceInit, flags, (unsigned __int16)Device, Tag, 0x2C0u, 0, flags, id);
      goto LABEL_102;
    }
    v11 = v13;
  }
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    DeviceInit = -1LL;
    if ( v11 + 48 >= v11 )
      DeviceInit = v11 + 48;
    v71 = v11 + 48 < v11;
    v11 = DeviceInit;
    id = v71 ? 0xC0000095 : 0;
  }
  else
  {
    id = 0;
  }
  if ( id < 0 )
    goto LABEL_101;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v16 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v5, v11, v7, Caller);
  v18 = v16;
  if ( v16 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v16, 0, 0x30uLL);
      *((_DWORD *)v18 + 8) = 1146058822;
      v18 += 6;
    }
    memset(v18 + 88, 0, 0x30uLL);
    v18[88] = v18;
    if ( DeviceAttributes )
    {
      v19 = DeviceAttributes->ContextTypeInfo;
      if ( v19 )
      {
        ContextSizeOverride = DeviceAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = v19->ContextSize;
        memset(v18 + 94, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v18[92] = DeviceAttributes->ContextTypeInfo;
    }
  }
  if ( !v18 )
    goto LABEL_102;
  v21 = *(_QWORD *)(v4 + 8);
  v22 = (_IRP ***)(v18 + 9);
  v18[2] = *(_QWORD *)(v21 + 16);
  *v18 = &FxObject::`vftable';
  *((_DWORD *)v18 + 2) = 46141442;
  v18[7] = 0LL;
  *((_BYTE *)v18 + 48) = 1;
  *((_DWORD *)v18 + 3) = 1;
  *((_DWORD *)v18 + 6) = 0x10000;
  v18[8] = 0LL;
  v18[5] = v18 + 4;
  v18[4] = v18 + 4;
  v18[10] = v18 + 9;
  v18[9] = v18 + 9;
  v23 = v18[2];
  v18[11] = 0LL;
  v18[12] = 0LL;
  if ( *(_BYTE *)(v23 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v18, v17, 0);
  *v18 = FxNonPagedObject::`vftable';
  v18[14] = 0LL;
  *((_BYTE *)v18 + 104) = 1;
  if ( *((char *)v18 + 24) < 0 )
  {
    v72 = (_FX_DRIVER_GLOBALS *)v18[2];
    if ( v72->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v72, (FxObject *)v18);
      *(v18 - 5) = VerifierLock;
    }
  }
  v18[15] = IFxHasCallbacks::`vftable';
  v18[18] = 0LL;
  v18[19] = 0LL;
  v18[20] = 0LL;
  *((_WORD *)v18 + 12) |= 0x10u;
  *v18 = FxDevice::`vftable'{for `FxNonPagedObject'};
  v18[15] = FxDevice::`vftable'{for `IFxHasCallbacks'};
  v18[17] = v21;
  v18[21] = 0LL;
  v18[22] = 0LL;
  v18[16] = 0LL;
  *(_QWORD *)((char *)v18 + 188) = 1LL;
  *((_DWORD *)v18 + 46) = 1;
  v18[12] = v18;
  v18[28] = 0LL;
  *((_DWORD *)v18 + 86) = 0;
  *((_WORD *)v18 + 174) = 0;
  *((_BYTE *)v18 + 350) = 0;
  v18[42] = 0LL;
  v18[39] = v18 + 38;
  v18[38] = v18 + 38;
  v18[41] = v18 + 40;
  v18[40] = v18 + 40;
  v18[37] = FxSpinLockTransactionedList::`vftable';
  v18[45] = 0LL;
  *((_BYTE *)v18 + 352) = 1;
  FxDevice::SetInitialState((FxDevice *)v18);
  v24 = FxDevice::Initialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  if ( v24 < 0 )
    goto LABEL_140;
  v25 = *(_DWORD *)(v4 + 36);
  if ( !v25 )
  {
    v26 = FxDevice::FdoInitialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4);
LABEL_30:
    v24 = v26;
    goto LABEL_31;
  }
  v69 = v25 - 1;
  if ( !v69 )
  {
    v26 = FxDevice::PdoInitialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4);
    goto LABEL_30;
  }
  if ( v69 == 1 )
  {
    v26 = FxDevice::ControlDeviceInitialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4);
    goto LABEL_30;
  }
LABEL_31:
  if ( v24 < 0 )
  {
LABEL_140:
    FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)v18, v24, 0);
    goto LABEL_103;
  }
  v27 = (_FX_DRIVER_GLOBALS *)v18[2];
  v28 = 160LL;
  v29 = (_DEVICE_OBJECT *)v18[18];
  v30 = ExDefaultNonPagedPoolType;
  v18[16] = 0LL;
  v31 = v27->FxVerifierHandle == 0;
  v32 = v27->Tag;
  DeviceObject = v29;
  if ( !v31 )
    v28 = 208LL;
  if ( v27->FxPoolTrackingOn )
    v33 = retaddr;
  else
    v33 = 0LL;
  v34 = FxPoolAllocator(v27, &v27->FxPoolFrameworks, v30, v28, v32, v33);
  v36 = v34;
  if ( !v34 )
    goto LABEL_139;
  if ( v27->FxVerifierHandle )
  {
    memset(v34, 0, 0x30uLL);
    *((_DWORD *)v36 + 8) = 1146058822;
    v36 += 6;
  }
  if ( !v36 )
  {
LABEL_139:
    v24 = -1073741670;
    goto LABEL_140;
  }
  v36[2] = v27;
  *v36 = &FxObject::`vftable';
  *((_DWORD *)v36 + 2) = 4147;
  v36[7] = 0LL;
  *((_BYTE *)v36 + 48) = 1;
  *((_DWORD *)v36 + 3) = 1;
  *((_DWORD *)v36 + 6) = 0x10000;
  v36[8] = 0LL;
  v36[5] = v36 + 4;
  v36[4] = v36 + 4;
  v36[10] = v36 + 9;
  v36[9] = v36 + 9;
  v37 = v36[2];
  v36[11] = 0LL;
  v36[12] = 0LL;
  if ( *(_BYTE *)(v37 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v36, v35, 0);
  *v36 = FxNonPagedObject::`vftable';
  v36[14] = 0LL;
  *((_BYTE *)v36 + 104) = 1;
  if ( *((char *)v36 + 24) < 0 )
  {
    v73 = (_FX_DRIVER_GLOBALS *)v36[2];
    if ( v73->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v73, (FxObject *)v36);
      *(v36 - 5) = VerifierLock;
    }
  }
  v38 = ExDefaultNonPagedPoolType;
  *v36 = FxDisposeList::`vftable';
  v39 = 224LL;
  v36[15] = 0LL;
  v36[16] = v36 + 15;
  v36[18] = 0LL;
  v36[17] = 0LL;
  *((_WORD *)v36 + 12) |= 0x800u;
  v40 = (_FX_DRIVER_GLOBALS *)v36[2];
  if ( v40->FxVerifierHandle )
    v39 = 272LL;
  if ( v40->FxPoolTrackingOn )
    v41 = retaddr;
  else
    v41 = 0LL;
  v42 = FxPoolAllocator(v40, &v40->FxPoolFrameworks, v38, v39, v40->Tag, v41);
  v44 = v42;
  if ( v42 )
  {
    if ( v40->FxVerifierHandle )
    {
      memset(v42, 0, 0x30uLL);
      *((_DWORD *)v44 + 8) = 1146058822;
      v44 += 6;
    }
    if ( v44 )
    {
      v44[2] = v40;
      *v44 = &FxObject::`vftable';
      *((_DWORD *)v44 + 2) = 4145;
      v44[7] = 0LL;
      *((_BYTE *)v44 + 48) = 1;
      *((_DWORD *)v44 + 3) = 1;
      *((_DWORD *)v44 + 6) = 0x10000;
      v44[8] = 0LL;
      v44[5] = v44 + 4;
      v44[4] = v44 + 4;
      v44[10] = v44 + 9;
      v44[9] = v44 + 9;
      v45 = v44[2];
      v44[11] = 0LL;
      v44[12] = 0LL;
      if ( *(_BYTE *)(v45 + 316) )
        FxObject::Vf_VerifyConstruct((FxObject *)v44, v43, 0);
      *v44 = FxNonPagedObject::`vftable';
      v44[14] = 0LL;
      *((_BYTE *)v44 + 104) = 1;
      if ( *((char *)v44 + 24) < 0 )
      {
        v74 = (_FX_DRIVER_GLOBALS *)v44[2];
        if ( v74->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v74, (FxObject *)v44);
          *(v44 - 5) = VerifierLock;
        }
      }
      *v44 = FxSystemWorkItem::`vftable';
      v44[16] = 0LL;
      *((_BYTE *)v44 + 176) = 0;
      KeInitializeEvent((PRKEVENT)(v44 + 19), NotificationEvent, 1u);
      *((_BYTE *)v44 + 176) = 1;
      *((_BYTE *)v44 + 216) = 0;
      KeInitializeEvent((PRKEVENT)v44 + 8, SynchronizationEvent, 0);
      v46 = DeviceObject;
      *((_BYTE *)v44 + 216) = 1;
      v44[17] = 0LL;
      v44[18] = 0LL;
      *((_DWORD *)v44 + 46) = 0;
      *((_WORD *)v44 + 60) = 0;
      *((_DWORD *)v44 + 47) = 1;
      *((_WORD *)v44 + 12) |= 0x811u;
      v47 = (_FX_DRIVER_GLOBALS *)v44[2];
      WorkItem = IoAllocateWorkItem(v46);
      v44[16] = WorkItem;
      if ( WorkItem )
      {
        v50 = DeviceObject;
        v36[18] = v44;
        v24 = 0;
        v36[19] = v50;
        v18[16] = v36;
        goto LABEL_56;
      }
      WPP_IFR_SF_(v47, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v44 + 16LL))(v44, 0LL, 0LL, 0LL);
    }
  }
  v24 = -1073741670;
  WPP_IFR_SF_d(v40, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, -1073741670);
  FxObject::DeleteFromFailedCreate((FxObject *)v36);
LABEL_56:
  if ( v24 < 0 )
    goto LABEL_140;
  v31 = *((_WORD *)v18 + 5) == 0;
  v51 = 0LL;
  v52 = (_DEVICE_OBJECT *)v18[17];
  DeviceObject = 0LL;
  if ( v31 )
  {
    v24 = -1073741816;
    goto LABEL_140;
  }
  if ( DeviceAttributes && DeviceAttributes->ExecutionLevel == WdfExecutionLevelPassive )
  {
    v70 = KeAcquireSpinLockRaiseToDpc(v18 + 7);
    *((_WORD *)v18 + 12) |= 0x11u;
    KeReleaseSpinLock(v18 + 7, v70);
    v51 = DeviceObject;
  }
  if ( v52 )
  {
    v51 = v52;
    DeviceObject = v52;
  }
  else if ( DeviceAttributes && (ParentObject = (_FX_DRIVER_GLOBALS *)DeviceAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v18[2], (unsigned __int64)ParentObject, 0x1000u, (void **)&DeviceObject);
    v51 = DeviceObject;
  }
  else if ( !v18[8] )
  {
    v75 = v18[2];
    if ( *(_QWORD **)(v75 + 72) != v18 )
      v51 = *(PDEVICE_OBJECT *)(v75 + 72);
    DeviceObject = v51;
  }
  if ( !v51 )
    goto LABEL_72;
  v53 = KeAcquireSpinLockRaiseToDpc(v18 + 7);
  v31 = *((_WORD *)v18 + 13) == 1;
  v54 = v53;
  LOBYTE(VerifierLock) = v53;
  if ( !v31 )
  {
    FxObject::TraceDroppedEvent((FxObject *)v18, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(v18 + 7, v54);
    v24 = -1073741738;
    goto LABEL_140;
  }
  if ( v18[8] )
  {
    KeReleaseSpinLock(v18 + 7, v53);
    v24 = -1071644147;
    goto LABEL_140;
  }
  v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v51->Vpb);
  if ( WORD1(v51->AttachedDevice) == 1 )
  {
    Timer = v51->Timer;
    if ( *(PDEVICE_OBJECT *)Timer != (PDEVICE_OBJECT)&v51->CurrentIrp )
      __fastfail(3u);
    *v22 = &v51->CurrentIrp;
    v18[10] = Timer;
    *(_QWORD *)Timer = v22;
    v51->Timer = (struct _IO_TIMER *)v22;
    if ( !v18[12] )
      v18[12] = *(_QWORD *)&v51->Queue.Wcb.NumberOfChannels;
    KeReleaseSpinLock((PKSPIN_LOCK)&v51->Vpb, v55);
    v18[8] = v51;
    v24 = 0;
  }
  else
  {
    FxObject::TraceDroppedEvent((FxObject *)v51, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock((PKSPIN_LOCK)&v51->Vpb, v55);
    v24 = -1073741738;
  }
  KeReleaseSpinLock(v18 + 7, (KIRQL)VerifierLock);
  if ( v24 < 0 )
    goto LABEL_140;
LABEL_72:
  if ( DeviceAttributes )
  {
    v57 = *((_WORD *)v18 + 5);
    if ( v57 )
      v58 = (char *)v18 + v57;
    else
      v58 = 0LL;
    EvtDestroyCallback = DeviceAttributes->EvtDestroyCallback;
    if ( EvtDestroyCallback )
      *((_QWORD *)v58 + 3) = EvtDestroyCallback;
    EvtCleanupCallback = DeviceAttributes->EvtCleanupCallback;
    if ( EvtCleanupCallback )
    {
      *((_QWORD *)v58 + 2) = EvtCleanupCallback;
      *((_WORD *)v18 + 12) |= 0x400u;
    }
  }
  v61 = v18[2];
  *((_WORD *)v18 + 12) |= 8u;
  if ( *(_BYTE *)(v61 + 316) )
    FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v18, ParentObject);
  v62 = *(_QWORD *)(v4 + 48);
  v24 = 0;
  if ( v62 )
  {
    *(_OWORD *)(v18 + 29) = *(_OWORD *)(v62 + 104);
    *(_QWORD *)(v62 + 104) = 0LL;
    *(_QWORD *)(v62 + 112) = 0LL;
  }
  v63 = *(_QWORD **)(v4 + 264);
  if ( v63 )
  {
    v68 = (_QWORD *)v18[47];
    if ( (_QWORD *)*v68 != v18 + 46 )
      __fastfail(3u);
    *v63 = v18 + 46;
    v63[1] = v68;
    *v68 = v63;
    v18[47] = v63;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++*(_BYTE *)(v18[18] + 76LL);
  }
  v64 = v18[18];
  if ( (*(_DWORD *)(v64 + 368) & 1) != 0 )
    ++*(_BYTE *)(v64 + 76);
  if ( *((_BYTE *)v18 + 282) )
    ++*(_BYTE *)(v18[18] + 76LL);
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v76 = (_QWORD *)i[4];
    if ( v76 )
    {
      v77 = (_QWORD *)v18[47];
      if ( (_QWORD *)*v77 != v18 + 46 )
        __fastfail(3u);
      *v76 = v18 + 46;
      v76[1] = v77;
      *v77 = v76;
      v18[47] = v76;
      i[4] = 0LL;
      ++*(_BYTE *)(v18[18] + 76LL);
    }
  }
  v66 = v18[81];
  if ( v66 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 216LL))(v66, v4);
  *(_QWORD *)(v4 + 16) = v18;
  *v81 = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
  {
    WDFDEVICE_INIT::~WDFDEVICE_INIT((WDFDEVICE_INIT *)v4);
    FxPoolFree((_QWORD *)v4);
  }
LABEL_93:
  *v83 = (FxDevice *)v18;
  return (unsigned int)v24;
}

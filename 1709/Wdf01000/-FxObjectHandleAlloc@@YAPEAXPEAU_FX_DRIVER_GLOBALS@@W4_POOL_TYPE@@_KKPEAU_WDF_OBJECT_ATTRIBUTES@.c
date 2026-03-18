/*
 * XREFs of ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0010C9C (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0011150 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C001175C (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0011810 (imp_WdfRegistryQueryMultiString.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0011BFC (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C001C710 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E850 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0020C9C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00308C0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0032C90 (imp_WdfDmaEnablerCreate.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C00354D8 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C00386CC (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfStringCreate @ 0x1C0038850 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0038990 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0038A80 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00394A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0063050 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0067B50 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006A160 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006B5F0 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006BD20 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006EFF8 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0075DD0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0076DB0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0077DE0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfLookasideListCreate @ 0x1C007A3F0 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C007A8F0 (imp_WdfDeviceMiniportCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C007C338 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C007CB40 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C007F560 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C007F7B0 (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C0083244 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C008332C (FxIoResourceListInsertDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x1C0083750 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C00847B0 (imp_WdfRegistryCreateKey.c)
 *     FxUsbTargetDeviceCreate @ 0x1C008B8CC (FxUsbTargetDeviceCreate.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008D024 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C0090CA0 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C009104C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C0091274 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0091F00 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C009331C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009823C (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009C81C (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009C9C4 (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C00A283C (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00A5A54 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 */

_QWORD *__fastcall FxObjectHandleAlloc(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int32 PoolType,
        unsigned __int64 Size,
        ULONG Tag,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int16 ExtraSize,
        FxObjectType ObjectType)
{
  ULONG v7; // edi
  unsigned __int64 v8; // r14
  void *Caller; // rbp
  unsigned __int64 flags; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r10
  signed int id; // edx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v22; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  signed int v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  const _GUID *v30; // [rsp+20h] [rbp-68h]
  unsigned __int64 v31; // [rsp+50h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v33; // [rsp+C0h] [rbp+38h]

  v7 = Tag;
  v8 = Size;
  if ( !Tag )
    v7 = FxDriverGlobals->Tag;
  Caller = 0LL;
  if ( ObjectType == FxObjectTypeInternal )
  {
    if ( !FxDriverGlobals->FxVerifierHandle )
      goto LABEL_10;
    v26 = Size + 48;
    Size = -1LL;
    if ( v26 >= v8 )
      Size = v26;
    v27 = v26 < v8 ? 0xC0000095 : 0;
  }
  else
  {
    flags = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        flags = Attributes->ContextSizeOverride;
        if ( !flags )
          flags = ContextTypeInfo->ContextSize;
      }
    }
    v14 = ((ExtraSize + 15) & 0xFFF0) + (((_DWORD)Size + 15) & 0xFFF0u);
    Size = v14 + 48;
    v31 = v14 + 48;
    if ( v14 + 48 < v14 )
    {
      id = -1073741675;
      v31 = -1LL;
      v33 = -1073741675;
    }
    else
    {
      v15 = -1LL;
      id = 0;
      v33 = 0;
      if ( flags )
      {
        v24 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v24 < flags )
        {
          v27 = -1073741675;
          goto LABEL_42;
        }
        v25 = v24 + Size;
        if ( v24 + Size < Size )
        {
          Size = -1LL;
          v31 = -1LL;
          id = -1073741675;
        }
        else
        {
          Size += v24;
          v31 = v25;
        }
        v33 = id;
      }
      if ( id >= 0 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          v28 = Size + 48;
          v29 = Size;
          if ( Size + 48 >= Size )
            v15 = Size + 48;
          Size = v15;
          v31 = v15;
          id = v28 < v29 ? 0xC0000095 : 0;
          v33 = id;
        }
        if ( id >= 0 )
          goto LABEL_10;
      }
    }
    WPP_IFR_SF_DDxd(FxDriverGlobals, id, Size, flags, v30, (unsigned __int16)v8, ExtraSize, flags, id);
    v27 = v33;
    Size = v31;
  }
LABEL_42:
  if ( v27 < 0 )
    return 0LL;
LABEL_10:
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  v17 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, PoolType, Size, v7, Caller);
  v18 = v17;
  if ( v17 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v17, 0, 0x30uLL);
      *((_DWORD *)v18 + 8) = 1146058822;
      v18 += 6;
    }
    if ( ObjectType == FxObjectTypeExternal )
    {
      v19 = (_QWORD *)((char *)v18 + (unsigned __int16)(((ExtraSize + 15) & 0xFFF0) + ((v8 + 15) & 0xFFF0)));
      memset(v19, 0, 0x30uLL);
      *v19 = v18;
      if ( Attributes )
      {
        v22 = Attributes->ContextTypeInfo;
        if ( v22 )
        {
          ContextSizeOverride = Attributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = v22->ContextSize;
          memset(v19 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v19[4] = Attributes->ContextTypeInfo;
      }
    }
  }
  return v18;
}

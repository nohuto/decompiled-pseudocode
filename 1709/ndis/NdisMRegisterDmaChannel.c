/*
 * XREFs of NdisMRegisterDmaChannel @ 0x1C010D020
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0qqq @ 0x1C00401C4 (McTemplateK0qqq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDmaChannel(
        PNDIS_HANDLE MiniportDmaHandle,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        BOOLEAN Dma32BitAddresses,
        PNDIS_DMA_DESCRIPTION DmaDescription,
        ULONG MaximumLength)
{
  int v9; // r15d
  PVOID PoolWithTag; // rax
  int v11; // ebx
  PVOID v12; // rsi
  bool v13; // zf
  BOOLEAN DemandMode; // al
  _DEVICE_OBJECT *v15; // rcx
  ULONG v16; // r12d
  struct _DMA_ADAPTER *DmaAdapter; // r15
  char *v18; // rax
  _QWORD *v19; // r14
  struct _KEVENT *v20; // r13
  int v21; // r12d
  struct _MCGEN_TRACE_CONTEXT *v22; // rcx
  KIRQL v23; // r14
  _QWORD *v25; // rax
  KIRQL NewIrql; // [rsp+30h] [rbp-59h]
  ULONG NumberOfMapRegisters; // [rsp+34h] [rbp-55h] BYREF
  PNDIS_HANDLE v28; // [rsp+38h] [rbp-51h]
  _BYTE DeviceDescription[64]; // [rsp+40h] [rbp-49h] BYREF

  v28 = MiniportDmaHandle;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x24u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle);
  v9 = *((_DWORD *)MiniportAdapterHandle + 934);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v11 = 0;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  memset(PoolWithTag, 0, 0xA0uLL);
  *(_DWORD *)v12 = 10486031;
  *((_QWORD *)v12 + 1) = MiniportAdapterHandle;
  *((_QWORD *)v12 + 2) = *((_QWORD *)MiniportAdapterHandle + 3);
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v13 = (*((_DWORD *)MiniportAdapterHandle + 30) & 8) == 0;
  *(_DWORD *)&DeviceDescription[16] = DmaChannel;
  *(_DWORD *)&DeviceDescription[32] = MaximumLength;
  DeviceDescription[4] = !v13;
  *(_DWORD *)DeviceDescription = 0;
  DeviceDescription[8] = Dma32BitAddresses;
  DemandMode = DmaDescription->DemandMode;
  v15 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 482);
  DeviceDescription[5] = !v13;
  DeviceDescription[6] = DemandMode;
  DeviceDescription[7] = DmaDescription->AutoInitialize;
  *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)MiniportAdapterHandle + 935);
  *(_DWORD *)&DeviceDescription[24] = DmaDescription->DmaWidth;
  *(_DWORD *)&DeviceDescription[28] = DmaDescription->DmaSpeed;
  *(_DWORD *)&DeviceDescription[36] = DmaDescription->DmaPort;
  v16 = ((MaximumLength - 2) >> 12) + 2;
  *(_DWORD *)&DeviceDescription[20] = v9;
  DmaAdapter = IoGetDmaAdapter(v15, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
  if ( !DmaAdapter
    || NumberOfMapRegisters < v16
    || (v18 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6264444Eu), (v19 = v18) == 0LL) )
  {
LABEL_14:
    if ( DmaAdapter )
    {
      v23 = KfRaiseIrql(2u);
      DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
      if ( v23 != 2 )
        KeLowerIrql(v23);
    }
    *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
    ExFreePoolWithTag(v12, 0);
LABEL_18:
    v11 = -1073741670;
    goto LABEL_19;
  }
  v20 = (struct _KEVENT *)(v18 + 8);
  KeInitializeEvent((PRKEVENT)(v18 + 8), NotificationEvent, 0);
  v19[5] = MiniportAdapterHandle;
  v19[4] = DmaAdapter;
  ndisReferencePackage((__int64)&ndisPkgs);
  NewIrql = KfRaiseIrql(2u);
  v21 = DmaAdapter->DmaOperations->AllocateAdapterChannel(
          DmaAdapter,
          *((_DEVICE_OBJECT **)MiniportAdapterHandle + 481),
          v16,
          (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
          v19);
  if ( NewIrql != 2 )
    KeLowerIrql(NewIrql);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v21 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0x25u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, v21);
    ExFreePoolWithTag(v19, 0);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
      McTemplateK0qqq(v22, &AllocateAdapterChannelFailed, (const GUID *)MiniportAdapterHandle + 252, v21, 0x8F1u, 0);
    goto LABEL_14;
  }
  KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
  KeClearEvent(v20);
  v25 = v28;
  *((_BYTE *)v19 + 48) = 0;
  *v25 = v19;
  *((_QWORD *)v12 + 3) = DmaAdapter;
  _InterlockedIncrement((volatile signed __int32 *)v12 + 18);
  *((_QWORD *)MiniportAdapterHandle + 63) = v12;
LABEL_19:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x26u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle, v11);
  return v11;
}

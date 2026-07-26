/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1C0103650
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDmaAdapter @ 0x1C0025F04 (ndisDereferenceDmaAdapter.c)
 *     NdisWriteErrorLogEntry @ 0x1C0026910 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rbx
  int v7; // edi
  char v8; // r13
  unsigned __int16 *PoolWithTag; // rax
  PVOID v13; // rax
  int v15; // eax
  ULONG v16; // r15d
  unsigned __int64 v17; // r12
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v19; // r14
  char v20; // r13
  _DMA_OPERATIONS *DmaOperations; // rcx
  char v22; // al
  unsigned __int16 v23; // r12
  KIRQL v24; // r13
  int v25; // eax
  int v26; // edx
  void (__fastcall *v27)(_DMA_ADAPTER *, void *, unsigned int); // r14
  void *v28; // rcx
  KIRQL v29; // r15
  char v30; // [rsp+31h] [rbp-70h]
  ULONG NumberOfMapRegisters; // [rsp+34h] [rbp-6Dh] BYREF
  int v32; // [rsp+38h] [rbp-69h]
  int v33; // [rsp+3Ch] [rbp-65h]
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+40h] [rbp-61h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+48h] [rbp-59h]
  struct _KEVENT Event; // [rsp+50h] [rbp-51h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+70h] [rbp-31h] BYREF

  v5 = BaseMapRegistersNeeded;
  v6 = 0LL;
  v33 = 0;
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(
      0x29u,
      &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids,
      (__int64)MiniportAdapterHandle,
      BaseMapRegistersNeeded);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*((_DWORD *)MiniportAdapterHandle + 926) & 1) != 0 )
    goto LABEL_4;
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 8) == 0 )
    goto LABEL_61;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    *(_DWORD *)v6 = 10486031;
    *((_QWORD *)v6 + 1) = MiniportAdapterHandle;
    *((_QWORD *)v6 + 2) = *((_QWORD *)MiniportAdapterHandle + 3);
    v6[77] = v5;
    *((_DWORD *)v6 + 13) = MaximumPhysicalMapping;
    *((_QWORD *)v6 + 17) = 0LL;
    if ( (_DWORD)v5 )
    {
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v5, 0x726D444Eu);
      *((_QWORD *)v6 + 17) = v13;
      if ( !v13 )
      {
        NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, 0xFFFFFFFFLL);
        v7 = -1073741670;
LABEL_10:
        v8 = 1;
        goto LABEL_11;
      }
    }
    *((_QWORD *)v6 + 18) = &Event;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    memset(DeviceDescription, 0, sizeof(DeviceDescription));
    *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)MiniportAdapterHandle + 935);
    v15 = *((_DWORD *)MiniportAdapterHandle + 119);
    *(_DWORD *)DeviceDescription = 0;
    *(_WORD *)&DeviceDescription[4] = 257;
    *(_DWORD *)&DeviceDescription[16] = DmaChannel;
    *(_DWORD *)&DeviceDescription[20] = v15;
    if ( v15 == 1 )
    {
      *(_DWORD *)&DeviceDescription[28] = 0;
      *(_DWORD *)&DeviceDescription[24] = DmaChannel > 4;
    }
    else if ( v15 == 5 )
    {
      if ( DmaSize == 1 )
      {
        DeviceDescription[8] = 1;
      }
      else if ( DmaSize == 2 )
      {
        *((_DWORD *)MiniportAdapterHandle + 30) |= 0x10u;
        DeviceDescription[11] = 1;
      }
    }
    *(_DWORD *)&DeviceDescription[32] = MaximumPhysicalMapping;
    v16 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
    v17 = v6[77] * (unsigned __int64)v16;
    if ( v17 > 0xFFFFFFFF )
    {
      NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, 4294967294LL);
      goto LABEL_10;
    }
    DmaAdapter = IoGetDmaAdapter(
                   *((PDEVICE_OBJECT *)MiniportAdapterHandle + 482),
                   (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                   &NumberOfMapRegisters);
    v19 = DmaAdapter;
    if ( !DmaAdapter || NumberOfMapRegisters < v16 )
    {
      NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, 0xFFFFFFFFLL);
      v28 = (void *)*((_QWORD *)v6 + 17);
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0);
        *((_QWORD *)v6 + 17) = 0LL;
      }
      v7 = -1073741670;
      if ( v19 )
      {
        v29 = KfRaiseIrql(2u);
        v19->DmaOperations->PutDmaAdapter(v19);
        if ( v29 != 2 )
          KeLowerIrql(v29);
      }
      goto LABEL_10;
    }
    v20 = 0;
    *((_QWORD *)v6 + 3) = DmaAdapter;
    *((_QWORD *)v6 + 16) = 0LL;
    *((_QWORD *)MiniportAdapterHandle + 63) = v6;
    _InterlockedAdd((volatile signed __int32 *)v6 + 18, 1u);
    DmaOperations = DmaAdapter->DmaOperations;
    v30 = 0;
    AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
    FreeMapRegisters = DmaOperations->FreeMapRegisters;
    if ( *(_DWORD *)&DeviceDescription[20] != 1 )
    {
      if ( HalPrivateDispatchTable[12](DmaAdapter, v16, v6[77], *((_QWORD *)v6 + 17)) < 0 )
      {
        if ( (unsigned int)v17 <= 0x40 )
        {
          v20 = 1;
        }
        else
        {
          ExFreePoolWithTag(*((PVOID *)v6 + 17), 0);
          *((_QWORD *)v6 + 17) = 0LL;
          ndisDereferenceDmaAdapter(v6);
          v30 = 1;
          NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, (unsigned int)v17);
        }
      }
      if ( *(_DWORD *)&DeviceDescription[20] != 1 && !v20 )
        goto LABEL_36;
    }
    v23 = 0;
    if ( v6[77] )
    {
      while ( 1 )
      {
        v6[76] = v23;
        v24 = KfRaiseIrql(2u);
        v25 = AllocateAdapterChannel(
                v19,
                *((_DEVICE_OBJECT **)MiniportAdapterHandle + 481),
                v16,
                (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
                v6);
        v32 = v25;
        v26 = v25;
        if ( v25 < 0 )
          break;
        if ( v24 != 2 )
          KeLowerIrql(v24);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        KeClearEvent(&Event);
        if ( ++v23 >= v6[77] )
          goto LABEL_36;
      }
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      {
        WPP_SF_d(0x2Bu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, v25);
        v26 = v32;
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
        Template_qqq(0LL, &AllocateAdapterChannelFailed, (const GUID *)MiniportAdapterHandle + 252, v26, 209, 0);
      if ( v23 )
      {
        v27 = FreeMapRegisters;
        do
          v27(*((_DMA_ADAPTER **)v6 + 3), *(void **)(*((_QWORD *)v6 + 17) + 16LL * --v23), v16);
        while ( v23 );
        v7 = v33;
      }
      if ( v24 != 2 )
        KeLowerIrql(v24);
      NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, 0xFFFFFFFFLL);
      ExFreePoolWithTag(*((PVOID *)v6 + 17), 0);
      *((_QWORD *)v6 + 17) = 0LL;
      ndisDereferenceDmaAdapter(v6);
      v22 = 1;
    }
    else
    {
LABEL_36:
      v22 = v30;
    }
    if ( v22 )
    {
      v7 = -1073741670;
      v8 = 0;
      goto LABEL_11;
    }
LABEL_61:
    v8 = 0;
    goto LABEL_11;
  }
LABEL_4:
  v7 = -1073741670;
LABEL_11:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v7 && v8 && v6 )
    ExFreePoolWithTag(v6, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x2Cu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportAdapterHandle, v7);
  return v7;
}

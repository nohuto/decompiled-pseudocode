/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1C010C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     NdisWriteErrorLogEntry @ 0x1C0023DE0 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0qqq @ 0x1C00401C4 (McTemplateK0qqq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
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
  ULONG v16; // r13d
  unsigned int v17; // r15d
  struct _DMA_ADAPTER *DmaAdapter; // r14
  _DMA_OPERATIONS *DmaOperations; // rcx
  char v20; // al
  unsigned __int16 v21; // r15
  int v22; // eax
  unsigned int v23; // edx
  char v24; // al
  void (__fastcall *v25)(_DMA_ADAPTER *, void *, unsigned int); // rdi
  __int64 v26; // r14
  void *v27; // rcx
  KIRQL v28; // r15
  char v29; // [rsp+30h] [rbp-71h]
  KIRQL NewIrql; // [rsp+31h] [rbp-70h]
  char v31; // [rsp+32h] [rbp-6Fh]
  ULONG NumberOfMapRegisters; // [rsp+34h] [rbp-6Dh] BYREF
  unsigned int v33; // [rsp+38h] [rbp-69h]
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+40h] [rbp-61h]
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+48h] [rbp-59h]
  struct _KEVENT Event; // [rsp+50h] [rbp-51h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+70h] [rbp-31h] BYREF

  v5 = BaseMapRegistersNeeded;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(
      0x29u,
      &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids,
      (__int64)MiniportAdapterHandle,
      BaseMapRegistersNeeded);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*((_DWORD *)MiniportAdapterHandle + 926) & 1) != 0 )
    goto LABEL_4;
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 8) == 0 )
    goto LABEL_46;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v29 = 1;
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
        goto LABEL_10;
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
    if ( v6[77] * (unsigned __int64)v16 > 0xFFFFFFFF )
    {
      NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, 4294967294LL);
      goto LABEL_11;
    }
    v17 = v6[77] * v16;
    DmaAdapter = IoGetDmaAdapter(
                   *((PDEVICE_OBJECT *)MiniportAdapterHandle + 482),
                   (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                   &NumberOfMapRegisters);
    if ( !DmaAdapter || NumberOfMapRegisters < v16 )
    {
      NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, 0xFFFFFFFFLL);
      v27 = (void *)*((_QWORD *)v6 + 17);
      if ( v27 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v6 + 17) = 0LL;
      }
      v7 = -1073741670;
      if ( DmaAdapter )
      {
        v28 = KfRaiseIrql(2u);
        DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
        if ( v28 != 2 )
          KeLowerIrql(v28);
      }
      goto LABEL_11;
    }
    *((_QWORD *)v6 + 3) = DmaAdapter;
    *((_QWORD *)v6 + 16) = 0LL;
    *((_QWORD *)MiniportAdapterHandle + 63) = v6;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 18);
    DmaOperations = DmaAdapter->DmaOperations;
    v29 = 0;
    AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
    FreeMapRegisters = DmaOperations->FreeMapRegisters;
    v31 = 0;
    if ( (*(_DWORD *)&DeviceDescription[20] == 1
       || (HalPrivateDispatchTable[12](DmaAdapter, v16, v6[77], *((_QWORD *)v6 + 17)) >= 0
         ? (v20 = 0)
         : v17 <= 0x40
         ? (v20 = 1)
         : (ExFreePoolWithTag(*((PVOID *)v6 + 17), 0),
            *((_QWORD *)v6 + 17) = 0LL,
            ndisDereferenceDmaAdapter(v6),
            v31 = 1,
            NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, v17),
            v20 = 0),
           *(_DWORD *)&DeviceDescription[20] == 1 || v20))
      && (v21 = 0, v6[77]) )
    {
      while ( 1 )
      {
        v6[76] = v21;
        NewIrql = KfRaiseIrql(2u);
        v22 = AllocateAdapterChannel(
                DmaAdapter,
                *((_DEVICE_OBJECT **)MiniportAdapterHandle + 481),
                v16,
                (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
                v6);
        v33 = v22;
        v23 = v22;
        if ( v22 < 0 )
          break;
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        KeClearEvent(&Event);
        if ( ++v21 >= v6[77] )
          goto LABEL_44;
      }
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      {
        WPP_SF_d(0x2Bu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, v22);
        v23 = v33;
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
        McTemplateK0qqq(0LL, &AllocateAdapterChannelFailed, (const GUID *)MiniportAdapterHandle + 252, v23, 0xAD2u, 0);
      if ( v21 )
      {
        v25 = FreeMapRegisters;
        v26 = 16LL * v21 - 16;
        do
        {
          v25(*((_DMA_ADAPTER **)v6 + 3), *(void **)(v26 + *((_QWORD *)v6 + 17)), v16);
          v26 -= 16LL;
          --v21;
        }
        while ( v21 );
        v7 = 0;
      }
      if ( NewIrql != 2 )
        KeLowerIrql(NewIrql);
      NdisWriteErrorLogEntry(MiniportAdapterHandle, 0xC0001389, 1u, 0xFFFFFFFFLL);
      ExFreePoolWithTag(*((PVOID *)v6 + 17), 0);
      *((_QWORD *)v6 + 17) = 0LL;
      ndisDereferenceDmaAdapter(v6);
      v24 = 1;
    }
    else
    {
LABEL_44:
      v24 = v31;
    }
    if ( v24 )
    {
LABEL_10:
      v7 = -1073741670;
LABEL_11:
      v8 = v29;
      goto LABEL_12;
    }
LABEL_46:
    v8 = 0;
    goto LABEL_12;
  }
LABEL_4:
  v7 = -1073741670;
LABEL_12:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v7 && v8 && v6 )
    ExFreePoolWithTag(v6, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x2Cu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle, v7);
  return v7;
}

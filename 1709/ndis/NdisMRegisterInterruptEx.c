/*
 * XREFs of NdisMRegisterInterruptEx @ 0x1C01049A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z @ 0x1C0019CA4 (-GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     NdisMDeregisterInterruptEx @ 0x1C00FF6A0 (NdisMDeregisterInterruptEx.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  struct _NDIS_INTERRUPT_BLOCK *v4; // rdi
  int v9; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  struct _NDIS_INTERRUPT_BLOCK *v15; // rax
  KIRQL v16; // al
  unsigned int v17; // r15d
  unsigned __int64 v18; // r12
  ULONG v19; // ebx
  unsigned __int64 v20; // r15
  _KDPC *v21; // rax
  __int64 v22; // r12
  unsigned int i; // ebx
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v25; // rax
  struct _KDPC *v26; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  unsigned int v29; // r15d
  __int64 v30; // rax
  _NDIS_DPC_WORK_ITEM *v31; // rcx
  $CCE59354CF86FAD910C1D0F260DD8D60 *v32; // r15
  bool v33; // zf
  _DEVICE_OBJECT *v34; // rax
  NTSTATUS v35; // eax
  _DWORD *Generic; // r15
  unsigned int v37; // r12d
  _OWORD *PoolWithTag; // rax
  _OWORD *v39; // rbx
  _OWORD *v40; // rax
  __int64 v41; // r15
  __int64 v42; // rcx
  __int128 v43; // xmm1
  KIRQL v45; // r8
  _NDIS_INTERRUPT_BLOCK **p_NextInterrupt; // rcx
  __int64 v47; // rcx
  __int64 v48; // [rsp+50h] [rbp-39h]
  unsigned __int64 v49; // [rsp+58h] [rbp-31h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-29h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+F0h] [rbp+67h] BYREF
  _PROCESSOR_NUMBER v52; // [rsp+100h] [rbp+77h] BYREF
  PNDIS_HANDLE v53; // [rsp+108h] [rbp+7Fh]

  v53 = NdisInterruptHandle;
  v4 = 0LL;
  Parameters.Version = 0;
  v9 = 0;
  memset(&Parameters.FullySpecified, 0, sizeof(Parameters.FullySpecified));
  v10 = *((unsigned int *)MiniportAdapterHandle + 857);
  v11 = (unsigned __int64)ndisMaxNumberOfProcessors << 6;
  v12 = (v10 * (ndisMaxNumberOfProcessors + 1)) << 6;
  v48 = v12;
  if ( !(_DWORD)v10 )
    LODWORD(v10) = 1;
  v13 = 80 * ndisMaxNumberOfProcessors * (unsigned __int64)(unsigned int)v10;
  v49 = v13;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x12u, &WPP_89199a78c9ed372c807b20ed02a65825_Traceguids, (__int64)MiniportAdapterHandle);
    v12 = v48;
    v13 = v49;
  }
  *NdisInterruptHandle = 0LL;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  if ( (*((_DWORD *)MiniportAdapterHandle + 926) & 2) != 0
    || (v14 = v13 + v12,
        v15 = (struct _NDIS_INTERRUPT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + v12 + v11 + 232, 0x6D61444Eu),
        (v4 = v15) == 0LL) )
  {
    v9 = -1073741670;
  }
  else
  {
    memset(v15, 0, v14 + v11 + 232);
    v4->MiniportInterruptContext = MiniportInterruptContext;
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    v4->NextInterrupt = (_NDIS_INTERRUPT_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 98);
    v17 = 0;
    *((_QWORD *)MiniportAdapterHandle + 98) = v4;
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v16);
    _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 476, 1u);
    v4->Header = (_NDIS_OBJECT_HEADER)15204614;
    v4->DpcCount = 0;
    v4->IsDeregistered = 0;
    v4->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
    v4->MiniportIsr = MiniportInterruptCharacteristics->InterruptHandler;
    v4->MiniportDpc = MiniportInterruptCharacteristics->InterruptDpcHandler;
    *(_WORD *)&v4->SharedInterrupt = 257;
    if ( MiniportInterruptCharacteristics->MessageInterruptHandler )
    {
      v4->MsiSupported = 1;
      v4->MiniportMessageIsr = MiniportInterruptCharacteristics->MessageInterruptHandler;
      v4->MiniportMessageInterruptDpc = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
    }
    KeInitializeEvent(&v4->DpcsCompletedEvent, SynchronizationEvent, 0);
    KeInitializeDpc(&v4->InterruptDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
    KeSetImportanceDpc(&v4->InterruptDpc, MediumImportance);
    v18 = v11 + 232;
    v4->Dpc = (_KDPC *)&v4[1];
    v19 = 0;
    if ( ndisMaxNumberOfProcessors )
    {
      do
      {
        v20 = (unsigned __int64)v19 << 6;
        KeInitializeDpc((PRKDPC)((char *)v4->Dpc + v20), (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
        KeSetImportanceDpc((PRKDPC)((char *)v4->Dpc + v20), MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(v19, &ProcNumber) >= 0 )
          KeSetTargetProcessorDpcEx((PKDPC)((char *)v4->Dpc + v20), &ProcNumber);
        ++v19;
      }
      while ( v19 < ndisMaxNumberOfProcessors );
      v17 = 0;
    }
    v21 = (_KDPC *)(&v4->Header.Type + v18);
    v22 = v48 + v18;
    v4->MsgDpc = v21;
    if ( *((_DWORD *)MiniportAdapterHandle + 857) )
    {
      do
      {
        for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
        {
          MsgDpc = GetMsgDpc(v4, v17, i);
          KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
          v25 = GetMsgDpc(v4, v17, i);
          KeSetImportanceDpc(v25, MediumHighImportance);
          if ( KeGetProcessorNumberFromIndex(i, &v52) >= 0 )
          {
            v26 = GetMsgDpc(v4, v17, i);
            KeSetTargetProcessorDpcEx(v26, &v52);
          }
        }
        v27 = GetMsgDpc(v4, v17, i);
        KeInitializeDpc(v27, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
        v28 = GetMsgDpc(v4, v17, i);
        KeSetImportanceDpc(v28, MediumHighImportance);
        ++v17;
      }
      while ( v17 < *((_DWORD *)MiniportAdapterHandle + 857) );
    }
    v4->DpcWorkItems = (_NDIS_DPC_WORK_ITEM *)(&v4->Header.Type + v22);
    v29 = 0;
    if ( v49 / 0x50 )
    {
      v30 = 0LL;
      do
      {
        v31 = &v4->DpcWorkItems[v30];
        v31->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisQueuedMiniportDpcWorkItem;
        v31->WorkItem.Parameter = v31;
        v31->WorkItem.List.Flink = 0LL;
        KeInitializeSpinLock(&v4->DpcWorkItems[v30].Lock);
        v30 = ++v29;
      }
      while ( v29 < v49 / 0x50 );
    }
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
    v32 = &v4->120;
    v33 = v4->MsiSupported == 0;
    v34 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 482);
    Parameters.FullySpecified.ServiceContext = v4;
    Parameters.FullySpecified.PhysicalDeviceObject = v34;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v4->120;
    if ( v33 )
    {
      Parameters.Version = 2;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      Parameters.FullySpecified.SpinLock = 0LL;
    }
    else
    {
      Parameters.Version = 3;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportMessageIsr;
      Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      if ( MiniportInterruptCharacteristics->MsiSyncWithAllMessages )
      {
        KeInitializeSpinLock(&v4->MessagesSyncLock);
        Parameters.FullySpecified.SpinLock = &v4->MessagesSyncLock;
      }
    }
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v35 = IoConnectInterruptEx(&Parameters);
    if ( v35 < 0 )
    {
      v9 = -1073741823;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x13u, &WPP_89199a78c9ed372c807b20ed02a65825_Traceguids, (__int64)MiniportAdapterHandle, v35);
      v32->Generic = 0LL;
    }
    else
    {
      if ( Parameters.Version != 3 )
      {
LABEL_35:
        if ( Parameters.Version == 2 )
        {
          MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
          MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
          v4->InterruptMode = LevelSensitive;
        }
        *v53 = v4;
        goto LABEL_38;
      }
      Generic = v32->Generic;
      v37 = Generic[1];
      v4->MessageUsed = 1;
      v4->InterruptMode = Latched;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 48 * (v37 - 1) + 56, 0x6D61444Eu);
      v39 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x38uLL);
        *v39 = *(_OWORD *)Generic;
        v39[1] = *((_OWORD *)Generic + 1);
        v39[2] = *((_OWORD *)Generic + 2);
        *((_QWORD *)v39 + 6) = *((_QWORD *)Generic + 6);
        if ( v37 )
        {
          v40 = (_OWORD *)((char *)v39 + 8);
          v41 = (char *)Generic - (char *)v39;
          v42 = v37;
          do
          {
            *v40 = *(_OWORD *)((char *)v40 + v41);
            v43 = *(_OWORD *)((char *)v40 + v41 + 16);
            v40 += 3;
            *(v40 - 2) = v43;
            *(v40 - 1) = *(_OWORD *)((char *)v40 + v41 - 16);
            --v42;
          }
          while ( v42 );
        }
        MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
        MiniportInterruptCharacteristics->MessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v39;
        v4->NdisMessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v39;
        v4->InterruptMode = Latched;
        if ( v37 > 1 )
        {
          *((_BYTE *)MiniportAdapterHandle + 1992) = 1;
          if ( *((_WORD *)MiniportAdapterHandle + 1351) )
          {
            *((_DWORD *)MiniportAdapterHandle + 676) |= 0x8000000u;
            *((_DWORD *)MiniportAdapterHandle + 779) |= 0x8000000u;
          }
        }
        goto LABEL_35;
      }
      v9 = -1073741670;
      NdisMDeregisterInterruptEx(v4);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((__int64)&ndisPkgs);
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  p_NextInterrupt = (_NDIS_INTERRUPT_BLOCK **)((char *)MiniportAdapterHandle + 784);
  *((_DWORD *)MiniportAdapterHandle + 464) = 657287;
  while ( *p_NextInterrupt )
  {
    if ( *p_NextInterrupt == v4 )
    {
      *p_NextInterrupt = v4->NextInterrupt;
      break;
    }
    p_NextInterrupt = &(*p_NextInterrupt)->NextInterrupt;
  }
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v45);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
    McTemplateK0jqxqqq(
      v47,
      &RegisterInterruptFailed,
      (const GUID *)MiniportAdapterHandle + 252,
      (__int64)MiniportAdapterHandle + 4032,
      *((_DWORD *)MiniportAdapterHandle + 1020),
      *((_QWORD *)MiniportAdapterHandle + 506),
      v9,
      159,
      0);
LABEL_38:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x14u, &WPP_89199a78c9ed372c807b20ed02a65825_Traceguids, (__int64)MiniportAdapterHandle, v9);
  return v9;
}

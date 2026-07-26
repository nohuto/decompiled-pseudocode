/*
 * XREFs of NdisMRegisterInterruptEx @ 0x1C0106A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z @ 0x1C0008B04 (-GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     NdisMDeregisterInterruptEx @ 0x1C0103240 (NdisMDeregisterInterruptEx.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  struct _NDIS_INTERRUPT_BLOCK *v7; // rdi
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
  bool v19; // zf
  ULONG v20; // ebx
  unsigned __int64 v21; // r15
  _KDPC *v22; // rax
  __int64 v23; // r12
  unsigned int i; // ebx
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v26; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  struct _KDPC *v29; // rax
  unsigned int v30; // r15d
  __int64 v31; // rax
  _NDIS_DPC_WORK_ITEM *v32; // rcx
  $C3F37786DCBA5D808ABE278D3D141D7F *v33; // r15
  NTSTATUS v34; // eax
  _DWORD *Generic; // r15
  unsigned int v36; // r12d
  _OWORD *PoolWithTag; // rax
  _OWORD *v38; // rbx
  _OWORD *v39; // rax
  __int64 v40; // r15
  __int64 v41; // rcx
  __int128 v42; // xmm1
  KIRQL v44; // al
  _NDIS_INTERRUPT_BLOCK **p_NextInterrupt; // rdx
  struct _NDIS_INTERRUPT_BLOCK *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // [rsp+50h] [rbp-39h]
  unsigned __int64 v49; // [rsp+58h] [rbp-31h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-29h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+F0h] [rbp+67h] BYREF
  _PROCESSOR_NUMBER v52; // [rsp+100h] [rbp+77h] BYREF
  PNDIS_HANDLE v53; // [rsp+108h] [rbp+7Fh]

  v53 = NdisInterruptHandle;
  v7 = 0LL;
  v9 = 0;
  memset(&Parameters, 0, sizeof(Parameters));
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
    WPP_SF_q(0x12u, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, (__int64)MiniportAdapterHandle);
    v12 = v48;
    v13 = v49;
  }
  *NdisInterruptHandle = 0LL;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  if ( (*((_DWORD *)MiniportAdapterHandle + 926) & 2) != 0
    || (v14 = v13 + v12,
        v15 = (struct _NDIS_INTERRUPT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + v12 + v11 + 232, 0x6D61444Eu),
        (v7 = v15) == 0LL) )
  {
    v9 = -1073741670;
  }
  else
  {
    memset(v15, 0, v14 + v11 + 232);
    v7->MiniportInterruptContext = MiniportInterruptContext;
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    v7->NextInterrupt = (_NDIS_INTERRUPT_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 98);
    v17 = 0;
    *((_QWORD *)MiniportAdapterHandle + 98) = v7;
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v16);
    _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 476, 1u);
    v7->Header = (_NDIS_OBJECT_HEADER)15204614;
    v7->DpcCount = 0;
    v7->IsDeregistered = 0;
    v7->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
    v7->MiniportIsr = MiniportInterruptCharacteristics->InterruptHandler;
    v7->MiniportDpc = MiniportInterruptCharacteristics->InterruptDpcHandler;
    *(_WORD *)&v7->SharedInterrupt = 257;
    if ( MiniportInterruptCharacteristics->MessageInterruptHandler )
    {
      v7->MsiSupported = 1;
      v7->MiniportMessageIsr = MiniportInterruptCharacteristics->MessageInterruptHandler;
      v7->MiniportMessageInterruptDpc = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
    }
    KeInitializeEvent(&v7->DpcsCompletedEvent, SynchronizationEvent, 0);
    KeInitializeDpc(&v7->InterruptDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
    KeSetImportanceDpc(&v7->InterruptDpc, MediumImportance);
    v18 = v11 + 232;
    v19 = ndisMaxNumberOfProcessors == 0;
    v20 = 0;
    v7->Dpc = (_KDPC *)&v7[1];
    if ( !v19 )
    {
      do
      {
        v21 = (unsigned __int64)v20 << 6;
        KeInitializeDpc((PRKDPC)((char *)v7->Dpc + v21), (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
        KeSetImportanceDpc((PRKDPC)((char *)v7->Dpc + v21), MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(v20, &ProcNumber) >= 0 )
          KeSetTargetProcessorDpcEx((PKDPC)((char *)v7->Dpc + v21), &ProcNumber);
        ++v20;
      }
      while ( v20 < ndisMaxNumberOfProcessors );
      v17 = 0;
    }
    v22 = (_KDPC *)(&v7->Header.Type + v18);
    v23 = v48 + v18;
    v7->MsgDpc = v22;
    if ( *((_DWORD *)MiniportAdapterHandle + 857) )
    {
      do
      {
        for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
        {
          MsgDpc = GetMsgDpc(v7, v17, i);
          KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
          v26 = GetMsgDpc(v7, v17, i);
          KeSetImportanceDpc(v26, MediumHighImportance);
          if ( KeGetProcessorNumberFromIndex(i, &v52) >= 0 )
          {
            v27 = GetMsgDpc(v7, v17, i);
            KeSetTargetProcessorDpcEx(v27, &v52);
          }
        }
        v28 = GetMsgDpc(v7, v17, i);
        KeInitializeDpc(v28, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
        v29 = GetMsgDpc(v7, v17, i);
        KeSetImportanceDpc(v29, MediumHighImportance);
        ++v17;
      }
      while ( v17 < *((_DWORD *)MiniportAdapterHandle + 857) );
    }
    v7->DpcWorkItems = (_NDIS_DPC_WORK_ITEM *)(&v7->Header.Type + v23);
    v30 = 0;
    if ( v49 / 0x50 )
    {
      v31 = 0LL;
      do
      {
        v32 = &v7->DpcWorkItems[v31];
        v32->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisQueuedMiniportDpcWorkItem;
        v32->WorkItem.Parameter = v32;
        v32->WorkItem.List.Flink = 0LL;
        KeInitializeSpinLock(&v7->DpcWorkItems[v31].Lock);
        v31 = ++v30;
      }
      while ( v30 < v49 / 0x50 );
    }
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
    v33 = &v7->120;
    v19 = v7->MsiSupported == 0;
    Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 482);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v7->120;
    Parameters.FullySpecified.ServiceContext = v7;
    if ( v19 )
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
        KeInitializeSpinLock(&v7->MessagesSyncLock);
        Parameters.FullySpecified.SpinLock = &v7->MessagesSyncLock;
      }
    }
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v34 = IoConnectInterruptEx(&Parameters);
    if ( v34 < 0 )
    {
      v9 = -1073741823;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x13u, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, (__int64)MiniportAdapterHandle, v34);
      v33->Generic = 0LL;
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
          v7->InterruptMode = LevelSensitive;
        }
        *v53 = v7;
        goto LABEL_38;
      }
      Generic = v33->Generic;
      v36 = Generic[1];
      v7->MessageUsed = 1;
      v7->InterruptMode = Latched;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 48 * (v36 - 1) + 56, 0x6D61444Eu);
      v38 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x38uLL);
        *v38 = *(_OWORD *)Generic;
        v38[1] = *((_OWORD *)Generic + 1);
        v38[2] = *((_OWORD *)Generic + 2);
        *((_QWORD *)v38 + 6) = *((_QWORD *)Generic + 6);
        if ( v36 )
        {
          v39 = (_OWORD *)((char *)v38 + 8);
          v40 = (char *)Generic - (char *)v38;
          v41 = v36;
          do
          {
            *v39 = *(_OWORD *)((char *)v39 + v40);
            v42 = *(_OWORD *)((char *)v39 + v40 + 16);
            v39 += 3;
            *(v39 - 2) = v42;
            *(v39 - 1) = *(_OWORD *)((char *)v39 + v40 - 16);
            --v41;
          }
          while ( v41 );
        }
        MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
        MiniportInterruptCharacteristics->MessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v38;
        v7->NdisMessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v38;
        v7->InterruptMode = Latched;
        if ( v36 > 1 )
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
      NdisMDeregisterInterruptEx(v7);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((__int64)&ndisPkgs);
  v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  p_NextInterrupt = (_NDIS_INTERRUPT_BLOCK **)((char *)MiniportAdapterHandle + 784);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 657287;
  while ( 1 )
  {
    v46 = *p_NextInterrupt;
    if ( !*p_NextInterrupt )
      break;
    if ( v46 == v7 )
    {
      *p_NextInterrupt = v7->NextInterrupt;
      break;
    }
    p_NextInterrupt = &v46->NextInterrupt;
  }
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v44);
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
    WPP_SF_qD(0x14u, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, (__int64)MiniportAdapterHandle, v9);
  return v9;
}

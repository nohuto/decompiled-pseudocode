/*
 * XREFs of PsDispatchIumService @ 0x14024ED54
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x140015FE0 (MmLockLoadedModuleListExclusive.c)
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     KeAlertThreadByThreadId @ 0x1400893F0 (KeAlertThreadByThreadId.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KeWaitForAlertByThreadId @ 0x1400E41B0 (KeWaitForAlertByThreadId.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14017DE40 (ZwTerminateProcess.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     DbgkPostModuleMessage @ 0x1401E5EF4 (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1401F19C0 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1401F1E4C (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x1401F2000 (VslHandleKsrCall.c)
 *     PspIumAllocatePartitionState @ 0x14024F628 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x14024F774 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x14024F968 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x14024FA30 (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x14024FB68 (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x14024FC7C (PspMapView.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x140494760 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     DbgkMapViewOfSection @ 0x140571C70 (DbgkMapViewOfSection.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 *     MmAllocateVirtualMemory @ 0x1405763CC (MmAllocateVirtualMemory.c)
 *     MmUnmapViewOfSection @ 0x140584F70 (MmUnmapViewOfSection.c)
 *     EtwSetInformation @ 0x1405ABE40 (EtwSetInformation.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x1406ACD40 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x1406ACEB0 (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x1406EA590 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x1406EC4E0 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x14071ABF4 (PspIumGetPhysicalPage.c)
 *     PspIumGetSystemData @ 0x14071ACDC (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x14071AD14 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x14071C150 (PsTerminateVsmEnclave.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  ETWENABLECALLBACK *RelatedActivityId; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int PartitionState; // eax
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  _KPROCESS *v20; // rbx
  _KPROCESS *v21; // rcx
  int VirtualMemory; // eax
  _KPROCESS *Process; // r14
  _KPROCESS *v24; // rcx
  int v25; // ebx
  _KPROCESS *v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  const GUID *ActivityId; // rcx
  void *v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v37; // rbx
  void *v38; // rcx
  struct _MDL *v39; // rbx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned __int64 v43; // rbx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned __int8 v52[8]; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-1D0h]
  int v54; // [rsp+60h] [rbp-1C8h]
  ULONGLONG RegHandle; // [rsp+68h] [rbp-1C0h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v56; // [rsp+70h] [rbp-1B8h] BYREF
  _BYTE v57[272]; // [rsp+A0h] [rbp-188h] BYREF
  _OWORD v58[5]; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v59; // [rsp+200h] [rbp-28h]
  int v60; // [rsp+208h] [rbp-20h]
  __int16 v61; // [rsp+20Ch] [rbp-1Ch]
  char v62; // [rsp+20Eh] [rbp-1Ah]

  v53 = a1;
  RelatedActivityId = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v5 = *(unsigned __int16 *)(a1 + 2);
  if ( v5 > 0x16 )
  {
    if ( v5 <= 0x21 )
    {
      if ( v5 == 33 )
      {
        DbgkPostModuleMessage(
          *(PVOID *)(a1 + 8),
          *(PVOID *)(a1 + 16),
          *(void **)(a1 + 24),
          *(_DWORD *)(a1 + 32),
          *(_DWORD *)(a1 + 40),
          *(PRKEVENT *)(a1 + 48));
        return;
      }
      if ( v5 > 0x1C )
      {
        v40 = v5 - 29;
        if ( !v40 )
        {
          LOBYTE(a3) = *(_BYTE *)(a1 + 24);
          MmChangeKernelCfgBitmap(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a3);
          return;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          PartitionState = MmMapViewOfSection(
                             *(_QWORD *)(a1 + 8),
                             PsSecureSystemProcess,
                             (int)a1 + 16,
                             0,
                             0LL,
                             a1 + 24,
                             a1 + 32,
                             2,
                             285212672,
                             2);
          goto LABEL_22;
        }
        v42 = v41 - 1;
        if ( !v42 )
        {
          PartitionState = MmUnmapViewOfSection(PsSecureSystemProcess, *(_QWORD *)(a1 + 8));
          goto LABEL_22;
        }
        if ( v42 == 1 )
        {
          if ( *(_QWORD *)(a1 + 8) )
          {
            MmLockLoadedModuleListExclusive(&v52);
          }
          else
          {
            v43 = *(unsigned __int8 *)(a1 + 16);
            ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
            __writecr8(v43);
          }
          return;
        }
        goto LABEL_118;
      }
      if ( v5 == 28 )
      {
        v39 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v39->MappedSystemVa, v39);
        v38 = v39;
      }
      else
      {
        v32 = v5 - 23;
        if ( !v32 )
        {
          VslHandleKsrCall(a1);
          return;
        }
        v33 = v32 - 1;
        if ( !v33 )
        {
          PartitionState = HvlpDepositPages(0);
          goto LABEL_22;
        }
        v34 = v33 - 1;
        if ( !v34 )
        {
          *(_DWORD *)(a1 + 8) = VslAllocatePool(
                                  *(_QWORD *)(a1 + 8),
                                  *(_DWORD *)(a1 + 16),
                                  (_QWORD *)(a1 + 16),
                                  (_QWORD *)(a1 + 24),
                                  (_QWORD *)(a1 + 32));
          return;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          if ( v35 == 1 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v37 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag->Next = 0LL;
              *(_DWORD *)&PoolWithTag->Size = 56;
              PoolWithTag->StartVa = 0LL;
              *(_QWORD *)&PoolWithTag->ByteCount = 4096LL;
              PoolWithTag[1].Next = *(struct _MDL **)(a1 + 8);
              PoolWithTag->MdlFlags |= 2u;
              if ( (PoolWithTag->MdlFlags & 5) == 0 )
                MmMapLockedPagesSpecifyCache(PoolWithTag, 0, MmCached, 0LL, 0, 0x40000010u);
              if ( (v37->MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v37;
                *(_QWORD *)(a1 + 24) = v37->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v37, 0);
            }
            v11 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v11;
            return;
          }
          goto LABEL_118;
        }
        v38 = (void *)VslFreePoolTransferObject(*(__int64 **)(a1 + 8), 0LL);
      }
      ExFreePoolWithTag(v38, 0);
      return;
    }
    v44 = v5 - 34;
    if ( !v44 )
    {
      DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
      return;
    }
    v45 = v44 - 1;
    if ( !v45 )
    {
      PartitionState = PspMapView(a1);
      goto LABEL_22;
    }
    v46 = v45 - 1;
    if ( !v46 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 8));
      return;
    }
    v47 = v46 - 1;
    if ( !v47 )
    {
      if ( *(_QWORD *)(a1 + 8) )
        KeFlushMultipleRangeTb(1u, a1 + 8, 0, 1);
      else
        KeFlushTb(0LL, 1LL, a3);
      return;
    }
    v48 = v47 - 1;
    if ( !v48 )
    {
      v54 = 0;
      goto LABEL_57;
    }
    v49 = v48 - 1;
    if ( !v49 )
    {
      KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
      return;
    }
    v50 = v49 - 1;
    if ( !v50 )
    {
      if ( !*(_QWORD *)(a1 + 8) )
      {
        PspIumFreePartitionState(*(PVOID *)(a1 + 16));
        return;
      }
      PartitionState = PspIumAllocatePartitionState(a1);
      goto LABEL_22;
    }
    v51 = v50 - 1;
    if ( !v51 )
    {
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
        *(_QWORD *)(a1 + 24) = 1LL;
      return;
    }
    if ( v51 == 1 )
    {
      PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
      return;
    }
LABEL_118:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v5 == 22 )
  {
    PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
    goto LABEL_22;
  }
  if ( v5 > 0xB )
  {
    if ( v5 <= 0x11 )
    {
      if ( v5 == 17 )
      {
        memset(v57, 0, sizeof(v57));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v57);
        goto LABEL_22;
      }
      v16 = v5 - 12;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v24 = *(_KPROCESS **)(a1 + 8);
          if ( Process != v24 )
            KiStackAttachProcess(v24, 0, (__int64)&v56);
          v25 = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
          if ( Process != *(_KPROCESS **)(a1 + 8) )
            KiUnstackDetachProcess(&v56, 0LL);
          *(_DWORD *)(a1 + 8) = v25;
          return;
        }
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
            {
              DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
              return;
            }
            goto LABEL_118;
          }
          LOBYTE(v11) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
          goto LABEL_24;
        }
        v20 = KeGetCurrentThread()->ApcState.Process;
        v21 = *(_KPROCESS **)(a1 + 8);
        if ( v20 != v21 )
          KiStackAttachProcess(v21, 0, (__int64)&v56);
        VirtualMemory = MmProtectVirtualMemory(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 8),
                          (int)a1 + 24,
                          (int)a1 + 32,
                          *(_DWORD *)(a1 + 48),
                          a1 + 48);
      }
      else
      {
        v20 = KeGetCurrentThread()->ApcState.Process;
        v26 = *(_KPROCESS **)(a1 + 8);
        if ( v20 != v26 )
          KiStackAttachProcess(v26, 0, (__int64)&v56);
        VirtualMemory = MmAllocateVirtualMemory(
                          (_DWORD)v26,
                          (int)a1 + 24,
                          *(_QWORD *)(a1 + 40),
                          (int)a1 + 32,
                          *(_DWORD *)(a1 + 48),
                          4);
      }
      LODWORD(RelatedActivityId) = VirtualMemory;
      if ( v20 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess(&v56, 0LL);
LABEL_57:
      *(_DWORD *)(a1 + 8) = (_DWORD)RelatedActivityId;
      return;
    }
    v27 = v5 - 18;
    if ( !v27 )
    {
      v31 = *(void **)(a1 + 24);
      if ( v31 )
        RelatedActivityId = VslIumEtwEnableCallback;
      *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), RelatedActivityId, v31, &RegHandle);
      *(_QWORD *)(a1 + 16) = RegHandle;
      return;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      goto LABEL_22;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      PartitionState = EtwSetInformation(
                         *(_QWORD *)(a1 + 8),
                         *(EVENT_INFO_CLASS *)(a1 + 16),
                         *(PVOID *)(a1 + 24),
                         *(_DWORD *)(a1 + 32));
      goto LABEL_22;
    }
    if ( v29 == 1 )
    {
      ActivityId = (const GUID *)(a1 + 32);
      if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
        ActivityId = 0LL;
      if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
        RelatedActivityId = (ETWENABLECALLBACK *)(a1 + 48);
      PartitionState = EtwWriteEx(
                         *(_QWORD *)(a1 + 8),
                         (PCEVENT_DESCRIPTOR)(a1 + 16),
                         0LL,
                         0,
                         ActivityId,
                         (LPCGUID)RelatedActivityId,
                         *(_DWORD *)(a1 + 64),
                         *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
      goto LABEL_22;
    }
    goto LABEL_118;
  }
  if ( v5 == 11 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 24);
    PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, 0LL, a1 + 16);
    goto LABEL_22;
  }
  if ( v5 > 6 )
  {
    v12 = v5 - 7;
    if ( !v12 )
    {
      LOBYTE(v11) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
      goto LABEL_24;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeLeaveCriticalRegion();
        return;
      }
      if ( v14 == 1 )
      {
        memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        *(_QWORD *)(a1 + 8) = 0LL;
        return;
      }
      goto LABEL_118;
    }
    PartitionState = KeWaitForAlertByThreadId(
                       *(_BYTE *)(a1 + 8),
                       (_QWORD *)((a1 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 16) >> 64)),
                       0LL);
LABEL_22:
    *(_QWORD *)(a1 + 8) = PartitionState;
    return;
  }
  if ( v5 == 6 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 24);
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v11) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
LABEL_24:
    v11 = (unsigned __int8)v11;
    goto LABEL_25;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    PartitionState = PspIumAllocatePhysicalPages(*(unsigned int *)(a1 + 8), *(_QWORD *)(a1 + 16), a1 + 16);
    goto LABEL_22;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8));
    return;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      PspIumGetPhysicalPage(a1);
      return;
    }
    if ( v9 == 1 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    goto LABEL_118;
  }
  v58[0] = *(_OWORD *)(a1 + 10);
  v58[1] = *(_OWORD *)(a1 + 26);
  v58[2] = *(_OWORD *)(a1 + 42);
  v58[3] = *(_OWORD *)(a1 + 58);
  v58[4] = *(_OWORD *)(a1 + 74);
  v59 = *(_QWORD *)(a1 + 90);
  v60 = *(_DWORD *)(a1 + 98);
  v61 = *(_WORD *)(a1 + 102);
  v62 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v58);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}

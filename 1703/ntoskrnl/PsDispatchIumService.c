/*
 * XREFs of PsDispatchIumService @ 0x140239D84
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KeAlertThreadByThreadId @ 0x140018540 (KeAlertThreadByThreadId.c)
 *     KeWaitForAlertByThreadId @ 0x1400448F8 (KeWaitForAlertByThreadId.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     MmLockLoadedModuleListExclusive @ 0x14006E01C (MmLockLoadedModuleListExclusive.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x14017E4C0 (ZwTerminateProcess.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     DbgkPostModuleMessage @ 0x1401E1D28 (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x1401E567C (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1401ECB60 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1401ECFCC (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x1401ED1E8 (VslHandleKsrCall.c)
 *     PspIumAllocatePhysicalPages @ 0x14023A554 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x14023A67C (PspIumFreePhysicalPages.c)
 *     PspMapView @ 0x14023A764 (PspMapView.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     DbgkForwardException @ 0x140423F54 (DbgkForwardException.c)
 *     MmUnmapViewOfSection @ 0x140479E90 (MmUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x14049C1F0 (MmMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1404C95A0 (DbgkMapViewOfSection.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     EtwSetInformation @ 0x1405892A0 (EtwSetInformation.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140681A78 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x140681BE8 (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x1406BD7B0 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x1406BF1BC (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x1406E4414 (PspIumGetPhysicalPage.c)
 *     PspIumGetProcessorInfo @ 0x1406E44E0 (PspIumGetProcessorInfo.c)
 *     PspIumGetSystemData @ 0x1406E4508 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x1406E4540 (PspIumVerifyParentSd.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  GUID *v4; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int PhysicalPages; // eax
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  void *v25; // r8
  __int64 v26; // rcx
  _KPROCESS *v27; // rbx
  _KPROCESS *v28; // rcx
  int v29; // esi
  _KPROCESS *Process; // rsi
  _KPROCESS *v31; // rcx
  NTSTATUS VirtualMemory; // eax
  _KPROCESS *v33; // rcx
  NTSTATUS v34; // ebx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  struct _MDL *v43; // rbx
  void *v44; // rcx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v46; // rbx
  const GUID *v47; // rcx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned __int64 v55; // rbx
  unsigned __int8 v56[8]; // [rsp+50h] [rbp-1D8h] BYREF
  ULONGLONG RegHandle[2]; // [rsp+58h] [rbp-1D0h] BYREF
  $5BC46E0569261879018906DEC3127961 v58; // [rsp+68h] [rbp-1C0h] BYREF
  _BYTE v59[272]; // [rsp+A0h] [rbp-188h] BYREF
  _OWORD v60[5]; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v61; // [rsp+200h] [rbp-28h]
  int v62; // [rsp+208h] [rbp-20h]
  __int16 v63; // [rsp+20Ch] [rbp-1Ch]
  char v64; // [rsp+20Eh] [rbp-1Ah]

  RegHandle[1] = a1;
  v4 = 0LL;
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
  if ( v5 > 0x14 )
  {
    if ( v5 <= 0x1E )
    {
      if ( v5 == 30 )
      {
        LOBYTE(a3) = *(_BYTE *)(a1 + 24);
        MmChangeKernelCfgBitmap(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a3);
        return;
      }
      v35 = v5 - 21;
      if ( !v35 )
      {
        PhysicalPages = EtwSetInformation(
                          *(_QWORD *)(a1 + 8),
                          *(EVENT_INFO_CLASS *)(a1 + 16),
                          *(PVOID *)(a1 + 24),
                          *(_DWORD *)(a1 + 32));
        goto LABEL_118;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        v47 = (const GUID *)(a1 + 32);
        if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
          v47 = 0LL;
        if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
          v4 = (GUID *)(a1 + 48);
        PhysicalPages = EtwWriteEx(
                          *(_QWORD *)(a1 + 8),
                          (PCEVENT_DESCRIPTOR)(a1 + 16),
                          0LL,
                          0,
                          v47,
                          v4,
                          *(_DWORD *)(a1 + 64),
                          *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
        goto LABEL_118;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        PhysicalPages = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
        goto LABEL_118;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        VslHandleKsrCall(a1);
        return;
      }
      v39 = v38 - 1;
      if ( !v39 )
      {
        PhysicalPages = HvlpDepositPages(0);
        goto LABEL_118;
      }
      v40 = v39 - 1;
      if ( !v40 )
      {
        *(_DWORD *)(a1 + 8) = VslAllocatePool(
                                *(_QWORD *)(a1 + 8),
                                *(_DWORD *)(a1 + 16),
                                (_QWORD *)(a1 + 16),
                                (_QWORD *)(a1 + 24),
                                (_QWORD *)(a1 + 32));
        return;
      }
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( !v42 )
        {
          PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
          v46 = PoolWithTag;
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
            if ( (v46->MdlFlags & 1) != 0 )
            {
              *(_QWORD *)(a1 + 8) = 0LL;
              *(_QWORD *)(a1 + 16) = v46;
              *(_QWORD *)(a1 + 24) = v46->MappedSystemVa;
              return;
            }
            ExFreePoolWithTag(v46, 0);
          }
          v15 = 3221225626LL;
LABEL_22:
          *(_QWORD *)(a1 + 8) = v15;
          return;
        }
        if ( v42 != 1 )
          goto LABEL_105;
        v43 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v43->MappedSystemVa, v43);
        v44 = v43;
      }
      else
      {
        v44 = (void *)VslFreePoolTransferObject(*(__int64 **)(a1 + 8), 0LL);
      }
      ExFreePoolWithTag(v44, 0);
      return;
    }
    v48 = v5 - 31;
    if ( !v48 )
    {
      PhysicalPages = MmMapViewOfSection(
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
      goto LABEL_118;
    }
    v49 = v48 - 1;
    if ( !v49 )
    {
      PhysicalPages = MmUnmapViewOfSection(PsSecureSystemProcess, *(_QWORD *)(a1 + 8));
      goto LABEL_118;
    }
    v50 = v49 - 1;
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( !v51 )
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
      v52 = v51 - 1;
      if ( !v52 )
      {
        DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
        return;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        PhysicalPages = PspMapView(a1);
        goto LABEL_118;
      }
      v54 = v53 - 1;
      if ( !v54 )
      {
        ObfDereferenceObject(*(PVOID *)(a1 + 8));
        return;
      }
      if ( v54 != 1 )
        goto LABEL_105;
      if ( *(_QWORD *)(a1 + 8) )
        KeFlushMultipleRangeTb((_KPROCESS *)1, a1 + 8, 0LL, 1LL);
      else
        KeFlushTb(0, 1u);
    }
    else if ( *(_QWORD *)(a1 + 8) )
    {
      MmLockLoadedModuleListExclusive(&v56);
    }
    else
    {
      v55 = *(unsigned __int8 *)(a1 + 16);
      ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
      __writecr8(v55);
    }
    return;
  }
  if ( v5 == 20 )
  {
    PhysicalPages = EtwUnregister(*(_QWORD *)(a1 + 8));
    goto LABEL_118;
  }
  if ( v5 <= 0xA )
  {
    if ( v5 == 10 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      KeLeaveCriticalRegion();
      return;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      PhysicalPages = PspIumAllocatePhysicalPages(*(unsigned int *)(a1 + 8), a1 + 16);
      goto LABEL_118;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      PspIumFreePhysicalPages(*(_QWORD *)(a1 + 8));
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
      v10 = v9 - 1;
      if ( !v10 )
      {
        PspIumGetSystemData(a1);
        return;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        PspIumGetProcessorInfo(a1);
        return;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            PhysicalPages = KeWaitForAlertByThreadId(
                              *(_BYTE *)(a1 + 8),
                              (_QWORD *)((a1 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 16) >> 64)),
                              0LL);
LABEL_118:
            v26 = PhysicalPages;
LABEL_119:
            *(_QWORD *)(a1 + 8) = v26;
            return;
          }
LABEL_105:
          LOBYTE(a3) = 1;
          PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
          return;
        }
        LOBYTE(v15) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
      }
      else
      {
        LOBYTE(a2) = *(_BYTE *)(a1 + 16);
        LOBYTE(v15) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2);
      }
LABEL_21:
      v15 = (unsigned __int8)v15;
      goto LABEL_22;
    }
    v60[0] = *(_OWORD *)(a1 + 10);
    v60[1] = *(_OWORD *)(a1 + 26);
    v60[2] = *(_OWORD *)(a1 + 42);
    v60[3] = *(_OWORD *)(a1 + 58);
    v60[4] = *(_OWORD *)(a1 + 74);
    v61 = *(_QWORD *)(a1 + 90);
    v62 = *(_DWORD *)(a1 + 98);
    v63 = *(_WORD *)(a1 + 102);
    v64 = 0;
    DbgPrintEx(
      0,
      0,
      "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
      *(unsigned __int16 *)(a1 + 8) >> 13,
      *(_DWORD *)(a1 + 4),
      (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
      (const char *)v60);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      __debugbreak();
    return;
  }
  v17 = v5 - 11;
  if ( !v17 )
  {
    memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
    *(_QWORD *)(a1 + 8) = 0LL;
    return;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 24);
    PhysicalPages = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, 0LL, a1 + 16);
    goto LABEL_118;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v33 = *(_KPROCESS **)(a1 + 8);
    if ( Process != v33 )
      KiStackAttachProcess(v33, 0, (__int64)&v58);
    VirtualMemory = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)(a1 + 24),
                      *(_QWORD *)(a1 + 40),
                      (PSIZE_T)(a1 + 32),
                      *(_DWORD *)(a1 + 48),
                      4u);
    goto LABEL_57;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v31 = *(_KPROCESS **)(a1 + 8);
    if ( Process != v31 )
      KiStackAttachProcess(v31, 0, (__int64)&v58);
    VirtualMemory = ZwFreeVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)(a1 + 24),
                      (PSIZE_T)(a1 + 32),
                      *(_DWORD *)(a1 + 48));
LABEL_57:
    v34 = VirtualMemory;
    if ( Process != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess(&v58, 0LL);
    *(_DWORD *)(a1 + 8) = v34;
    return;
  }
  v21 = v20 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
      {
        DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
        return;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        memset(v59, 0, sizeof(v59));
        PhysicalPages = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v59);
        goto LABEL_118;
      }
      if ( v24 == 1 )
      {
        v25 = *(void **)(a1 + 24);
        if ( v25 )
          v4 = (GUID *)VslIumEtwEnableCallback;
        v26 = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)v4, v25, RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle[0];
        goto LABEL_119;
      }
      goto LABEL_105;
    }
    LOBYTE(v15) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
    goto LABEL_21;
  }
  v27 = KeGetCurrentThread()->ApcState.Process;
  v28 = *(_KPROCESS **)(a1 + 8);
  if ( v27 != v28 )
    KiStackAttachProcess(v28, 0, (__int64)&v58);
  v29 = MmProtectVirtualMemory(
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(a1 + 8),
          (int)a1 + 24,
          (int)a1 + 32,
          *(_DWORD *)(a1 + 48),
          a1 + 48);
  if ( v27 != *(_KPROCESS **)(a1 + 8) )
    KiUnstackDetachProcess(&v58, 0LL);
  *(_DWORD *)(a1 + 8) = v29;
}

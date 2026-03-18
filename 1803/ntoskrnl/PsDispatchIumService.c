/*
 * XREFs of PsDispatchIumService @ 0x14015CBE4
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     KeAlertThreadByThreadId @ 0x140062644 (KeAlertThreadByThreadId.c)
 *     KeWaitForAlertByThreadId @ 0x140088D40 (KeWaitForAlertByThreadId.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     VslAllocatePool @ 0x14015CCC0 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x14015CD8C (VslFreePoolTransferObject.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1401A7A40 (ZwTerminateProcess.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     DbgkPostModuleMessage @ 0x140223554 (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     VslHandleKsrCall @ 0x14022FA70 (VslHandleKsrCall.c)
 *     PspIumAllocatePartitionState @ 0x1402850E4 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x140285238 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x14028542C (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x1402854F4 (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x14028562C (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x140285744 (PspMapView.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MmUnmapViewOfSection @ 0x1404D92F0 (MmUnmapViewOfSection.c)
 *     MmAllocateVirtualMemory @ 0x1404E8410 (MmAllocateVirtualMemory.c)
 *     DbgkMapViewOfSection @ 0x1404E91B8 (DbgkMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1404EA390 (MmMapViewOfSection.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     EtwSetInformation @ 0x140603DA0 (EtwSetInformation.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x1407115E8 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x140711758 (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x1407543C8 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x140755FFC (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x14077E714 (PspIumGetPhysicalPage.c)
 *     PspIumGetSystemData @ 0x14077E848 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x14077E880 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x14077FC80 (PsTerminateVsmEnclave.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  GUID *RelatedActivityId; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int PartitionState; // eax
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _KPROCESS *Process; // rbx
  _KPROCESS *v24; // rcx
  _KPROCESS *v25; // r14
  _KPROCESS *v26; // rcx
  int VirtualMemory; // eax
  bool v28; // zf
  _KPROCESS *v29; // r15
  _KPROCESS *v30; // rcx
  int v31; // ecx
  _QWORD *v32; // r9
  __int64 v33; // rax
  int v34; // ebx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  const GUID *ActivityId; // rcx
  void *v39; // r8
  unsigned int v40; // ecx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v42; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *v44; // rcx
  struct _MDL *v45; // rbx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned __int64 v49; // rbx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  char v58[8]; // [rsp+60h] [rbp-218h] BYREF
  __int64 v59; // [rsp+68h] [rbp-210h]
  _QWORD v60[2]; // [rsp+70h] [rbp-208h] BYREF
  int v61; // [rsp+80h] [rbp-1F8h]
  ULONGLONG RegHandle; // [rsp+88h] [rbp-1F0h] BYREF
  _QWORD v63[3]; // [rsp+90h] [rbp-1E8h] BYREF
  _BYTE v64[56]; // [rsp+A8h] [rbp-1D0h] BYREF
  _BYTE v65[272]; // [rsp+E0h] [rbp-198h] BYREF
  _OWORD v66[5]; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v67; // [rsp+240h] [rbp-38h]
  int v68; // [rsp+248h] [rbp-30h]
  __int16 v69; // [rsp+24Ch] [rbp-2Ch]
  char v70; // [rsp+24Eh] [rbp-2Ah]

  v59 = a1;
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
        DbgkPostModuleMessage(*(PVOID *)(a1 + 8), *(PVOID *)(a1 + 16), *(_DWORD *)(a1 + 40), *(PRKEVENT *)(a1 + 48));
        return;
      }
      if ( v5 <= 0x1C )
      {
        if ( v5 == 28 )
        {
          v45 = *(struct _MDL **)(a1 + 8);
          MmUnmapLockedPages(v45->MappedSystemVa, v45);
          v44 = v45;
          goto LABEL_102;
        }
        v6 = v5 - 23;
        if ( !v6 )
        {
          VslHandleKsrCall(a1);
          return;
        }
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            *(_DWORD *)(a1 + 8) = VslAllocatePool(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), a1 + 32);
            return;
          }
          v40 = v8 - 1;
          if ( v40 )
          {
            if ( v40 == 1 )
            {
              PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
              v42 = PoolWithTag;
              if ( PoolWithTag )
              {
                PoolWithTag->Next = 0LL;
                *(_DWORD *)&PoolWithTag->Size = 56;
                PoolWithTag->StartVa = 0LL;
                *(_QWORD *)&PoolWithTag->ByteCount = 4096LL;
                PoolWithTag[1].Next = *(struct _MDL **)(a1 + 8);
                PoolWithTag->MdlFlags |= 2u;
                MdlFlags = PoolWithTag->MdlFlags;
                if ( (MdlFlags & 5) == 0 )
                {
                  MmMapLockedPagesSpecifyCache(v42, 0, MmCached, 0LL, 0, 0x40000010u);
                  MdlFlags = v42->MdlFlags;
                }
                if ( (MdlFlags & 1) != 0 )
                {
                  *(_QWORD *)(a1 + 8) = 0LL;
                  *(_QWORD *)(a1 + 16) = v42;
                  *(_QWORD *)(a1 + 24) = v42->MappedSystemVa;
                  return;
                }
                ExFreePoolWithTag(v42, 0);
              }
              v14 = 3221225626LL;
LABEL_38:
              *(_QWORD *)(a1 + 8) = v14;
              return;
            }
LABEL_124:
            LOBYTE(a3) = 1;
            PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
            return;
          }
          v44 = (struct _MDL *)VslFreePoolTransferObject(*(PVOID *)(a1 + 8));
LABEL_102:
          ExFreePoolWithTag(v44, 0);
          return;
        }
        PartitionState = HvlpDepositPages(0LL);
LABEL_32:
        *(_QWORD *)(a1 + 8) = PartitionState;
        return;
      }
      v46 = v5 - 29;
      if ( !v46 )
      {
        LOBYTE(a3) = *(_BYTE *)(a1 + 24);
        MmChangeKernelCfgBitmap(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a3);
        return;
      }
      v47 = v46 - 1;
      if ( !v47 )
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
                           0x40000,
                           2);
        goto LABEL_32;
      }
      v48 = v47 - 1;
      if ( !v48 )
      {
        PartitionState = MmUnmapViewOfSection(PsSecureSystemProcess, *(_QWORD *)(a1 + 8));
        goto LABEL_32;
      }
      if ( v48 != 1 )
        goto LABEL_124;
      if ( *(_QWORD *)(a1 + 8) )
      {
        MmLockLoadedModuleListExclusive(&v58);
      }
      else
      {
        v49 = *(unsigned __int8 *)(a1 + 16);
        ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
        __writecr8(v49);
      }
      return;
    }
    v50 = v5 - 34;
    if ( !v50 )
    {
      DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
      return;
    }
    v51 = v50 - 1;
    if ( !v51 )
    {
      PartitionState = PspMapView(a1);
      goto LABEL_32;
    }
    v52 = v51 - 1;
    if ( !v52 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 8));
      return;
    }
    v53 = v52 - 1;
    if ( !v53 )
    {
      if ( *(_QWORD *)(a1 + 8) )
        KeFlushMultipleRangeTb(1u, (_QWORD *)(a1 + 8), 0, 1u);
      else
        KeFlushTb(0, 1u);
      return;
    }
    v54 = v53 - 1;
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( !v55 )
      {
        KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
        return;
      }
      v56 = v55 - 1;
      if ( !v56 )
      {
        if ( !*(_QWORD *)(a1 + 8) )
        {
          PspIumFreePartitionState(*(PVOID *)(a1 + 16));
          return;
        }
        PartitionState = PspIumAllocatePartitionState(a1);
        goto LABEL_32;
      }
      v57 = v56 - 1;
      if ( v57 )
      {
        if ( v57 == 1 )
        {
          PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
          return;
        }
        goto LABEL_124;
      }
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
        *(_QWORD *)(a1 + 24) = 1LL;
      return;
    }
    v61 = 0;
LABEL_60:
    *(_DWORD *)(a1 + 8) = (_DWORD)RelatedActivityId;
    return;
  }
  if ( v5 == 22 )
  {
    PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
    goto LABEL_32;
  }
  if ( v5 <= 0xB )
  {
    if ( v5 == 11 )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 24);
      PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, 0LL, a1 + 16);
      goto LABEL_32;
    }
    if ( v5 > 6 )
    {
      v15 = v5 - 7;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            KeLeaveCriticalRegion();
            return;
          }
          if ( v17 == 1 )
          {
            memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
            *(_QWORD *)(a1 + 8) = 0LL;
            return;
          }
          goto LABEL_124;
        }
        PartitionState = KeWaitForAlertByThreadId(
                           *(_BYTE *)(a1 + 8),
                           (_QWORD *)((a1 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 16) >> 64)),
                           0LL);
        goto LABEL_32;
      }
      LOBYTE(v14) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8), a2);
    }
    else
    {
      if ( v5 != 6 )
      {
        v9 = v5 - 1;
        if ( !v9 )
        {
          PartitionState = PspIumAllocatePhysicalPages(*(unsigned int *)(a1 + 8), *(_QWORD *)(a1 + 16), a1 + 16);
          goto LABEL_32;
        }
        v10 = v9 - 1;
        if ( !v10 )
        {
          PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8));
          return;
        }
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            PspIumGetPhysicalPage(a1);
            return;
          }
          if ( v12 == 1 )
          {
            PspIumGetSystemData(a1);
            return;
          }
          goto LABEL_124;
        }
        v66[0] = *(_OWORD *)(a1 + 10);
        v66[1] = *(_OWORD *)(a1 + 26);
        v66[2] = *(_OWORD *)(a1 + 42);
        v66[3] = *(_OWORD *)(a1 + 58);
        v66[4] = *(_OWORD *)(a1 + 74);
        v67 = *(_QWORD *)(a1 + 90);
        v68 = *(_DWORD *)(a1 + 98);
        v69 = *(_WORD *)(a1 + 102);
        v70 = 0;
        DbgPrintEx(
          0,
          0,
          "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
          *(unsigned __int16 *)(a1 + 8) >> 13,
          *(_DWORD *)(a1 + 4),
          (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
          (const char *)v66);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          __debugbreak();
        return;
      }
      LOBYTE(a3) = *(_BYTE *)(a1 + 24);
      LOBYTE(a2) = *(_BYTE *)(a1 + 16);
      LOBYTE(v14) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
    }
    goto LABEL_35;
  }
  if ( v5 <= 0x11 )
  {
    if ( v5 == 17 )
    {
      memset(v65, 0, sizeof(v65));
      PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v65);
      goto LABEL_32;
    }
    v19 = v5 - 12;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v24 = *(_KPROCESS **)(a1 + 8);
          if ( Process != v24 )
          {
            KiStackAttachProcess(v24, 0, (__int64)v64);
            v24 = *(_KPROCESS **)(a1 + 8);
          }
          LODWORD(RelatedActivityId) = MmProtectVirtualMemory(
                                         *(_QWORD *)(a1 + 16),
                                         (_DWORD)v24,
                                         (int)a1 + 24,
                                         (int)a1 + 32,
                                         *(_DWORD *)(a1 + 40),
                                         a1 + 40);
          if ( Process != *(_KPROCESS **)(a1 + 8) )
            KiUnstackDetachProcess((__int64)v64, 0LL);
          goto LABEL_60;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
            return;
          }
          goto LABEL_124;
        }
        LOBYTE(v14) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
LABEL_35:
        v14 = (unsigned __int8)v14;
        goto LABEL_38;
      }
      v25 = KeGetCurrentThread()->ApcState.Process;
      v26 = *(_KPROCESS **)(a1 + 8);
      if ( v25 != v26 )
        KiStackAttachProcess(v26, 0, (__int64)v64);
      VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
      v28 = v25 == *(_KPROCESS **)(a1 + 8);
    }
    else
    {
      v29 = KeGetCurrentThread()->ApcState.Process;
      v30 = *(_KPROCESS **)(a1 + 8);
      if ( v29 != v30 )
        KiStackAttachProcess(v30, 0, (__int64)v64);
      v31 = 0;
      v32 = 0LL;
      v33 = *(_QWORD *)(a1 + 48);
      if ( v33 || *(_QWORD *)(a1 + 56) )
      {
        v60[0] = 1LL;
        v60[1] = v63;
        v63[1] = 0LL;
        v63[0] = v33;
        v63[2] = *(_QWORD *)(a1 + 56);
        v31 = 1;
        v32 = v60;
      }
      VirtualMemory = MmAllocateVirtualMemory(
                        -1,
                        (int)a1 + 24,
                        (int)a1 + 32,
                        *(_DWORD *)(a1 + 40),
                        4,
                        v32,
                        v31,
                        0,
                        0x10000000,
                        0,
                        0LL);
      v28 = v29 == *(_KPROCESS **)(a1 + 8);
    }
    v34 = VirtualMemory;
    if ( !v28 )
      KiUnstackDetachProcess((__int64)v64, 0LL);
    *(_DWORD *)(a1 + 8) = v34;
    return;
  }
  v35 = v5 - 18;
  if ( v35 )
  {
    v36 = v35 - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        if ( v37 != 1 )
          goto LABEL_124;
        ActivityId = (const GUID *)(a1 + 32);
        if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
          ActivityId = 0LL;
        if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
          RelatedActivityId = (GUID *)(a1 + 48);
        PartitionState = EtwWriteEx(
                           *(_QWORD *)(a1 + 8),
                           (PCEVENT_DESCRIPTOR)(a1 + 16),
                           0LL,
                           0,
                           ActivityId,
                           RelatedActivityId,
                           *(_DWORD *)(a1 + 64),
                           *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
      }
      else
      {
        PartitionState = EtwSetInformation(
                           *(_QWORD *)(a1 + 8),
                           *(EVENT_INFO_CLASS *)(a1 + 16),
                           *(PVOID *)(a1 + 24),
                           *(_DWORD *)(a1 + 32));
      }
    }
    else
    {
      PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
    }
    goto LABEL_32;
  }
  v39 = *(void **)(a1 + 24);
  if ( v39 )
    RelatedActivityId = (GUID *)VslIumEtwEnableCallback;
  *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)RelatedActivityId, v39, &RegHandle);
  *(_QWORD *)(a1 + 16) = RegHandle;
}

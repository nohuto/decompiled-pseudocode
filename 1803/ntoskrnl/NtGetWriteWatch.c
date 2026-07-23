/*
 * XREFs of NtGetWriteWatch @ 0x140024440
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiUnlockVadCore @ 0x1400AE264 (MiUnlockVadCore.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14057B220 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 */

NTSTATUS __stdcall NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  int v10; // r13d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _BYTE *PoolWithQuotaTag; // rcx
  int v20; // ebx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 k; // r8
  __int64 **i; // r12
  unsigned __int64 v27; // rsi
  __int64 v28; // r14
  unsigned __int8 v29; // al
  LONG *v30; // r14
  unsigned __int8 v31; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v34; // ett
  LONG *v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 j; // rcx
  unsigned __int16 *AnyMultiplexedVm; // r15
  int v39; // eax
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rdx
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdi
  int v49; // eax
  volatile signed __int32 *v50; // rsi
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  int v53; // edi
  char *v54; // rsi
  BOOL v55; // r12d
  struct _KTHREAD *v56; // r14
  ULONG_PTR v57; // r15
  struct _KTHREAD *v58; // rdi
  unsigned int SessionId; // r10d
  _KLOCK_ENTRY *v60; // rsi
  unsigned int v61; // r8d
  bool v62; // zf
  __int64 v63; // rcx
  __int64 v64; // rcx
  _KLOCK_ENTRY *v65; // rdx
  unsigned __int8 v66; // al
  _BYTE *v67; // rsi
  unsigned __int64 v68; // rbx
  __int64 *v69; // rcx
  unsigned __int64 v70; // r14
  unsigned __int64 v71; // rdx
  __int64 v72; // r9
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // rdx
  __int64 v75; // r15
  __int64 v76; // rax
  int v77; // eax
  __int64 *v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // r8
  int v85; // eax
  int v86; // [rsp+40h] [rbp-AA8h] BYREF
  ULONG v87; // [rsp+44h] [rbp-AA4h]
  int v88; // [rsp+48h] [rbp-AA0h] BYREF
  __int64 v89; // [rsp+50h] [rbp-A98h]
  void *Src; // [rsp+58h] [rbp-A90h]
  unsigned __int64 v91; // [rsp+60h] [rbp-A88h]
  __int64 v92; // [rsp+68h] [rbp-A80h]
  char *v93; // [rsp+70h] [rbp-A78h]
  __int64 CurrentIrql; // [rsp+78h] [rbp-A70h]
  unsigned __int64 v95; // [rsp+80h] [rbp-A68h]
  __int64 *v96; // [rsp+88h] [rbp-A60h]
  unsigned __int64 v97; // [rsp+90h] [rbp-A58h]
  PVOID Object; // [rsp+98h] [rbp-A50h] BYREF
  int v99; // [rsp+A0h] [rbp-A48h] BYREF
  int v100; // [rsp+A4h] [rbp-A44h] BYREF
  int v101; // [rsp+A8h] [rbp-A40h]
  PVOID P; // [rsp+B0h] [rbp-A38h]
  __int64 v103; // [rsp+B8h] [rbp-A30h] BYREF
  unsigned __int64 v104; // [rsp+C0h] [rbp-A28h]
  __int64 v105; // [rsp+C8h] [rbp-A20h]
  __int64 v106; // [rsp+D0h] [rbp-A18h] BYREF
  HANDLE v107; // [rsp+D8h] [rbp-A10h]
  void *v108; // [rsp+E0h] [rbp-A08h]
  PULONG_PTR v109; // [rsp+E8h] [rbp-A00h]
  PULONG v110; // [rsp+F0h] [rbp-9F8h]
  _QWORD v111[22]; // [rsp+100h] [rbp-9E8h] BYREF
  int v112; // [rsp+1B0h] [rbp-938h] BYREF
  __int16 v113; // [rsp+1B4h] [rbp-934h]
  __int64 v114; // [rsp+1B8h] [rbp-930h]
  __int64 v115; // [rsp+1C0h] [rbp-928h]
  __int64 v116; // [rsp+1C8h] [rbp-920h]
  _BYTE v117[48]; // [rsp+270h] [rbp-878h] BYREF
  _BYTE v118[2048]; // [rsp+2A0h] [rbp-848h] BYREF
  void *retaddr; // [rsp+AE8h] [rbp+0h]

  v87 = Flags;
  v107 = ProcessHandle;
  v108 = UserAddressArray;
  v109 = EntriesInUserAddressArray;
  v110 = Granularity;
  v114 = 20LL;
  v10 = 1;
  v112 = 1;
  v113 = 0;
  v115 = 0LL;
  v116 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
      return -1073741583;
    if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v14 = (__int64)EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = *EntriesInUserAddressArray;
    v97 = v15;
    if ( !v15 )
      return -1073741581;
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v15, 8u);
    v16 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = v97;
  }
  else
  {
    v17 = *EntriesInUserAddressArray;
    v97 = *EntriesInUserAddressArray;
  }
  PoolWithQuotaTag = v118;
  Src = v118;
  if ( v17 > 0x100 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8 * v17, 0x63476D4Du);
    Src = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
  }
  v92 = 0LL;
  v96 = (__int64 *)PoolWithQuotaTag;
  P = 0LL;
  v20 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    v53 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    v86 = v53;
    if ( v53 < 0 )
    {
LABEL_227:
      v67 = Src;
      goto LABEL_121;
    }
  }
  v95 = 0LL;
  v21 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v21 )
  {
    v53 = -1073741582;
LABEL_224:
    v86 = v53;
    goto LABEL_82;
  }
  if ( Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v117);
    v20 = 1;
  }
  v93 = (char *)Object + 1280;
  v22 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v86);
  v91 = v24;
  if ( !v24 )
  {
    v53 = v86;
    v10 = 1;
    if ( v86 != -1073741664 )
      goto LABEL_82;
    goto LABEL_223;
  }
  P = (PVOID)v24;
  if ( (*(_DWORD *)(v24 + 48) & 7) != 4
    || v21 > (((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12) | 0xFFF) )
  {
    v10 = 1;
LABEL_223:
    v53 = -1073741585;
    goto LABEL_224;
  }
  for ( i = *(__int64 ***)(v24 + 56); i; i = (__int64 **)*i )
  {
    if ( ((_DWORD)i[8] & 4) != 0 )
      break;
  }
  v27 = ((unsigned __int64)BaseAddress >> 12)
      - (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32));
  v28 = (__int64)v93;
  v29 = v93[184] & 7;
  if ( v29 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  else
  {
    if ( v29 == 2 )
      v30 = &dword_1403CCD40;
    else
      v30 = (LONG *)(v93 + 192);
    v31 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v30, v31);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v77 = SchedulerAssist[5];
          SchedulerAssist[5] = v77 + 1;
          if ( v77 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v30);
      v34 = *v30 & 0x7FFFFFFF;
      if ( v34 != _InterlockedCompareExchange(v30, v34 + 1, v34) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        ExpWaitForSpinLockSharedAndAcquire(v30, v31);
      }
    }
    if ( v30[1] )
      _InterlockedExchange(v30 + 1, 0);
    LOBYTE(CurrentIrql) = v31;
    v28 = (__int64)v93;
  }
  if ( v22 > v23 )
    goto LABEL_68;
  v89 = 0LL;
  v105 = (__int64)(v23 << 25) >> 16;
  do
  {
    if ( v92 )
    {
      MiFlushTbList(&v112);
      MiUnlockPageTableInternal(v28, v92);
      v92 = 0LL;
    }
    if ( (*(_BYTE *)(v28 + 184) & 7) == 2 )
      v35 = &dword_1403CCD40;
    else
      v35 = (LONG *)(v28 + 192);
    if ( (*v35 & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared(v28, CurrentIrql, k);
      MiLockWorkingSetShared(v28);
    }
    v103 = 0LL;
    v104 = 0LL;
    memset(v111, 0, sizeof(v111));
    v36 = (__int64)((v22 << 25) - v89) >> 16;
    LODWORD(v111[0]) = 2273;
    for ( j = v36; j >= 0xFFFFF68000000000uLL; j = (__int64)((j << 25) - v89) >> 16 )
    {
      if ( j > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( j < 0xFFFF800000000000uLL || j >= qword_1403CD100 && j <= qword_1403CBB70 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    else
      AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
    v39 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v36);
    if ( v39 )
    {
      LODWORD(v103) = v39 - 1;
      v40 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v104 = v40;
    }
    else
    {
      LODWORD(v111[0]) |= 4u;
      v111[2] = 0LL;
      v111[21] = &v103;
      BYTE2(v111[1]) = 1;
      v111[20] = MiGetNextPageTableTail;
      v111[3] = AnyMultiplexedVm;
      BYTE4(v111[0]) = CurrentIrql;
      v111[4] = v36;
      v111[5] = v105;
      MiWalkPageTables((int *)v111);
      v40 = v104;
    }
    if ( v40 )
      v92 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    else
      v40 = v23 + 8;
    v20 |= 8u;
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v41 = v91;
    v42 = *(_DWORD *)(v91 + 48);
    do
    {
      while ( v42 < 0 )
      {
        if ( (v42 & 0x40000000) != 0 )
        {
          v99 = 0;
          do
          {
            KeYieldProcessorEx(&v99);
            v41 = v91;
            v42 = *(_DWORD *)(v91 + 48);
          }
          while ( v42 < 0 );
        }
        else
        {
          v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 48), v42 | 0x40000000, v42);
        }
      }
      v43 = v42;
      v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 48), v42 & 0x3FFFFFFF | 0x80000000, v42);
    }
    while ( v43 != v42 );
    for ( k = v89; v22 != v40; v22 += 8LL )
    {
      if ( _bittest64(i[2], v27) == 1 )
      {
        if ( (v87 & 1) != 0 )
          _bittestandreset64(i[2], v27);
        v78 = v96;
        *v96 = (__int64)((v22 << 25) - k) >> 16;
        v96 = v78 + 1;
        if ( ++v95 == v97 )
          goto LABEL_68;
      }
      ++v27;
    }
    if ( v22 > v23 )
      goto LABEL_67;
    do
    {
      v44 = *(_QWORD *)v22;
      if ( v22 >= 0xFFFFF6FB7DBED000uLL
        && v22 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v44 & 1) != 0
        && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
      {
        v79 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v79 )
        {
          v80 = *(_QWORD *)(v79 + 8 * ((v22 >> 3) & 0x1FF));
          v81 = v44 | 0x20;
          if ( (v80 & 0x20) == 0 )
            v81 = *(_QWORD *)v22;
          v44 = v81;
          if ( (v80 & 0x42) != 0 )
            v44 = v81 | 0x42;
        }
      }
      v106 = v44;
      v20 &= 0xFFFFFFF9;
      if ( _bittest64(i[2], v27) == 1 )
      {
        v20 |= 4u;
        if ( (v87 & 1) != 0 )
        {
          _bittestandreset64(i[2], v27);
          if ( (v44 & 1) != 0 && (v44 & 0x42) != 0 )
LABEL_127:
            v20 |= 2u;
        }
      }
      else if ( (v44 & 1) != 0 && (v44 & 0x42) != 0 )
      {
        v20 |= 4u;
        if ( (v87 & 1) != 0 )
          goto LABEL_127;
      }
      if ( (v20 & 2) != 0 )
      {
        v70 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( MiPteInShadowRange(v22)
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v71 & 1) != 0
          && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
        {
          v82 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v82 )
          {
            v83 = *(_QWORD *)(v82 + 8 * ((v22 >> 3) & 0x1FF));
            v84 = v71 | 0x20;
            if ( (v83 & 0x20) == 0 )
              v84 = v71;
            v71 = v84;
            if ( (v83 & 0x42) != 0 )
              v71 = v84 | 0x42;
          }
        }
        v74 = v72 & 0x80FFFFFFFFFFFFBDuLL | ((unsigned __int64)(HIBYTE(v71) & 0xF) << 56) & 0x8FFFFFFFFFFFFFFFuLL | (((v71 >> 60) & 7) << 60);
        *(_QWORD *)v22 = v74;
        if ( v22 >= v73 && v22 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v22, v74);
        MiInsertTbFlushEntry(&v112, (__int64)((v22 << 25) - v89) >> 16, 1LL, 0LL);
        v75 = 0LL;
        v100 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v100);
          while ( *(__int64 *)(v70 + 24) < 0 );
        }
        v76 = MiCaptureDirtyBitToPfn(v70);
        if ( v76 )
          v75 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v70 + 40) >> 40) & 0x3FFLL));
        _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v76 )
          MiReleasePageFileInfo(v75, v76, 1LL);
        k = v89;
      }
      if ( (v20 & 4) != 0 )
      {
        v69 = v96;
        *v96 = (__int64)((v22 << 25) - k) >> 16;
        v96 = v69 + 1;
        if ( ++v95 == v97 )
          goto LABEL_68;
      }
      ++v27;
      v22 += 8LL;
    }
    while ( (v22 & 0xFFF) != 0 && v22 <= v23 );
    v41 = v91;
LABEL_67:
    _InterlockedAnd((volatile signed __int32 *)(v41 + 48), 0x3FFFFFFFu);
    __writecr8(2uLL);
    v20 &= ~8u;
    v28 = (__int64)v93;
  }
  while ( v22 <= v23 );
LABEL_68:
  MiFlushTbList(&v112);
  if ( (v20 & 8) != 0 )
  {
    LOBYTE(v45) = 2;
    MiUnlockVadCore(v91, v45, v46, v47);
  }
  v48 = (__int64)v93;
  if ( v92 )
    MiUnlockPageTableInternal(v93, v92);
  if ( (*(_BYTE *)(v48 + 184) & 7u) > 5 )
  {
    v10 = 1;
  }
  else
  {
    v49 = *(_DWORD *)(v48 + 184);
    if ( (v49 & 0x8000000) != 0 || (v49 & 0x4000000) != 0 || (v49 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(v48, (unsigned __int8)CurrentIrql, v46);
      LOBYTE(v49) = *(_BYTE *)(v48 + 184);
    }
    if ( (v49 & 7) == 2 )
      v50 = &dword_1403CCD40;
    else
      v50 = (volatile signed __int32 *)(v48 + 192);
    v10 = 1;
    MiCheckProcessShadow(v48, 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v50, retaddr);
    }
    else
    {
      _InterlockedAnd(v50, 0xBFFFFFFF);
      _InterlockedDecrement(v50);
    }
    v51 = KeGetCurrentPrcb();
    v52 = v51->SchedulerAssist;
    if ( v52 )
    {
      if ( v51->NestingLevel <= 1u )
      {
        v85 = v52[5] - 1;
        v52[5] = v85;
        if ( !v85 && !*((_BYTE *)v52 + 25) && !*((_BYTE *)v52 + 27) )
          KiPerformUnboostKick(v51);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  v53 = 0;
  v86 = 0;
LABEL_82:
  v54 = (char *)P;
  if ( P )
  {
    v55 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1
       && (*((_DWORD *)v54 + 12) & 0x20000000) != 0;
    v56 = KeGetCurrentThread();
    LOBYTE(v56[1].Queue) &= ~0x80u;
    v57 = (ULONG_PTR)(v54 + 40);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v54 + 40);
    v88 = 0;
    v58 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v54 + 40) == 1 )
      SessionId = MmGetSessionIdEx(v58->ApcState.Process);
    else
      SessionId = -1;
    --v58->SpecialApcDisable;
    if ( ++v58->AbAllocationRegionCount != 1 )
      v10 = 0;
    v60 = 0LL;
    v61 = ((char)v58->AbEntrySummary | (char)v58->AbOrphanedEntrySummary) ^ 0x3F;
    v62 = !_BitScanReverse((unsigned int *)&v63, v61);
    v101 = v63;
    if ( !v62 )
    {
      while ( 1 )
      {
        v61 &= ~(1 << v63);
        v64 = v63;
        v65 = &v58->LockEntries[v64];
        if ( (v65->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v65->LockState.0 & 1) == 0
          && (*(_QWORD *)&v65->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v57 & 0x7FFFFFFFFFFFFFFCLL)
          && v65->LockState.SessionId == SessionId )
        {
          v65->AcquiredByte &= ~1u;
          if ( v65->LockState.0 )
            break;
        }
        v62 = !_BitScanReverse((unsigned int *)&v63, v61);
        v101 = v63;
        if ( v62 )
          goto LABEL_99;
      }
      v60 = &v58->LockEntries[v64];
    }
LABEL_99:
    if ( v60 )
    {
      v60->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v60->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v60->TreeNode);
      v88 = 0;
      v88 = v60->BoostBitmap.AllFields & 0x1FFFF;
      v60->BoostBitmap.AllFields &= 0xFFFE0000;
      v60->ThreadLocalFlags &= ~1u;
      v60->LockState.0 = 0LL;
      v66 = 1 << (((char *)v60 - (char *)v58 - 800) / 96);
      if ( v10 )
        v58->AbEntrySummary |= v66;
      else
        _InterlockedOr8((volatile signed __int8 *)&v58->AbOrphanedEntrySummary, v66);
    }
    else if ( (*((_DWORD *)&v58->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)v58, v57, SessionId, 0LL);
    }
    --v58->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v58, v57, &v88);
    v62 = v58->SpecialApcDisable++ == -1;
    if ( v62 && ($005F0E83B22994B61E86C72E0CE43C71 *)v58->ApcState.ApcListHead[0].Flink != &v58->152 )
      KiCheckForKernelApcDelivery();
    v62 = v56->SpecialApcDisable++ == -1;
    if ( v62 && ($005F0E83B22994B61E86C72E0CE43C71 *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
      KiCheckForKernelApcDelivery();
    if ( v55 )
      ExFreePoolWithTag(P, 0);
    v53 = v86;
  }
  if ( (v20 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v117, 0LL);
  if ( v107 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( v53 )
    goto LABEL_227;
  v67 = Src;
  if ( v108 )
  {
    v68 = v95;
    memmove(v108, Src, 8 * v95);
    *v109 = v68;
  }
  *v110 = 4096;
LABEL_121:
  if ( v67 != v118 )
    ExFreePoolWithTag(v67, 0);
  return v53;
}

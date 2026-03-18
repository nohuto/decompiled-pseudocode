/*
 * XREFs of MmRotatePhysicalView @ 0x1405BACA0
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     MmSizeOfMdl @ 0x1400B9140 (MmSizeOfMdl.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MiDeleteRotateAndStopFaults @ 0x1400D0A74 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x1400D1034 (MiRotateComplete.c)
 *     MiIsPfn @ 0x140106380 (MiIsPfn.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiLegitimatePageForDriversToMap @ 0x140137038 (MiLegitimatePageForDriversToMap.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x14013A248 (MiSanitizePage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MiMarkMdlComplete @ 0x1402582B8 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x140258394 (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x14074D210 (MiLogVirtualRotateEvent.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  struct _MDL *v6; // r12
  unsigned __int64 v7; // r13
  NTSTATUS v8; // r15d
  void *v9; // rsi
  SIZE_T v10; // r14
  unsigned __int64 v11; // rax
  unsigned int v12; // r10d
  SIZE_T v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rdx
  unsigned int i; // edi
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  int v19; // r10d
  NTSTATUS v20; // ebx
  __int64 v21; // rdi
  SIZE_T v22; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29; // r12d
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r14d
  PSIZE_T v34; // r13
  unsigned __int64 *v35; // r12
  __int64 v36; // r9
  SIZE_T v37; // rax
  struct _MDL *v38; // rsi
  SIZE_T v39; // rax
  CSHORT v40; // r14
  __int64 v41; // rdi
  PVOID v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 ByteCount; // rcx
  PMDL v47; // r14
  char *v48; // rax
  unsigned __int64 *j; // r14
  int v50; // [rsp+40h] [rbp-268h]
  PSIZE_T v51; // [rsp+48h] [rbp-260h]
  unsigned int v52; // [rsp+50h] [rbp-258h]
  int v53; // [rsp+50h] [rbp-258h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-250h]
  PMDL MemoryDescriptorLista; // [rsp+58h] [rbp-250h]
  MM_ROTATE_DIRECTION v56; // [rsp+60h] [rbp-248h]
  __int64 v57; // [rsp+68h] [rbp-240h]
  unsigned __int64 *v58; // [rsp+68h] [rbp-240h]
  NTSTATUS v59; // [rsp+70h] [rbp-238h] BYREF
  PVOID v60; // [rsp+78h] [rbp-230h]
  PVOID P; // [rsp+80h] [rbp-228h]
  PMDL v62; // [rsp+88h] [rbp-220h]
  ULONG_PTR v63; // [rsp+90h] [rbp-218h]
  unsigned __int64 v64; // [rsp+98h] [rbp-210h]
  __int64 ProcessPartition; // [rsp+A0h] [rbp-208h]
  PVOID v66; // [rsp+A8h] [rbp-200h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v67; // [rsp+B0h] [rbp-1F8h]
  PSIZE_T v68; // [rsp+B8h] [rbp-1F0h]
  unsigned __int64 v69[4]; // [rsp+C0h] [rbp-1E8h] BYREF
  _BYTE v70[192]; // [rsp+E0h] [rbp-1C8h] BYREF
  _BYTE v71[192]; // [rsp+1A0h] [rbp-108h] BYREF

  v56 = Direction;
  v6 = NewMdl;
  v51 = NumberOfBytes;
  v7 = (unsigned __int64)VirtualAddress;
  v68 = NumberOfBytes;
  v62 = NewMdl;
  v67 = CopyFunction;
  v66 = Context;
  v8 = 0;
  v9 = 0LL;
  v50 = 0;
  v10 = *NumberOfBytes;
  P = (PVOID)*NumberOfBytes;
  v63 = 0LL;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v20 = -1073741585;
LABEL_33:
    v33 = 0;
    v34 = NumberOfBytes;
    goto LABEL_34;
  }
  if ( (v10 & 0xFFF) != 0 )
  {
LABEL_42:
    v20 = -1073741584;
    goto LABEL_33;
  }
  if ( Direction >= MmMaximumRotateDirection )
  {
    v20 = -1073741583;
    goto LABEL_33;
  }
  v64 = (unsigned __int64)VirtualAddress + v10 - 1;
  if ( v64 <= (unsigned __int64)VirtualAddress )
    goto LABEL_42;
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v11 = MiObtainReferencedVadEx(v7, 0, &v59);
    v9 = (void *)v11;
    v60 = (PVOID)v11;
    if ( !v11 )
    {
      v20 = v59;
      v33 = 0;
      v34 = v51;
      if ( v59 == -1073741664 )
        v20 = -1073741819;
      goto LABEL_34;
    }
    NewMdl = (PMDL)*(unsigned int *)(v11 + 48);
    if ( (*(_BYTE *)(v11 + 48) & 7) != 6
      || (*(_QWORD *)&Direction = v64,
          (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) < v64 >> 12) )
    {
      v20 = -1073741800;
      goto LABEL_48;
    }
    NumberOfBytes = (PSIZE_T)((unsigned __int8)NewMdl >> 6);
    if ( ((unsigned __int8)NewMdl & 0x38) != 0 && (_DWORD)NumberOfBytes == 3 )
      v12 = 2;
    else
      v12 = (_DWORD)NumberOfBytes != 1;
    v52 = v12;
    v13 = v10;
    v57 = v10;
    v14 = v10 >> 12;
    MemoryDescriptorList = (PMDL)(v10 >> 12);
    if ( v56 <= MmToFrameBufferNoCopy )
    {
      if ( v10 <= 0xFFFFFFFF )
      {
        v15 = (unsigned __int64 *)&v6[1];
        for ( i = 0; ; ++i )
        {
          v58 = v15;
          if ( i >= v14 )
            break;
          if ( MiIsPfn(*v15) )
          {
            v20 = MiLegitimatePageForDriversToMap(48 * v17 - 0x58000000000LL);
            if ( v20 < 0 )
            {
              v33 = v50;
              v34 = v51;
              goto LABEL_34;
            }
          }
          else
          {
            v18 = MiSanitizePage(v17);
            v20 = MiReferenceIoPages(1, v18, 1LL, v19, 0LL, 0LL);
            if ( v20 < 0 )
              goto LABEL_55;
            ++v50;
          }
          v15 = v58 + 1;
          v14 = v10 >> 12;
        }
        v21 = ProcessPartition;
        if ( (unsigned int)MiChargeCommit(ProcessPartition, v14, 0) )
        {
          v22 = MmSizeOfMdl((PVOID)v7, v10);
          PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x6F666E49u);
          v24 = PoolWithTag;
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag->Next = 0LL;
            PoolWithTag->Size = 8 * (((v10 + (v7 & 0xFFF) + 4095) >> 12) + 6);
            PoolWithTag->MdlFlags = 0;
            PoolWithTag->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
            PoolWithTag->ByteOffset = v7 & 0xFFF;
            PoolWithTag->ByteCount = v10;
            MmProbeAndLockPages(PoolWithTag, 1, IoReadAccess);
            v69[1] = (unsigned __int64)v9;
            v69[2] = (unsigned __int64)KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v7, v64, v69);
            if ( v56 == MmToFrameBuffer )
            {
              v24->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v67)(v6, v24, v66) < 0 )
                MiSlowRotateCopy((__int64)v6, (__int64)v24, (__int64)v9);
            }
            MiMapLockedPagesInUserSpaceHelper(
              v7,
              (__int64)&v6[1],
              &v24[1].Next,
              v52,
              (__int64)MemoryDescriptorList,
              0LL,
              16);
            MiRotateComplete(v69);
            MiUnlockAndDereferenceVad(v9, v25, v26, v27);
            MmUnlockPages(v24);
            ExFreePoolWithTag(v24, 0);
            *v51 = v10;
            if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v10 )
              MiLogVirtualRotateEvent(v7, v10, (unsigned int)v56);
            return 0;
          }
          MiReturnCommit(v21, (unsigned __int64)MemoryDescriptorList);
        }
        v20 = -1073741670;
LABEL_55:
        v33 = v50;
        goto LABEL_50;
      }
      v20 = -1073741306;
LABEL_48:
      v33 = 0;
      goto LABEL_50;
    }
    if ( v56 == MmToRegularMemoryNoCopy )
    {
      v29 = MiReplaceRotateWithDemandZero(v7, v64, v12);
      MiUnlockAndDereferenceVad(v9, v30, v31, v32);
      *v51 = v10;
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v10 )
        MiLogVirtualRotateEvent(v7, v10, 3LL);
      if ( v29 == 1 )
        return 1073741849;
      return v8;
    }
    if ( v10 <= 0x10000 )
      goto LABEL_64;
    if ( v10 > 0xFFFFFFFF
      || (v37 = MmSizeOfMdl((PVOID)v7, v10),
          v38 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v37, 0x6F666E49u),
          (MemoryDescriptorLista = v38) == 0LL) )
    {
      v13 = 0x10000LL;
      v57 = 0x10000LL;
LABEL_64:
      v38 = (struct _MDL *)v70;
      MemoryDescriptorLista = (PMDL)v70;
    }
    if ( v13 > 0x10000 )
    {
      v39 = MmSizeOfMdl((PVOID)v7, v13);
      v6 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v39, 0x6F666E49u);
      if ( v6 )
        goto LABEL_69;
      v13 = 0x10000LL;
      v57 = 0x10000LL;
    }
    v6 = (struct _MDL *)v71;
LABEL_69:
    v38->Next = 0LL;
    v40 = 8 * (((v13 + (v7 & 0xFFF) + 4095) >> 12) + 6);
    v38->Size = v40;
    v38->MdlFlags = 0;
    MemoryDescriptorLista->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorLista->ByteOffset = v7 & 0xFFF;
    MemoryDescriptorLista->ByteCount = v57;
    MmBuildMdlForNonPagedPool(MemoryDescriptorLista);
    MemoryDescriptorLista->MdlFlags |= 0x2000u;
    v6->Next = 0LL;
    v6->Size = v40;
    v6->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
    v6->ByteOffset = v7 & 0xFFF;
    v41 = v57;
    v6->ByteCount = v57;
    v6->MdlFlags = 0x2000;
    v42 = v60;
    v53 = MiSwitchToTransition((ULONG_PTR)v6, (__int64)v60, v52);
    ByteCount = v6->ByteCount;
    v47 = MemoryDescriptorLista;
    if ( ByteCount != v57 )
    {
      v41 = (unsigned int)ByteCount;
      MemoryDescriptorLista->ByteCount = ByteCount;
      LODWORD(ByteCount) = v6->ByteCount;
    }
    if ( (_DWORD)ByteCount )
    {
      v59 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v67)(v6, MemoryDescriptorLista, v66);
      if ( v59 < 0 )
        MiSlowRotateCopy((__int64)v6, (__int64)MemoryDescriptorLista, (__int64)v42);
      MiMarkMdlComplete((__int64)v6, (__int64)v42);
      v62 = MemoryDescriptorLista + 1;
      v48 = (char *)((unsigned __int64)MemoryDescriptorLista->ByteCount >> 12);
      for ( j = (unsigned __int64 *)&MemoryDescriptorLista[1]; ; ++j )
      {
        v60 = v48;
        if ( !v48 )
          break;
        if ( !MiIsPfn(*j) )
          MiDereferenceIoPages(1, v45, 1uLL);
        v48 = (char *)v60 - 1;
      }
      v47 = MemoryDescriptorLista;
    }
    MiUnlockAndDereferenceVad(v42, v43, v44, v45);
    v9 = 0LL;
    if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v41 )
      MiLogVirtualRotateEvent(v7, v41, (unsigned int)v56);
    if ( v47 != (PMDL)v70 )
      ExFreePoolWithTag(v47, 0);
    if ( v6->ByteCount )
      MmUnlockPages(v6);
    if ( v6 != (struct _MDL *)v71 )
      ExFreePoolWithTag(v6, 0);
    v63 += v41;
    v7 += v41;
    if ( v53 == 1 )
      break;
    v10 = (SIZE_T)P - v41;
    P = (char *)P - v41;
    if ( !P )
    {
      v20 = 0;
      v33 = 0;
      goto LABEL_50;
    }
    v6 = 0LL;
    v62 = 0LL;
  }
  v20 = 1073741849;
  v33 = 0;
LABEL_50:
  v34 = v51;
LABEL_34:
  if ( v9 )
    MiUnlockAndDereferenceVad(v9, (__int64)NumberOfBytes, (__int64)NewMdl, *(__int64 *)&Direction);
  if ( v20 < 0 )
  {
    v35 = (unsigned __int64 *)&v6[1];
    while ( v33 )
    {
      if ( !MiIsPfn(*v35) )
      {
        MiDereferenceIoPages(1, v36, 1uLL);
        --v33;
      }
      ++v35;
    }
  }
  *v34 = v63;
  return v20;
}

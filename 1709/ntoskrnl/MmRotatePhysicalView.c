/*
 * XREFs of MmRotatePhysicalView @ 0x140448920
 * Callers:
 *     <none>
 * Callees:
 *     MiReplaceRotateWithDemandZero @ 0x140009834 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateComplete @ 0x140009D20 (MiRotateComplete.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteRotateAndStopFaults @ 0x140009FDC (MiDeleteRotateAndStopFaults.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MmSizeOfMdl @ 0x140115AC0 (MmSizeOfMdl.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140119BE4 (MiSanitizePage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MiMarkMdlComplete @ 0x14021C168 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x14021C23C (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x1406E26A4 (MiLogVirtualRotateEvent.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  struct _MDL *v6; // r13
  unsigned __int64 v7; // rdi
  NTSTATUS v8; // r15d
  char *v9; // rsi
  SIZE_T v10; // r12
  int v11; // ebx
  unsigned __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r9
  SIZE_T v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  int v22; // r9d
  NTSTATUS v23; // ebx
  SIZE_T v24; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v26; // rbx
  MM_ROTATE_DIRECTION v27; // r14d
  BOOL v29; // r14d
  int v30; // edi
  PSIZE_T v31; // r12
  SIZE_T v32; // rax
  struct _MDL *v33; // rsi
  SIZE_T v34; // rax
  CSHORT v35; // r14
  unsigned __int64 v36; // rsi
  ULONG v37; // edi
  __int64 v38; // r14
  char *v39; // rdi
  __int64 ByteCount; // rcx
  unsigned __int64 *v41; // rbx
  unsigned __int64 i; // rsi
  __int64 v43; // r9
  PVOID v44; // rdi
  unsigned __int64 *v45; // r13
  __int64 v46; // r9
  int v47; // [rsp+40h] [rbp-268h]
  unsigned int v49; // [rsp+50h] [rbp-258h]
  int v50; // [rsp+50h] [rbp-258h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-250h]
  PMDL MemoryDescriptorLista; // [rsp+58h] [rbp-250h]
  int v53; // [rsp+60h] [rbp-248h] BYREF
  PVOID P; // [rsp+68h] [rbp-240h]
  MM_ROTATE_DIRECTION v55; // [rsp+70h] [rbp-238h]
  __int64 v56; // [rsp+78h] [rbp-230h]
  int v57; // [rsp+80h] [rbp-228h]
  __int64 ProcessPartition; // [rsp+88h] [rbp-220h]
  ULONG_PTR v59; // [rsp+90h] [rbp-218h]
  unsigned __int64 v60; // [rsp+98h] [rbp-210h]
  PVOID v61; // [rsp+A0h] [rbp-208h]
  PVOID v62; // [rsp+A8h] [rbp-200h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v63; // [rsp+B0h] [rbp-1F8h]
  PMDL v64; // [rsp+B8h] [rbp-1F0h]
  PSIZE_T v65; // [rsp+C0h] [rbp-1E8h]
  unsigned __int64 v66[3]; // [rsp+C8h] [rbp-1E0h] BYREF
  _BYTE v67[192]; // [rsp+E0h] [rbp-1C8h] BYREF
  _BYTE v68[192]; // [rsp+1A0h] [rbp-108h] BYREF

  v55 = Direction;
  v6 = NewMdl;
  v7 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v65 = NumberOfBytes;
  v64 = NewMdl;
  v63 = CopyFunction;
  v62 = Context;
  v8 = 0;
  v9 = 0LL;
  v47 = 0;
  v10 = *NumberOfBytes;
  v59 = 0LL;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v23 = -1073741585;
LABEL_33:
    v30 = 0;
    v31 = NumberOfBytes;
    goto LABEL_83;
  }
  if ( (v10 & 0xFFF) != 0 )
  {
LABEL_34:
    v23 = -1073741584;
    goto LABEL_33;
  }
  if ( Direction >= MmMaximumRotateDirection )
  {
    v23 = -1073741583;
    goto LABEL_33;
  }
  v60 = (unsigned __int64)VirtualAddress + v10 - 1;
  if ( v60 <= (unsigned __int64)VirtualAddress )
    goto LABEL_34;
  v11 = 0;
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v57 = v11;
    v12 = MiObtainReferencedVad(v7, &v53);
    v9 = (char *)v12;
    v61 = (PVOID)v12;
    if ( !v12 )
    {
      v23 = v53;
      v30 = 0;
      v31 = NumberOfBytes;
      if ( v53 == -1073741664 )
        v23 = -1073741819;
      goto LABEL_83;
    }
    v13 = *(_DWORD *)(v12 + 48);
    if ( (*(_BYTE *)(v12 + 48) & 7) != 6
      || (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) < v60 >> 12 )
    {
      v23 = -1073741800;
      goto LABEL_40;
    }
    v14 = (unsigned __int8)v13 >> 6;
    if ( (v13 & 0x38) != 0 && v14 == 3 )
      v15 = 2LL;
    else
      v15 = v14 != 1;
    v49 = v15;
    v16 = v10;
    v56 = v10;
    v17 = v10 >> 12;
    MemoryDescriptorList = (PMDL)(v10 >> 12);
    if ( v55 <= MmToFrameBufferNoCopy )
    {
      if ( v10 <= 0xFFFFFFFF )
      {
        v18 = (unsigned __int64 *)&v6[1];
        P = &v6[1];
        v19 = 0LL;
        while ( 1 )
        {
          v53 = v19;
          if ( v19 >= v17 )
            break;
          if ( !MiIsPfn(*v18) )
          {
            v21 = MiSanitizePage(v20);
            v23 = MiReferenceIoPages(1, v21, 1LL, v22, 0LL, 0LL);
            if ( v23 < 0 )
              goto LABEL_81;
            ++v47;
          }
          v19 = (unsigned int)(v53 + 1);
          v18 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
          v17 = v10 >> 12;
          v15 = v49;
        }
        if ( (unsigned int)MiChargeCommit(ProcessPartition, v17, 0LL, v15) )
        {
          v24 = MmSizeOfMdl((PVOID)v7, v10);
          PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x6F666E49u);
          v26 = PoolWithTag;
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
            v66[1] = (unsigned __int64)v9;
            v66[2] = (unsigned __int64)KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v7, v60, v66);
            v27 = v55;
            if ( v55 == MmToFrameBuffer )
            {
              v26->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v63)(v6, v26, v62) < 0 )
                MiSlowRotateCopy((__int64)v6, (__int64)v26, (__int64)v9);
            }
            MiMapLockedPagesInUserSpaceHelper(
              v7,
              (__int64)&v6[1],
              &v26[1].Next,
              v49,
              (__int64)MemoryDescriptorList,
              0LL,
              16);
            MiRotateComplete(v66);
            MiUnlockAndDereferenceVad(v9);
            MmUnlockPages(v26);
            ExFreePoolWithTag(v26, 0);
            *NumberOfBytes = v10;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v10 )
              MiLogVirtualRotateEvent(v7, v10, (unsigned int)v27);
            return 0;
          }
          MiReturnCommit(ProcessPartition, (unsigned __int64)MemoryDescriptorList);
        }
        v23 = -1073741670;
LABEL_81:
        v30 = v47;
        goto LABEL_82;
      }
      v23 = -1073741306;
LABEL_40:
      v30 = 0;
      goto LABEL_82;
    }
    if ( v55 == MmToRegularMemoryNoCopy )
    {
      v29 = MiReplaceRotateWithDemandZero(v7, v60, v15);
      MiUnlockAndDereferenceVad(v9);
      *NumberOfBytes = v10;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v10 )
        MiLogVirtualRotateEvent(v7, v10, 3LL);
      if ( v29 )
        return 1073741849;
      return v8;
    }
    if ( v10 <= 0x10000 )
      goto LABEL_51;
    if ( v10 > 0xFFFFFFFF
      || (v32 = MmSizeOfMdl((PVOID)v7, v10),
          v33 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x6F666E49u),
          (MemoryDescriptorLista = v33) == 0LL) )
    {
      v16 = 0x10000LL;
      v56 = 0x10000LL;
LABEL_51:
      v33 = (struct _MDL *)v67;
      MemoryDescriptorLista = (PMDL)v67;
    }
    if ( v16 > 0x10000 )
    {
      v34 = MmSizeOfMdl((PVOID)v7, v16);
      v6 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v34, 0x6F666E49u);
      if ( v6 )
        goto LABEL_56;
      v16 = 0x10000LL;
      v56 = 0x10000LL;
    }
    v6 = (struct _MDL *)v68;
LABEL_56:
    v33->Next = 0LL;
    v35 = 8 * ((((v7 & 0xFFF) + 4095 + v16) >> 12) + 6);
    v33->Size = v35;
    v33->MdlFlags = 0;
    v36 = v7 & 0xFFFFFFFFFFFFF000uLL;
    MemoryDescriptorLista->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
    v37 = v7 & 0xFFF;
    MemoryDescriptorLista->ByteOffset = v37;
    MemoryDescriptorLista->ByteCount = v56;
    MmBuildMdlForNonPagedPool(MemoryDescriptorLista);
    MemoryDescriptorLista->MdlFlags |= 0x2000u;
    v6->Next = 0LL;
    v6->Size = v35;
    v6->StartVa = (PVOID)v36;
    v6->ByteOffset = v37;
    v38 = v56;
    v6->ByteCount = v56;
    v6->MdlFlags = 0x2000;
    v39 = (char *)v61;
    v50 = MiSwitchToTransition((ULONG_PTR)v6, (__int64)v61, v49);
    ByteCount = v6->ByteCount;
    if ( ByteCount != v38 )
    {
      v38 = (unsigned int)ByteCount;
      MemoryDescriptorLista->ByteCount = ByteCount;
    }
    if ( v6->ByteCount )
    {
      v53 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v63)(v6, MemoryDescriptorLista, v62);
      if ( v53 < 0 )
        MiSlowRotateCopy((__int64)v6, (__int64)MemoryDescriptorLista, (__int64)v39);
      MiMarkMdlComplete((__int64)v6, (__int64)v39);
      v41 = (unsigned __int64 *)&MemoryDescriptorLista[1];
      for ( i = (unsigned __int64)MemoryDescriptorLista->ByteCount >> 12; i; --i )
      {
        if ( !MiIsPfn(*v41) )
          MiDereferenceIoPages(1, v43, 1uLL);
        ++v41;
      }
      v11 = v57;
    }
    MiUnlockAndDereferenceVad(v39);
    v9 = 0LL;
    v44 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v38 )
      MiLogVirtualRotateEvent(P, v38, (unsigned int)v55);
    if ( MemoryDescriptorLista != (PMDL)v67 )
      ExFreePoolWithTag(MemoryDescriptorLista, 0);
    if ( v6->ByteCount )
      MmUnlockPages(v6);
    if ( v6 != (struct _MDL *)v68 )
      ExFreePoolWithTag(v6, 0);
    v59 += v38;
    v7 = (unsigned __int64)v44 + v38;
    P = (PVOID)v7;
    if ( v50 == 1 )
    {
      v23 = 1073741849;
      v30 = 0;
      goto LABEL_82;
    }
    v10 -= v38;
    if ( !v10 )
      break;
    v6 = 0LL;
    v64 = 0LL;
  }
  v23 = 0;
  v30 = 0;
LABEL_82:
  v31 = NumberOfBytes;
LABEL_83:
  if ( v9 )
    MiUnlockAndDereferenceVad(v9);
  if ( v23 < 0 )
  {
    v45 = (unsigned __int64 *)&v6[1];
    while ( v30 )
    {
      if ( !MiIsPfn(*v45) )
      {
        MiDereferenceIoPages(1, v46, 1uLL);
        --v30;
      }
      ++v45;
    }
  }
  *v31 = v59;
  return v23;
}

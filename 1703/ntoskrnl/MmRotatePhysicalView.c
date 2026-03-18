/*
 * XREFs of MmRotatePhysicalView @ 0x14055CBF0
 * Callers:
 *     <none>
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14005A730 (MmBuildMdlForNonPagedPool.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     MmSizeOfMdl @ 0x1401228F0 (MmSizeOfMdl.c)
 *     MiDeleteRotateAndStopFaults @ 0x140122914 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x1401229D8 (MiRotateComplete.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122D2C (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MiMarkMdlComplete @ 0x140214128 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x140214204 (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x1406B63B4 (MiLogVirtualRotateEvent.c)
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
  unsigned int v11; // ebx
  unsigned int *v12; // rax
  unsigned int v13; // r9d
  SIZE_T v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // r10
  NTSTATUS v20; // ebx
  SIZE_T v21; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v23; // rbx
  MM_ROTATE_DIRECTION v24; // r14d
  BOOL v26; // r14d
  int v27; // edi
  PSIZE_T v28; // r12
  SIZE_T v29; // rax
  struct _MDL *v30; // rsi
  SIZE_T v31; // rax
  CSHORT v32; // r14
  unsigned __int64 v33; // rsi
  ULONG v34; // edi
  __int64 v35; // r14
  int v36; // ebx
  char *v37; // rdi
  __int64 ByteCount; // rcx
  unsigned __int64 *v39; // r14
  unsigned __int64 i; // rsi
  __int64 v41; // r9
  PVOID v42; // rdi
  unsigned __int64 *v43; // r13
  __int64 v44; // r9
  int v45; // [rsp+40h] [rbp-268h]
  unsigned int v47; // [rsp+50h] [rbp-258h]
  int v48; // [rsp+50h] [rbp-258h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-250h]
  PMDL MemoryDescriptorLista; // [rsp+58h] [rbp-250h]
  int v51; // [rsp+60h] [rbp-248h] BYREF
  PVOID P; // [rsp+68h] [rbp-240h]
  MM_ROTATE_DIRECTION v53; // [rsp+70h] [rbp-238h]
  __int64 v54; // [rsp+78h] [rbp-230h]
  __int64 ProcessPartition; // [rsp+80h] [rbp-228h]
  ULONG_PTR v56; // [rsp+88h] [rbp-220h]
  unsigned __int64 v57; // [rsp+90h] [rbp-218h]
  PVOID v58; // [rsp+98h] [rbp-210h]
  PVOID v59; // [rsp+A0h] [rbp-208h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v60; // [rsp+A8h] [rbp-200h]
  PMDL v61; // [rsp+B0h] [rbp-1F8h]
  PSIZE_T v62; // [rsp+B8h] [rbp-1F0h]
  unsigned __int64 v63[4]; // [rsp+C0h] [rbp-1E8h] BYREF
  _BYTE v64[192]; // [rsp+E0h] [rbp-1C8h] BYREF
  _BYTE v65[192]; // [rsp+1A0h] [rbp-108h] BYREF

  v53 = Direction;
  v6 = NewMdl;
  v7 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v62 = NumberOfBytes;
  v61 = NewMdl;
  v60 = CopyFunction;
  v59 = Context;
  v8 = 0;
  v9 = 0LL;
  v45 = 0;
  v10 = *NumberOfBytes;
  v56 = 0LL;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v20 = -1073741585;
LABEL_33:
    v27 = 0;
    v28 = NumberOfBytes;
    goto LABEL_83;
  }
  if ( (v10 & 0xFFF) != 0 )
  {
LABEL_34:
    v20 = -1073741584;
    goto LABEL_33;
  }
  if ( Direction >= MmMaximumRotateDirection )
  {
    v20 = -1073741583;
    goto LABEL_33;
  }
  v57 = (unsigned __int64)VirtualAddress + v10 - 1;
  if ( v57 <= (unsigned __int64)VirtualAddress )
    goto LABEL_34;
  v11 = 0;
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v12 = MiObtainReferencedVad(v7, &v51);
    v9 = (char *)v12;
    v58 = v12;
    if ( !v12 )
    {
      v20 = v51;
      v27 = 0;
      v28 = NumberOfBytes;
      if ( v51 == -1073741664 )
        v20 = -1073741819;
      goto LABEL_83;
    }
    if ( (v12[12] & 7) != 6 || (v12[7] | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32)) < v57 >> 12 )
    {
      v20 = -1073741800;
      goto LABEL_40;
    }
    if ( (v12[12] & 0x38) != 0 && (v12[12] & 0xC0) == 192 )
      v13 = 2;
    else
      v13 = (v12[12] & 0xC0) != 64;
    v47 = v13;
    v14 = v10;
    v54 = v10;
    v15 = v10 >> 12;
    MemoryDescriptorList = (PMDL)(v10 >> 12);
    if ( v53 <= MmToFrameBufferNoCopy )
    {
      if ( v10 <= 0xFFFFFFFF )
      {
        v16 = (unsigned __int64 *)&v6[1];
        P = &v6[1];
        v17 = 0LL;
        while ( 1 )
        {
          v51 = v17;
          if ( v17 >= v15 )
            break;
          if ( !MiIsPfn(*v16) )
          {
            v20 = MiReferenceIoPages(1, v19, 1LL, v18, 0LL, 0LL);
            if ( v20 < 0 )
              goto LABEL_81;
            ++v45;
          }
          v17 = (unsigned int)(v51 + 1);
          v16 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
          v15 = v10 >> 12;
        }
        if ( (unsigned int)MiChargeCommit(ProcessPartition, v15, 0LL) )
        {
          v21 = MmSizeOfMdl((PVOID)v7, v10);
          PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x6F666E49u);
          v23 = PoolWithTag;
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
            v63[1] = (unsigned __int64)v9;
            v63[2] = (unsigned __int64)KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v7, v57, v63);
            v24 = v53;
            if ( v53 == MmToFrameBuffer )
            {
              v23->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v60)(v6, v23, v59) < 0 )
                MiSlowRotateCopy((__int64)v6, (__int64)v23, (__int64)v9);
            }
            MiMapLockedPagesInUserSpaceHelper(
              v7,
              (__int64)&v6[1],
              &v23[1].Next,
              v47,
              (__int64)MemoryDescriptorList,
              0LL,
              16);
            MiRotateComplete(v63);
            MiUnlockAndDereferenceVad(v9);
            MmUnlockPages(v23);
            ExFreePoolWithTag(v23, 0);
            *NumberOfBytes = v10;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v10 )
              MiLogVirtualRotateEvent(v7, v10, (unsigned int)v24);
            return 0;
          }
          MiReturnCommit(ProcessPartition, (unsigned __int64)MemoryDescriptorList);
        }
        v20 = -1073741670;
LABEL_81:
        v27 = v45;
        goto LABEL_82;
      }
      v20 = -1073741306;
LABEL_40:
      v27 = 0;
      goto LABEL_82;
    }
    if ( v53 == MmToRegularMemoryNoCopy )
    {
      v26 = MiReplaceRotateWithDemandZero(v7, v57, v13);
      MiUnlockAndDereferenceVad(v9);
      *NumberOfBytes = v10;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v10 )
        MiLogVirtualRotateEvent(v7, v10, 3LL);
      if ( v26 )
        return 1073741849;
      return v8;
    }
    if ( v10 <= 0x10000 )
      goto LABEL_51;
    if ( v10 > 0xFFFFFFFF
      || (v29 = MmSizeOfMdl((PVOID)v7, v10),
          v30 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x6F666E49u),
          (MemoryDescriptorLista = v30) == 0LL) )
    {
      v14 = 0x10000LL;
      v54 = 0x10000LL;
LABEL_51:
      v30 = (struct _MDL *)v64;
      MemoryDescriptorLista = (PMDL)v64;
    }
    if ( v14 > 0x10000 )
    {
      v31 = MmSizeOfMdl((PVOID)v7, v14);
      v6 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v31, 0x6F666E49u);
      if ( v6 )
        goto LABEL_56;
      v14 = 0x10000LL;
      v54 = 0x10000LL;
    }
    v6 = (struct _MDL *)v65;
LABEL_56:
    v30->Next = 0LL;
    v32 = 8 * ((((v7 & 0xFFF) + 4095 + v14) >> 12) + 6);
    v30->Size = v32;
    v30->MdlFlags = 0;
    v33 = v7 & 0xFFFFFFFFFFFFF000uLL;
    MemoryDescriptorLista->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
    v34 = v7 & 0xFFF;
    MemoryDescriptorLista->ByteOffset = v34;
    MemoryDescriptorLista->ByteCount = v54;
    MmBuildMdlForNonPagedPool(MemoryDescriptorLista);
    MemoryDescriptorLista->MdlFlags |= 0x2000u;
    v6->Next = 0LL;
    v6->Size = v32;
    v6->StartVa = (PVOID)v33;
    v6->ByteOffset = v34;
    v35 = v54;
    v6->ByteCount = v54;
    v6->MdlFlags = 0x2000;
    v36 = v11 | 1;
    v37 = (char *)v58;
    v48 = MiSwitchToTransition((ULONG_PTR)v6, (__int64)v58, v47);
    ByteCount = v6->ByteCount;
    if ( ByteCount != v35 )
    {
      v35 = (unsigned int)ByteCount;
      v54 = v6->ByteCount;
      MemoryDescriptorLista->ByteCount = ByteCount;
    }
    if ( v6->ByteCount )
    {
      v51 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v60)(v6, MemoryDescriptorLista, v59);
      if ( v51 < 0 )
        MiSlowRotateCopy((__int64)v6, (__int64)MemoryDescriptorLista, (__int64)v37);
      MiMarkMdlComplete((__int64)v6, (__int64)v37);
      v39 = (unsigned __int64 *)&MemoryDescriptorLista[1];
      for ( i = (unsigned __int64)MemoryDescriptorLista->ByteCount >> 12; i; --i )
      {
        if ( !MiIsPfn(*v39) )
          MiDereferenceIoPages(1, v41, 1uLL);
        ++v39;
      }
      v35 = v54;
    }
    MiUnlockAndDereferenceVad(v37);
    v9 = 0LL;
    v42 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v35 )
      MiLogVirtualRotateEvent(P, v35, (unsigned int)v53);
    if ( MemoryDescriptorLista != (PMDL)v64 )
      ExFreePoolWithTag(MemoryDescriptorLista, 0);
    v11 = v36 & 0xFFFFFFFE;
    if ( v6->ByteCount )
      MmUnlockPages(v6);
    if ( v6 != (struct _MDL *)v65 )
      ExFreePoolWithTag(v6, 0);
    v56 += v35;
    v7 = (unsigned __int64)v42 + v35;
    P = (PVOID)v7;
    if ( v48 == 1 )
    {
      v20 = 1073741849;
      v27 = 0;
      goto LABEL_82;
    }
    v10 -= v35;
    if ( !v10 )
      break;
    v6 = 0LL;
    v61 = 0LL;
  }
  v20 = 0;
  v27 = 0;
LABEL_82:
  v28 = NumberOfBytes;
LABEL_83:
  if ( v9 )
    MiUnlockAndDereferenceVad(v9);
  if ( v20 < 0 )
  {
    v43 = (unsigned __int64 *)&v6[1];
    while ( v27 )
    {
      if ( !MiIsPfn(*v43) )
      {
        MiDereferenceIoPages(1, v44, 1uLL);
        --v27;
      }
      ++v43;
    }
  }
  *v28 = v56;
  return v20;
}

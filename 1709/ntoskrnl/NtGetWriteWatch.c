/*
 * XREFs of NtGetWriteWatch @ 0x140031CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140594210 (ObReferenceObjectByHandleWithTag.c)
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
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  _BYTE *PoolWithQuotaTag; // rax
  __int64 *v18; // r13
  int v19; // ebx
  _KPROCESS *v20; // rdi
  int v21; // edi
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // r14
  __int64 SharedVm; // rsi
  KIRQL v28; // al
  unsigned __int64 v29; // r10
  char v30; // si
  __int64 NextPageTable; // rdx
  __int64 i; // r11
  bool v33; // cc
  __int64 PteShadow; // r9
  bool v35; // zf
  __int64 v36; // rsi
  __int64 v37; // r9
  __int64 v38; // r15
  __int64 v39; // rax
  _BYTE *v40; // rbx
  KIRQL v41; // [rsp+40h] [rbp-9B8h]
  char v42; // [rsp+44h] [rbp-9B4h]
  __int64 VadEvent; // [rsp+48h] [rbp-9B0h]
  _BYTE *Src; // [rsp+50h] [rbp-9A8h]
  int v46; // [rsp+58h] [rbp-9A0h] BYREF
  unsigned __int64 v47; // [rsp+60h] [rbp-998h]
  unsigned __int64 v48; // [rsp+68h] [rbp-990h]
  PVOID Object; // [rsp+70h] [rbp-988h] BYREF
  unsigned __int16 *v50; // [rsp+78h] [rbp-980h]
  PVOID P; // [rsp+80h] [rbp-978h]
  char v52[8]; // [rsp+88h] [rbp-970h] BYREF
  __int64 v53; // [rsp+90h] [rbp-968h] BYREF
  HANDLE v54; // [rsp+98h] [rbp-960h]
  void *v55; // [rsp+A0h] [rbp-958h]
  PULONG_PTR v56; // [rsp+A8h] [rbp-950h]
  PULONG v57; // [rsp+B0h] [rbp-948h]
  int v58; // [rsp+C0h] [rbp-938h] BYREF
  __int16 v59; // [rsp+C4h] [rbp-934h]
  __int64 v60; // [rsp+C8h] [rbp-930h]
  __int64 v61; // [rsp+D0h] [rbp-928h]
  __int64 v62; // [rsp+D8h] [rbp-920h]
  char v63[48]; // [rsp+180h] [rbp-878h] BYREF
  _BYTE v64[2048]; // [rsp+1B0h] [rbp-848h] BYREF

  v42 = Flags;
  v54 = ProcessHandle;
  v55 = UserAddressArray;
  v56 = EntriesInUserAddressArray;
  v57 = Granularity;
  v60 = 20LL;
  v58 = 1;
  v59 = 0;
  v61 = 0LL;
  v62 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress > 0x7FFFFFFDFFFFLL )
      return -1073741583;
    if ( 0x7FFFFFFE0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v13 = (__int64)EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = *EntriesInUserAddressArray;
    v48 = v14;
    if ( !v14 )
      return -1073741581;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v14, 8u);
    v15 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v48;
  }
  else
  {
    v16 = *EntriesInUserAddressArray;
    v48 = *EntriesInUserAddressArray;
  }
  PoolWithQuotaTag = v64;
  Src = v64;
  if ( v16 > 0x100 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8 * v16, 0x63476D4Du);
    Src = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
  }
  v18 = (__int64 *)PoolWithQuotaTag;
  P = 0LL;
  v19 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v20 = Process;
    Object = Process;
  }
  else
  {
    v21 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    v46 = v21;
    if ( v21 < 0 )
      goto LABEL_81;
    v20 = (_KPROCESS *)Object;
  }
  v22 = 0LL;
  if ( BaseAddress > (char *)BaseAddress + RegionSize - 1 )
  {
    v21 = -1073741582;
    goto LABEL_71;
  }
  if ( Process != v20 )
  {
    KiStackAttachProcess((ULONG_PTR)v20);
    v19 = 1;
  }
  v50 = &v20[1].IdealNode[12];
  v23 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = ((((unsigned __int64)BaseAddress + RegionSize - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = MiObtainReferencedVad(BaseAddress, &v46);
  if ( !v24 )
  {
    v21 = v46;
    if ( v46 != -1073741664 )
      goto LABEL_71;
    goto LABEL_70;
  }
  P = (PVOID)v24;
  if ( (*(_DWORD *)(v24 + 48) & 7) == 4
    && (unsigned __int64)BaseAddress + RegionSize - 1 <= (((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadEvent = MiLocateVadEvent(v24, 4LL);
    v26 = ((unsigned __int64)BaseAddress >> 12)
        - (*(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32));
    SharedVm = MiGetSharedVm(v50);
    v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    v41 = v28;
    *(_DWORD *)(SharedVm + 4) = 0;
    LODWORD(v29) = v47;
    if ( v23 > v47 )
      goto LABEL_69;
    v30 = v42;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v23, v29, 0, v28, 5, (__int64)v52);
      v29 = v47;
      if ( !NextPageTable )
        NextPageTable = v47 + 8;
      for ( i = VadEvent; v23 != NextPageTable; v23 += 8LL )
      {
        if ( _bittest64(*(const signed __int64 **)(VadEvent + 16), v26) == 1 )
        {
          if ( (v30 & 1) != 0 )
            _bittestandreset64(*(signed __int64 **)(VadEvent + 16), v26);
          *v18++ = (__int64)(v23 << 25) >> 16;
          if ( ++v22 == v16 )
            goto LABEL_69;
        }
        ++v26;
      }
      v33 = v23 <= v29;
      if ( v23 > v29 )
        goto LABEL_68;
      do
      {
        PteShadow = *(_QWORD *)v23;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v23, *(_QWORD *)v23);
        v53 = PteShadow;
        v19 &= 0xFFFFFFF9;
        if ( _bittest64(*(const signed __int64 **)(i + 16), v26) == 1 )
        {
          v19 |= 4u;
          if ( (v42 & 1) == 0 )
            goto LABEL_57;
          _bittestandreset64(*(signed __int64 **)(i + 16), v26);
          if ( (PteShadow & 1) == 0 )
            goto LABEL_57;
          v35 = (PteShadow & 0x42) == 0;
        }
        else
        {
          if ( (PteShadow & 1) == 0 || (PteShadow & 0x42) == 0 )
            goto LABEL_57;
          v19 |= 4u;
          v35 = (v42 & 1) == 0;
        }
        if ( !v35 )
          v19 |= 2u;
LABEL_57:
        if ( (v19 & 2) != 0 )
        {
          v36 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v53) - 0x58000000000LL;
          MiWriteValidPteNewPage((unsigned __int64 *)v23, v37 & 0xFFFFFFFFFFFFFFBDuLL);
          MiInsertTbFlushEntry(&v58, (__int64)(v23 << 25) >> 16, 1LL, 0LL);
          v38 = 0LL;
          MiLockPageAtDpcInline(v36);
          v39 = MiCaptureDirtyBitToPfn(v36);
          if ( v39 )
            v38 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v36 + 40) >> 40) & 0x3FFLL));
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v39 )
            MiReleasePageFileInfo(v38, v39, 1LL);
          i = VadEvent;
          v29 = v47;
          v16 = v48;
        }
        if ( (v19 & 4) != 0 )
        {
          *v18++ = (__int64)(v23 << 25) >> 16;
          if ( ++v22 == v16 )
            goto LABEL_69;
        }
        ++v26;
        v23 += 8LL;
      }
      while ( (v23 & 0xFFF) != 0 && v23 <= v29 );
      v30 = v42;
      v33 = v23 <= v29;
LABEL_68:
      v28 = v41;
      if ( !v33 )
      {
LABEL_69:
        MiFlushTbList(&v58);
        MiUnlockWorkingSetExclusive(v50, v41);
        v21 = 0;
        goto LABEL_71;
      }
    }
  }
LABEL_70:
  v21 = -1073741585;
LABEL_71:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v19 & 1) != 0 )
    KiUnstackDetachProcess(v63, 0LL);
  if ( v54 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v21 )
  {
    v40 = Src;
    if ( v55 )
    {
      memmove(v55, Src, 8 * v22);
      *v56 = v22;
    }
    *v57 = 4096;
    goto LABEL_82;
  }
LABEL_81:
  v40 = Src;
LABEL_82:
  if ( v40 != v64 )
    ExFreePoolWithTag(v40, 0);
  return v21;
}

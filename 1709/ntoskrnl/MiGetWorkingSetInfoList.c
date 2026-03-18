/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14010B360
 * Callers:
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiGetPfnProtection @ 0x1400E69D0 (MiGetPfnProtection.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14010C2B8 (MiWorkingSetInfoCheckPageTable.c)
 *     MiQueryPfn @ 0x14010C3B8 (MiQueryPfn.c)
 *     MiLockProtoPage @ 0x14010C430 (MiLockProtoPage.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(unsigned __int64 Src, unsigned __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // r14
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v10; // r15
  char PreviousMode; // dl
  unsigned __int64 *MappedSystemVa; // r13
  ULONG_PTR v13; // rcx
  char *v14; // r14
  __int64 v15; // r9
  unsigned __int8 v16; // bl
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  LONG *SharedVm; // rax
  LONG *v22; // rax
  unsigned int v23; // ebx
  int v24; // edi
  BOOL v25; // edx
  LONG *v26; // rax
  unsigned __int64 v27; // r9
  int v28; // r8d
  __int64 *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // r8
  LONG *v32; // rax
  __int64 v33; // r9
  __int64 **v34; // rax
  __int64 *v35; // r10
  __int64 PteShadow; // rbx
  unsigned __int64 v37; // r11
  int v38; // eax
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // r10
  __int64 ProtoPteAddress; // rdx
  ULONG_PTR PrototypePteDirect; // rbx
  __int64 v44; // r10
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // r13
  int v48; // edx
  int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r9
  char PfnPriority; // al
  __int64 v54; // r9
  unsigned __int64 v55; // r10
  char v56; // r11
  unsigned __int64 v57; // rdi
  _QWORD *v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rdi
  __int64 v62; // r9
  __int64 v63; // r10
  int PfnProtection; // eax
  char v65; // r11
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  int PagingFileOffset; // eax
  __int64 v72; // r9
  LONG *v73; // rax
  KIRQL v74; // [rsp+30h] [rbp-278h]
  __int64 v75; // [rsp+38h] [rbp-270h]
  __int64 v76; // [rsp+40h] [rbp-268h]
  int v77; // [rsp+48h] [rbp-260h]
  unsigned int v78; // [rsp+4Ch] [rbp-25Ch]
  int v79; // [rsp+4Ch] [rbp-25Ch]
  __int64 v80; // [rsp+50h] [rbp-258h] BYREF
  unsigned int v81; // [rsp+58h] [rbp-250h] BYREF
  char v82[8]; // [rsp+60h] [rbp-248h] BYREF
  unsigned __int64 v83; // [rsp+68h] [rbp-240h]
  unsigned __int64 v84; // [rsp+70h] [rbp-238h]
  int v85; // [rsp+78h] [rbp-230h]
  char *v86; // [rsp+80h] [rbp-228h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-220h]
  unsigned __int64 *v88; // [rsp+90h] [rbp-218h]
  unsigned __int64 *v89; // [rsp+98h] [rbp-210h]
  _BYTE *v90; // [rsp+A0h] [rbp-208h]
  __int64 v91; // [rsp+A8h] [rbp-200h]
  PVOID P; // [rsp+B0h] [rbp-1F8h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-1F0h]
  struct _KTHREAD *v94; // [rsp+C0h] [rbp-1E8h]
  void *v95; // [rsp+C8h] [rbp-1E0h]
  unsigned __int64 v96; // [rsp+D0h] [rbp-1D8h]
  ULONG_PTR v97; // [rsp+D8h] [rbp-1D0h]
  __int64 v98; // [rsp+E0h] [rbp-1C8h] BYREF
  unsigned __int64 v99; // [rsp+E8h] [rbp-1C0h]
  __int64 v100; // [rsp+F0h] [rbp-1B8h]
  _DWORD v101[36]; // [rsp+100h] [rbp-1A8h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v102; // [rsp+190h] [rbp-118h] BYREF
  _BYTE v103[16]; // [rsp+1C0h] [rbp-E8h] BYREF
  __int64 v104; // [rsp+1D0h] [rbp-D8h] BYREF
  _BYTE Srca[128]; // [rsp+1E0h] [rbp-C8h] BYREF

  BugCheckParameter1 = a3;
  v95 = (void *)Src;
  v96 = Src;
  v97 = a3;
  if ( a2 > 0xFFFFFFFF )
    return 3221225990LL;
  v7 = a2 >> 4;
  v93 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225476LL;
  if ( (a4 & 3) == 3 || (a4 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v94 = CurrentThread;
  if ( v7 <= 8 )
  {
    memmove(Srca, (const void *)Src, 16 * v7);
    v10 = 0LL;
    P = 0LL;
    MappedSystemVa = (unsigned __int64 *)Srca;
    v88 = (unsigned __int64 *)Srca;
    v89 = (unsigned __int64 *)Srca;
  }
  else
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((a2 >> 12) + 7 - ((unsigned __int128)-(__int128)(a2 & 0xFFF) >> 64)),
                                   0x20206D4Du);
    v10 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag->Next = 0LL;
    PoolWithTag->Size = 8 * ((((Src & 0xFFF) + a2 + 4095) >> 12) + 6);
    PoolWithTag->MdlFlags = 0;
    PoolWithTag->StartVa = (PVOID)(Src & 0xFFFFFFFFFFFFF000uLL);
    PoolWithTag->ByteOffset = Src & 0xFFF;
    PoolWithTag->ByteCount = a2;
    PreviousMode = CurrentThread->PreviousMode;
    MiProbeAndLockPages(PoolWithTag, PreviousMode != 0, 1);
    if ( (v10->MdlFlags & 5) != 0 )
      MappedSystemVa = (unsigned __int64 *)v10->MappedSystemVa;
    else
      MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000010u);
    v89 = MappedSystemVa;
    v88 = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      MmUnlockPages(v10);
      ExFreePoolWithTag(v10, 0);
      return 3221225626LL;
    }
  }
  v13 = BugCheckParameter1;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v85 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v102);
    v85 = 1;
    v13 = BugCheckParameter1;
  }
  v14 = 0LL;
  v86 = 0LL;
  v15 = v13 + 1280;
  v75 = v13 + 1280;
  v16 = 17;
  v74 = 17;
  v17 = 0LL;
  v76 = 0LL;
  v81 = 0;
  while ( v7 )
  {
    v18 = 0LL;
    v83 = 0LL;
    v19 = *MappedSystemVa;
    v84 = v19;
    if ( v19 > 0x7FFFFFFEFFFFLL )
      goto LABEL_171;
    v20 = v19 >> 12;
    v99 = v19 >> 12;
    if ( v14 == (char *)v101 )
    {
      if ( v16 != 17 )
      {
        SharedVm = MiGetSharedVm(v15);
        ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
        __writecr8(v16);
        v16 = 17;
        v74 = 17;
      }
      KiLeaveGuardedRegionUnsafe((__int64)v94);
    }
    else if ( v14 )
    {
      if ( v20 < (*((unsigned int *)v14 + 6) | ((unsigned __int64)(unsigned __int8)v14[32] << 32))
        || v20 > (*((unsigned int *)v14 + 7) | ((unsigned __int64)(unsigned __int8)v14[33] << 32)) )
      {
        if ( v17 )
        {
          MiLockProtoPage(0LL);
          v76 = 0LL;
          v15 = v75;
        }
        if ( v16 != 17 )
        {
          v22 = MiGetSharedVm(v15);
          ExReleaseSpinLockSharedFromDpcLevel(v22);
          __writecr8(v16);
          v16 = 17;
          v74 = 17;
        }
        MiUnlockAndDereferenceVad(v14);
        v14 = 0LL;
        v86 = 0LL;
      }
      if ( v14 )
        goto LABEL_42;
    }
    if ( (v84 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 || (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) != 0 )
    {
      v14 = (char *)MiObtainReferencedVad(v84, &v81);
      v86 = v14;
      if ( !v14 )
      {
        v23 = v81;
        v15 = v75;
        if ( v81 == -1073741558 )
          goto LABEL_173;
        goto LABEL_170;
      }
    }
    else
    {
      v14 = (char *)v101;
      v86 = (char *)v101;
      memset(v101, 0, 0x88uLL);
      v101[12] &= 0xFFFFFFF8;
      --v94->SpecialApcDisable;
    }
LABEL_42:
    v24 = *((_DWORD *)v14 + 12);
    if ( (v24 & 7) == 1 )
    {
      v18 = (16LL * (MmProtectToValue[(unsigned __int8)v24 >> 3] & 0x7FF)) | 0x400001;
      goto LABEL_169;
    }
    while ( 2 )
    {
      v25 = 0;
      v77 = 0;
      if ( (v14[48] & 7) == 5 )
      {
        v77 = 1;
      }
      else
      {
        if ( (*((_DWORD *)v14 + 12) & 0x8000) == 0 )
        {
          v25 = (*((_DWORD *)v14 + 16) & 0x1000000) != 0;
          v77 = v25;
        }
        if ( !v25 )
        {
          v27 = v84;
          goto LABEL_53;
        }
      }
      if ( v16 != 17 )
      {
        v26 = MiGetSharedVm(v75);
        ExReleaseSpinLockSharedFromDpcLevel(v26);
        __writecr8(v16);
        v16 = 17;
        v74 = 17;
      }
      v27 = v84;
LABEL_53:
      v28 = 2;
      v104 = ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v29 = &v104;
      do
      {
        --v28;
        --v29;
        *v29 = (((unsigned __int64)v29[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      while ( v28 );
      v30 = (__int64 *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v91 = (__int64)v30;
      if ( v16 != 17 )
      {
        if ( ((((_BYTE)v30 + 8) & 0x78) != 0 || !(unsigned int)MiWorkingSetIsContended(v75))
          && !KeShouldYieldProcessor() )
        {
          goto LABEL_62;
        }
        v32 = MiGetSharedVm(v75);
        ExReleaseSpinLockSharedFromDpcLevel(v32);
        __writecr8(v16);
        if ( v76 )
        {
          MiLockProtoPage(0LL);
          v76 = 0LL;
        }
      }
      v74 = MiLockWorkingSetShared(v75);
LABEL_62:
      v80 = -1LL;
      v83 = 0LL;
      v33 = 0LL;
      v78 = 0;
      v34 = (__int64 **)v103;
      v90 = v103;
      while ( 1 )
      {
        v35 = *v34;
        PteShadow = **v34;
        v37 = 0xFFFFF6FB7DBED000uLL;
        if ( (unsigned __int64)*v34 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v35, PteShadow);
        if ( !PteShadow )
          break;
        if ( (PteShadow & 1) != 0 && (PteShadow & 0x80u) != 0LL )
        {
          v39 = MiVaToPfn(v84);
          v80 = v39;
          v33 = v78;
          v40 = v77;
          v37 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_76;
        }
        v16 = v74;
        LOBYTE(v33) = v74;
        v38 = MiWorkingSetInfoCheckPageTable(v35, v82, a4, v33);
        v33 = v78;
        if ( v38 )
        {
          v33 = v78 + 1;
          v78 = v33;
          v34 = (__int64 **)(v90 + 8);
          v90 += 8;
          if ( (unsigned int)v33 < 3 )
            continue;
        }
        v39 = v80;
        v40 = v77;
        v37 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_77;
      }
      v40 = v77;
      if ( v77 != 1 )
        goto LABEL_90;
      v39 = v80;
LABEL_76:
      v16 = v74;
LABEL_77:
      if ( v39 == -1 )
      {
        if ( v40 == 1 )
          continue;
        if ( (unsigned int)v33 < 3 )
          goto LABEL_105;
        PteShadow = *v30;
        if ( (unsigned __int64)v30 >= v37 && (unsigned __int64)v30 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v30, *v30);
        v80 = PteShadow;
        if ( (PteShadow & 1) == 0 )
        {
          if ( (PteShadow & 0x400) == 0 )
          {
            if ( (PteShadow & 0x800) != 0 )
            {
              v41 = MiLockTransitionLeafPage((ULONG_PTR *)v30, 0LL, v31, v33);
              if ( !v41 )
                goto LABEL_62;
LABEL_104:
              MiQueryPfn((v41 + 0x58000000000LL) / 48, v82);
              _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_105:
              v18 = v83;
              goto LABEL_169;
            }
            if ( (unsigned int)MiGetPagingFileOffset(&v80) )
            {
              v18 = v83 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              goto LABEL_169;
            }
            if ( PteShadow )
              goto LABEL_105;
LABEL_90:
            if ( v14 == (char *)v101 || (*((_DWORD *)v14 + 12) & 0x8000) != 0 )
              goto LABEL_105;
          }
          if ( v14 == (char *)v101 )
          {
            ProtoPteAddress = qword_1403884E8;
            goto LABEL_97;
          }
          if ( (*((_DWORD *)v14 + 12) & 0x8000) != 0
            || (ProtoPteAddress = MiGetProtoPteAddress((__int64)v14, v84 >> 12, 1u, &v98), PteShadow)
            && !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
          {
            PrototypePteDirect = MiGetPrototypePteDirect(PteShadow);
          }
          else
          {
LABEL_97:
            PrototypePteDirect = ProtoPteAddress;
          }
          if ( !PrototypePteDirect )
            goto LABEL_105;
          v18 = v83 | 0x8000;
          v83 |= 0x8000uLL;
          if ( PrototypePteDirect == ProtoPteAddress )
          {
            v18 |= 0x40000000uLL;
            v83 = v18;
          }
          if ( ((v76 ^ PrototypePteDirect) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v76 = MiLockProtoPage(PrototypePteDirect);
            v30 = (__int64 *)v91;
            goto LABEL_62;
          }
          v41 = MiLockLeafPage((__int64 *)PrototypePteDirect, 0LL, v31, v33);
          v70 = *(_QWORD *)PrototypePteDirect;
          if ( PrototypePteDirect >= 0xFFFFF6FB7DBED000uLL && PrototypePteDirect <= 0xFFFFF6FB7DBED7F8uLL )
            v70 = MiReadPteShadow(PrototypePteDirect, *(_QWORD *)PrototypePteDirect);
          v80 = v70;
          if ( v41 )
            goto LABEL_104;
          if ( (v70 & 0x400) == 0 && (v70 & 0x800) == 0 )
          {
            if ( (unsigned int)MiInvalidPteConforms(v70, v68, v69, v70) )
            {
              PagingFileOffset = MiGetPagingFileOffset(&v80);
              v17 = v76;
              if ( PagingFileOffset )
                v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              else
                v18 &= -(__int64)(v72 != 0);
            }
            else
            {
              v17 = v76;
            }
LABEL_166:
            v15 = v75;
            goto LABEL_171;
          }
LABEL_169:
          v15 = v75;
LABEL_170:
          v17 = v76;
          goto LABEL_171;
        }
        v45 = v83 | 1;
        v79 = *((_DWORD *)v14 + 12);
        if ( (v79 & 7) == 6 )
        {
          v46 = MI_GET_PAGE_FRAME_FROM_PTE(&v80);
          v47 = 48 * v46 - 0x58000000000LL;
          if ( MiIsPfnInline(v46) && (*(_BYTE *)(v47 + 35) & 0x40) != 0 )
            v45 |= 0x80000000uLL;
          if ( MiRotatedToFrameBuffer((__int64 *)v91) )
          {
            v48 = (PteShadow & 0x800) != 0 ? 4 : 1;
            v49 = (unsigned __int8)v79 >> 6;
            if ( v49 == 3 && (v79 & 0x38) != 0 )
            {
              v48 |= 0x18u;
            }
            else if ( v49 == 1 )
            {
              v48 |= 8u;
            }
          }
          else
          {
            v45 = v45 & 0xFFFFFFFFF8C0FFFFuLL | ((((MiGetPfnPriority(v47) & 7) << 8) | (*(_QWORD *)(v47 + 40) >> 58)) << 16);
            v48 = (*(_DWORD *)(v47 + 16) >> 5) & 0x1F;
            if ( *(__int64 *)(v47 + 8) >= 0 )
            {
              v50 = v45 | 0x8000;
              LOBYTE(v51) = 7;
              if ( (*(_QWORD *)(v47 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v51 = *(_QWORD *)(v47 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v45 = ((unsigned __int8)v50 ^ (unsigned __int8)(2 * v51)) & 0xE ^ (unsigned __int64)v50;
              v48 = MmMakeProtectNotWriteCopy[v48];
            }
          }
          v18 = ((unsigned __int16)v45 ^ (unsigned __int16)(16 * MmProtectToValue[v48])) & 0x7FF0 ^ v45;
          MappedSystemVa = v88;
          goto LABEL_169;
        }
        v52 = MI_GET_PAGE_FRAME_FROM_PTE(&v80);
      }
      else
      {
        v45 = v83 | 0x800001;
        LOWORD(PteShadow) = 0;
        v52 = v80;
      }
      break;
    }
    v91 = 48 * v52;
    v90 = (_BYTE *)(48 * v52 - 0x58000000000LL);
    PfnPriority = MiGetPfnPriority((__int64)v90);
    v57 = v45 & 0xFFFFFFFFF8C07FFFuLL | ((v56 & 1 | (2 * ((v55 >> 58) | ((unsigned __int64)(PfnPriority & 7) << 8)))) << 15);
    if ( (*(_BYTE *)(v54 + 35) & 0x40) != 0 )
      v57 |= 0x80000000uLL;
    if ( (v57 & 0x800000) != 0 )
    {
LABEL_153:
      v18 = v57 & 0xFFFFFFFFFFFF800FuLL | (16
                                         * (MmProtectToValue[(*((_DWORD *)v14 + 12) >> 3) & 0x1F] & 0x7FF | 0x40000LL));
      v17 = v76;
      if ( (v55 & 0x200000000000000LL) != 0 )
      {
        LOBYTE(v67) = 7;
        if ( (*(_QWORD *)(v54 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v67 = *(_QWORD *)(v54 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        v18 = v18 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v67 & 7 | 0x20000000));
      }
      goto LABEL_166;
    }
    if ( ((v55 >> 54) & 7) == 1 )
    {
      if ( (v56 & 1) != 0 )
        goto LABEL_153;
      v58 = (_QWORD *)qword_1403885E8;
      if ( !qword_1403885E8 )
        goto LABEL_138;
      v59 = v91 / 48;
      v100 = v91 / 48;
      while ( v58 )
      {
        v60 = v58[3];
        if ( v59 < v60 )
        {
          v58 = (_QWORD *)*v58;
        }
        else
        {
          if ( v59 - v60 < v58[4] )
            break;
          v58 = (_QWORD *)v58[1];
        }
      }
      if ( v58 )
      {
        v61 = ((unsigned __int16)v57 ^ (unsigned __int16)(16 * MmProtectToValue[(*(_DWORD *)(v54 + 16) >> 5) & 0x1F])) & 0x7FF0 ^ v57;
      }
      else
      {
LABEL_138:
        if ( (PteShadow & 4) != 0 )
        {
          if ( (PteShadow & 0x800) != 0 )
            v61 = v57 & 0xFFFFFFFFFFFF800FuLL | 0x40;
          else
            v61 = v57 & 0xFFFFFFFFFFFF800FuLL | 0x20;
        }
        else
        {
          v61 = v57 & 0xFFFFFFFFFFFF800FuLL | 0x10;
        }
      }
      v18 = v61 | 0x400000;
      goto LABEL_169;
    }
    if ( (MiGetWsleContents(v56 & 1, v84) & 0xF) == 8 )
      v57 |= 0x400000uLL;
    if ( (*(_QWORD *)(v62 + 40) & 0x200000000000000LL) == 0 )
    {
      v18 = v57 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v62 + 16) >> 5) & 0x1F] & 0x7FF));
      goto LABEL_169;
    }
    PfnProtection = MiGetPfnProtection(0x3FFFFFFFFFFFFFFFLL, v63);
    v18 = v57 & 0xFFFFFFFFFFFF8001uLL | (2 * (v65 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
    if ( v14 == (char *)v101 )
    {
      v18 |= 0x40000000uLL;
      goto LABEL_169;
    }
    if ( (*((_DWORD *)v14 + 12) & 0x8000) != 0 )
      goto LABEL_169;
    v66 = MiGetProtoPteAddress((__int64)v14, v99, 1u, &v98);
    v17 = v76;
    v15 = v75;
    if ( v66 == (*((_QWORD *)v90 + 1) | 0x8000000000000000uLL) )
      v18 |= 0x40000000uLL;
LABEL_171:
    MappedSystemVa[1] = v18;
    MappedSystemVa += 2;
    v88 = MappedSystemVa;
    v89 = MappedSystemVa;
    v7 = --v93;
    v16 = v74;
  }
  v23 = 0;
LABEL_173:
  if ( v74 != 17 )
  {
    v73 = MiGetSharedVm(v15);
    ExReleaseSpinLockSharedFromDpcLevel(v73);
    __writecr8(v74);
  }
  if ( v76 )
    MiLockProtoPage(0LL);
  if ( v14 )
  {
    if ( v14 == (char *)v101 )
      KiLeaveGuardedRegionUnsafe((__int64)v94);
    else
      MiUnlockAndDereferenceVad(v14);
  }
  if ( v85 == 1 )
    KiUnstackDetachProcess(&v102, 0LL);
  if ( v10 )
  {
    MmUnlockPages(v10);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    memmove(v95, Srca, ((char *)MappedSystemVa - Srca) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v23;
}

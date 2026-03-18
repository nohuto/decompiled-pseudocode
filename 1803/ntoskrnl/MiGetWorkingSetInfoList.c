/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1400B3CD0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiGetPfnProtection @ 0x1400B4D10 (MiGetPfnProtection.c)
 *     MiLockProtoPage @ 0x1400B4D9C (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x1400B4E94 (MiQueryPfn.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiGetValidAweProtection @ 0x1402626A8 (MiGetValidAweProtection.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140263814 (MiWorkingSetInfoCheckPageTable.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(unsigned __int64 Src, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  unsigned int v6; // edi
  unsigned __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // r12
  char PreviousMode; // dl
  unsigned __int64 *MappedSystemVa; // r13
  ULONG_PTR v14; // rcx
  unsigned __int64 v15; // r15
  __int64 v16; // r8
  unsigned __int8 v17; // dl
  __int64 v18; // rbx
  __int64 v19; // r10
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned int v24; // ebx
  unsigned __int64 v25; // r9
  int v26; // esi
  unsigned __int64 v27; // r11
  char v28; // dl
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r10
  __int64 v33; // rax
  __int64 v34; // r9
  int v35; // r10d
  __int64 v36; // rbx
  unsigned __int64 v37; // r10
  __int64 v38; // rdx
  unsigned __int64 j; // rcx
  __int64 v40; // rax
  ULONG_PTR v41; // r11
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // rdx
  unsigned __int64 PrototypePteDirect; // rbx
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r10
  __int64 v51; // r10
  int PagingFileOffset; // eax
  __int64 v53; // r9
  unsigned __int64 v54; // rsi
  char v55; // r9
  __int64 v56; // r13
  int IsPfnInline; // eax
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // r15
  int v60; // edx
  int v61; // eax
  __int64 v62; // rcx
  char PfnPriority; // al
  unsigned __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r10
  __int64 v67; // r11
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // r8
  _QWORD *v71; // rcx
  int ValidAweProtection; // eax
  __int64 v73; // rsi
  unsigned __int64 v74; // r15
  __int64 v75; // r9
  __int64 v76; // r10
  int PfnProtection; // eax
  char v78; // r11
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v80; // rcx
  bool v81; // zf
  __int64 v82; // rsi
  char v83; // [rsp+30h] [rbp-1B8h]
  __int64 v84; // [rsp+38h] [rbp-1B0h]
  __int64 v85; // [rsp+40h] [rbp-1A8h]
  __int64 v86; // [rsp+48h] [rbp-1A0h]
  __int64 valid; // [rsp+50h] [rbp-198h]
  unsigned __int64 v88; // [rsp+58h] [rbp-190h]
  unsigned __int64 v89; // [rsp+60h] [rbp-188h]
  __int64 v90; // [rsp+68h] [rbp-180h]
  unsigned int v91; // [rsp+70h] [rbp-178h] BYREF
  int v92; // [rsp+74h] [rbp-174h]
  __int64 v93; // [rsp+78h] [rbp-170h] BYREF
  __int64 i; // [rsp+80h] [rbp-168h]
  char v95[8]; // [rsp+88h] [rbp-160h] BYREF
  unsigned __int64 v96; // [rsp+90h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-150h]
  unsigned __int64 *v98; // [rsp+A0h] [rbp-148h]
  unsigned __int64 v99; // [rsp+A8h] [rbp-140h]
  PVOID P; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-130h] BYREF
  void *v102; // [rsp+C0h] [rbp-128h]
  unsigned __int64 v103; // [rsp+C8h] [rbp-120h]
  ULONG_PTR v104; // [rsp+D0h] [rbp-118h]
  __int64 v105; // [rsp+D8h] [rbp-110h] BYREF
  unsigned __int64 v106; // [rsp+E0h] [rbp-108h]
  __int64 v107; // [rsp+E8h] [rbp-100h]
  _BYTE v108[48]; // [rsp+F0h] [rbp-F8h] BYREF
  _BYTE Srca[128]; // [rsp+120h] [rbp-C8h] BYREF

  BugCheckParameter1 = a3;
  v102 = (void *)Src;
  v103 = Src;
  v104 = a3;
  v6 = 0;
  if ( a2 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a2 >> 4;
  v99 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225476LL;
  if ( (a4 & 3) == 3 || (a4 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v8 <= 8 )
  {
    memmove(Srca, (const void *)Src, 16 * v8);
    v11 = 0LL;
    P = 0LL;
    MappedSystemVa = (unsigned __int64 *)Srca;
    v98 = (unsigned __int64 *)Srca;
  }
  else
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((a2 >> 12) + 7 - ((unsigned __int128)-(__int128)(a2 & 0xFFF) >> 64)),
                                   0x20206D4Du);
    v11 = PoolWithTag;
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
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (unsigned __int64 *)v11->MappedSystemVa;
    else
      MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
    v98 = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      MmUnlockPages(v11);
      ExFreePoolWithTag(v11, 0);
      return 3221225626LL;
    }
  }
  v14 = BugCheckParameter1;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v108);
    v6 = 1;
    v14 = BugCheckParameter1;
  }
  v15 = 0LL;
  v86 = 0LL;
  v16 = v14 + 1280;
  v84 = v14 + 1280;
  v17 = 17;
  v83 = 17;
  v18 = 0LL;
  valid = 0LL;
  v19 = 0LL;
  v85 = 0LL;
  v91 = 0;
  v20 = v99;
LABEL_20:
  if ( !v20 )
  {
    v24 = 0;
    goto LABEL_180;
  }
  v21 = 0LL;
  v96 = 0LL;
  v6 &= ~4u;
  v22 = *MappedSystemVa;
  v89 = *MappedSystemVa;
  if ( *MappedSystemVa > 0x7FFFFFFEFFFFLL )
    goto LABEL_121;
  v23 = v22 >> 12;
  v106 = v22 >> 12;
  if ( v15 )
  {
    if ( v23 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
      || v23 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
    {
      if ( v19 )
      {
        MiLockProtoPage(0LL);
        v85 = 0LL;
        v17 = v83;
        v16 = v84;
      }
      if ( v17 != 17 )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v16, v18);
          v17 = v83;
        }
        MiUnlockWorkingSetShared(v84, v17, v16);
        v83 = 17;
        v18 = 0LL;
        valid = 0LL;
      }
      MiUnlockAndDereferenceVad((PVOID)v15);
      v15 = 0LL;
      v86 = 0LL;
    }
    v22 = v89;
    if ( v15 )
      goto LABEL_36;
  }
  v15 = MiObtainReferencedVadEx(v22, 0, (int *)&v91);
  v86 = v15;
  if ( v15 )
  {
LABEL_36:
    v25 = v89;
    if ( ((v89 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v89 & 0xFFFFFFFFFFFFF000uLL) == qword_1403CB680 && qword_1403CB680)
      && (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) == 0 )
    {
      v6 |= 4u;
    }
    v26 = *(_DWORD *)(v15 + 48);
    if ( (v26 & 7) == 1 )
    {
      v21 = (16LL * (MmProtectToValue[(unsigned __int8)v26 >> 3] & 0x7FF)) | 0x400001;
      goto LABEL_119;
    }
LABEL_43:
    v6 &= ~2u;
    if ( (*(_BYTE *)(v15 + 48) & 7) == 5
      || (*(_DWORD *)(v15 + 48) & 0x4000) == 0 && (*(_DWORD *)(v15 + 64) & 0x1000000) != 0 )
    {
      v6 |= 2u;
    }
    v92 = (v6 >> 1) & 1;
    if ( v92 && v83 != 17 )
    {
      if ( v18 )
        MiUnlockPageTableInternal(v84, v18);
      MiUnlockWorkingSetShared(v84, v83, v16);
      v83 = 17;
      v18 = 0LL;
      valid = 0LL;
      v25 = v89;
    }
    v27 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v88 = v27;
    v28 = v83;
    if ( v83 != 17 )
    {
      if ( (((_BYTE)v27 + 8) & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v84) || KeShouldYieldProcessor() )
      {
        if ( v18 )
          MiUnlockPageTableInternal(v84, v18);
        MiUnlockWorkingSetShared(v84, v83, v29);
        v28 = 17;
        v83 = 17;
        v18 = 0LL;
        valid = 0LL;
      }
      else
      {
        v28 = v83;
      }
      v27 = v88;
    }
    v30 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    for ( i = v30; ; v30 = i )
    {
      if ( v28 == 17 )
      {
        v83 = MiLockWorkingSetShared(v84);
        v27 = v88;
        v30 = i;
      }
      v31 = -1LL;
      v21 = 0LL;
      v96 = 0LL;
      if ( v18 == v30 )
      {
        v32 = v27;
        v101 = v27;
      }
      else
      {
        if ( v18 )
          MiUnlockPageTableInternal(v84, v18);
        valid = MiLockLowestValidPageTable(v84, v88, &v101);
        v32 = v101;
      }
      v33 = MI_READ_PTE_LOCK_FREE(v32);
      v36 = v33;
      v93 = v33;
      if ( !v33 )
        break;
      if ( (v33 & 1) != 0 && (v33 & 0x80u) != 0LL )
      {
        v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v93) >> 12) & 0xFFFFFFFFFLL;
        v16 = 0xFFFFFFFFLL;
        while ( v37 >= 0xFFFFF68000000000uLL && v37 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v37 = (__int64)(v37 << 25) >> 16;
          v16 = (unsigned int)(v16 + 1);
        }
        v38 = 1LL;
        v25 = v89;
        for ( j = v89 >> 12; (_DWORD)v16; v16 = (unsigned int)(v16 - 1) )
        {
          v31 += v38 * (j & 0x1FF);
          j >>= 9;
          v38 <<= 9;
        }
LABEL_80:
        v18 = valid;
        goto LABEL_87;
      }
      v18 = valid;
      if ( valid != v34 )
      {
        if ( (unsigned int)MiWorkingSetInfoCheckPageTable(v84, v35, (unsigned int)v95, a4, v83) == 1 )
          goto LABEL_83;
        v21 = v96;
      }
      v25 = v89;
LABEL_87:
      if ( v31 != -1LL )
      {
        v36 = 0LL;
        v54 = v21 | 0x800001;
        goto LABEL_148;
      }
      if ( (v6 & 2) != 0 )
      {
        v15 = v86;
        goto LABEL_43;
      }
      if ( v18 != ((v25 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        goto LABEL_118;
      v40 = MI_READ_PTE_LOCK_FREE(v88);
      v36 = v40;
      v93 = v40;
      if ( (v40 & 1) != 0 )
      {
        v54 = v21 | 1;
        v92 = *(_DWORD *)(v86 + 48);
        v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v93) >> 12) & 0xFFFFFFFFFLL;
        if ( (v55 & 7) == 6 )
        {
          v56 = 48 * v31 - 0x58000000000LL;
          IsPfnInline = MiIsPfnInline(v31);
          v59 = v54;
          if ( IsPfnInline && (*(_BYTE *)(v56 + 35) & 0x40) != 0 )
          {
            v54 |= 0x80000000uLL;
            v59 = v54;
          }
          if ( MiRotatedToFrameBuffer(v58) )
          {
            v60 = (v36 & 0x800) != 0 ? 4 : 1;
            v61 = (unsigned __int8)v92 >> 6;
            if ( v61 == 3 && (v92 & 0x38) != 0 )
            {
              v60 |= 0x18u;
            }
            else if ( v61 == 1 )
            {
              v60 |= 8u;
            }
          }
          else
          {
            v54 = v59 & 0xFFFFFFFFF8C0FFFFuLL | ((((MiGetPfnPriority(v56) & 7) << 8) | (*(_QWORD *)(v56 + 40) >> 58)) << 16);
            v60 = (*(_DWORD *)(v56 + 16) >> 5) & 0x1F;
            if ( *(__int64 *)(v56 + 8) >= 0 )
            {
              LOBYTE(v62) = 7;
              if ( (*(_QWORD *)(v56 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v62 = *(_QWORD *)(v56 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v54 = v54 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v62 & 7 | 0x4000));
              v60 = MmMakeProtectNotWriteCopy[v60];
            }
          }
          v21 = ((unsigned __int16)v54 ^ (unsigned __int16)(16 * MmProtectToValue[v60])) & 0x7FF0 ^ v54;
          MappedSystemVa = v98;
          goto LABEL_118;
        }
LABEL_148:
        v90 = 48 * v31 - 0x58000000000LL;
        PfnPriority = MiGetPfnPriority(v90);
        v68 = v64 >> 58;
        v69 = v54 & 0xFFFFFFFFF8C07FFFuLL | (((unsigned int)v66 | (2 * (v68 | ((unsigned __int64)(PfnPriority & 7) << 8)))) << 15);
        if ( (*(_BYTE *)(v65 + 35) & 0x40) != 0 )
          v69 |= 0x80000000uLL;
        if ( (v69 & 0x800000) != 0 )
        {
LABEL_174:
          v21 = v69 & 0xFFFFFFFFFFFF800FuLL | (16
                                             * (MmProtectToValue[(*(_DWORD *)(v86 + 48) >> 3) & 0x1F] & 0x7FF | 0x40000LL));
          v80 = v21;
          v15 = v86;
          v16 = v84;
          v81 = v66 == 0;
          v19 = v85;
          if ( !v81 )
          {
            LOBYTE(v82) = 7;
            if ( (*(_QWORD *)(v65 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v82 = *(_QWORD *)(v65 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v21 = v80 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v82 & 7 | 0x20000000));
          }
          v17 = v83;
          goto LABEL_121;
        }
        v70 = (v64 >> 54) & 7;
        if ( v70 == 1 )
        {
          if ( !v66 )
          {
            v71 = (_QWORD *)qword_1403CB788;
            if ( !qword_1403CB788 )
              goto LABEL_162;
            v68 = v67 / 48;
            v107 = v67 / 48;
            while ( v71 )
            {
              v70 = v71[3];
              if ( v68 < v70 )
              {
                v71 = (_QWORD *)*v71;
              }
              else
              {
                if ( v68 - v70 < v71[4] )
                  break;
                v71 = (_QWORD *)v71[1];
              }
            }
            if ( v71 )
              ValidAweProtection = (*(_DWORD *)(v65 + 16) >> 5) & 0x1F;
            else
LABEL_162:
              ValidAweProtection = MiGetValidAweProtection(v36, v68, v70, v65);
            v73 = 16 * (MmProtectToValue[ValidAweProtection] & 0x7FF | 0x40000LL);
            v74 = v69 & 0xFFFFFFFFFFFF800FuLL;
LABEL_164:
            v21 = v74 | v73;
LABEL_118:
            v15 = v86;
            goto LABEL_119;
          }
          goto LABEL_174;
        }
        if ( (MiGetWsleContents((unsigned int)v66, v89) & 0xF) == 8 )
          v69 |= 0x400000uLL;
        if ( (*(_QWORD *)(v75 + 40) & 0x200000000000000LL) == 0 )
        {
          v73 = 16LL * (MmProtectToValue[(*(_DWORD *)(v75 + 16) >> 5) & 0x1F] & 0x7FF);
          v74 = v69 & 0xFFFFFFFFFFFF8001uLL;
          goto LABEL_164;
        }
        PfnProtection = MiGetPfnProtection(0x3FFFFFFFFFFFFFFFLL, v76, v75);
        v21 = v69 & 0xFFFFFFFFFFFF8001uLL | (2 * (v78 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
        v15 = v86;
        if ( (v6 & 4) != 0 )
        {
          v21 |= 0x40000000uLL;
          goto LABEL_119;
        }
        if ( (*(_DWORD *)(v86 + 48) & 0x4000) == 0 )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v86, v106, 0, &v105);
          v17 = v83;
          v16 = v84;
          v19 = v85;
          if ( ProtoPteAddress == (*(_QWORD *)(v90 + 8) | 0x8000000000000000uLL) )
            v21 |= 0x40000000uLL;
          goto LABEL_121;
        }
LABEL_119:
        v16 = v84;
        v17 = v83;
LABEL_120:
        v19 = v85;
LABEL_121:
        MappedSystemVa[1] = v21;
        MappedSystemVa += 2;
        v98 = MappedSystemVa;
        v20 = --v99;
        v18 = valid;
        goto LABEL_20;
      }
      if ( (v40 & 0x400) != 0 )
      {
        v15 = v86;
        goto LABEL_101;
      }
      if ( (v40 & 0x800) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset(&v93) )
        {
          v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
          goto LABEL_118;
        }
        if ( v36 )
          goto LABEL_118;
LABEL_97:
        v15 = v86;
        if ( (v6 & 4) == 0 && (*(_DWORD *)(v86 + 48) & 0x4000) != 0 )
          goto LABEL_119;
LABEL_101:
        if ( (v6 & 4) != 0 )
        {
          v45 = qword_1403CB678;
          if ( (v25 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
            v45 = qword_1403CB670;
LABEL_108:
          PrototypePteDirect = v45;
        }
        else
        {
          if ( (*(_DWORD *)(v15 + 48) & 0x4000) == 0 )
          {
            v45 = MiGetProtoPteAddress(v15, v25 >> 12, 0, &v105);
            if ( !v36 || (unsigned int)MiIsPrototypePteVadLookup(v36) )
              goto LABEL_108;
          }
          PrototypePteDirect = MiGetPrototypePteDirect(v36);
        }
        if ( !PrototypePteDirect )
          goto LABEL_119;
        v21 |= 0x8000uLL;
        v96 = v21;
        if ( PrototypePteDirect == v45 )
        {
          v21 |= 0x40000000uLL;
          v96 = v21;
        }
        if ( ((v85 ^ PrototypePteDirect) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          MiLockLeafPage(PrototypePteDirect, 0LL);
          v48 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
          v93 = v48;
          if ( v50 )
          {
            MiQueryPfn((v50 + 0x58000000000LL) / 48, v95, v49, v48);
            _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v21 = v96;
            goto LABEL_119;
          }
          if ( (v48 & 0x400) == 0 && (v48 & 0x800) == 0 && (unsigned int)MiInvalidPteConforms(v48) )
          {
            PagingFileOffset = MiGetPagingFileOffset(&v93);
            v17 = v83;
            v16 = v84;
            v19 = v85;
            if ( PagingFileOffset )
              v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
            else
              v21 &= -(__int64)(v53 != 0);
            goto LABEL_121;
          }
          goto LABEL_119;
        }
        if ( valid )
          MiUnlockPageTableInternal(v84, valid);
        v85 = MiLockProtoPage(PrototypePteDirect);
LABEL_83:
        v18 = 0LL;
        valid = 0LL;
        goto LABEL_84;
      }
      v44 = MiLockTransitionLeafPage(v41, 0LL);
      if ( v44 )
      {
        MiQueryPfn((v44 + 0x58000000000LL) / 48, v95, v42, v43);
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v21 = v96;
        goto LABEL_118;
      }
      v18 = valid;
LABEL_84:
      v27 = v88;
      v28 = v83;
    }
    v25 = v89;
    if ( !v92 )
      goto LABEL_97;
    goto LABEL_80;
  }
  v24 = v91;
  v17 = v83;
  v16 = v84;
  if ( v91 != -1073741558 )
    goto LABEL_120;
LABEL_180:
  if ( v17 != 17 )
  {
    if ( valid )
      MiUnlockPageTableInternal(v16, valid);
    MiUnlockWorkingSetShared(v84, v83, v16);
  }
  if ( v85 )
    MiLockProtoPage(0LL);
  if ( v15 )
    MiUnlockAndDereferenceVad((PVOID)v15);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v108, 0LL);
  if ( v11 )
  {
    MmUnlockPages(v11);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    memmove(v102, Srca, ((char *)MappedSystemVa - Srca) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v24;
}

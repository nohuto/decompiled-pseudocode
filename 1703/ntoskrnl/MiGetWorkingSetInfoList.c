/*
 * XREFs of MiGetWorkingSetInfoList @ 0x140077410
 * Callers:
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiGetPfnProtection @ 0x140078704 (MiGetPfnProtection.c)
 *     MiLockProtoPage @ 0x140078790 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x140078880 (MiQueryPfn.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(unsigned __int64 Src, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r14
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v10; // rdi
  __int64 v11; // rdx
  _QWORD *MappedSystemVa; // rbx
  __int64 v13; // r11
  ULONG_PTR v14; // r9
  _DWORD *v15; // r13
  ULONG_PTR v16; // r8
  unsigned __int8 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  volatile LONG *SharedVm; // rax
  volatile LONG *v23; // rax
  unsigned int v24; // ebx
  int v25; // edi
  volatile LONG *v26; // rax
  int v27; // r8d
  __int64 *v28; // rdx
  ULONG_PTR v29; // r12
  ULONG_PTR v30; // rcx
  volatile LONG *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r15
  unsigned int v34; // r14d
  char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 v40; // rbx
  unsigned __int64 v41; // rax
  __int64 v42; // r10
  int v43; // r11d
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r10
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v55; // r10
  unsigned __int64 v56; // rdi
  int v57; // r14d
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rsi
  char PfnPriority; // al
  unsigned __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r10
  __int64 v73; // rcx
  unsigned __int64 v74; // rdi
  _QWORD *v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rdi
  __int64 v79; // r9
  int PfnProtection; // eax
  __int64 v81; // r11
  __int64 ProtoPteAddress; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // r10
  __int64 v88; // r10
  __int64 v89; // r9
  _BYTE *v90; // rbx
  volatile LONG *v91; // rax
  PVOID v92; // rdi
  unsigned __int8 v93; // [rsp+30h] [rbp-268h]
  __int64 v95; // [rsp+40h] [rbp-258h]
  int v96; // [rsp+48h] [rbp-250h]
  unsigned __int64 v97; // [rsp+50h] [rbp-248h]
  ULONG_PTR v98; // [rsp+58h] [rbp-240h]
  unsigned int v99; // [rsp+60h] [rbp-238h] BYREF
  _BYTE *v100; // [rsp+68h] [rbp-230h]
  int v101; // [rsp+70h] [rbp-228h]
  __int64 v102; // [rsp+78h] [rbp-220h] BYREF
  char v103[8]; // [rsp+80h] [rbp-218h] BYREF
  __int64 v104; // [rsp+88h] [rbp-210h]
  _BYTE *v105; // [rsp+90h] [rbp-208h]
  unsigned __int64 v106; // [rsp+98h] [rbp-200h]
  _DWORD *v107; // [rsp+A0h] [rbp-1F8h]
  struct _KTHREAD *v108; // [rsp+A8h] [rbp-1F0h]
  PVOID P; // [rsp+B0h] [rbp-1E8h]
  void *v110; // [rsp+B8h] [rbp-1E0h]
  unsigned __int64 v111; // [rsp+C0h] [rbp-1D8h]
  ULONG_PTR v112; // [rsp+C8h] [rbp-1D0h]
  unsigned __int64 v113; // [rsp+D0h] [rbp-1C8h] BYREF
  char v114[8]; // [rsp+D8h] [rbp-1C0h] BYREF
  unsigned __int64 v115; // [rsp+E0h] [rbp-1B8h]
  __int64 v116; // [rsp+E8h] [rbp-1B0h]
  _DWORD v117[36]; // [rsp+F0h] [rbp-1A8h] BYREF
  char v118[48]; // [rsp+180h] [rbp-118h] BYREF
  char v119; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v120; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE Srca[128]; // [rsp+1D0h] [rbp-C8h] BYREF
  char v122; // [rsp+2B8h] [rbp+20h]

  v122 = a4;
  v110 = (void *)Src;
  v111 = Src;
  v112 = a3;
  if ( a2 > 0xFFFFFFFF )
    return 3221225990LL;
  v7 = a2 >> 4;
  v106 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225476LL;
  if ( (a4 & 3) == 3 || (a4 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v108 = CurrentThread;
  if ( v7 <= 8 )
  {
    memmove(Srca, (const void *)Src, 16 * v7);
    v13 = 0LL;
    P = 0LL;
    MappedSystemVa = Srca;
    v100 = Srca;
    v105 = Srca;
  }
  else
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((a2 >> 12) + ((a2 & 0xFFF) != 0) + 7LL),
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
    v11 = (unsigned __int8)CurrentThread->gap0[10];
    if ( CurrentThread->PreviousMode )
      v11 = 1LL;
    MiProbeAndLockPages(PoolWithTag, v11, 1LL);
    if ( (v10->MdlFlags & 5) != 0 )
      MappedSystemVa = v10->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000010u);
    v105 = MappedSystemVa;
    v100 = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      MmUnlockPages(v10);
      ExFreePoolWithTag(v10, 0);
      return 3221225626LL;
    }
    v13 = 0LL;
  }
  v14 = a3;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)a3 )
  {
    v101 = 0;
  }
  else
  {
    KiStackAttachProcess(a3);
    v101 = 1;
    v13 = 0LL;
    v14 = a3;
  }
  v15 = 0LL;
  v107 = 0LL;
  v16 = v14 + 1280;
  v98 = v14 + 1280;
  v17 = 17;
  v93 = 17;
  v18 = 0LL;
  v95 = 0LL;
  v99 = 0;
LABEL_24:
  if ( !v106 )
  {
    v24 = v13;
    goto LABEL_189;
  }
  v19 = v13;
  v104 = v13;
  v20 = *MappedSystemVa;
  v97 = v20;
  if ( v20 > 0x7FFFFFFEFFFFLL )
    goto LABEL_186;
  v21 = v20 >> 12;
  v115 = v20 >> 12;
  if ( v15 == v117 )
  {
    if ( v17 != 17 )
    {
      SharedVm = (volatile LONG *)MiGetSharedVm(v16);
      ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
      __writecr8(v17);
      v17 = 17;
      v93 = 17;
    }
    KiLeaveGuardedRegionUnsafe(v108);
    v14 = a3;
  }
  else if ( v15 )
  {
    if ( v21 >= ((unsigned int)v15[6] | ((unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32))
      && v21 <= ((unsigned int)v15[7] | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) )
    {
LABEL_46:
      v25 = v15[12];
      if ( (v25 & 7) == 1 )
      {
        v19 = (16LL * (MmProtectToValue[(unsigned __int8)v25 >> 3] & 0x7FF)) | 0x400001;
        goto LABEL_186;
      }
LABEL_48:
      v96 = v13;
      if ( (v15[12] & 7) == 5 || (v15[12] & 0x8000) == 0 && (v15[16] & 0x1000000) != 0 )
      {
        v96 = 1;
        if ( v17 != 17 )
        {
          v26 = (volatile LONG *)MiGetSharedVm(v16);
          ExReleaseSpinLockSharedFromDpcLevel(v26);
          __writecr8(v17);
          v17 = 17;
          v93 = 17;
        }
      }
      v27 = 2;
      v120 = ((v20 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v28 = &v120;
      do
      {
        --v27;
        --v28;
        *v28 = (((unsigned __int64)v28[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      while ( v27 );
      v29 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v17 == 17 )
      {
        v30 = v98;
      }
      else
      {
        if ( (((((v20 >> 9) & 0xF8) + 8) & 0x78) != 0 || !(unsigned int)MiWorkingSetIsContended(v98))
          && !KeShouldYieldProcessor() )
        {
          goto LABEL_64;
        }
        v31 = (volatile LONG *)MiGetSharedVm(v98);
        ExReleaseSpinLockSharedFromDpcLevel(v31);
        __writecr8(v17);
        if ( v18 )
        {
          LOBYTE(v32) = 17;
          MiLockProtoPage(0LL, v18, v32);
          v95 = 0LL;
        }
        v30 = v98;
      }
      v93 = MiLockWorkingSetShared(v30);
LABEL_64:
      v33 = -1LL;
      v19 = 0LL;
      v104 = 0LL;
      v34 = 0;
      v35 = &v119;
      while ( 1 )
      {
        v36 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v35);
        v40 = v36;
        if ( !v36 )
        {
          v45 = v96;
          if ( v96 == 1 )
          {
LABEL_84:
            v20 = v97;
            goto LABEL_85;
          }
          goto LABEL_95;
        }
        if ( (v36 & 1) != 0 && (v36 & 0x80u) != 0LL )
        {
          v20 = v97;
          v33 = MiVaToPfn(v97);
          v45 = v96;
          goto LABEL_85;
        }
        v41 = MI_READ_PTE_LOCK_FREE(v39);
        v113 = v41;
        if ( (v41 & 1) == 0 )
        {
          v44 = (v41 >> 11) & 1;
          if ( !(_DWORD)v44 && !(unsigned int)MiGetPagingFileOffset((__int64)&v113) )
          {
LABEL_83:
            v45 = v96;
            goto LABEL_84;
          }
          if ( (v122 & 1) != 0 )
          {
            v45 = v96;
            v20 = v97;
            if ( v44 )
              v19 = 6291456LL;
            else
              v19 = 10485760LL;
            v104 = v19;
LABEL_85:
            if ( v33 != -1 )
            {
              v56 = v19 | 0x800001;
              LOWORD(v40) = 0;
LABEL_136:
              v68 = 48 * v33 - 0x58000000000LL;
              PfnPriority = MiGetPfnPriority(v68);
              v73 = 2 * (v70 >> 58);
              v74 = v56 & 0xFFFFFFFFF8C07FFFuLL | ((v73 | (unsigned int)v71 | ((PfnPriority & 7) << 9)) << 15);
              if ( (*(_BYTE *)(v68 + 35) & 0x40) != 0 )
                v74 |= 0x80000000uLL;
              if ( (v74 & 0x800000) != 0 )
                goto LABEL_166;
              if ( ((v70 >> 54) & 7) != 1 )
              {
                if ( (MiGetWsleContents(v73, v97) & 0xF) == 8 )
                  v74 |= 0x400000uLL;
                if ( (*(_QWORD *)(v68 + 40) & 0x200000000000000LL) == 0 )
                {
                  v19 = v74 & 0xFFFFFFFFFFFF8001uLL | (16LL
                                                     * (MmProtectToValue[(*(_DWORD *)(v68 + 16) >> 5) & 0x1F] & 0x7FF));
                  goto LABEL_184;
                }
                PfnProtection = MiGetPfnProtection(0x3FFFFFFFFFFFFFFFLL, v79, 48 * v33 - 0x58000000000LL);
                v19 = v74 & 0xFFFFFFFFFFFF8001uLL | (2 * (v81 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
                if ( v15 == v117 )
                {
                  v19 |= 0x40000000uLL;
                  goto LABEL_183;
                }
                if ( (v15[12] & 0x8000) == 0 )
                {
                  ProtoPteAddress = MiGetProtoPteAddress(v15, v115, 1LL, v114);
                  v18 = v95;
                  v14 = a3;
                  if ( ProtoPteAddress == (*(_QWORD *)(v68 + 8) | 0x8000000000000000uLL) )
                    v19 |= 0x40000000uLL;
                  v13 = 0LL;
                  goto LABEL_186;
                }
LABEL_133:
                v13 = 0LL;
                goto LABEL_184;
              }
              if ( v71 )
              {
LABEL_166:
                v19 = v74 & 0xFFFFFFFFFFFF800FuLL | (16 * (MmProtectToValue[(v15[12] >> 3) & 0x1F] & 0x7FF | 0x40000LL));
                if ( v71 )
                {
                  v83 = *(_QWORD *)(v68 + 24);
                  if ( (v83 & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                    v84 = 7LL;
                  else
                    v84 = v83 & 7;
                  v19 = v19 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v84 | 0x20000000));
                }
              }
              else
              {
                v75 = (_QWORD *)qword_14036C298;
                if ( !qword_14036C298 )
                  goto LABEL_150;
                v76 = v72 / 48;
                v116 = v72 / 48;
                do
                {
                  v77 = v75[3];
                  if ( v76 < v77 )
                  {
                    v75 = (_QWORD *)*v75;
                  }
                  else
                  {
                    if ( v76 - v77 < v75[4] )
                      break;
                    v75 = (_QWORD *)v75[1];
                  }
                }
                while ( v75 );
                if ( v75 )
                {
                  v78 = ((unsigned __int16)v74 ^ (unsigned __int16)(16
                                                                  * MmProtectToValue[(*(_DWORD *)(v68 + 16) >> 5) & 0x1F])) & 0x7FF0 ^ v74;
                }
                else
                {
LABEL_150:
                  if ( (v40 & 4) != 0 )
                  {
                    if ( (v40 & 0x800) != 0 )
                      v78 = v74 & 0xFFFFFFFFFFFF800FuLL | 0x40;
                    else
                      v78 = v74 & 0xFFFFFFFFFFFF800FuLL | 0x20;
                  }
                  else
                  {
                    v78 = v74 & 0xFFFFFFFFFFFF800FuLL | 0x10;
                  }
                }
                v19 = v78 | 0x400000;
              }
LABEL_184:
              v18 = v95;
LABEL_185:
              v14 = a3;
              goto LABEL_186;
            }
            if ( v45 == 1 )
            {
              LODWORD(v13) = 0;
              v17 = v93;
              v18 = v95;
              v16 = v98;
              goto LABEL_48;
            }
            if ( v34 < 3 )
            {
LABEL_183:
              v13 = 0LL;
              goto LABEL_184;
            }
            v46 = MI_READ_PTE_LOCK_FREE(v29);
            v40 = v46;
            v102 = v46;
            if ( (v46 & 1) != 0 )
            {
              v56 = v19 | 1;
              v57 = v15[12];
              if ( (v15[12] & 7) != 6 )
              {
                v33 = MI_GET_PAGE_FRAME_FROM_PTE(&v102);
                goto LABEL_136;
              }
              v58 = MI_GET_PAGE_FRAME_FROM_PTE(&v102);
              v59 = 48 * v58 - 0x58000000000LL;
              if ( (unsigned int)MiIsPfnInline(v58, v60, v61, v62) && (*(_BYTE *)(v59 + 35) & 0x40) != 0 )
                v56 |= 0x80000000uLL;
              if ( (unsigned int)MiRotatedToFrameBuffer(v29) )
              {
                v63 = 4;
                if ( (v40 & 0x800) == 0 )
                  v63 = 1;
                v64 = v57 & 0xC0;
                if ( v64 == 192 && (v57 & 0x38) != 0 )
                {
                  v63 |= 0x18u;
                }
                else if ( v64 == 64 )
                {
                  v63 |= 8u;
                }
              }
              else
              {
                v56 = v56 & 0xFFFFFFFFF8C0FFFFuLL | ((((MiGetPfnPriority(v59) & 7) << 8) | (*(_QWORD *)(v59 + 40) >> 58)) << 16);
                v63 = (*(_DWORD *)(v59 + 16) >> 5) & 0x1F;
                if ( *(__int64 *)(v59 + 8) >= 0 )
                {
                  v65 = v56 | 0x8000;
                  v66 = *(_QWORD *)(v59 + 24);
                  if ( (v66 & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                    v67 = 7LL;
                  else
                    v67 = v66 & 7;
                  v56 = (2 * v67) | v65 & 0xFFFFFFFFFFFFFFF1uLL;
                  v63 = MmMakeProtectNotWriteCopy[v63];
                }
              }
              v19 = ((unsigned __int16)v56 ^ (unsigned __int16)(16 * MmProtectToValue[v63])) & 0x7FF0 ^ v56;
              goto LABEL_133;
            }
            if ( (v46 & 0x400) != 0 )
            {
              v13 = 0LL;
              goto LABEL_99;
            }
            if ( (v46 & 0x800) != 0 )
            {
              v49 = MiLockTransitionLeafPage(v29);
              if ( !v49 )
                goto LABEL_64;
              MiQueryPfn((v49 + 0x58000000000LL) / 48, v103, v47, v48);
              _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v19 = v104;
              goto LABEL_183;
            }
            if ( (unsigned int)MiGetPagingFileOffset((__int64)&v102) )
            {
              v19 = v19 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              goto LABEL_183;
            }
            v13 = 0LL;
            if ( v40 )
              goto LABEL_184;
LABEL_95:
            if ( v15 == v117 || (v15[12] & 0x8000) != 0 )
              goto LABEL_184;
LABEL_99:
            if ( v15 == v117 )
            {
              v50 = qword_14036C1A8;
              v51 = qword_14036C1A8;
              goto LABEL_108;
            }
            if ( (v15[12] & 0x8000) != 0 )
            {
              PrototypePteDirect = MiGetPrototypePteDirect(v40, v13, v37, v38);
LABEL_107:
              v51 = PrototypePteDirect;
            }
            else
            {
              v50 = MiGetProtoPteAddress(v15, v97 >> 12, 1LL, v114);
              if ( v40 && !(unsigned int)MiIsPrototypePteVadLookup(v40) )
              {
                PrototypePteDirect = MiGetPrototypePteDirect(v40, v50, v52, v53);
                v13 = 0LL;
                goto LABEL_107;
              }
              v51 = v50;
              v13 = 0LL;
            }
LABEL_108:
            if ( !v51 )
              goto LABEL_184;
            v19 |= 0x8000uLL;
            v104 = v19;
            if ( v51 == v50 )
            {
              v19 |= 0x40000000uLL;
              v104 = v19;
            }
            v18 = v95;
            if ( ((v95 ^ v51) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            {
              v95 = MiLockProtoPage(v51, v95, v93);
              goto LABEL_64;
            }
            MiLockLeafPage(v51, 0LL);
            v85 = MI_READ_PTE_LOCK_FREE(v51);
            v102 = v85;
            if ( v87 )
            {
              MiQueryPfn((v87 + 0x58000000000LL) / 48, v103, v86, v85);
              _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v19 = v104;
LABEL_174:
              v13 = 0LL;
              goto LABEL_185;
            }
            if ( (v85 & 0x400) != 0 || (v85 & 0x800) != 0 || !(unsigned int)MiInvalidPteConforms(v85) )
              goto LABEL_174;
            if ( (unsigned int)MiGetPagingFileOffset((__int64)&v102) )
            {
              v19 = v19 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              v13 = 0LL;
              v14 = a3;
            }
            else
            {
              v13 = 0LL;
              if ( !v89 )
                v19 = 0LL;
              v14 = a3;
            }
LABEL_186:
            v90 = v100;
            *((_QWORD *)v100 + 1) = v19;
            MappedSystemVa = v90 + 16;
            v100 = MappedSystemVa;
            v105 = MappedSystemVa;
            --v106;
            v17 = v93;
            v16 = v98;
            goto LABEL_24;
          }
          if ( (v122 & 2) == 0 )
            goto LABEL_83;
          MiMakeSystemAddressValid(v42 << 25 >> 16, v43);
        }
        ++v34;
        v35 += 8;
        if ( v34 >= 3 )
          goto LABEL_83;
      }
    }
    if ( v18 )
    {
      MiLockProtoPage(0LL, v18, v17);
      v18 = 0LL;
      v95 = 0LL;
      v16 = v98;
    }
    if ( v17 != 17 )
    {
      v23 = (volatile LONG *)MiGetSharedVm(v16);
      ExReleaseSpinLockSharedFromDpcLevel(v23);
      __writecr8(v17);
      v17 = 17;
      v93 = 17;
    }
    MiUnlockAndDereferenceVad(v15);
    v14 = a3;
  }
  if ( (v20 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(v14 + 1740) & 1) == 0 )
  {
    v15 = v117;
    v107 = v117;
    memset(v117, 0, 0x88uLL);
    v117[12] &= 0xFFFFFFF8;
    --v108->SpecialApcDisable;
LABEL_45:
    v14 = a3;
    v16 = v98;
    v13 = 0LL;
    goto LABEL_46;
  }
  v15 = (_DWORD *)MiObtainReferencedVad(v20, &v99);
  v107 = v15;
  if ( v15 )
    goto LABEL_45;
  v24 = v99;
  if ( v99 != -1073741558 )
  {
    v13 = 0LL;
    goto LABEL_185;
  }
  v16 = v98;
LABEL_189:
  if ( v17 != 17 )
  {
    v91 = (volatile LONG *)MiGetSharedVm(v16);
    ExReleaseSpinLockSharedFromDpcLevel(v91);
    __writecr8(v17);
  }
  if ( v18 )
  {
    LOBYTE(v16) = 17;
    MiLockProtoPage(0LL, v18, v16);
  }
  if ( v15 )
  {
    if ( v15 == v117 )
      KiLeaveGuardedRegionUnsafe(v108);
    else
      MiUnlockAndDereferenceVad(v15);
  }
  if ( v101 == 1 )
    KiUnstackDetachProcess(v118, 0LL);
  v92 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v92, 0);
  }
  else
  {
    memmove(v110, Srca, (v100 - Srca) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v24;
}

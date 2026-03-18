/*
 * XREFs of MiProtectPrivateMemory @ 0x1401139F0
 * Callers:
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiUnlockVa @ 0x14004EACC (MiUnlockVa.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMakeProtoLeafValid @ 0x1400BF71C (MiMakeProtoLeafValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400C06B0 (MiSetProtectionOnTransitionPte.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiIsAddressGlobal @ 0x140113970 (MiIsAddressGlobal.c)
 *     MiSanitizePfnProtection @ 0x140116C20 (MiSanitizePfnProtection.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MiFaultInPagedPool @ 0x14018630C (MiFaultInPagedPool.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int *a6,
        _DWORD *a7)
{
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  char v12; // r12
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rbx
  unsigned __int8 v16; // r13
  ULONG_PTR v17; // rdi
  __int64 v18; // r12
  __int64 v19; // r9
  int PageProtection; // eax
  ULONG_PTR v21; // rbx
  __int64 v22; // r8
  int v23; // ebx
  int v24; // ecx
  __int64 v25; // r10
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  _QWORD *CloneAddress; // rbx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  ULONG_PTR v37; // r13
  __int64 v38; // rcx
  int v39; // edi
  __int64 v40; // r8
  unsigned __int64 v41; // r12
  bool v42; // zf
  unsigned __int64 v43; // r15
  char v44; // si
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // rdi
  __int64 v47; // r13
  unsigned __int64 v48; // rax
  __int64 v49; // r10
  __int64 v50; // r9
  __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r8
  unsigned int v54; // edx
  __int64 v55; // r9
  int v56; // r14d
  __int64 v57; // rdi
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r15
  unsigned __int64 v63; // rbx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // r10
  signed __int64 v68; // r10
  unsigned __int64 v69; // r9
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // r8
  unsigned __int64 v74; // rax
  ULONG_PTR v75; // rdi
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v77; // rax
  unsigned int v78; // eax
  __int64 DemandZeroPte; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned __int8 v83; // [rsp+30h] [rbp-D0h]
  int v84; // [rsp+34h] [rbp-CCh]
  __int64 v86; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v87; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v88; // [rsp+50h] [rbp-B0h]
  __int64 v89; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  int v93; // [rsp+78h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v96; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v98; // [rsp+A4h] [rbp-5Ch]
  __int64 v99; // [rsp+A8h] [rbp-58h]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  int v102; // [rsp+160h] [rbp+60h] BYREF
  __int16 v103; // [rsp+164h] [rbp+64h]
  __int64 v104; // [rsp+168h] [rbp+68h]
  __int64 v105; // [rsp+170h] [rbp+70h]
  __int64 v106; // [rsp+178h] [rbp+78h]

  v103 = 0;
  v105 = 0LL;
  v106 = 0LL;
  v96 = a7;
  v104 = 20LL;
  v102 = 1;
  BugCheckParameter4 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].IdealNode[12];
  v88 = &Process[1].IdealNode[12];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v87 = v11;
  v99 = 20LL;
  v91 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v97 = 1;
  v98 = 4;
  v100 = 0LL;
  v101 = 0LL;
  v84 = 0;
  v12 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  v83 = v12;
  if ( MiComputePageCommitment(a2, a3, a1, v12, 0, &v92) != ((__int64)(v91 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v10, v12, v13);
    return 3221225517LL;
  }
  v15 = v92;
  if ( v92 )
  {
    MiUnlockWorkingSetShared(v10, v12, v13);
    result = MiChargeFullProcessCommitment(Process, v15);
    if ( (int)result < 0 )
      return result;
    v16 = MiLockWorkingSetShared(v10);
    v83 = v16;
  }
  else
  {
    v16 = v12;
  }
  v17 = BugCheckParameter4;
  v18 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v89 = v18;
  MiMakeSystemAddressValid(v11, 0);
  if ( MI_READ_PTE_LOCK_FREE(v11) )
  {
    while ( 1 )
    {
      PageProtection = MiGetPageProtection(BugCheckParameter4, v11, &BugCheckParameter2, v19);
      v21 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
        break;
      MiUnlockPageTableInternal(v10, ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiUnlockWorkingSetShared(v10, v16, v22);
      MiFaultInPagedPool(v21);
      MiLockWorkingSetShared(v10);
      MiMakeSystemAddressValid(v11, 0);
      if ( !MI_READ_PTE_LOCK_FREE(v11) )
        goto LABEL_10;
    }
    v23 = 1;
    v84 = 1;
    v24 = MmProtectToValue[PageProtection];
  }
  else
  {
LABEL_10:
    v23 = 0;
    v24 = MmProtectToValue[(*(_DWORD *)(BugCheckParameter4 + 48) >> 3) & 0x1F];
  }
  *a6 = v24;
  if ( v11 <= v91 )
  {
    v25 = 0xFFFFFFFFFLL;
    v26 = 0xFFFFF6FB7DBED7F8uLL;
    v27 = 0xFFFFFA8000000000uLL;
    while ( 1 )
    {
      if ( (v11 & 0xFFF) != 0 && v23 != 1 )
      {
        CloneAddress = 0LL;
      }
      else
      {
        CloneAddress = 0LL;
        v84 = 0;
        if ( v18 )
        {
          MiFlushTbList(&v102);
          MiUnlockPageTableInternal(v10, v18);
        }
        v18 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v89 = v18;
        MiMakeSystemAddressValid(v11, 0);
        v26 = 0xFFFFF6FB7DBED7F8uLL;
        v25 = 0xFFFFFFFFFLL;
        v27 = 0xFFFFFA8000000000uLL;
      }
      v29 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v30 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 8 * ((v11 >> 3) & 0x1FF));
          v32 = v29 | 0x20;
          if ( (v31 & 0x20) == 0 )
            v32 = v29;
          v29 = v32;
          if ( (v31 & 0x42) != 0 )
            v29 = v32 | 0x42;
        }
      }
      v86 = v29;
      if ( (v29 & 1) == 0 )
        break;
      if ( (unsigned __int64)&v86 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v86 <= v26
        && (unsigned int)MiPteHasShadow()
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)&v86 >> 3) & 0x1FF));
          v35 = v29 | 0x20;
          if ( (v34 & 0x20) == 0 )
            v35 = v29;
          v29 = v35;
          if ( (v34 & 0x42) != 0 )
            v29 = v35 | 0x42;
        }
      }
      v36 = v25 & (v29 >> 12);
      v37 = v27 + 48 * v36;
      if ( (*(_BYTE *)(v17 + 48) & 7) == 6 && MiRotatedToFrameBuffer(v11) )
      {
        v54 = a4;
        goto LABEL_86;
      }
      if ( (*(_QWORD *)(v37 + 40) & 0x200000000000000LL) == 0 )
      {
        if ( (a5 & 0x101) != 0 )
        {
          v41 = v87;
          v42 = (v11 & 0xFFFFFFFFFFFFF000uLL) == (v91 & 0xFFFFFFFFFFFFF000uLL);
          v43 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v42 )
            v43 = v91;
          v44 = 0;
          v45 = v87;
          v46 = (__int64)(v87 << 25) >> 16;
          if ( v87 <= v43 )
          {
            v47 = (__int64)v88;
            while ( 1 )
            {
              v86 = MI_READ_PTE_LOCK_FREE(v45);
              if ( (v86 & 1) == 0 )
                goto LABEL_69;
              v48 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v86);
              v51 = v50 + 48 * (v49 & (v48 >> 12));
              if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(v41) )
                goto LABEL_69;
              if ( (*(_QWORD *)(v51 + 40) & 0x200000000000000LL) != 0 )
                goto LABEL_69;
              if ( (MiGetWsleContents(0x200000000000000LL, v46) & 0xF) == 8 )
                break;
              MiInsertTbFlushEntry((__int64)&v97, v46, 1LL, 0);
              if ( HIDWORD(v99) == (_DWORD)v99 )
                goto LABEL_64;
LABEL_68:
              v45 += 8LL;
              v46 += 4096LL;
              if ( v45 > v43 )
                goto LABEL_69;
            }
            v44 = 1;
            *v96 = 1;
LABEL_64:
            if ( HIDWORD(v99) )
              MiFreeWsleList(v47, (__int64)&v97, 0);
            if ( v44 == 1 )
            {
              MiUnlockVa(v47, v46);
              v44 = 0;
            }
            goto LABEL_68;
          }
LABEL_69:
          v10 = (__int64)v88;
          if ( HIDWORD(v99) )
            MiFreeWsleList((__int64)v88, (__int64)&v97, 0);
          v16 = v83;
          v11 = v41;
LABEL_72:
          v18 = v89;
LABEL_73:
          v23 = v84;
          goto LABEL_74;
        }
        v93 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v93);
          while ( *(__int64 *)(v37 + 24) < 0 );
        }
        v54 = MiSanitizePfnProtection(v17, (*(_QWORD *)(v37 + 16) >> 5) & 0x1FLL, a4);
        a4 = v54;
        *(_QWORD *)(v37 + 16) = v55 ^ ((unsigned __int16)v55 ^ (unsigned __int16)(32 * v54)) & 0x3E0;
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_86:
        v56 = v54;
        v57 = *(_QWORD *)v11;
        v58 = (__int64)(v11 << 25) >> 16;
        if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow() && (v57 & 1) != 0 && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
          {
            v59 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v59 )
            {
              v60 = *(_QWORD *)(v59 + 8 * ((v11 >> 3) & 0x1FF));
              v61 = v57 | 0x20;
              if ( (v60 & 0x20) == 0 )
                v61 = v57;
              v57 = v61;
              if ( (v60 & 0x42) != 0 )
                v57 = v61 | 0x42;
            }
          }
          v54 = a4;
        }
        if ( (((unsigned __int64)v57 >> 4) & 1) != 0 || (v57 & 8) == 0 )
        {
          if ( (((unsigned __int64)v57 >> 4) & 1) != 0 )
          {
            if ( (v54 & 0x18) != 8 )
              v56 = v54 & 0xFFFFFFE7 | 8;
          }
          else if ( (v54 & 0x18) != 0 )
          {
            v56 = v54 & 0xFFFFFFE7;
          }
        }
        else
        {
          v56 = v54 | 0x18;
          if ( (v54 & 0x18) == 0x18 )
            v56 = v54;
        }
        if ( (unsigned int)MiIsPfnInline(v36) )
        {
          if ( (MiFlags & 0x40000) != 0 && (v56 & 2) != 0 )
          {
            MiLockPageAtDpcInline(v37);
            if ( !(unsigned int)MiGetPagePrivilege(v37, 1, 0LL) )
              MiMarkPfnVerified(v37);
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          v37 = 0LL;
        }
        v62 = v56 & 0x1F;
        v63 = (v36 << 12) | MmProtectToPteMask[v62] & 0xFFFF000000000E7FuLL | 0x21;
        v64 = v87;
        if ( v87 < 0xFFFFF68000000000uLL || v87 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_128;
        if ( v87 >= 0xFFFFF6FB40000000uLL && v87 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          if ( v87 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v63 = (v36 << 12) | MmProtectToPteMask[v62] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
          }
          else if ( (v56 & 0x4000000) == 0 )
          {
            v63 = (v36 << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v62] & 0x7FFF000000000E7FLL | 0x21;
          }
          if ( (unsigned int)MiUserPdeOrAbove(v87) )
            v63 |= 4uLL;
        }
        if ( v64 <= 0xFFFFF6BFFFFFFF78uLL )
          v63 |= 4uLL;
        if ( (unsigned int)MiIsAddressGlobal(v58) )
LABEL_128:
          v63 |= 0x100uLL;
        if ( v56 < 0 && (v56 & 5) == 4 )
          v63 |= 0x42uLL;
        v65 = v63 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( (v56 & 0x40000000) == 0 )
          v65 = v63;
        if ( (v56 & 0x20000000) != 0 )
          v65 ^= ((unsigned __int16)v65 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100;
        v66 = v65 & 0xFFFFFFFFFFFFFEFFuLL;
        if ( (v56 & 0x8000000) == 0 )
          v66 = v65;
        v67 = v66 | 0x80;
        if ( (v56 & 0x4000000) == 0 )
          v67 = v66;
        v68 = v67 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        if ( !v37 && (v56 & 4) != 0 )
          v68 |= 0x42uLL;
        v11 = v87;
        v69 = 0xFFFFF6FB7DBED000uLL;
        v70 = *(_QWORD *)v87;
        if ( v87 >= 0xFFFFF6FB7DBED000uLL
          && v87 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v70 & 1) != 0
          && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
        {
          v71 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v71 )
          {
            v72 = *(_QWORD *)(v71 + 8 * ((v11 >> 3) & 0x1FF));
            v73 = v70 | 0x20;
            if ( (v72 & 0x20) == 0 )
              v73 = v70;
            v70 = v73;
            if ( (v72 & 0x42) != 0 )
              v70 = v73 | 0x42;
          }
        }
        v74 = v68 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v70) & 0xF | (16 * ((v70 >> 60) & 7))) << 56);
        *(_QWORD *)v11 = v74;
        if ( v11 >= v69 && v11 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v11, v74, 0xFFFFF6FB7DBED7F8uLL);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
          || (v68 & 0x40) == 0 && (v57 & 0x40) != 0
          || (v68 & 2) == 0 && (v57 & 2) != 0
          || v68 < 0 && v57 >= 0 )
        {
          MiInsertTbFlushEntry((__int64)&v102, v58, 1LL, 0);
        }
        if ( (v57 & 0x42) != 0 )
        {
          v75 = BugCheckParameter4;
          if ( v37 && ((*(_BYTE *)(BugCheckParameter4 + 48) & 7) != 6 || MiRotatedToFrameBuffer(v11)) )
            MiLockPageAndSetDirty(v37, 1LL);
          if ( (*(_DWORD *)(v75 + 48) & 7) == 4 )
            MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v58, v75);
        }
        v10 = (__int64)v88;
        v16 = v83;
LABEL_174:
        v11 += 8LL;
        v87 = v11;
        goto LABEL_72;
      }
      if ( *(__int64 *)(v37 + 8) < 0 )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL);
        if ( *(_QWORD *)(*(_QWORD *)(v38 + 1296) + 328LL) <= CloneAddress[12] )
          CloneAddress = 0LL;
      }
      MiFlushTbList(&v102);
      v39 = MiCopyOnWrite((__int64)(v11 << 25) >> 16);
      if ( v39 >= 0 )
      {
        v16 = v83;
        if ( CloneAddress )
          --v92;
        goto LABEL_73;
      }
      MiUnlockPageTableInternal(v10, v18);
      v16 = v83;
      v89 = 0LL;
      v18 = 0LL;
      MiUnlockWorkingSetShared(v10, v83, v40);
      MiCopyOnWriteCheckConditions(v10, (unsigned int)v39);
      v23 = 1;
      v84 = 1;
      MiLockWorkingSetShared(v10);
LABEL_74:
      v25 = 0xFFFFFFFFFLL;
      v17 = BugCheckParameter4;
      v26 = 0xFFFFF6FB7DBED7F8uLL;
      v27 = 0xFFFFFA8000000000uLL;
      if ( v11 > v91 )
        goto LABEL_75;
    }
    if ( (v29 & 0x400) != 0 )
    {
      MiFlushTbList(&v102);
      if ( (int)MiMakeProtoLeafValid(v11, 1LL, v16) < 0 )
      {
        v11 += 8LL;
        v87 = v11;
      }
      v23 = 1;
      v84 = 1;
      goto LABEL_74;
    }
    if ( (v29 & 0x800) != 0 )
    {
      if ( (unsigned int)MiSetProtectionOnTransitionPte(v17, (unsigned __int64 *)v11, a4, 1) )
        goto LABEL_73;
    }
    else
    {
      if ( v29 )
      {
        v77 = v29 >> 5;
      }
      else
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
        LODWORD(v77) = *(_DWORD *)(v17 + 48) >> 3;
      }
      v78 = MiSanitizePfnProtection(v17, v77 & 0x1F, a4);
      a4 = v78;
      if ( v29 )
        DemandZeroPte = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(32 * v78)) & 0x3E0;
      else
        DemandZeroPte = MiMakeDemandZeroPte(v78);
      v86 = DemandZeroPte;
      *(_QWORD *)v11 = DemandZeroPte;
      if ( MiPteInShadowRange(v11) )
      {
        MiWritePteShadow(v81, v80, v82);
        v11 += 8LL;
        v87 = v11;
        goto LABEL_72;
      }
    }
    goto LABEL_174;
  }
LABEL_75:
  MiFlushTbList(&v102);
  if ( v18 )
    MiUnlockPageTableInternal(v10, v18);
  MiUnlockWorkingSetShared(v10, v16, v52);
  if ( v92 )
    MiReturnFullProcessCommitment(Process, v92, v53);
  return 0LL;
}

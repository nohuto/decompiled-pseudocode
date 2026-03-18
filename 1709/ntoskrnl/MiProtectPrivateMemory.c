/*
 * XREFs of MiProtectPrivateMemory @ 0x1400371A0
 * Callers:
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiSanitizePfnProtection @ 0x1400384C0 (MiSanitizePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400E4CF4 (MiSetProtectionOnTransitionPte.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiUnlockVa @ 0x14010C884 (MiUnlockVa.c)
 *     MiComputePageCommitment @ 0x140112BF0 (MiComputePageCommitment.c)
 *     MiMakeProtoLeafValid @ 0x140128454 (MiMakeProtoLeafValid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // esi
  int v8; // edi
  int v9; // r13d
  __int64 v10; // r12
  ULONG_PTR ProtoLeafValid; // r14
  LONG *SharedVm; // rbx
  ULONG_PTR v13; // rbx
  __int64 result; // rax
  __int64 v15; // r13
  LONG *v16; // rbx
  KIRQL v17; // al
  KIRQL v18; // di
  ULONG_PTR v19; // rsi
  __int64 PteShadow; // rax
  int v21; // r15d
  unsigned __int64 v22; // rbx
  __int64 v23; // rdi
  unsigned __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 CloneAddress; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r12
  char v31; // r15
  __int64 *v32; // rbx
  __int64 v33; // rsi
  unsigned __int16 *v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rdi
  unsigned int v39; // r15d
  __int64 v40; // r9
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v42; // rax
  unsigned int v43; // eax
  ULONG_PTR v44; // r9
  __int64 DemandZeroPte; // rax
  KIRQL v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v55; // [rsp+70h] [rbp-90h]
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  _DWORD *v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+90h] [rbp-70h] BYREF
  __int16 v59; // [rsp+94h] [rbp-6Ch]
  __int64 v60; // [rsp+98h] [rbp-68h]
  __int64 v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  int v63; // [rsp+150h] [rbp+50h] BYREF
  __int16 v64; // [rsp+154h] [rbp+54h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  __int64 v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]

  v7 = a3;
  v57 = a7;
  v64 = 0;
  v8 = a2;
  v66 = 0LL;
  v67 = 0LL;
  v9 = a1;
  v65 = 20LL;
  v63 = 1;
  BugCheckParameter4 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].IdealNode[12];
  v55 = &Process[1].IdealNode[12];
  ProtoLeafValid = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = 20LL;
  v51 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = 1;
  v59 = 4;
  v61 = 0LL;
  v62 = 0LL;
  v47 = 0;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v46 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v51;
  if ( MiComputePageCommitment(v8, v7, v9, v46, (__int64)&v53) != ((__int64)(v51 - ProtoLeafValid) >> 3) + 1 )
  {
    MiUnlockWorkingSetExclusive(v10, v46);
    return 3221225517LL;
  }
  v15 = v53;
  v54 = v53;
  if ( v53 )
  {
    MiUnlockWorkingSetExclusive(v10, v46);
    result = MiChargeFullProcessCommitment(Process, v15);
    if ( (int)result < 0 )
      return result;
    v16 = MiGetSharedVm(v10);
    v17 = ExAcquireSpinLockExclusive(v16);
    v16[1] = 0;
    v18 = v17;
    v13 = v51;
    v46 = v17;
  }
  else
  {
    v18 = v46;
  }
  v19 = BugCheckParameter4;
  MiMakeSystemAddressValid(ProtoLeafValid, 1);
  PteShadow = *(_QWORD *)ProtoLeafValid;
  if ( ProtoLeafValid >= 0xFFFFF6FB7DBED000uLL && ProtoLeafValid <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(ProtoLeafValid, *(_QWORD *)ProtoLeafValid);
  if ( PteShadow )
  {
    *a6 = MmProtectToValue[(unsigned int)MiGetPageProtection(BugCheckParameter4, ProtoLeafValid)];
    v21 = 1;
    v47 = 1;
  }
  else
  {
    *a6 = MmProtectToValue[(*(_DWORD *)(BugCheckParameter4 + 48) >> 3) & 0x1F];
    v21 = 0;
  }
  if ( ProtoLeafValid <= v13 )
  {
    while ( 1 )
    {
      if ( (ProtoLeafValid & 0xFFF) == 0 || v21 == 1 )
      {
        v47 = 0;
        v21 = 0;
        MiMakeSystemAddressValid(ProtoLeafValid, 1);
      }
      v22 = *(_QWORD *)ProtoLeafValid;
      if ( ProtoLeafValid >= 0xFFFFF6FB7DBED000uLL && ProtoLeafValid <= 0xFFFFF6FB7DBED7F8uLL )
        v22 = MiReadPteShadow(ProtoLeafValid, *(_QWORD *)ProtoLeafValid);
      v49 = v22;
      if ( (v22 & 1) != 0 )
        break;
      if ( (v22 & 0x400) != 0 )
      {
        MiFlushTbList(&v63);
        v21 = 1;
        ProtoLeafValid = MiMakeProtoLeafValid(ProtoLeafValid);
        v47 = 1;
        goto LABEL_57;
      }
      if ( (v22 & 0x800) != 0 )
      {
        if ( (unsigned int)MiSetProtectionOnTransitionPte(v19, ProtoLeafValid, a4, 1LL) )
          goto LABEL_57;
      }
      else
      {
        if ( v22 )
        {
          v42 = v22 >> 5;
        }
        else
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(ProtoLeafValid << 25) >> 16);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
          LODWORD(v42) = *(_DWORD *)(v19 + 48) >> 3;
        }
        v43 = MiSanitizePfnProtection(v19, v42 & 0x1F, a4);
        a4 = v43;
        if ( v22 )
          DemandZeroPte = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(32 * v43)) & 0x3E0;
        else
          DemandZeroPte = MiMakeDemandZeroPte(v43);
        v49 = DemandZeroPte;
        *(_QWORD *)ProtoLeafValid = DemandZeroPte;
        if ( ProtoLeafValid >= v44 && ProtoLeafValid <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(ProtoLeafValid, DemandZeroPte);
      }
      ProtoLeafValid += 8LL;
LABEL_56:
      v21 = v47;
LABEL_57:
      v18 = v46;
      if ( ProtoLeafValid > v51 )
        goto LABEL_58;
    }
    v23 = MI_GET_PAGE_FRAME_FROM_PTE(&v49);
    v26 = v25 + 48 * v23;
    if ( (*(_BYTE *)(v19 + 48) & 7) == 6 )
    {
      if ( MiRotatedToFrameBuffer((__int64 *)ProtoLeafValid) )
      {
        v39 = a4;
LABEL_67:
        MiRevertValidPte(v19, ProtoLeafValid, v39, v23, (__int64)&v63);
        ProtoLeafValid += 8LL;
        goto LABEL_56;
      }
      v24 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) != 0 )
    {
      CloneAddress = 0LL;
      if ( *(__int64 *)(v26 + 8) < 0 )
      {
        CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL, 0LL, v24);
        if ( *(_QWORD *)(*(_QWORD *)(v28 + 1296) + 240LL) <= *(_QWORD *)(CloneAddress + 72) )
          CloneAddress = v29;
      }
      MiFlushTbList(&v63);
      if ( (unsigned int)MiCopyOnWriteEx((__int64)(ProtoLeafValid << 25) >> 16, ProtoLeafValid, -1, v46, 0) )
      {
        if ( CloneAddress )
        {
          v54 = --v15;
          v53 = v15;
        }
      }
      else
      {
        v21 = 1;
        v47 = 1;
      }
      goto LABEL_57;
    }
    if ( (a5 & 0x101) != 0 )
    {
      v30 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) == (v51 & 0xFFFFFFFFFFFFF000uLL) )
        v30 = v51;
      v31 = 0;
      v32 = (__int64 *)ProtoLeafValid;
      v33 = (__int64)(ProtoLeafValid << 25) >> 16;
      if ( ProtoLeafValid <= v30 )
      {
        v34 = v55;
        while ( 1 )
        {
          v35 = *v32;
          if ( (unsigned __int64)v32 >= v24 && (unsigned __int64)v32 <= 0xFFFFF6FB7DBED7F8uLL )
            v35 = MiReadPteShadow(v32, *v32);
          v49 = v35;
          if ( (v35 & 1) == 0
            || (v36 = MI_GET_PAGE_FRAME_FROM_PTE(&v49),
                v38 = v37 + 48 * v36,
                (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6)
            && MiRotatedToFrameBuffer((__int64 *)ProtoLeafValid)
            || (*(_QWORD *)(v38 + 40) & 0x200000000000000LL) != 0 )
          {
LABEL_52:
            v15 = v54;
            goto LABEL_53;
          }
          if ( (MiGetWsleContents(0x200000000000000LL, v33) & 0xF) == 8 )
            break;
          MiInsertTbFlushEntry(&v58, v33, 1LL, 0LL);
          if ( HIDWORD(v60) == (_DWORD)v60 )
            goto LABEL_47;
LABEL_51:
          ++v32;
          v24 = 0xFFFFF6FB7DBED000uLL;
          v33 += 4096LL;
          if ( (unsigned __int64)v32 > v30 )
            goto LABEL_52;
        }
        v31 = 1;
        *v57 = 1;
LABEL_47:
        if ( HIDWORD(v60) )
        {
          MiFreeWsleList(v34, &v58, 0LL);
          HIDWORD(v60) = 0;
        }
        if ( v31 == 1 )
        {
          MiUnlockVa(v34, v33);
          v31 = 0;
        }
        goto LABEL_51;
      }
LABEL_53:
      v10 = (__int64)v55;
      if ( HIDWORD(v60) )
      {
        MiFreeWsleList(v55, &v58, 0LL);
        HIDWORD(v60) = 0;
      }
      v19 = BugCheckParameter4;
      goto LABEL_56;
    }
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    v39 = MiSanitizePfnProtection(v19, (*(_QWORD *)(v26 + 16) >> 5) & 0x1FLL, a4);
    a4 = v39;
    *(_QWORD *)(v26 + 16) = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)(32 * v39)) & 0x3E0;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v15 = v53;
    v54 = v53;
    goto LABEL_67;
  }
LABEL_58:
  MiFlushTbList(&v63);
  MiUnlockWorkingSetExclusive(v10, v18);
  if ( v15 )
    MiReturnFullProcessCommitment(Process, v15);
  return 0LL;
}

/*
 * XREFs of MiProtectPrivateMemory @ 0x140106A80
 * Callers:
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeProtoLeafValid @ 0x1400293F8 (MiMakeProtoLeafValid.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiSetProtectionOnTransitionPte @ 0x140078AD0 (MiSetProtectionOnTransitionPte.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiSanitizePfnProtection @ 0x1401071F0 (MiSanitizePfnProtection.c)
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 *     MiUnlockVa @ 0x140134DC8 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // esi
  int v8; // edi
  ULONG_PTR v9; // r12
  __int64 v10; // r13
  ULONG_PTR ProtoLeafValid; // r15
  LONG *SharedVm; // rbx
  ULONG_PTR v13; // rbx
  __int64 result; // rax
  __int64 v15; // r13
  __int64 v16; // rdi
  LONG *v17; // rbx
  KIRQL v18; // al
  unsigned __int8 v19; // si
  int PageProtection; // eax
  _KPROCESS *v21; // rdx
  int v22; // r14d
  unsigned __int64 v23; // rax
  _KPROCESS *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rdi
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rdx
  _QWORD *v32; // rdi
  _QWORD *CloneAddress; // rax
  _QWORD *v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // r12
  char v37; // si
  ULONG_PTR v38; // r14
  unsigned __int64 v39; // rbx
  ULONG_PTR v40; // r13
  __int64 v41; // rdi
  __int64 v42; // rcx
  signed int v43; // esi
  __int64 v44; // r9
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v46; // rax
  unsigned int v47; // eax
  __int64 DemandZeroPte; // rbx
  __int64 v49; // rcx
  KIRQL v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh]
  __int64 v53; // [rsp+40h] [rbp-C0h]
  __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-B0h]
  int v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+68h] [rbp-98h]
  ULONG_PTR v59; // [rsp+70h] [rbp-90h]
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  _DWORD *v61; // [rsp+80h] [rbp-80h]
  int v62; // [rsp+90h] [rbp-70h] BYREF
  __int16 v63; // [rsp+94h] [rbp-6Ch]
  __int64 v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-58h]
  int v67; // [rsp+150h] [rbp+50h] BYREF
  __int16 v68; // [rsp+154h] [rbp+54h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]

  v7 = a3;
  v61 = a7;
  v68 = 0;
  v8 = a2;
  v70 = 0LL;
  v71 = 0LL;
  v9 = BugCheckParameter4;
  v69 = 20LL;
  v67 = 1;
  v59 = BugCheckParameter4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].IdealNode[12];
  v53 = (__int64)&Process[1].IdealNode[12];
  ProtoLeafValid = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64 = 20LL;
  v55 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62 = 1;
  v63 = 4;
  v65 = 0LL;
  v66 = 0LL;
  v51 = 0;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v50 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v55;
  if ( MiComputePageCommitment(v8, v7, v9, v50, (__int64)&v57) != ((__int64)(v55 - ProtoLeafValid) >> 3) + 1 )
  {
    MiUnlockWorkingSetExclusive(v10, v50);
    return 3221225517LL;
  }
  v15 = v57;
  v16 = v53;
  v58 = v57;
  if ( v57 )
  {
    MiUnlockWorkingSetExclusive(v53, v50);
    result = MiChargeFullProcessCommitment(Process, v15);
    if ( (int)result < 0 )
      return result;
    v17 = MiGetSharedVm(v53);
    v18 = ExAcquireSpinLockExclusive(v17);
    v17[1] = 0;
    v19 = v18;
    v13 = v55;
    v50 = v18;
  }
  else
  {
    v19 = v50;
  }
  MiMakeSystemAddressValid(ProtoLeafValid, 0LL, (*(_DWORD *)(v9 + 48) >> 8) & 0x3F, v19, 1);
  if ( MI_READ_PTE_LOCK_FREE(ProtoLeafValid) )
  {
    PageProtection = MiGetPageProtection(v9, ProtoLeafValid, v19, 1);
    v21 = (_KPROCESS *)MmProtectToValue;
    *a6 = MmProtectToValue[PageProtection];
    v22 = 1;
    v51 = 1;
  }
  else
  {
    v21 = (_KPROCESS *)MmProtectToValue;
    *a6 = MmProtectToValue[(*(_DWORD *)(v9 + 48) >> 3) & 0x1F];
    v22 = 0;
  }
  if ( ProtoLeafValid <= v13 )
  {
    do
    {
      if ( (ProtoLeafValid & 0xFFF) == 0 || v22 == 1 )
      {
        v51 = 0;
        v22 = 0;
        MiMakeSystemAddressValid(ProtoLeafValid, (__int64)&v67, (*(_DWORD *)(v9 + 48) >> 8) & 0x3F, v19, 1);
      }
      v23 = MI_READ_PTE_LOCK_FREE(ProtoLeafValid);
      v54 = v23;
      v27 = v23;
      if ( (v23 & 1) != 0 )
      {
        v28 = MI_GET_PAGE_FRAME_FROM_PTE(&v54);
        v30 = v29 + 48 * v28;
        if ( (*(_BYTE *)(v9 + 48) & 7) == 6 && MiRotatedToFrameBuffer(ProtoLeafValid) )
        {
          v43 = a4;
          goto LABEL_50;
        }
        if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 )
        {
          v31 = *(_QWORD *)(v30 + 8);
          v32 = 0LL;
          if ( v31 < 0 )
          {
            CloneAddress = MiLocateCloneAddress((__int64)Process, v31 | 0x8000000000000000uLL);
            v31 = *(_QWORD *)(v35 + 1296);
            v32 = CloneAddress;
            if ( *(_QWORD *)(v31 + 240) <= CloneAddress[9] )
              v32 = v34;
          }
          MiFlushTbList((__int64)&v67, (_KPROCESS *)v31);
          if ( (unsigned int)MiCopyOnWriteEx(
                               (__int64)(ProtoLeafValid << 25) >> 16,
                               ProtoLeafValid,
                               0xFFFFFFFFFFFFFFFFuLL,
                               v19,
                               0) )
          {
            if ( v32 )
            {
              v58 = --v15;
              v57 = v15;
            }
          }
          else
          {
            v22 = 1;
            v51 = 1;
          }
          goto LABEL_66;
        }
        if ( (a5 & 0x101) == 0 )
        {
          v56 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v56);
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          v43 = MiSanitizePfnProtection(v9, (*(_QWORD *)(v30 + 16) >> 5) & 0x1FLL, a4, *(_QWORD *)(v30 + 16));
          a4 = v43;
          *(_QWORD *)(v30 + 16) = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)(32 * v43)) & 0x3E0;
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 = v57;
          v58 = v57;
LABEL_50:
          MiRevertValidPte(v9, ProtoLeafValid, v43, v28, (__int64)&v67);
          ProtoLeafValid += 8LL;
          goto LABEL_66;
        }
        v36 = v55;
        if ( (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) != (v55 & 0xFFFFFFFFFFFFF000uLL) )
          v36 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) + 4088;
        v37 = 0;
        v38 = ProtoLeafValid;
        v39 = (__int64)(ProtoLeafValid << 25) >> 16;
        if ( ProtoLeafValid <= v36 )
        {
          v40 = v59;
          while ( 1 )
          {
            v54 = MI_READ_PTE_LOCK_FREE(v38);
            if ( (v54 & 1) == 0
              || (v41 = 6 * MI_GET_PAGE_FRAME_FROM_PTE(&v54), (*(_BYTE *)(v40 + 48) & 7) == 6)
              && MiRotatedToFrameBuffer(ProtoLeafValid)
              || (v42 = *(_QWORD *)(8 * v41 - 0x57FFFFFFFD8LL), (v42 & 0x200000000000000LL) != 0) )
            {
LABEL_42:
              v15 = v58;
              goto LABEL_43;
            }
            if ( (MiGetWsleContents(v42, v39) & 0xF) == 8 )
              break;
            MiInsertTbFlushEntry((__int64)&v62, v39, 1LL, 0);
            if ( HIDWORD(v64) == (_DWORD)v64 )
              goto LABEL_37;
LABEL_41:
            v38 += 8LL;
            v39 += 4096LL;
            if ( v38 > v36 )
              goto LABEL_42;
          }
          v37 = 1;
          *v61 = 1;
LABEL_37:
          if ( HIDWORD(v64) )
          {
            MiFreeWsleList(v53, (__int64)&v62, 0);
            HIDWORD(v64) = 0;
          }
          if ( v37 == 1 )
          {
            MiUnlockVa(v53, v39);
            v37 = 0;
          }
          goto LABEL_41;
        }
LABEL_43:
        if ( !HIDWORD(v64) )
        {
          v9 = v59;
          v22 = v51;
          goto LABEL_66;
        }
        v16 = v53;
        MiFreeWsleList(v53, (__int64)&v62, 0);
        v9 = v59;
        v22 = v51;
        HIDWORD(v64) = 0;
      }
      else
      {
        if ( (v23 & 0x400) == 0 )
        {
          if ( (v23 & 0x800) != 0 )
          {
            if ( (unsigned int)MiSetProtectionOnTransitionPte(v9, (unsigned __int64 *)ProtoLeafValid, a4, 1) )
              goto LABEL_66;
          }
          else
          {
            if ( v23 )
            {
              v46 = v23 >> 5;
            }
            else
            {
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(ProtoLeafValid << 25) >> 16, v24, v25, v26);
              MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
              LODWORD(v46) = *(_DWORD *)(v9 + 48) >> 3;
            }
            v47 = MiSanitizePfnProtection(v9, v46 & 0x1F, a4, v26);
            a4 = v47;
            if ( v27 )
              DemandZeroPte = ((unsigned __int16)v27 ^ (unsigned __int16)(32 * v47)) & 0x3E0 ^ v27;
            else
              DemandZeroPte = MiMakeDemandZeroPte(v47);
            v54 = DemandZeroPte;
            *(_QWORD *)ProtoLeafValid = DemandZeroPte;
            if ( (unsigned int)MiPteInShadowRange(ProtoLeafValid) )
              MiWritePteShadow(v49);
          }
          ProtoLeafValid += 8LL;
LABEL_66:
          v16 = v53;
          goto LABEL_67;
        }
        MiFlushTbList((__int64)&v67, v24);
        v22 = 1;
        ProtoLeafValid = MiMakeProtoLeafValid(ProtoLeafValid, 1LL, v19);
        v51 = 1;
      }
LABEL_67:
      v19 = v50;
    }
    while ( ProtoLeafValid <= v55 );
  }
  MiFlushTbList((__int64)&v67, v21);
  MiUnlockWorkingSetExclusive(v16, v19);
  if ( v15 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}

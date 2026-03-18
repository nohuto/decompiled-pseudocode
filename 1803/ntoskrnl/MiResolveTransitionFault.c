/*
 * XREFs of MiResolveTransitionFault @ 0x140119A70
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiIsAddressGlobal @ 0x140113970 (MiIsAddressGlobal.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x140258CD0 (MiMakeProtoReadOnly.c)
 *     MiMakeTransitionHeatBatch @ 0x140258D38 (MiMakeTransitionHeatBatch.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 */

__int64 __fastcall MiResolveTransitionFault(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 Address; // r13
  int v8; // ebx
  __int64 v9; // rdi
  ULONG_PTR v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 BugCheckParameter4; // rsi
  __int64 v14; // rax
  unsigned __int64 CurrentThread; // r8
  unsigned __int64 v16; // r10
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // r11
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdi
  char v28; // cl
  __int64 v29; // r10
  char v30; // r11
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  char v39; // al
  __int64 v40; // r8
  __int64 v41; // r9
  BOOL v42; // edi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 TransitionHeatBatch; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r10
  unsigned __int64 v55; // rax
  char v56; // r10
  __int64 v57; // r11
  int v58; // edx
  __int64 v59; // rdx
  int ImagePageOk; // edi
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // r10d
  __int64 v64; // rdx
  unsigned int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // r8
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rbx
  __int64 v83; // rax
  int v84; // r10d
  __int16 v85; // dx
  bool v86; // zf
  __int16 v87; // dx
  unsigned __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rcx
  int v91; // r12d
  unsigned __int64 v92; // rdx
  char v93; // al
  int v94; // ecx
  __int64 v95; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v97; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v99; // eax
  char *v100; // rbx
  _BYTE *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  char v105; // dl
  __int64 v106; // rcx
  unsigned __int64 v107; // rax
  int v108[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v109; // [rsp+48h] [rbp-39h]
  __int64 v110; // [rsp+50h] [rbp-31h]
  PVOID P; // [rsp+58h] [rbp-29h] BYREF
  int v112; // [rsp+60h] [rbp-21h] BYREF
  __int64 v113; // [rsp+68h] [rbp-19h]
  int v114; // [rsp+70h] [rbp-11h] BYREF
  int v115; // [rsp+74h] [rbp-Dh] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v117; // [rsp+80h] [rbp-1h] BYREF
  struct _KEVENT *v118; // [rsp+88h] [rbp+7h]
  __int64 v119; // [rsp+90h] [rbp+Fh]
  __int64 v121; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v122; // [rsp+F8h] [rbp+77h]

  v122 = a4;
  Address = 0LL;
  v110 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 16);
  v109 = *(_QWORD *)a1;
  v113 = v9;
  if ( a5 )
    *a5 = 0LL;
  if ( !a3 )
  {
    BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(a2);
    v10 = BugCheckParameter3;
    if ( (BugCheckParameter3 & 0x800) != 0 )
    {
      while ( 1 )
      {
        if ( (unsigned int)MiInvalidPteConforms(v10) )
        {
          v11 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&BugCheckParameter3);
          if ( (unsigned int)MiIsPfnInline(v11) )
          {
            BugCheckParameter4 = 48 * v12 - 0x58000000000LL;
            v114 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v114);
              while ( *(__int64 *)(BugCheckParameter4 + 24) < 0 );
            }
            v14 = MI_READ_PTE_LOCK_FREE(a2);
            if ( v14 == BugCheckParameter3 )
            {
              if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) != a2 )
                KeBugCheckEx(0x1Au, 0x411uLL, a2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter4 + 8));
              v18 = *(_QWORD *)a2;
              if ( a2 >= 0xFFFFF6FB7DBED000uLL
                && a2 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow()
                && (v18 & 1) != 0
                && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
              {
                CurrentThread = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( CurrentThread )
                {
                  v19 = *(_QWORD *)(CurrentThread + 8 * ((a2 >> 3) & 0x1FF));
                  CurrentThread = v18 | 0x20;
                  if ( (v19 & 0x20) == 0 )
                    CurrentThread = v18;
                  v18 = CurrentThread;
                  if ( (v19 & 0x42) != 0 )
                    v18 = CurrentThread | 0x42;
                }
              }
              v20 = (__int64)a5;
              v21 = v109;
              *(_QWORD *)v108 = v18;
              goto LABEL_39;
            }
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), v16);
          }
        }
        BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(a2);
        v10 = BugCheckParameter3;
        if ( (BugCheckParameter3 & 0x800) == 0 )
          return 3221226548LL;
      }
    }
    return 3221226548LL;
  }
  v22 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 8 * ((a2 >> 3) & 0x1FF));
      v25 = v22 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v22;
      v22 = v25;
      if ( (v24 & 0x42) != 0 )
        v22 = v25 | 0x42;
    }
  }
  *(_QWORD *)v108 = v22;
  BugCheckParameter4 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v108) - 0x58000000000LL;
LABEL_39:
  if ( (*(_BYTE *)(BugCheckParameter4 + 35) & 0x10) != 0 )
  {
    LODWORD(Address) = -1073740023;
LABEL_54:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v18) = 17;
      MiUnlockProtoPoolPage(a3, v18, CurrentThread, v20);
    }
    return (unsigned int)Address;
  }
  v18 = v9 & 1;
  v26 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  v119 = v18;
  if ( (v9 & 1) != 0 && *(_BYTE *)v26 == 1 )
  {
    MiUpdatePfnPriority(BugCheckParameter4, *(_DWORD *)(v26 + 80) & 7, 0);
    goto LABEL_54;
  }
  __incgsdword(0x2E98u);
  v27 = *(_QWORD *)(BugCheckParameter4 + 40);
  v28 = *(_BYTE *)(BugCheckParameter4 + 34);
  v118 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((v27 >> 40) & 0x3FF));
  if ( (v28 & 0x20) != 0 )
  {
    CurrentThread = (unsigned __int64)KeGetCurrentThread();
    if ( (*(_BYTE *)(CurrentThread + 1752) & 4) != 0 )
    {
      LODWORD(Address) = -1073741663;
      goto LABEL_54;
    }
    if ( v18 && *(_BYTE *)v26 == 5 && (*(_DWORD *)(v26 + 48) & 4) != 0 )
      goto LABEL_53;
    if ( !v20 )
    {
      LODWORD(Address) = -1073740748;
      goto LABEL_54;
    }
    if ( (v28 & 8) != 0 )
    {
LABEL_53:
      LODWORD(Address) = -1073741801;
      goto LABEL_54;
    }
    v29 = *(_QWORD *)BugCheckParameter4 - 32LL;
    P = (PVOID)v29;
    v30 = *(_BYTE *)(v29 + 189);
    if ( (v30 & 0x40) != 0 && (int)PsGetIoPriorityThread(CurrentThread) >= 2
      || CurrentThread == *(_QWORD *)(v29 + 152)
      || (*(_DWORD *)(CurrentThread + 116) & 0x8000) != 0
      || *(_DWORD *)(*(_QWORD *)(CurrentThread + 544) + 1848LL) && (*(_QWORD *)(v29 + 248) || (v30 & 4) != 0) )
    {
      v8 = 1;
    }
    if ( (v27 & 0x200000000000000LL) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0 )
      {
        if ( (*(_DWORD *)(CurrentThread + 484)
           || (*(_DWORD *)(CurrentThread + 116) & 0x400) != 0
           || *(_BYTE *)(a1 + 64)
           || v8)
          && (v30 & 0x10) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return MiResolveMappedFileFault(v109, (__int64 *)a2, a3, v110, 0LL, a5);
        }
        goto LABEL_78;
      }
      if ( !*(_BYTE *)(CurrentThread + 1758) && (v30 & 4) == 0 && !v8 || (v30 & 0x10) != 0 )
      {
LABEL_78:
        MiObtainProtoReference(a3, 1);
LABEL_83:
        v112 = 0;
        result = MiWaitForCollidedFaultComplete((unsigned __int64 *)a1, BugCheckParameter4, a3, 2u, &v112);
        v34 = result;
        if ( v112 == 1 )
          return result;
        if ( a3 )
        {
          MiLockNestedPageAtDpcInline(a3);
          MiRemoveLockedPageChargeAndDecRef(a3, v35, v36, v37);
          _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( v34 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( a3 )
          {
            LOBYTE(v31) = 17;
            MiUnlockProtoPoolPage(a3, v31, v32, v33);
          }
          return v34;
        }
        MiAddLockedPageCharge(BugCheckParameter4, 3);
        v38 = *(_QWORD *)(BugCheckParameter4 + 24);
        v39 = *(_BYTE *)(BugCheckParameter4 + 34) & 0xFE;
        *(_QWORD *)(BugCheckParameter4 + 24) = v38 ^ ((v38 + 1) ^ v38) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(BugCheckParameter4 + 34) = v39 | 6;
        MiRemoveLockedPageChargeAndDecRef(BugCheckParameter4, v38, v40, v41);
        P = 0LL;
LABEL_160:
        if ( v119 && *(_BYTE *)v26 == 4 )
        {
          *(_QWORD *)v108 = *(_QWORD *)v108 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        }
        if ( ((*(_QWORD *)v108 >> 5) & 0x1F) == 0x18 )
          MiMakeProtoReadOnly(a2, BugCheckParameter4);
        v73 = *(_QWORD *)a2;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v73 & 1) != 0
          && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
        {
          v74 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v74 )
          {
            v75 = *(_QWORD *)(v74 + 8 * ((a2 >> 3) & 0x1FF));
            v76 = v73 | 0x20;
            if ( (v75 & 0x20) == 0 )
              v76 = v73;
            v73 = v76;
            if ( (v75 & 0x42) != 0 )
              v73 = v76 | 0x42;
          }
        }
        v117 = v73;
        v77 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v117);
        v80 = ((v77 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[(v78 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_188;
        if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          v80 = a2 == 0xFFFFF6FB7DBEDF68uLL
              ? ((v77 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[(v78 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
              : ((v77 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[(v78 >> 5) & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
          if ( (unsigned int)MiUserPdeOrAbove(a2) )
            v80 |= 4uLL;
        }
        if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
          v80 |= 4uLL;
        if ( (unsigned int)MiIsAddressGlobal((__int64)(a2 << 25) >> 16) )
LABEL_188:
          v80 |= 0x100uLL;
        v81 = ZeroPte;
        v82 = v80 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        v83 = *(_QWORD *)(BugCheckParameter4 + 16);
        v117 = v82;
        *(_QWORD *)v108 = v82;
        if ( (v83 & 0x400) == 0
          && (v83 & 4) != 0
          && (unsigned __int16)v83 >> 12 == HIDWORD(v118[47].Header.WaitListHead.Flink) )
        {
          v81 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
        }
        if ( (v82 & 0x800) != 0 )
        {
          if ( (*(_BYTE *)(BugCheckParameter4 + 34) & 0x10) == 0 )
          {
            if ( !v122 )
              goto LABEL_202;
            if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
            {
LABEL_203:
              *(_QWORD *)a2 = v82;
              if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(a2, v82, v79);
LABEL_206:
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !a3 )
                goto LABEL_257;
              v84 = 0;
              v115 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v115);
                  while ( *(__int64 *)(a3 + 24) < 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
                v84 = 0;
              }
              *(_BYTE *)(a3 + 34) &= ~0x20u;
              v85 = *(_WORD *)(a3 + 32);
              if ( !v85 )
                MiBadRefCount(a3);
              v86 = v85 == 1;
              v87 = v85 - 1;
              *(_WORD *)(a3 + 32) = v87;
              if ( v86 && (unsigned int)MiIsPfnFileOnly(a3) )
                goto LABEL_255;
              v88 = *(_QWORD *)(a3 + 40);
              v89 = (v88 >> 52) & 1;
              if ( (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
              {
                if ( v89 )
                  goto LABEL_256;
              }
              else if ( v89 )
              {
                goto LABEL_256;
              }
              v90 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v87 )
              {
                v91 = 1;
LABEL_227:
                v92 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
                if ( v92 > 0xFFFFF6BFFFFFFF78uLL || v92 < 0xFFFFF68000000000uLL )
                {
                  v93 = *(_BYTE *)(a3 + 35);
                  if ( (v93 & 0x20) != 0 )
                  {
                    *(_BYTE *)(a3 + 35) = v93 & 0xDF;
                    goto LABEL_254;
                  }
                }
                v94 = v84;
                if ( (v88 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
                {
                  v94 = 1;
                }
                else if ( v92 <= 0xFFFFF6BFFFFFFF78uLL
                       && v92 >= 0xFFFFF68000000000uLL
                       && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
                {
                  v94 = 1;
                }
                else if ( v91 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
                {
                  v94 = 1;
                }
                v95 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v88 >> 40) & 0x3FF));
                if ( v94 == 1 )
                  MiReturnCommit(v95, 1uLL);
                if ( (ULONG_PTR *)v95 == &MiSystemPartition )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v97 = 1LL;
                  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
                  if ( (_DWORD)CachedResidentAvailable != -1 )
                  {
                    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                    {
                      while ( 1 )
                      {
                        v99 = _InterlockedCompareExchange(
                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                CachedResidentAvailable + 1,
                                CachedResidentAvailable);
                        v86 = (_DWORD)CachedResidentAvailable == v99;
                        LODWORD(CachedResidentAvailable) = v99;
                        if ( v86 )
                          break;
                        if ( v99 == -1 || (unsigned __int64)(v99 + 1LL) > 0x100 )
                          goto LABEL_249;
                      }
LABEL_254:
                      if ( v91 )
LABEL_255:
                        MiPfnReferenceCountIsZero(a3, (__int64)(a3 + 0x58000000000LL) / 48);
LABEL_256:
                      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_257:
                      if ( v81 )
                        MiReleasePageFileInfo(v118, v81, 1);
                      v100 = (char *)P;
                      if ( P )
                      {
                        if ( *((int *)P + 44) > 1 )
                          KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
                        MiFreeInPageSupportBlock(v100);
                      }
                      if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
                      {
                        result = MiCompleteProtoPteFault((ULONG_PTR *)a1, *(unsigned __int64 *)v108, v122, 0, v113);
                        if ( (int)result < 0 )
                          return result;
                        return 272LL;
                      }
                      v101 = (_BYTE *)(v113 & 0xFFFFFFFFFFFFFFFEuLL);
                      if ( v119 && *v101 == 4 )
                      {
                        *(_QWORD *)a2 = *(_QWORD *)v108;
                        if ( MiPteInShadowRange(a2) )
                          MiWritePteShadow(v103, v102, v104);
                        return 272LL;
                      }
                      v105 = 0;
                      v106 = 0LL;
                      if ( v119 )
                      {
                        if ( *v101 == 3 )
                        {
                          v107 = *(_QWORD *)v108 & 0xFFFFFFFFFFFFFFDFuLL;
                          goto LABEL_279;
                        }
                      }
                      else
                      {
                        v101 = (_BYTE *)(v113 & 0xFFFFFFFFFFFFFFFEuLL);
                      }
                      if ( v119 && *v101 == 5 )
                        v106 = (__int64)v101;
                      v107 = *(_QWORD *)v108;
LABEL_279:
                      if ( v119 && *(_BYTE *)(v113 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
                        v105 = 1;
                      if ( !(unsigned int)MiAllocateWsle(
                                            v110,
                                            (unsigned __int64 *)a2,
                                            (_QWORD *)BugCheckParameter4,
                                            0,
                                            v107,
                                            v105,
                                            v106) )
                      {
                        MiLockAndDecrementShareCount(BugCheckParameter4, 0);
                        return 3221225495LL;
                      }
                      return 272LL;
                    }
LABEL_249:
                    if ( (int)CachedResidentAvailable > 192
                      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                              192,
                                                              CachedResidentAvailable) )
                    {
                      v97 = (int)CachedResidentAvailable - 192 + 1LL;
                    }
                  }
                  _InterlockedExchangeAdd64(&qword_1403CFB00, v97);
                  goto LABEL_254;
                }
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v95 + 7104), 1uLL);
                goto LABEL_254;
              }
              if ( v87 == 1 )
              {
                if ( v90 )
                {
LABEL_225:
                  v91 = v84;
                  goto LABEL_227;
                }
              }
              else if ( v87 != 2 || !v90 )
              {
                goto LABEL_256;
              }
              if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
                goto LABEL_256;
              goto LABEL_225;
            }
            v81 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
            goto LABEL_201;
          }
          if ( v122 || v109 >= 0xFFFF800000000000uLL )
          {
LABEL_201:
            v82 |= 0x42uLL;
            *(_QWORD *)v108 = v82;
          }
        }
LABEL_202:
        if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) == 0 )
          goto LABEL_206;
        goto LABEL_203;
      }
    }
    else if ( !*(_BYTE *)(CurrentThread + 1758) && (v30 & 4) == 0 && !v8 || (v30 & 0x10) != 0 )
    {
      goto LABEL_83;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiResolvePageFileFault(v109, a2, a3, v110, v113, (__int64)a5);
  }
  v42 = (v27 & 0x200000000000000LL) != 0;
  if ( !v42 )
  {
    v20 = *(_QWORD *)(BugCheckParameter4 + 8);
    if ( a2 != (v20 | 0x8000000000000000uLL) )
      KeBugCheckEx(0x1Au, 0x888AuLL, a2, v20, BugCheckParameter4);
  }
  v43 = *(_QWORD *)(BugCheckParameter4 + 16);
  if ( (v43 & 0x400) != 0 )
    v44 = v43 >> 11;
  else
    v44 = v43 >> 3;
  if ( (v44 & 1) != 0 )
  {
    if ( v21 <= 0x7FFFFFFEFFFFLL && !v42 )
      Address = MiLocateAddress(v21);
    TransitionHeatBatch = MiMakeTransitionHeatBatch(BugCheckParameter4, Address, 0LL, v20);
    v49 = a1;
    *(_QWORD *)(a1 + 112) = TransitionHeatBatch;
    if ( TransitionHeatBatch )
      goto LABEL_101;
  }
  else
  {
    v49 = a1;
  }
  v50 = *(_QWORD *)(BugCheckParameter4 + 40);
  if ( (v50 & 0x200000000000000LL) != 0
    && (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0
    && ((v50 >> 54) & 7) != 3 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter4 + 16));
    v53 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
    {
      v54 = *(_QWORD *)(*(_QWORD *)(v53 + 96) + 40LL);
      if ( v54 )
      {
        if ( (v54 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v54 & 3) != 2 )
        {
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v53 + 92) & 0xC0000) != 0
            || (v109 < v52 || (MiFlags & 0x10000) != 0)
            && ((v55 = MiLocateAddress(v109)) == 0
             || (v58 = *(_DWORD *)(v55 + 48), (v58 & 7) != 2)
             || (v58 & 0xF8) != 8
             && ((*(_DWORD *)(v55 + 64) & 0x8000000) == 0 || (v56 & 4) != 0)
             && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v57 + 34) & 2) == 0)) )
          {
            ImagePageOk = MiMakeImagePageOk(v49, a2, *(_QWORD *)v108, BugCheckParameter4, a3);
            if ( ImagePageOk < 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( a3 )
              {
                LOBYTE(v59) = 17;
                MiUnlockProtoPoolPage(a3, v59, v61, v62);
              }
              return (unsigned int)ImagePageOk;
            }
          }
        }
      }
    }
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter4) )
  {
    MiDiscardTransitionPte(BugCheckParameter4);
LABEL_101:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v46) = 17;
      MiUnlockProtoPoolPage(a3, v46, v47, v48);
    }
    return 3221226548LL;
  }
  v63 = v110;
  P = 0LL;
  if ( (*(_BYTE *)(v110 + 184) & 7) == 0 && !*(_WORD *)(BugCheckParameter4 + 32) )
  {
    v64 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) == 0 && *(_QWORD *)(v64 + 368) )
        LOBYTE(v8) = 4;
    }
    else
    {
      v8 = *(_QWORD *)(v64 + 360) != 0LL ? 4 : 0;
    }
    if ( (v8 & 4) != 0 )
    {
      if ( Address || (Address = MiLocateAddress(v109)) != 0 )
      {
        v65 = *(_DWORD *)(Address + 48);
        if ( (v65 & 0x20000) != 0 )
        {
          v66 = v65 >> 14;
          if ( ((*(_QWORD *)(BugCheckParameter4 + 40) >> 57) & 1LL) != 0 )
          {
            if ( (v66 & 1) == 0 )
              goto LABEL_145;
          }
          else if ( (v66 & 1) != 0 )
          {
            goto LABEL_145;
          }
        }
      }
      LOBYTE(v8) = v8 & 0xFB;
    }
  }
LABEL_145:
  v67 = 1LL;
  if ( (v8 & 4) != 0 )
  {
    v68 = MiIdealClusterPage(a1, Address, a2, v108[0], (void *)BugCheckParameter4, a3, (__int64)&v121);
    v67 = v68;
    v71 = (_BYTE)v121 != 0 ? 2 : 0;
    LOBYTE(v8) = ((_BYTE)v121 != 0 ? 2 : 0) | v8 & 0xFD;
    if ( v68 )
    {
      BugCheckParameter4 = v68;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(v71) = 17;
        MiUnlockProtoPoolPage(a3, v71, v69, v70);
      }
    }
    v63 = v110;
  }
  if ( (v8 & 2) == 0 )
  {
    if ( !v67 )
      return 3221226548LL;
    v67 = MiMigratePfn(v63, v109, BugCheckParameter4, a3, v113, (__int64)&P);
    BugCheckParameter4 = v67;
  }
  if ( v67 )
  {
    v72 = *(_QWORD *)(BugCheckParameter4 + 24);
    ++*(_WORD *)(BugCheckParameter4 + 32);
    *(_QWORD *)(BugCheckParameter4 + 24) = v72 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(BugCheckParameter4 + 34) = *(_BYTE *)(BugCheckParameter4 + 34) & 0xF8 | 6;
    goto LABEL_160;
  }
  if ( !P )
    return 3221226548LL;
  if ( *((int *)P + 44) > 1 )
    KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
  MiFreeInPageSupportBlock((char *)P);
  return 3221226548LL;
}

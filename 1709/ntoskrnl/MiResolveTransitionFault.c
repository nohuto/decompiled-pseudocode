/*
 * XREFs of MiResolveTransitionFault @ 0x140049330
 * Callers:
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     MiMakeProtoReadOnly @ 0x14021CB54 (MiMakeProtoReadOnly.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 MiResolveTransitionFault(
        unsigned __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        ...)
{
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r9
  ULONG_PTR PteShadow; // rbx
  __int64 v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 BugCheckParameter4; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // r10
  char v24; // cl
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  __int64 v27; // rbx
  char v28; // r11
  BOOL v29; // ecx
  char v30; // bl
  __int64 v31; // r8
  int ImagePageOk; // ebx
  char v33; // al
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v35; // r8
  unsigned __int8 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 Address; // rax
  char v40; // r10
  __int64 v41; // r11
  int v42; // edx
  __int64 v43; // r11
  __int64 v44; // rdx
  bool v45; // zf
  int v46; // r12d
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rbx
  char *v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdi
  unsigned __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int16 v62; // dx
  unsigned __int64 v63; // rbx
  __int64 v64; // rax
  int v65; // r12d
  unsigned __int64 v66; // rdx
  char v67; // al
  int v68; // ecx
  __int64 v69; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v71; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v73; // eax
  PSLIST_ENTRY v74; // rbx
  PSLIST_ENTRY v75; // rbx
  _SLIST_ENTRY *v76; // rcx
  _SLIST_HEADER *v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  void *v80; // [rsp+28h] [rbp-69h]
  int v81[2]; // [rsp+50h] [rbp-41h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+58h] [rbp-39h] BYREF
  int v83; // [rsp+60h] [rbp-31h] BYREF
  int v84; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int64 v85; // [rsp+68h] [rbp-29h] BYREF
  __int64 v86; // [rsp+70h] [rbp-21h]
  __int64 v87; // [rsp+78h] [rbp-19h]
  ULONG_PTR v88; // [rsp+88h] [rbp-9h] BYREF
  int v90; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v91; // [rsp+E8h] [rbp+57h]
  __int64 v92; // [rsp+110h] [rbp+7Fh] BYREF
  va_list va; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v92 = va_arg(va1, _QWORD);
  v91 = a4;
  v8 = v92;
  v9 = 0LL;
  v12 = a1;
  if ( v92 )
    *(_QWORD *)v92 = 0LL;
  if ( !a3 )
  {
    v13 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      PteShadow = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= v13 )
        PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
      v88 = PteShadow;
      if ( (PteShadow & 0x800) == 0 )
        return 3221226548LL;
      if ( (unsigned int)MiInvalidPteConforms(PteShadow, a2, a3, v13) )
      {
        v15 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v88);
        if ( (unsigned int)MiIsPfnInline(v15) )
        {
          BugCheckParameter4 = v16 + 48 * a2;
          v83 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v83);
              while ( *(__int64 *)(BugCheckParameter4 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 24), 0x3FuLL) );
            v13 = 0xFFFFF6FB7DBED7F8uLL;
            v17 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v19 = *(_QWORD *)a2;
          if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= v13 )
            v19 = MiReadPteShadow(a2, *(_QWORD *)a2);
          if ( v19 == PteShadow )
          {
            if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) != a2 )
              KeBugCheckEx(0x1Au, 0x411uLL, a2, PteShadow, *(_QWORD *)(BugCheckParameter4 + 8));
            v20 = *(_QWORD *)a2;
            if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= v13 )
              v20 = MiReadPteShadow(a2, *(_QWORD *)a2);
            v12 = a1;
            *(_QWORD *)v81 = v20;
            goto LABEL_29;
          }
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), v17);
        }
      }
    }
  }
  v21 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    v21 = MiReadPteShadow(a2, *(_QWORD *)a2);
  *(_QWORD *)v81 = v21;
  BugCheckParameter4 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v81) - 0x58000000000LL;
LABEL_29:
  v22 = a5;
  v87 = a5 & 1;
  if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriority(BugCheckParameter4, *(_DWORD *)((a5 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
LABEL_42:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return (unsigned int)v9;
  }
  __incgsdword(0x2E98u);
  v23 = *(_QWORD *)(BugCheckParameter4 + 40);
  v24 = *(_BYTE *)(BugCheckParameter4 + 34);
  v86 = *(_QWORD *)(qword_140388AF0 + 8 * ((v23 >> 40) & 0x3FF));
  if ( (v24 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
    {
      LODWORD(v9) = -1073741663;
      goto LABEL_42;
    }
    if ( (a5 & 1) != 0
      && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 5
      && (*(_DWORD *)((a5 & 0xFFFFFFFFFFFFFFFEuLL) + 48) & 4) != 0 )
    {
      goto LABEL_41;
    }
    if ( !v8 )
    {
      LODWORD(v9) = -1073740748;
      goto LABEL_42;
    }
    if ( (v24 & 8) != 0 )
    {
LABEL_41:
      LODWORD(v9) = -1073741801;
      goto LABEL_42;
    }
    v27 = *(_QWORD *)BugCheckParameter4 - 32LL;
    ListEntry = (PSLIST_ENTRY)v27;
    v28 = *(_BYTE *)(v27 + 189);
    v29 = (v28 & 0x40) != 0 && (int)PsGetIoPriorityThread(CurrentThread) >= 2
       || CurrentThread == *(struct _KTHREAD **)(v27 + 152)
       || (CurrentThread->MiscFlags & 0x8000) != 0
       || LODWORD(CurrentThread->Process[2].ActiveProcessors.Bitmap[14]) && (*(_QWORD *)(v27 + 248) || (v28 & 4) != 0);
    if ( (v23 & 0x200000000000000LL) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0 )
      {
        v30 = a7;
        if ( (CurrentThread->WaitBlock[3].SpareLong || (CurrentThread->MiscFlags & 0x400) != 0 || a7 || v29)
          && (v28 & 0x10) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return MiResolveMappedFileFault(a1, (__int64 *)a2, a3, v91, 0LL, v8);
        }
        goto LABEL_68;
      }
      if ( !BYTE6(CurrentThread[1].Queue) && (v28 & 4) == 0 && !v29 || (v28 & 0x10) != 0 )
      {
        v30 = a7;
LABEL_68:
        MiObtainProtoReference(a3, 1);
        goto LABEL_74;
      }
    }
    else if ( !BYTE6(CurrentThread[1].Queue) && (v28 & 4) == 0 && !v29 || (v28 & 0x10) != 0 )
    {
      v30 = a7;
LABEL_74:
      v90 = 0;
      result = MiWaitForCollidedFaultComplete(BugCheckParameter4, a3, a1, v91, v30, 2, (__int64)&v90);
      ImagePageOk = result;
      if ( v90 == 1 )
        return result;
      if ( a3 )
      {
        MiLockNestedPageAtDpcInline(a3);
        MiRemoveLockedPageChargeAndDecRef(a3);
        _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !ImagePageOk )
      {
        MiAddLockedPageCharge(BugCheckParameter4, 3LL, v31);
        v33 = *(_BYTE *)(BugCheckParameter4 + 34) & 0xFE;
        *(_QWORD *)(BugCheckParameter4 + 24) ^= ((*(_QWORD *)(BugCheckParameter4 + 24) + 1LL) ^ *(_QWORD *)(BugCheckParameter4 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(BugCheckParameter4 + 34) = v33 | 6;
        MiRemoveLockedPageChargeAndDecRef(BugCheckParameter4);
        ListEntry = 0LL;
LABEL_135:
        if ( v87 && *(_BYTE *)(v22 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        {
          *(_QWORD *)v81 = *(_QWORD *)v81 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        }
        if ( ((*(_QWORD *)v81 >> 5) & 0x1F) == 0x18 )
          MiMakeProtoReadOnly(a2, BugCheckParameter4);
        v54 = *(_QWORD *)a2;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
          v54 = MiReadPteShadow(a2, *(_QWORD *)a2);
        v85 = v54;
        v56 = ((MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v85) & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[(v54 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_155;
        if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          if ( a2 == ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            v56 |= 0x8000000000000000uLL;
          else
            v56 &= ~0x8000000000000000uLL;
          if ( (unsigned int)MiUserPdeOrAbove(a2) )
            v56 |= 4uLL;
        }
        v57 = v56 | 4;
        if ( a2 > 0xFFFFF6BFFFFFFF78uLL )
          v57 = v56;
        v56 = v57;
        if ( (unsigned int)MiIsAddressGlobal((__int64)(a2 << 25) >> 16) )
LABEL_155:
          v56 |= 0x100uLL;
        v58 = 0LL;
        v59 = v56 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        v60 = *(_QWORD *)(BugCheckParameter4 + 16);
        v85 = v59;
        *(_QWORD *)v81 = v59;
        if ( (v60 & 0x400) == 0 && (v60 & 4) != 0 && (unsigned __int16)v60 >> 12 == *(_DWORD *)(v86 + 1140) )
          v58 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
        if ( (v59 & 0x800) != 0 )
        {
          if ( (*(_BYTE *)(BugCheckParameter4 + 34) & 0x10) != 0 )
          {
            if ( a6 || a1 >= 0xFFFF800000000000uLL )
            {
              v59 |= 0x42uLL;
              *(_QWORD *)v81 = v59;
            }
          }
          else if ( a6 )
          {
            if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
            {
LABEL_166:
              *(_QWORD *)a2 = v59;
              if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(a2, v59);
LABEL_169:
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !a3 )
                goto LABEL_220;
              v84 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v84);
                while ( *(__int64 *)(a3 + 24) < 0 );
              }
              *(_BYTE *)(a3 + 34) &= ~0x20u;
              v61 = *(unsigned __int16 *)(a3 + 32);
              if ( !(_WORD)v61 )
                MiBadRefCount(a3, v61);
              v45 = (_WORD)v61 == 1;
              v62 = v61 - 1;
              *(_WORD *)(a3 + 32) = v62;
              if ( v45 && (unsigned int)MiIsPfnFileOnly(a3) )
                goto LABEL_218;
              v63 = *(_QWORD *)(a3 + 40);
              if ( (v63 & 0x10000000000000LL) != 0 )
              {
LABEL_219:
                _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_220:
                if ( v58 )
                  MiReleasePageFileInfo(v86, v58, 1LL);
                v74 = ListEntry;
                if ( ListEntry )
                {
                  if ( SLODWORD(ListEntry[11].Next) > 1 )
                    KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
                  if ( *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() && ListEntry[13].Next )
                    KeAbPostRelease((ULONG_PTR)ListEntry);
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v74[11], 0xFFFFFFFF) == 1 )
                  {
                    v75 = ListEntry;
                    v76 = (_SLIST_ENTRY *)*((_QWORD *)&ListEntry[15].Next + 1);
                    if ( v76 && v76 != &ListEntry[16] )
                      ExFreePoolWithTag(v76, 0);
                    v77 = (_SLIST_HEADER *)((char *)&unk_140389140
                                          + 16
                                          * (((unsigned __int64)(unsigned __int8)~*((_BYTE *)&v75[11].Next + 13) >> 5) & 1));
                    if ( (unsigned int)LOWORD(v77->Alignment) >= byte_140389160[((unsigned __int64)(unsigned __int8)~*((_BYTE *)&v75[11].Next + 13) >> 5) & 1] )
                      ExFreePoolWithTag(v75, 0);
                    else
                      RtlpInterlockedPushEntrySList(v77, v75);
                  }
                }
                if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
                {
                  LODWORD(v80) = 0;
                  result = MiCompleteProtoPteFault(v91, a7, a1, *(_QWORD *)v81, a6, v80, a5);
                  if ( (int)result < 0 )
                    return result;
                  return 272LL;
                }
                if ( v87 )
                {
                  switch ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) )
                  {
                    case 4:
                      v78 = *(_QWORD *)v81;
                      *(_QWORD *)a2 = *(_QWORD *)v81;
                      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
                        MiWritePteShadow(a2, v78);
                      return 272LL;
                    case 3:
                      v79 = *(_QWORD *)v81 & 0xFFFFFFFFFFFFFFDFuLL;
                      goto LABEL_249;
                    case 5:
                      v9 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
                      break;
                  }
                }
                v79 = *(_QWORD *)v81;
LABEL_249:
                if ( !(unsigned int)MiAllocateWsle(v91, (__int64 *)a2, BugCheckParameter4, 0, v79, v9) )
                {
                  MiLockAndDecrementShareCount(BugCheckParameter4, 0LL);
                  return 3221225495LL;
                }
                return 272LL;
              }
              v64 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v62 )
              {
                v65 = 1;
LABEL_190:
                v66 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
                if ( v66 > 0xFFFFF6BFFFFFFF78uLL || v66 < 0xFFFFF68000000000uLL )
                {
                  v67 = *(_BYTE *)(a3 + 35);
                  if ( (v67 & 0x20) != 0 )
                  {
                    *(_BYTE *)(a3 + 35) = v67 & 0xDF;
                    goto LABEL_217;
                  }
                }
                v68 = 0;
                if ( (v63 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
                {
                  v68 = 1;
                }
                else if ( v66 <= 0xFFFFF6BFFFFFFF78uLL
                       && v66 >= 0xFFFFF68000000000uLL
                       && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
                {
                  v68 = 1;
                }
                else if ( v65 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
                {
                  v68 = 1;
                }
                v69 = *(_QWORD *)(qword_140388AF0 + 8 * ((v63 >> 40) & 0x3FF));
                if ( v68 == 1 )
                  MiReturnCommit(v69, 1uLL);
                if ( (ULONG_PTR *)v69 == &MiSystemPartition )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v71 = 1LL;
                  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
                  if ( (_DWORD)CachedResidentAvailable != -1 )
                  {
                    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                    {
                      while ( 1 )
                      {
                        v73 = _InterlockedCompareExchange(
                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                CachedResidentAvailable + 1,
                                CachedResidentAvailable);
                        v45 = (_DWORD)CachedResidentAvailable == v73;
                        LODWORD(CachedResidentAvailable) = v73;
                        if ( v45 )
                          break;
                        if ( v73 == -1 || (unsigned __int64)(v73 + 1LL) > 0x100 )
                          goto LABEL_212;
                      }
LABEL_217:
                      if ( v65 )
                      {
LABEL_218:
                        MiPfnReferenceCountIsZero(a3, (a3 + 0x58000000000LL) / 48);
                        goto LABEL_219;
                      }
                      goto LABEL_219;
                    }
LABEL_212:
                    if ( (int)CachedResidentAvailable > 192
                      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                              192,
                                                              CachedResidentAvailable) )
                    {
                      v71 = (int)CachedResidentAvailable - 192 + 1LL;
                    }
                  }
                  _InterlockedExchangeAdd64(&qword_14038B840, v71);
                  goto LABEL_217;
                }
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 6016), 1uLL);
                goto LABEL_217;
              }
              if ( v62 == 1 )
              {
                if ( v64 )
                {
LABEL_188:
                  v65 = 0;
                  goto LABEL_190;
                }
              }
              else if ( v62 != 2 || !v64 )
              {
                goto LABEL_219;
              }
              if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
                goto LABEL_219;
              goto LABEL_188;
            }
            v59 |= 0x42uLL;
            v58 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
            *(_QWORD *)v81 = v59;
          }
        }
        if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) == 0 )
          goto LABEL_169;
        goto LABEL_166;
      }
      goto LABEL_98;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiResolvePageFileFault(a1, a2, a3, v91, v22, v8);
  }
  if ( (v23 & 0x200000000000000LL) != 0
    && (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0
    && ((v23 >> 54) & 7) != 3 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter4 + 16));
    v37 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(v37 + 96) + 8LL);
      if ( v38 )
      {
        if ( (v38 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v38 & 3) != 2 )
        {
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v37 + 92) & 0xC0000) != 0
            || (v12 < v35 || (v36 & BYTE2(MiFlags)) != 0)
            && ((Address = MiLocateAddress(v12)) == 0
             || (v42 = *(_DWORD *)(Address + 48), (v42 & 7) != 2)
             || (v42 & 0xF8) != 8
             && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v40 & 4) != 0)
             && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v41 + 34) & 2) == 0)) )
          {
            ImagePageOk = MiMakeImagePageOk(v12, a2, v81[0], v91, BugCheckParameter4, a3);
            if ( ImagePageOk < 0 )
            {
LABEL_98:
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( a3 )
                MiUnlockProtoPoolPage(a3, 0x11u);
              return (unsigned int)ImagePageOk;
            }
          }
        }
      }
    }
  }
  if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) == 0
    && a2 != (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) )
  {
    KeBugCheckEx(0x1Au, 0x888AuLL, a2, *(_QWORD *)(BugCheckParameter4 + 8), BugCheckParameter4);
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter4) )
  {
    MiDiscardTransitionPte(BugCheckParameter4);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 3221226548LL;
  }
  LODWORD(v43) = v91;
  LOBYTE(v92) = 0;
  ListEntry = 0LL;
  if ( (*(_BYTE *)(v91 + 192) & 7) != 0 || *(_WORD *)(BugCheckParameter4 + 32) )
    goto LABEL_133;
  v44 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0 )
    {
LABEL_133:
      v46 = a1;
LABEL_127:
      v51 = MiMigratePfn(v43, v46, BugCheckParameter4, a3, v22, (__int64)&ListEntry);
      BugCheckParameter4 = v51;
      goto LABEL_128;
    }
    v45 = *(_QWORD *)(v44 + 264) == 0LL;
  }
  else
  {
    v45 = *(_QWORD *)(v44 + 256) == 0LL;
  }
  if ( v45 )
    goto LABEL_133;
  v46 = a1;
  v47 = MiLocateAddress(a1);
  if ( !v47 )
    goto LABEL_127;
  v48 = *(_DWORD *)(v47 + 48);
  if ( (v48 & 0x100000) == 0 || (*(_QWORD *)(BugCheckParameter4 + 40) & 0x200000000000000LL) != 0 && (v48 & 0x8000) != 0 )
    goto LABEL_127;
  if ( ((*(_QWORD *)(BugCheckParameter4 + 40) >> 57) & 1LL) == 0 && (v48 & 0x8000) == 0 )
    goto LABEL_127;
  v49 = MiIdealClusterPage(a1, v47, a2, v81[0], v43, (void *)BugCheckParameter4, a3, a8, (__int64)va);
  v51 = v49;
  if ( v49 )
  {
    BugCheckParameter4 = v49;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
  }
  if ( !(_BYTE)v92 )
  {
    if ( !v51 )
      return 3221226548LL;
    LODWORD(v43) = v91;
    goto LABEL_127;
  }
LABEL_128:
  if ( v51 )
  {
    v53 = *(_QWORD *)(BugCheckParameter4 + 24);
    ++*(_WORD *)(BugCheckParameter4 + 32);
    *(_QWORD *)(BugCheckParameter4 + 24) = v53 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(BugCheckParameter4 + 34) = *(_BYTE *)(BugCheckParameter4 + 34) & 0xF8 | 6;
    goto LABEL_135;
  }
  v52 = (char *)ListEntry;
  if ( !ListEntry )
    return 3221226548LL;
  if ( SLODWORD(ListEntry[11].Next) > 1 )
    KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
  MiFreeInPageSupportBlock(v52, v50);
  return 3221226548LL;
}

/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x140052D00
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1400C55A0 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiLocatePagefileSubsection @ 0x1400E6B80 (MiLocatePagefileSubsection.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     KeZeroSinglePage @ 0x1401AE970 (KeZeroSinglePage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // r12
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  size_t v27; // r8
  void *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r13
  __int64 v32; // rbx
  __int64 v33; // r9
  __int64 PageFileReservationOffset; // r8
  __int64 v35; // rdx
  unsigned __int16 v36; // dx
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r15
  size_t v46; // r8
  void *v47; // rcx
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // r9
  volatile signed __int32 *v50; // r8
  unsigned int v51; // eax
  int v52; // r13d
  unsigned __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // [rsp+20h] [rbp-59h]
  __int64 v60; // [rsp+28h] [rbp-51h]
  unsigned __int64 v61; // [rsp+30h] [rbp-49h]
  __int64 v62; // [rsp+38h] [rbp-41h]
  __int64 v63; // [rsp+40h] [rbp-39h] BYREF
  __int64 v64; // [rsp+48h] [rbp-31h] BYREF
  __int64 v65; // [rsp+50h] [rbp-29h]
  __int64 v66; // [rsp+58h] [rbp-21h]
  unsigned __int64 v67; // [rsp+60h] [rbp-19h] BYREF
  __int64 v68; // [rsp+68h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v70; // [rsp+88h] [rbp+Fh]
  unsigned __int8 v71; // [rsp+E0h] [rbp+67h] BYREF
  size_t Size; // [rsp+E8h] [rbp+6Fh]
  unsigned int v73; // [rsp+F0h] [rbp+77h]
  int v74; // [rsp+F8h] [rbp+7Fh]

  v3 = a3 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a2 >> 3;
  v62 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v73 = (a2 >> 3) & 0xFFF;
  LODWORD(Size) = (v3 + (a2 >> 3)) & 0xFFF;
  v67 = ((a2 >> 3) + v3 - 1) >> 12;
  v6 = MiLocatePagefileSubsection(a1, &v67);
  v65 = v6;
  v70 = v67;
  v7 = *(_QWORD *)(v6 + 8);
  v63 = v5 >> 12;
  v8 = v7 + 8 * v67;
  result = MiLocatePagefileSubsection(a1, &v63);
  v10 = result;
  if ( *(_QWORD *)(result + 8) )
  {
    result = v63;
  }
  else
  {
    do
    {
      if ( v10 == v6 )
        return result;
      v10 = *(_QWORD *)(v10 + 16);
      result = 0LL;
      v63 = 0LL;
    }
    while ( !*(_QWORD *)(v10 + 8) );
  }
  v11 = *(_QWORD *)(v10 + 8);
  v12 = v11 + 8 * result;
  if ( v10 == v6 )
    v13 = v8;
  else
    v13 = v11 + 8LL * *(unsigned int *)(v10 + 44);
  v14 = 0LL;
  v15 = (unsigned int)Size;
  v60 = v13;
  v16 = 0LL;
  v71 = 17;
  v61 = 0LL;
  v66 = v12 & -(__int64)(v73 != 0);
  result = (unsigned int)-(int)Size;
  v17 = v8 & -(__int64)((_DWORD)Size != 0);
  v18 = v66;
  v59 = v17;
  while ( v12 < v13 )
  {
LABEL_19:
    if ( (v16 & 0xFFFFFFFFFFFFF000uLL) != (v12 & 0xFFFFFFFFFFFFF000uLL) && v16 )
    {
      LOBYTE(v17) = v71;
      MiUnlockProtoPoolPage(v14, v17, v16, v15);
      v14 = 0LL;
      v61 = 0LL;
    }
    if ( !v14 )
    {
      result = MiLockProtoPoolPage(v12, &v71);
      v14 = result;
      if ( !result )
      {
        v17 = v59;
        v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        goto LABEL_25;
      }
      v61 = v12;
    }
    v21 = MiLockLeafPage(v12, 0LL);
    result = MI_READ_PTE_LOCK_FREE(v12);
    v64 = result;
    v22 = result;
    if ( (result & 1) != 0 )
    {
      v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v64);
      v25 = MiMapPageInHyperSpaceWorker((v23 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v24);
      v26 = v25;
      if ( v12 == v18 )
      {
        v27 = 4096 - v73;
        v28 = (void *)(v25 + v73);
        goto LABEL_32;
      }
      v28 = (void *)v25;
      if ( v12 == v59 )
      {
        v27 = (unsigned int)Size;
LABEL_32:
        memset(v28, 0, v27);
      }
      else
      {
        KeZeroSinglePage(v25);
      }
      MiUnmapPageInHyperSpaceWorker(v26, 0x11u, 0x80000000);
      result = MiCaptureDirtyBitToPfn(v21);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( result )
      {
        v29 = result;
        v30 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v21 + 40) >> 40) & 0x3FFLL));
        goto LABEL_36;
      }
      goto LABEL_81;
    }
    if ( (result & 0x400) != 0 )
      goto LABEL_81;
    if ( (result & 0x800) != 0 )
    {
      v31 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v64);
      v32 = 0LL;
      if ( *(_WORD *)(v21 + 32) )
        goto LABEL_50;
      if ( v12 == v18 || v12 == v59 )
      {
        v42 = (*(_BYTE *)(v21 + 34) & 0x10) == 0;
        v74 = 0;
        if ( !v42 )
        {
          v68 = *(_QWORD *)(v62 + 4176);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v68 + 32);
          KxAcquireQueuedSpinLock(&LockHandle, v68 + 32);
LABEL_56:
          v44 = MiMapPageInHyperSpaceWorker(v31, 0LL, 0x80000000, v43);
          v45 = v44;
          if ( v12 == v66 )
          {
            v46 = 4096 - v73;
            v47 = (void *)(v44 + v73);
          }
          else
          {
            v46 = (unsigned int)Size;
            v47 = (void *)v44;
          }
          memset(v47, 0, v46);
          MiUnmapPageInHyperSpaceWorker(v45, 0x11u, 0x80000000);
          if ( dword_1403CBDAC == 1 )
          {
            v48 = v31 & 0x1F;
            LOBYTE(v49) = 1;
            v50 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v31 >> 5));
            if ( v48 + 1 <= 0x20 )
            {
              v51 = 1 << v48;
              goto LABEL_68;
            }
            if ( (v31 & 0x1F) == 0 )
              goto LABEL_67;
            v52 = v31 & 0x1F;
            _InterlockedOr(v50++, ((1 << (32 - v52)) - 1) << v48);
            v49 = 1LL - (unsigned int)(32 - v52);
            if ( v49 >= 0x20 )
            {
              v53 = v49 >> 5;
              v49 += -32LL * (v49 >> 5);
              do
              {
                *v50++ = -1;
                --v53;
              }
              while ( v53 );
            }
            if ( v49 )
            {
LABEL_67:
              v51 = (1 << v49) - 1;
LABEL_68:
              _InterlockedOr(v50, v51);
            }
          }
          if ( v68 )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v74 == 1 )
            MiInsertPageInList(v21, 8u);
LABEL_50:
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v32 )
          {
            v30 = v62;
            v29 = v32;
LABEL_36:
            result = MiReleasePageFileInfo(v30, v29, 1LL);
          }
LABEL_81:
          v17 = v59;
          goto LABEL_82;
        }
        v74 = 1;
        if ( (unsigned int)MiUnlinkPageFromList(v21) )
        {
          v32 = MiCaptureDirtyBitToPfn(v21);
          v68 = 0LL;
          goto LABEL_56;
        }
      }
      else if ( (unsigned int)MiUnlinkPageFromList(v21) )
      {
        v32 = MiCapturePageFileInfoInline(v21 + 16, 0LL);
        if ( (*(_QWORD *)(v21 + 16) & 2) != 0 )
        {
          PageFileReservationOffset = (unsigned int)MiGetPageFileReservationOffset(v21 + 16, *(_QWORD *)(v21 + 16));
          v33 = 2LL;
          v35 = *(_QWORD *)(v62 + 8LL * (v36 >> 12) + 6880);
        }
        else
        {
          v33 = 0LL;
          PageFileReservationOffset = 0LL;
          v35 = 0LL;
        }
        v37 = MiTransferSoftwarePte(*(_QWORD *)(v21 + 16), v35, PageFileReservationOffset, v33);
        v38 = 48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL);
        *(_QWORD *)v12 = v37;
        v39 = v38 - 0x58000000000LL;
        if ( MiPteInShadowRange(v12) )
          MiWritePteShadow(v41, v40);
        MiLockNestedPageAtDpcInline(v39);
        MiDecrementShareCount(v39);
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v31, 2);
        goto LABEL_50;
      }
      MiDiscardTransitionPte(v21);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = v65;
      v12 += 8LL;
      v13 = v60;
      v17 = v59;
      v16 = v61;
      v15 = (unsigned int)Size;
    }
    else
    {
      if ( !result || v12 == v18 )
        goto LABEL_81;
      v17 = v59;
      if ( v12 != v59 )
      {
        if ( (result & 2) != 0 )
        {
          v55 = (unsigned int)MiGetPageFileReservationOffset(&v64, v59);
          v54 = 2LL;
          v56 = *(_QWORD *)(v62 + 8LL * ((unsigned __int16)v22 >> 12) + 6880);
        }
        else
        {
          v54 = 0LL;
          v55 = 0LL;
          v56 = 0LL;
        }
        v57 = MiTransferSoftwarePte(v22, v56, v55, v54);
        MiReleasePageFileSpace(v62, v22);
        *(_QWORD *)v12 = v57;
        result = MiPteInShadowRange(v12);
        if ( (_DWORD)result )
          result = MiWritePteShadow(v58, v57);
        goto LABEL_81;
      }
LABEL_82:
      v6 = v65;
      v12 += 8LL;
      v18 = v66;
LABEL_25:
      v13 = v60;
      v16 = v61;
      v15 = (unsigned int)Size;
    }
  }
  while ( v10 != v6 )
  {
    v10 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v10 + 8) )
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( v10 == v6 )
      {
        v19 = *(_QWORD *)(v6 + 8) + 8 * v70;
        v20 = v19;
        if ( !(_DWORD)v15 )
          v20 = v17;
        v59 = v20;
      }
      else
      {
        v19 = v12 + 8LL * *(unsigned int *)(v10 + 44);
      }
      v60 = v19;
      goto LABEL_19;
    }
  }
  if ( v14 )
  {
    LOBYTE(v17) = v71;
    return MiUnlockProtoPoolPage(v14, v17, v16, v15);
  }
  return result;
}

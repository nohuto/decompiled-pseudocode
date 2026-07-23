/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x14002EE7C (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLocatePagefileSubsection @ 0x140099578 (MiLocatePagefileSubsection.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     KeZeroSinglePage @ 0x140185280 (KeZeroSinglePage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiGetPageFileReservationOffset @ 0x14021A1C8 (MiGetPageFileReservationOffset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 PageFileReservationOffset; // r8
  __int64 v39; // rdx
  unsigned __int16 v40; // dx
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r14
  __int64 v44; // rcx
  int v45; // r12d
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // r14
  size_t v49; // r8
  void *v50; // rcx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r10
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  int v55; // r15d
  unsigned __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // r10
  __int64 v61; // rcx
  unsigned __int64 v62; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+30h] [rbp-A8h]
  __int64 v65; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+40h] [rbp-98h] BYREF
  __int64 v67; // [rsp+48h] [rbp-90h] BYREF
  __int64 v68; // [rsp+50h] [rbp-88h]
  unsigned __int64 v69; // [rsp+58h] [rbp-80h] BYREF
  __int64 v70; // [rsp+60h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v72; // [rsp+80h] [rbp-58h]
  unsigned __int8 v73; // [rsp+E0h] [rbp+8h] BYREF
  size_t Size; // [rsp+E8h] [rbp+10h]
  unsigned int v75; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v76; // [rsp+F8h] [rbp+20h]

  v3 = a3 >> 3;
  v4 = *a1;
  v5 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a2 >> 3;
  v8 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF));
  v70 = v8;
  v75 = (a2 >> 3) & 0xFFF;
  LODWORD(Size) = ((unsigned __int16)(a2 >> 3) + (_WORD)v3) & 0xFFF;
  v69 = ((a2 >> 3) + v3 - 1) >> 12;
  v9 = MiLocatePagefileSubsection((unsigned __int64)a1, &v69);
  v68 = v9;
  v66 = v7 >> 12;
  v10 = *(_QWORD *)(v9 + 8);
  v72 = 8 * v69;
  v11 = 8 * v69 + v10;
  v12 = MiLocatePagefileSubsection((unsigned __int64)a1, &v66);
  if ( *(_QWORD *)(v12 + 8) )
  {
    v13 = v66;
  }
  else
  {
    do
    {
      if ( v12 == v9 )
        return;
      v12 = *(_QWORD *)(v12 + 16);
      v13 = 0LL;
      v66 = 0LL;
    }
    while ( !*(_QWORD *)(v12 + 8) );
  }
  v14 = *(_QWORD *)(v12 + 8);
  v15 = v14 + 8 * v13;
  if ( v12 == v9 )
    v16 = v11;
  else
    v16 = v14 + 8LL * *(unsigned int *)(v12 + 44);
  v17 = Size;
  v18 = 0LL;
  v76 = v16;
  v19 = v15;
  v73 = 17;
  if ( !v75 )
    v19 = 0LL;
  v65 = 0LL;
  v62 = 0LL;
  v64 = v19;
  if ( !(_DWORD)Size )
    v11 = 0LL;
  v63 = v11;
  while ( 1 )
  {
    if ( v15 < v16 )
      goto LABEL_25;
    if ( v12 == v9 )
      goto LABEL_88;
    v12 = *(_QWORD *)(v12 + 16);
    if ( !*(_QWORD *)(v12 + 8) )
      break;
LABEL_19:
    v15 = *(_QWORD *)(v12 + 8);
    if ( v12 == v9 )
    {
      v20 = *(_QWORD *)(v9 + 8) + v72;
      v21 = v20;
      if ( !v17 )
        v21 = v11;
      v11 = v21;
      v63 = v21;
    }
    else
    {
      v20 = v15 + 8LL * *(unsigned int *)(v12 + 44);
    }
    v76 = v20;
LABEL_25:
    if ( (v5 & 0xFFFFFFFFFFFFF000uLL) != (v15 & 0xFFFFFFFFFFFFF000uLL) && v5 )
    {
      MiUnlockProtoPoolPage(v18, v73);
      v5 = 0LL;
      v62 = 0LL;
      goto LABEL_29;
    }
    if ( v18 )
    {
LABEL_32:
      v22 = MiLockLeafPage(v15, 0LL);
      v23 = MI_READ_PTE_LOCK_FREE(v15);
      v67 = v23;
      v27 = v23;
      if ( (v23 & 1) != 0 )
      {
        v28 = MI_GET_PAGE_FRAME_FROM_PTE(&v67);
        v29 = (char *)MiMapPageInHyperSpaceWorker(v28, 0LL, 0x80000000);
        v30 = (__int64)v29;
        if ( v15 == v19 )
        {
          memset(&v29[v75], 0, 4096 - v75);
        }
        else if ( v15 == v11 )
        {
          memset(v29, 0, (unsigned int)Size);
        }
        else
        {
          KeZeroSinglePage(v29);
        }
        MiUnmapPageInHyperSpaceWorker(v30, 0x11u);
        v31 = MiCaptureDirtyBitToPfn(v22);
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v31 )
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL)),
            v31,
            1);
        goto LABEL_87;
      }
      if ( (v23 & 0x400) != 0 )
        goto LABEL_87;
      if ( (v23 & 0x800) != 0 )
      {
        v32 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v67);
        v33 = 0LL;
        if ( *(_WORD *)(v22 + 32) )
          goto LABEL_77;
        if ( v15 == v19 || v15 == v11 )
        {
          v45 = 0;
          if ( (*(_BYTE *)(v22 + 34) & 0x10) != 0 )
          {
            v46 = *(_QWORD *)(v8 + 3984);
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v46 + 32);
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v46 + 32));
LABEL_58:
            v47 = MiMapPageInHyperSpaceWorker(v32, 0LL, 0x80000000);
            v48 = v47;
            if ( v15 == v64 )
            {
              v49 = 4096 - v75;
              v50 = (void *)(v47 + v75);
            }
            else
            {
              v49 = (unsigned int)Size;
              v50 = (void *)v47;
            }
            memset(v50, 0, v49);
            MiUnmapPageInHyperSpaceWorker(v48, 0x11u);
            if ( dword_14036C91C == 1 )
            {
              v51 = v32 & 0x1F;
              LOBYTE(v52) = 1;
              v53 = (volatile signed __int32 *)stru_14036C970.Buffer + (v32 >> 5);
              if ( v51 + 1 > 0x20 )
              {
                if ( (v32 & 0x1F) != 0 )
                {
                  v55 = v32 & 0x1F;
                  _InterlockedOr(v53++, ((1 << (32 - v55)) - 1) << v51);
                  v52 = 1LL - (unsigned int)(32 - v55);
                  if ( v52 >= 0x20 )
                  {
                    v56 = v52 >> 5;
                    v52 += -32LL * (v52 >> 5);
                    do
                    {
                      *v53++ = -1;
                      --v56;
                    }
                    while ( v56 );
                  }
                  if ( !v52 )
                    goto LABEL_71;
                }
                v54 = (1 << v52) - 1;
              }
              else
              {
                v54 = 1 << v51;
              }
              _InterlockedOr(v53, v54);
            }
LABEL_71:
            if ( v46 )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v45 == 1 )
              MiInsertPageInList(v22, 8u);
            v8 = v70;
            v19 = v64;
            goto LABEL_76;
          }
          v45 = 1;
          if ( MiUnlinkPageFromList(v22, 0) )
          {
            v33 = MiCaptureDirtyBitToPfn(v22);
            v46 = 0LL;
            goto LABEL_58;
          }
          MiDiscardTransitionPte(v22);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = v68;
          v15 += 8LL;
          v16 = v76;
          v18 = v65;
          v5 = v62;
          v19 = v64;
          v17 = Size;
        }
        else
        {
          if ( MiUnlinkPageFromList(v22, 0) )
          {
            v34 = MiCapturePageFileInfoInline((_QWORD *)(v22 + 16), 0, 0);
            v37 = *(_QWORD *)(v22 + 16);
            v33 = v34;
            if ( (v37 & 2) != 0 )
            {
              PageFileReservationOffset = (unsigned int)MiGetPageFileReservationOffset(v22 + 16, v37, v35, v36);
              v39 = *(_QWORD *)(v8 + 8LL * (v40 >> 12) + 5600);
            }
            else
            {
              PageFileReservationOffset = 0LL;
              v39 = 0LL;
            }
            v41 = MiTransferSoftwarePte(*(_QWORD *)(v22 + 16), v39, PageFileReservationOffset);
            v42 = 48 * (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL);
            *(_QWORD *)v15 = v41;
            v43 = v42 - 0x58000000000LL;
            if ( (unsigned int)MiPteInShadowRange(v15) )
              MiWritePteShadow(v44);
            MiLockNestedPageAtDpcInline(v43);
            MiDecrementShareCount(v43);
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInsertPageInFreeOrZeroedList(v32, 2);
LABEL_76:
            v11 = v63;
LABEL_77:
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v33 )
              MiReleasePageFileInfo((struct _KEVENT *)v8, v33, 1);
            goto LABEL_87;
          }
          MiDiscardTransitionPte(v22);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = v68;
          v15 += 8LL;
          v16 = v76;
          v18 = v65;
          v5 = v62;
          v17 = Size;
        }
      }
      else
      {
        if ( v23 && v15 != v19 && v15 != v11 )
        {
          if ( (v23 & 2) != 0 )
          {
            v57 = (unsigned int)MiGetPageFileReservationOffset(&v67, v24, v25, v26);
            v58 = *(_QWORD *)(v8 + 8LL * ((unsigned __int16)v27 >> 12) + 5600);
          }
          else
          {
            v57 = 0LL;
            v58 = 0LL;
          }
          v59 = MiTransferSoftwarePte(v27, v58, v57);
          MiReleasePageFileSpace(v8, v60, 0LL);
          *(_QWORD *)v15 = v59;
          if ( (unsigned int)MiPteInShadowRange(v15) )
            MiWritePteShadow(v61);
        }
LABEL_87:
        v9 = v68;
        v15 += 8LL;
        v16 = v76;
        v18 = v65;
        v5 = v62;
        v17 = Size;
      }
    }
    else
    {
LABEL_29:
      v65 = MiLockProtoPoolPage(v15, &v73);
      v18 = v65;
      if ( v65 )
      {
        v62 = v15;
        goto LABEL_32;
      }
      v16 = v76;
      v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v17 = Size;
    }
  }
  while ( v12 != v9 )
  {
    v12 = *(_QWORD *)(v12 + 16);
    if ( *(_QWORD *)(v12 + 8) )
      goto LABEL_19;
  }
LABEL_88:
  if ( v18 )
    MiUnlockProtoPoolPage(v18, v73);
}

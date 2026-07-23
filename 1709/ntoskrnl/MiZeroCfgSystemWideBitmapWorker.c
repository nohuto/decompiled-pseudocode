/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x140125DC4 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiLocatePagefileSubsection @ 0x1400B6DE0 (MiLocatePagefileSubsection.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     KeZeroSinglePage @ 0x140184D20 (KeZeroSinglePage.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned __int64 v11; // r14
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r11
  ULONG_PTR v24; // rbp
  __int64 v25; // rax
  char *v26; // rax
  char *v27; // rbx
  __int64 v28; // rdx
  unsigned __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r9
  __int64 PageFileReservationOffset; // r8
  __int64 v33; // rdx
  unsigned __int16 v34; // dx
  __int64 v35; // rax
  __int64 v36; // r14
  int v37; // r12d
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // r14
  size_t v41; // r8
  void *v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r10
  volatile signed __int32 *v46; // r8
  unsigned int v47; // eax
  int v48; // r15d
  unsigned __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r11
  unsigned __int64 v55; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v56; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+30h] [rbp-A8h]
  __int64 v58; // [rsp+38h] [rbp-A0h]
  __int64 v59; // [rsp+40h] [rbp-98h] BYREF
  __int64 v60; // [rsp+48h] [rbp-90h] BYREF
  __int64 v61; // [rsp+50h] [rbp-88h]
  unsigned __int64 v62; // [rsp+58h] [rbp-80h] BYREF
  __int64 v63; // [rsp+60h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-70h] BYREF
  __int64 v65; // [rsp+80h] [rbp-58h]
  unsigned __int8 v66; // [rsp+E0h] [rbp+8h] BYREF
  size_t Size; // [rsp+E8h] [rbp+10h]
  unsigned int v68; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v69; // [rsp+F8h] [rbp+20h]

  v3 = a3 >> 3;
  v4 = *a1;
  v5 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a2 >> 3;
  v8 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF));
  v63 = v8;
  v68 = (a2 >> 3) & 0xFFF;
  LODWORD(Size) = ((unsigned __int16)(a2 >> 3) + (_WORD)v3) & 0xFFF;
  v62 = ((a2 >> 3) + v3 - 1) >> 12;
  v9 = MiLocatePagefileSubsection(a1, &v62);
  v61 = v9;
  v59 = v7 >> 12;
  v10 = *(_QWORD *)(v9 + 8);
  v65 = 8 * v62;
  v11 = 8 * v62 + v10;
  result = MiLocatePagefileSubsection(a1, &v59);
  v13 = result;
  if ( *(_QWORD *)(result + 8) )
  {
    result = v59;
  }
  else
  {
    do
    {
      if ( v13 == v9 )
        return result;
      v13 = *(_QWORD *)(v13 + 16);
      result = 0LL;
      v59 = 0LL;
    }
    while ( !*(_QWORD *)(v13 + 8) );
  }
  v14 = *(_QWORD *)(v13 + 8);
  v15 = v14 + 8 * result;
  if ( v13 == v9 )
    v16 = v11;
  else
    v16 = v14 + 8LL * *(unsigned int *)(v13 + 44);
  v17 = Size;
  result = 0LL;
  v18 = 0LL;
  v69 = v16;
  v19 = v15;
  v66 = 17;
  if ( !v68 )
    v19 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v57 = v19;
  if ( !(_DWORD)Size )
    v11 = 0LL;
  v56 = v11;
  while ( 1 )
  {
    if ( v15 < v16 )
      goto LABEL_25;
    if ( v13 == v9 )
      goto LABEL_93;
    v13 = *(_QWORD *)(v13 + 16);
    if ( !*(_QWORD *)(v13 + 8) )
      break;
LABEL_19:
    v15 = *(_QWORD *)(v13 + 8);
    if ( v13 == v9 )
    {
      v20 = *(_QWORD *)(v9 + 8) + v65;
      v21 = v20;
      if ( !v17 )
        v21 = v11;
      v11 = v21;
      v56 = v21;
    }
    else
    {
      v20 = v15 + 8LL * *(unsigned int *)(v13 + 44);
    }
    v69 = v20;
LABEL_25:
    if ( (v5 & 0xFFFFFFFFFFFFF000uLL) == (v15 & 0xFFFFFFFFFFFFF000uLL) || !v5 )
    {
      if ( v18 )
        goto LABEL_32;
    }
    else
    {
      MiUnlockProtoPoolPage(v18, v66);
      v5 = 0LL;
      v55 = 0LL;
    }
    result = MiLockProtoPoolPage(v15, &v66);
    v58 = result;
    v18 = result;
    if ( result )
    {
      v55 = v15;
LABEL_32:
      v22 = MiLockLeafPage(v15, 0LL);
      v23 = *(_QWORD *)v15;
      v24 = v22;
      result = 0xFFFFF6FB7DBED000uLL;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        result = MiReadPteShadow(v15, *(_QWORD *)v15);
        v23 = result;
      }
      v60 = v23;
      if ( (v23 & 1) != 0 )
      {
        v25 = MI_GET_PAGE_FRAME_FROM_PTE(&v60);
        v26 = (char *)MiMapPageInHyperSpaceWorker(v25, 0LL, 0x80000000LL);
        v27 = v26;
        if ( v15 == v19 )
        {
          memset(&v26[v68], 0, 4096 - v68);
        }
        else if ( v15 == v11 )
        {
          memset(v26, 0, (unsigned int)Size);
        }
        else
        {
          KeZeroSinglePage(v26);
        }
        LOBYTE(v28) = 17;
        MiUnmapPageInHyperSpaceWorker(v27, v28, 0x80000000LL);
        result = MiCaptureDirtyBitToPfn(v24);
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          result = MiReleasePageFileInfo(
                     *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL)),
                     result,
                     1LL);
        goto LABEL_92;
      }
      if ( (v23 & 0x400) != 0 )
        goto LABEL_92;
      if ( (v23 & 0x800) != 0 )
      {
        v29 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v60);
        v30 = 0LL;
        if ( *(_WORD *)(v24 + 32) )
          goto LABEL_81;
        if ( v15 == v19 || v15 == v11 )
        {
          v37 = 0;
          if ( (*(_BYTE *)(v24 + 34) & 0x10) != 0 )
          {
            v38 = *(_QWORD *)(v8 + 4112);
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v38 + 32);
            KxAcquireQueuedSpinLock(&LockHandle);
LABEL_62:
            v39 = MiMapPageInHyperSpaceWorker(v29, 0LL, 0x80000000LL);
            v40 = v39;
            if ( v15 == v57 )
            {
              v41 = 4096 - v68;
              v42 = (void *)(v39 + v68);
            }
            else
            {
              v41 = (unsigned int)Size;
              v42 = (void *)v39;
            }
            memset(v42, 0, v41);
            LOBYTE(v43) = 17;
            MiUnmapPageInHyperSpaceWorker(v40, v43, 0x80000000LL);
            if ( dword_140388B14 == 1 )
            {
              v44 = v29 & 0x1F;
              LOBYTE(v45) = 1;
              v46 = (volatile signed __int32 *)stru_140388B68.Buffer + (v29 >> 5);
              if ( v44 + 1 > 0x20 )
              {
                if ( (v29 & 0x1F) != 0 )
                {
                  v48 = v29 & 0x1F;
                  _InterlockedOr(v46++, ((1 << (32 - v48)) - 1) << v44);
                  v45 = 1LL - (unsigned int)(32 - v48);
                  if ( v45 >= 0x20 )
                  {
                    v49 = v45 >> 5;
                    v45 += -32LL * (v45 >> 5);
                    do
                    {
                      *v46++ = -1;
                      --v49;
                    }
                    while ( v49 );
                  }
                  if ( !v45 )
                    goto LABEL_75;
                }
                v47 = (1 << v45) - 1;
              }
              else
              {
                v47 = 1 << v44;
              }
              _InterlockedOr(v46, v47);
            }
LABEL_75:
            if ( v38 )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v37 == 1 )
              MiInsertPageInList(v24, 8LL);
            v8 = v63;
            v19 = v57;
            goto LABEL_80;
          }
          v37 = 1;
          if ( (unsigned int)MiUnlinkPageFromList(v24) )
          {
            v30 = MiCaptureDirtyBitToPfn(v24);
            v38 = 0LL;
            goto LABEL_62;
          }
          MiDiscardTransitionPte(v24);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = v61;
          v15 += 8LL;
          v16 = v69;
          v18 = v58;
          v5 = v55;
          v19 = v57;
          v17 = Size;
        }
        else
        {
          if ( (unsigned int)MiUnlinkPageFromList(v24) )
          {
            v30 = MiCapturePageFileInfoInline(v24 + 16, 0LL);
            if ( (*(_QWORD *)(v24 + 16) & 2) != 0 )
            {
              PageFileReservationOffset = (unsigned int)MiGetPageFileReservationOffset(v24 + 16);
              v31 = 2LL;
              v33 = *(_QWORD *)(v8 + 8LL * (v34 >> 12) + 5792);
            }
            else
            {
              v31 = 0LL;
              PageFileReservationOffset = 0LL;
              v33 = 0LL;
            }
            v35 = MiTransferSoftwarePte(*(_QWORD *)(v24 + 16), v33, PageFileReservationOffset, v31);
            v36 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            *(_QWORD *)v15 = v35;
            if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v15, v35);
            MiLockNestedPageAtDpcInline(v36);
            MiDecrementShareCount(v36);
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInsertPageInFreeOrZeroedList(v29, 2LL);
LABEL_80:
            v11 = v56;
LABEL_81:
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v30 )
              result = MiReleasePageFileInfo(v8, v30, 1LL);
            goto LABEL_92;
          }
          MiDiscardTransitionPte(v24);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 = v61;
          v15 += 8LL;
          v16 = v69;
          v18 = v58;
          v5 = v55;
          v17 = Size;
        }
      }
      else
      {
        if ( v23 && v15 != v19 && v15 != v11 )
        {
          if ( (v23 & 2) != 0 )
          {
            v51 = (unsigned int)MiGetPageFileReservationOffset(&v60);
            v50 = 2LL;
            v52 = *(_QWORD *)(v8 + 8LL * ((unsigned __int16)v23 >> 12) + 5792);
          }
          else
          {
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
          }
          v53 = MiTransferSoftwarePte(v23, v52, v51, v50);
          MiReleasePageFileSpace(v8, v54, 0LL);
          result = 0xFFFFF6FB7DBED000uLL;
          *(_QWORD *)v15 = v53;
          if ( v15 >= 0xFFFFF6FB7DBED000uLL )
          {
            result = 0xFFFFF6FB7DBED7F8uLL;
            if ( v15 <= 0xFFFFF6FB7DBED7F8uLL )
              result = MiWritePteShadow(v15, v53);
          }
        }
LABEL_92:
        v9 = v61;
        v15 += 8LL;
        v16 = v69;
        v18 = v58;
        v5 = v55;
        v17 = Size;
      }
    }
    else
    {
      v16 = v69;
      v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v17 = Size;
    }
  }
  while ( v13 != v9 )
  {
    v13 = *(_QWORD *)(v13 + 16);
    if ( *(_QWORD *)(v13 + 8) )
      goto LABEL_19;
  }
LABEL_93:
  if ( v18 )
    return MiUnlockProtoPoolPage(v18, v66);
  return result;
}

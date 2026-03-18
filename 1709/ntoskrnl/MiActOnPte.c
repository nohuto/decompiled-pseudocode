/*
 * XREFs of MiActOnPte @ 0x1400EC4F0
 * Callers:
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MI_IS_RESET_PTE @ 0x14005BFC0 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageTableUseCount @ 0x1400666B8 (MiUpdatePageTableUseCount.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiCheckUserVirtualAddress @ 0x140109820 (MiCheckUserVirtualAddress.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiUpdateWsleAge @ 0x140124820 (MiUpdateWsleAge.c)
 *     MiSharedVaToPartition @ 0x140132CC0 (MiSharedVaToPartition.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x14017C7A8 (MiMakePageFilePte.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        unsigned int a6,
        struct _KEVENT **a7,
        __int64 *a8)
{
  unsigned int v8; // r15d
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r14
  _KPROCESS *Process; // r13
  __int64 v14; // r9
  __int64 PteShadow; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rdx
  unsigned __int8 updated; // al
  __int64 v28; // r15
  __int64 v29; // r8
  char v30; // cl
  __int64 *v31; // r9
  unsigned __int64 v32; // r11
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 *v36; // r9
  unsigned __int64 v37; // r11
  unsigned __int64 *v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r14
  __int64 v42; // rcx
  char v43; // al
  __int64 *v44; // r10
  unsigned __int64 v45; // r11
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r11
  BOOL v49; // eax
  __int64 v50; // rcx
  __int16 v51; // dx
  unsigned __int64 *v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  char v55; // al
  unsigned __int64 *v56; // rdi
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  int v59; // esi
  char v60; // di
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  __int64 v68; // rdx
  struct _KEVENT *v69; // r15
  __int64 v70; // rax
  __int16 v71; // ax
  unsigned __int64 v72; // r11
  __int64 v73; // rax
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // r11
  __int64 v76; // rax
  unsigned __int64 v77; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int16 *v78; // [rsp+28h] [rbp-8h]
  int v80; // [rsp+88h] [rbp+58h] BYREF

  v8 = 0;
  v10 = 0xFFFFF6FB7DBED000uLL;
  v11 = a3;
  *a8 = 0LL;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = (__int64)&Process[1].IdealNode[12];
  v78 = &Process[1].IdealNode[12];
  while ( 1 )
  {
    while ( 1 )
    {
      if ( a4 )
      {
        PteShadow = *a4;
        if ( (unsigned __int64)a4 >= v10 && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v16 = (unsigned __int64)a4;
LABEL_9:
          PteShadow = MiReadPteShadow(v16, PteShadow);
        }
      }
      else
      {
        PteShadow = *(_QWORD *)v11;
        if ( v11 >= v10 && v11 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v16 = v11;
          goto LABEL_9;
        }
      }
      v77 = PteShadow;
      if ( (PteShadow & 1) == 0 )
        break;
      if ( !a4 )
      {
        v22 = MI_GET_PAGE_FRAME_FROM_PTE(&v77);
        if ( !(unsigned int)MiIsPfnInline(v22) )
          return 3221226548LL;
        v18 = 48 * v23 - 0x58000000000LL;
        v25 = *(_QWORD *)(v18 + 8);
        if ( v25 < 0 )
        {
          if ( MiLocateCloneAddress((__int64)Process, v24 | v25) )
            return 3221226548LL;
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        MiLockPageAtDpcInline(v18);
        if ( (*(_BYTE *)(a1 + 48) & 7) != 6 || !MiRotatedToFrameBuffer((__int64 *)v11) )
        {
LABEL_40:
          if ( a5 == 2 )
          {
            LOBYTE(v8) = a4 == 0LL;
            updated = MiUpdatePfnPriority(v18, a6, v8);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v28 = (__int64)v78;
            if ( updated != 0xFF && !a4 )
              MiUpdateWsleAge(v78, v11, updated);
            v29 = *(_QWORD *)(v18 + 8);
            if ( v29 >= 0 && !a4 )
              MiDemoteCombinedPte(v28, v11, v29 | 0x8000000000000000uLL);
            return 0LL;
          }
          v30 = *(_BYTE *)(v18 + 34);
          if ( (v30 & 8) == 0 )
          {
            if ( a5 == 1 )
            {
              if ( (v30 & 0x10) == 0 && (a4 || (PteShadow & 0x42) == 0) || (v8 = -1073740748, (v30 & 0x10) == 0) )
              {
                if ( (*(_DWORD *)(v18 + 16) & 4) == 0 )
                  *(_BYTE *)(v18 + 34) = v30 | 0x10;
              }
              if ( MI_IS_RESET_PTE(*(_QWORD *)(v18 + 16)) )
              {
                v33 = *v31;
                if ( (unsigned __int64)v31 >= v32 && (unsigned __int64)v31 <= 0xFFFFF6FB7DBED7F8uLL )
                  v33 = MiReadPteShadow(v31, *v31);
                v34 = MiUpdatePageFileHighInPte(v33, 0LL);
                *v36 = v34;
                if ( (unsigned __int64)v36 >= v37 && (unsigned __int64)v36 <= v35 )
                  MiWritePteShadow(v36, v34);
              }
              else
              {
                v8 = -1073740748;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              return v8;
            }
            else
            {
              if ( (v30 & 0x10) != 0 )
                *(_BYTE *)(v18 + 34) = v30 & 0xEF;
              v38 = (unsigned __int64 *)(v18 + 16);
              v39 = MiCapturePageFileInfoInline(v18 + 16, 1LL);
              *a8 = v39;
              if ( v39 )
                *a7 = *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
              v40 = MiUpdatePageFileHighInPte(*v38, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              *v38 = v40;
              if ( (unsigned __int64)v38 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v38 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v18 + 16, v40);
              _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( a4 || (v77 & 0x42) == 0 )
                return 0LL;
              MiWriteValidPteNewPage((unsigned __int64 *)v11, v77 & 0xFFFFFFFFFFFFFF9DuLL);
              v41 = (__int64)(v11 << 25) >> 16;
              if ( (unsigned __int8)MiGetVaAge(v42, v41) < 7u )
                MiSetVaAge((__int64)v78, v41, 1u);
              return 3221225505LL;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 3221226548LL;
      }
      v17 = MiLockLeafPage(a4, 0LL, a3, v14);
      v10 = 0xFFFFF6FB7DBED000uLL;
      v18 = v17;
      if ( v17 )
      {
        PteShadow = *a4;
        if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(a4, *a4);
        v77 = PteShadow;
        if ( (PteShadow & 1) != 0 )
          goto LABEL_40;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (PteShadow & 0x400) != 0 )
      return 0LL;
    if ( (PteShadow & 0x800) == 0 )
      break;
    if ( a4 )
      v19 = MiLockLeafPage(a4, 0LL, a3, v14);
    else
      v19 = MiLockTransitionLeafPage((ULONG_PTR *)v11, 0LL, a3, v14);
    v10 = 0xFFFFF6FB7DBED000uLL;
    v20 = v19;
    if ( v19 )
    {
      if ( !a4 )
        goto LABEL_76;
      v21 = *a4;
      if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
        v21 = MiReadPteShadow(a4, *a4);
      v77 = v21;
      if ( (v21 & 1) == 0 )
      {
LABEL_76:
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v20, a6, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v43 = *(_BYTE *)(v20 + 34);
        if ( (v43 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v43 & 0x28) == 0 )
            {
              v52 = (unsigned __int64 *)(v20 + 16);
              v53 = MiCapturePageFileInfoInline(v20 + 16, 1LL);
              *a8 = v53;
              if ( v53 )
                *a7 = *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v20 + 40) >> 40) & 0x3FFLL));
              v54 = MiUpdatePageFileHighInPte(*v52, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              v77 = v54;
              *v52 = v54;
              if ( (unsigned __int64)v52 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v52 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v20 + 16, v54);
            }
            goto LABEL_117;
          }
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v20 + 16)) )
          {
            v46 = *v44;
            if ( (unsigned __int64)v44 >= v45 && (unsigned __int64)v44 <= 0xFFFFF6FB7DBED7F8uLL )
              v46 = MiReadPteShadow(v44, *v44);
            v47 = MiUpdatePageFileHighInPte(v46, 0LL);
            *v44 = v47;
            if ( (unsigned __int64)v44 >= v48 && (unsigned __int64)v44 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v44, v47);
          }
          else
          {
            v8 = -1073740748;
          }
          if ( (*(_DWORD *)v44 & 4) != 0 )
          {
LABEL_117:
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          *(_BYTE *)(v20 + 34) |= 0x10u;
          if ( *(_WORD *)(v20 + 32) )
          {
            *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 3;
            goto LABEL_117;
          }
          v49 = MiUnlinkPageFromList(v20, 0LL);
          v50 = v20;
          if ( !v49 )
          {
            MiDiscardTransitionPte(v20);
LABEL_92:
            v8 = -1073740748;
            goto LABEL_117;
          }
          v51 = 8;
        }
        else
        {
          if ( (v43 & 7) != 3 )
            goto LABEL_117;
          if ( a5 == 1 )
            goto LABEL_92;
          if ( (v43 & 8) != 0 || a5 || (v43 & 0x20) != 0 )
            goto LABEL_117;
          v55 = v43 & 0xEF;
          *(_BYTE *)(v20 + 34) = v55;
          if ( *(_WORD *)(v20 + 32) )
            *(_BYTE *)(v20 + 34) = v55 & 0xF8 | 2;
          else
            MiUnlinkPageFromList(v20, 0LL);
          v56 = (unsigned __int64 *)(v20 + 16);
          v57 = MiCapturePageFileInfoInline(v20 + 16, 1LL);
          *a8 = v57;
          if ( v57 )
            *a7 = *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v20 + 40) >> 40) & 0x3FFLL));
          v58 = MiUpdatePageFileHighInPte(*v56, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
          v77 = v58;
          *v56 = v58;
          if ( (unsigned __int64)v56 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v56 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v20 + 16, v58);
          if ( *(_WORD *)(v20 + 32) )
            goto LABEL_117;
          v51 = 4;
          v50 = v20;
        }
        MiInsertPageInList(v50, v51);
        goto LABEL_117;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v59 = a5;
  if ( a5 != 2 )
  {
    if ( !PteShadow )
    {
      if ( !a4 && !a5 && !MiCheckUserVirtualAddress((__int64)(v11 << 25) >> 16, &v80, a1, 1LL) )
      {
        v60 = v80;
        if ( v80 != 24 )
        {
          MiUpdatePageTableUseCount((__int64)(v11 << 25) >> 16);
          v64 = (32LL * (v60 & 0x1F)) | MiMakePageFilePte(1LL, v61, v62, v63) & 0xFFFFFFFFFFFFFC1FuLL;
          v65 = 0xFFFFF6FB7DBED000uLL;
          v77 = v64;
          *(_QWORD *)v11 = v64;
          goto LABEL_125;
        }
      }
      return 3221226548LL;
    }
    v68 = qword_140388AF0;
    v69 = *(struct _KEVENT **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
    if ( a4 )
    {
      if ( a2 == 1 )
      {
        v69 = (struct _KEVENT *)MiSharedVaToPartition(&Process[1].IdealNode[12], (__int64)(v11 << 25) >> 16, a4);
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x8000) != 0 || (v70 = *(_QWORD *)(a1 + 72)) == 0 )
      {
        v69 = *(struct _KEVENT **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
      }
      else
      {
        v69 = *(struct _KEVENT **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v70 + 60LL) & 0x3FF));
      }
    }
    if ( (PteShadow & 1) != 0
      || (v71 = MiReverseSwizzleInvalidPte(PteShadow, v68, a3), (v71 & 0x400) != 0)
      || (v71 & 0x800) != 0
      || (v71 & 4) != 0 )
    {
      if ( v59 == 1 )
        return 3221226548LL;
      v76 = MiCapturePageFileInfoInline(&v77, 1LL);
      *a8 = v76;
      if ( v76 )
      {
        *a7 = v69;
        if ( !a4 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
          a4 = (__int64 *)v11;
        }
        v66 = v77;
        *a4 = v77;
        if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v67 = (unsigned __int64)a4;
LABEL_161:
          MiWritePteShadow(v67, v66);
        }
      }
    }
    else
    {
      if ( v59 == 1 )
      {
        if ( !MI_IS_RESET_PTE(PteShadow) )
          return 3221226548LL;
        if ( (unsigned __int64)&v77 >= v72 && (unsigned __int64)&v77 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(&v77, PteShadow);
        v73 = MiUpdatePageFileHighInPte(PteShadow, 0LL);
        v77 = v73;
        if ( (unsigned __int64)&v77 >= v75 && (unsigned __int64)&v77 <= v74 )
          MiWritePteShadow(&v77, v73);
        v64 = v77;
      }
      else
      {
        if ( (PteShadow & 2) != 0 )
        {
          MiReleasePageFileSpace(v69, PteShadow);
          PteShadow &= ~2uLL;
        }
        v64 = MiUpdatePageFileHighInPte(PteShadow, 1LL);
        v77 = v64;
        v75 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( a4 )
        v11 = (unsigned __int64)a4;
      *(_QWORD *)v11 = v64;
      v65 = v75;
LABEL_125:
      if ( v11 >= v65 && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v66 = v64;
        v67 = v11;
        goto LABEL_161;
      }
    }
  }
  return 0LL;
}

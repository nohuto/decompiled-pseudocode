/*
 * XREFs of MiSetSystemCodeProtection @ 0x1400DC208
 * Callers:
 *     MiSetImageProtection @ 0x1400DC1BC (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x1405B2D74 (MiProtectSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400DC79C (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // r12
  int v8; // r9d
  unsigned int v10; // r14d
  int v11; // ebx
  unsigned __int64 *v12; // r8
  __int64 v13; // r8
  char *AnyMultiplexedVm; // rdi
  LONG *SharedVm; // rbx
  KIRQL v16; // al
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rbx
  LONG *v21; // rax
  LONG *v22; // rbx
  KIRQL v23; // al
  unsigned __int64 v24; // rcx
  __int64 PteShadow; // rbx
  __int64 v26; // r10
  __int64 v27; // r13
  unsigned __int64 v28; // rcx
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r11
  unsigned int v38; // ebx
  LONG *v39; // rax
  unsigned __int8 v40; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v45; // [rsp+58h] [rbp-A8h]
  char *v46; // [rsp+60h] [rbp-A0h]
  _DWORD *v47; // [rsp+68h] [rbp-98h]
  unsigned __int64 v48; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+80h] [rbp-80h] BYREF
  __int16 v51; // [rsp+84h] [rbp-7Ch]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v4 = a4;
  v49 = (unsigned __int64)a3;
  v6 = a2;
  v44 = a1;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 1LL;
  v10 = v4;
  v11 = 2;
  if ( v4 == 256 )
  {
    v47 = (_DWORD *)MiSectionControlArea(*(_QWORD *)(v44 + 112));
    v45 = v12;
  }
  else
  {
    v47 = 0LL;
    v45 = a3;
    v10 = v4 & 0xFFFFFFFE;
    LOBYTE(v8) = 17;
    if ( (v4 & 5) != 5 )
      v10 = v4;
    if ( (int)MiMakeDriverPagesPrivate(v44, (_DWORD)v6, (_DWORD)a3, v8, (v10 >> 1) & 2) < 0 )
      return 0LL;
  }
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
  {
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  else
  {
    v11 = v13;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  }
  v51 = 0;
  v46 = AnyMultiplexedVm;
  v52 = 20LL;
  v50 = v11;
  v53 = v13;
  v54 = v13;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v16 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v17 = 0LL;
  v40 = v16;
  v43 = 0LL;
  if ( (unsigned __int64)v6 <= v49 )
  {
    while ( 1 )
    {
      v18 = 0xFFFFF6FB7DBED7F8uLL;
      v19 = 0xFFFFF6FB7DBED000uLL;
      if ( v6 > v45 )
      {
        v20 = v7 - *(_QWORD *)(v44 + 48);
        if ( v17 )
        {
          v17 = *(_QWORD *)(v17 + 16);
          v24 = 0LL;
          v43 = v17;
          v48 = 0LL;
        }
        else
        {
          MiFlushTbList((__int64)&v50, 0LL);
          MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v40);
          v21 = MiGetSharedVm((__int64)AnyMultiplexedVm);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
          else
            *v21 = 0;
          __writecr8(v40);
          v43 = MiOffsetToProtos(v47, v20, &v48);
          v22 = MiGetSharedVm((__int64)AnyMultiplexedVm);
          v23 = ExAcquireSpinLockExclusive(v22);
          v22[1] = 0;
          v24 = v48;
          v17 = v43;
          v40 = v23;
          v18 = 0xFFFFF6FB7DBED7F8uLL;
          v19 = 0xFFFFF6FB7DBED000uLL;
        }
        v10 = (*(unsigned __int16 *)(v17 + 32) >> 1) & 0x1F;
        v45 = &v6[*(unsigned int *)(v17 + 44) - v24 - 1];
        if ( (v10 & 5) == 5 )
          v10 &= ~1u;
      }
      PteShadow = *v6;
      if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v6, *v6);
      v42 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v42);
        v27 = v26 + 48 * v17;
        v28 = *(_QWORD *)(v27 + 40);
        if ( (v28 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((v28 >> 54) & 7) == 3 )
          {
            v38 = 0;
            goto LABEL_62;
          }
          ValidPte = MiMakeValidPte((unsigned __int64)v6, v17, v10);
          if ( (v10 & 5) == 4 && (PteShadow & 0x42) != 0 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewPage(v6, ValidPte);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
            || (unsigned int)MI_TIGHTER_PERMISSIONS(PteShadow, ValidPte) )
          {
            MiInsertTbFlushEntry(&v50, v7, 1LL, 0);
          }
          v30 = 0LL;
          MiLockPageAtDpcInline(v27);
          *(_QWORD *)(v27 + 16) ^= (*(_DWORD *)(v27 + 16) ^ (32 * v10)) & 0x3E0;
          if ( (PteShadow & 0x42) != 0 )
            v30 = MiCaptureDirtyBitToPfn(v27);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v30 )
            MiReleasePageFileInfo(
              *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v27 + 40) >> 40) & 0x3FFLL)),
              v30,
              1);
          AnyMultiplexedVm = v46;
        }
        v4 = a4;
        goto LABEL_43;
      }
      if ( (PteShadow & 0x400) != 0 )
        goto LABEL_43;
      if ( (PteShadow & 0x800) == 0 )
        break;
      if ( MiLockTransitionLeafPage((ULONG_PTR)v6) )
      {
        v31 = *v6;
        if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
          v31 = MiReadPteShadow(v6, v31);
        v42 = v31;
        v33 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v42) - 0x58000000000LL;
        v34 = 32LL * (v10 & 0x1F);
        v17 = v34 | v35 & 0xFFFFFFFFFFFFFC1FuLL;
        v36 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
        v42 = v17;
        *(_QWORD *)(v33 + 16) = v34 | v36;
        *v6 = v17;
        if ( (unsigned __int64)v6 >= v37 && (unsigned __int64)v6 <= v32 )
          MiWritePteShadow(v6, v17);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_43:
        ++v6;
        v7 += 4096LL;
      }
      if ( (unsigned __int64)v6 > v49 )
        goto LABEL_61;
      v17 = v43;
    }
    if ( v4 != 256 )
    {
      v17 = PteShadow ^ ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * v10)) & 0x3E0;
      v42 = v17;
      *v6 = v17;
      if ( (unsigned __int64)v6 >= v19 && (unsigned __int64)v6 <= v18 )
        MiWritePteShadow(v6, v17);
    }
    goto LABEL_43;
  }
LABEL_61:
  v38 = 1;
LABEL_62:
  MiFlushTbList((__int64)&v50, (_KPROCESS *)v17);
  MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v40);
  v39 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
  else
    *v39 = 0;
  __writecr8(v40);
  return v38;
}

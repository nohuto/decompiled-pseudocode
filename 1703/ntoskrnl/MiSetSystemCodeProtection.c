/*
 * XREFs of MiSetSystemCodeProtection @ 0x14006C1E0
 * Callers:
 *     MiSetImageProtection @ 0x14006C19C (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x1405A22B8 (MiProtectSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14006C6F4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r13d
  _QWORD *v5; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // r9d
  _QWORD *v10; // r11
  unsigned int v12; // esi
  int v13; // ebx
  _QWORD *v14; // r8
  __int64 v15; // r8
  unsigned __int64 AnyMultiplexedVm; // rdi
  __int64 SharedVm; // rbx
  KIRQL v18; // al
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  _DWORD *v22; // rax
  __int64 v23; // rbx
  KIRQL v24; // al
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r13
  unsigned __int64 v32; // rcx
  __int64 ValidPte; // r11
  __int64 v34; // r11
  __int64 v35; // rdi
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // rcx
  unsigned int v44; // ebx
  __int64 v45; // rdx
  _DWORD *v46; // rax
  KIRQL v47; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h]
  _QWORD *v51; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  int v57; // [rsp+80h] [rbp-80h] BYREF
  __int16 v58; // [rsp+84h] [rbp-7Ch]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v4 = a4;
  v55 = a3;
  v5 = a2;
  v56 = a1;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 1LL;
  v12 = v4;
  v13 = 2;
  if ( v4 == 256 )
  {
    v53 = MiSectionControlArea(*(_QWORD *)(a1 + 112), v8, 0LL);
    v51 = v14;
  }
  else
  {
    v53 = 0LL;
    v51 = v10;
    v12 = v4 & 0xFFFFFFFE;
    LOBYTE(v9) = 17;
    if ( (v4 & 5) != 5 )
      v12 = v4;
    if ( (int)MiMakeDriverPagesPrivate(a1, (_DWORD)v5, (_DWORD)v10, v9, (v12 >> 1) & 2) < 0 )
      return 0LL;
  }
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
  {
    AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
  }
  else
  {
    v13 = v15;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  }
  v58 = 0;
  v52 = AnyMultiplexedVm;
  v59 = 20LL;
  v57 = v13;
  v60 = v15;
  v61 = v15;
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v19 = 0LL;
  v47 = v18;
  v50 = 0LL;
  if ( (unsigned __int64)v5 <= v55 )
  {
    while ( 1 )
    {
      if ( v5 > v51 )
      {
        v20 = v7 - *(_QWORD *)(v56 + 48);
        if ( v19 )
        {
          v26 = *(_QWORD *)(v19 + 16);
          v25 = 0LL;
          v50 = v26;
          v54 = 0LL;
        }
        else
        {
          MiFlushTbList(&v57);
          LOBYTE(v21) = v47;
          MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v21);
          v22 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22, retaddr);
          else
            *v22 = 0;
          __writecr8(v47);
          v50 = MiOffsetToProtos(v53, v20, &v54);
          v23 = MiGetSharedVm(AnyMultiplexedVm);
          v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v23);
          *(_DWORD *)(v23 + 4) = 0;
          v25 = v54;
          v26 = v50;
          v47 = v24;
        }
        v12 = (*(unsigned __int16 *)(v26 + 32) >> 1) & 0x1F;
        v51 = &v5[*(unsigned int *)(v26 + 44) - v25 - 1];
        if ( (v12 & 5) == 5 )
          v12 &= ~1u;
      }
      v27 = MI_READ_PTE_LOCK_FREE(v5);
      v49 = v27;
      v28 = v27;
      if ( (v27 & 1) != 0 )
      {
        v29 = MI_GET_PAGE_FRAME_FROM_PTE(&v49);
        v31 = v30 + 48 * v29;
        v32 = *(_QWORD *)(v31 + 40);
        if ( (v32 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((v32 >> 54) & 7) == 3 )
          {
            v44 = 0;
            goto LABEL_54;
          }
          ValidPte = MiMakeValidPte(v5, v29, v12);
          if ( (v12 & 5) == 4 && (v28 & 0x42) != 0 )
            ValidPte |= 0x42uLL;
          MiWriteValidPteNewProtection(v5, ValidPte);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v28, v34) )
            MiInsertTbFlushEntry(&v57, v7, 1LL, 0LL);
          v35 = 0LL;
          MiLockPageAtDpcInline(v31);
          *(_QWORD *)(v31 + 16) ^= (*(_DWORD *)(v31 + 16) ^ (32 * v12)) & 0x3E0;
          if ( (v28 & 0x42) != 0 )
            v35 = MiCaptureDirtyBitToPfn(v31);
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v35 )
            MiReleasePageFileInfo(
              *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v31 + 40) >> 40) & 0x3FFLL)),
              v35,
              1LL);
          AnyMultiplexedVm = v52;
        }
        v4 = a4;
        goto LABEL_40;
      }
      if ( (v27 & 0x400) != 0 )
        goto LABEL_40;
      if ( (v27 & 0x800) == 0 )
        break;
      if ( MiLockTransitionLeafPage((ULONG_PTR)v5) )
      {
        v49 = MI_READ_PTE_LOCK_FREE(v5);
        v36 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v49) - 0x58000000000LL;
        v37 = 32LL * (v12 & 0x1F);
        v39 = v37 | v38 & 0xFFFFFFFFFFFFFC1FuLL;
        v40 = *(_QWORD *)(v36 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
        v49 = v39;
        *(_QWORD *)(v36 + 16) = v37 | v40;
        *v5 = v39;
        if ( (unsigned int)MiPteInShadowRange(v5) )
          MiWritePteShadow(v41);
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_40:
        ++v5;
        v7 += 4096LL;
      }
      if ( (unsigned __int64)v5 > v55 )
        goto LABEL_53;
      v19 = v50;
    }
    if ( v4 != 256 )
    {
      v49 = ((unsigned __int16)v27 ^ (unsigned __int16)(32 * v12)) & 0x3E0 ^ (unsigned __int64)v27;
      *v5 = v49;
      if ( (unsigned int)MiPteInShadowRange(v5) )
        MiWritePteShadow(v43);
    }
    goto LABEL_40;
  }
LABEL_53:
  v44 = 1;
LABEL_54:
  MiFlushTbList(&v57);
  LOBYTE(v45) = v47;
  MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v45);
  v46 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v46, retaddr);
  else
    *v46 = 0;
  __writecr8(v47);
  return v44;
}

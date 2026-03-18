/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x140109270
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        char a6)
{
  __int64 *v6; // r10
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 result; // rax
  char v11; // bl
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int64 DemandZeroPte; // r9
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  int v21; // r9d
  __int64 PrototypePteDirect; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ebp
  unsigned __int64 v29; // r9
  __int64 v30; // r15
  unsigned __int8 CurrentIrql; // r12
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rcx
  int v35; // [rsp+20h] [rbp-78h] BYREF
  __int64 v36; // [rsp+28h] [rbp-70h] BYREF
  __int64 TransitionPte; // [rsp+30h] [rbp-68h] BYREF
  __int64 ContainingPageTable; // [rsp+38h] [rbp-60h]
  unsigned __int64 v39; // [rsp+40h] [rbp-58h]
  _QWORD *v41; // [rsp+A8h] [rbp+10h]
  int v42; // [rsp+B0h] [rbp+18h] BYREF
  __int64 *v43; // [rsp+B8h] [rbp+20h]

  v43 = a4;
  v41 = a2;
  ContainingPageTable = 0xFFFFFFFFFLL;
  v6 = a4;
  v7 = a2;
  v8 = a1;
  v9 = 0LL;
  result = (unsigned __int64)&a2[a3];
  v39 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v11 = a6;
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v12 = 48LL * *v7 - 0x58000000000LL;
      if ( v12 != qword_14036CED0 )
        break;
LABEL_51:
      ++v6;
      v7 = v41 + 1;
      v43 = v6;
      v41 = v7;
      if ( (unsigned __int64)v7 >= v39 )
        return result;
    }
    v13 = MI_READ_PTE_LOCK_FREE(v6);
    TransitionPte = v13;
    DemandZeroPte = v13;
    v36 = v13;
    LODWORD(v17) = 0;
    if ( (v11 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v13) )
      {
        v21 = (v20 >> 5) & 0x1F;
      }
      else
      {
        PrototypePteDirect = MiGetPrototypePteDirect(v20, v18, v19, v20);
        v36 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
        v26 = MI_GET_PFN_FROM_PTE(&v36, v23, v24, v25);
        v21 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v26 + 16);
      }
      LODWORD(v17) = MmMakeProtectNotWriteCopy[v21];
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v17);
      v36 = DemandZeroPte;
    }
    else if ( (v13 & 0x400) == 0 && (v13 & 0x800) != 0 )
    {
      DemandZeroPte = *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&TransitionPte) - 0x57FFFFFFFF0LL);
      v36 = DemandZeroPte;
    }
    *(_QWORD *)v12 = a5;
    *(_QWORD *)(v12 + 16) = DemandZeroPte;
    if ( (v11 & 0x40) != 0 )
    {
      v27 = v17;
    }
    else
    {
      if ( (v11 & 0x10) != 0 )
      {
        *(_QWORD *)(v12 + 40) |= 0x200000000000000uLL;
        LODWORD(v17) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v36);
      }
      else
      {
        v17 = (DemandZeroPte >> 5) & 0x1F;
      }
      v27 = v17;
      if ( (_DWORD)v17 == 24 && v8 <= 0x7FFFFFFEFFFFLL )
        v27 = (*(_DWORD *)(MiLocateAddress(v8) + 48) >> 3) & 0x1F;
    }
    v28 = 1;
    if ( v27 != 31 )
    {
      if ( v27 >> 3 == 3 )
      {
        if ( (v27 & 7) != 0 )
        {
          v29 = 2LL;
          v28 = 2;
          goto LABEL_26;
        }
      }
      else
      {
        v28 = v27 >> 3 != 1;
      }
    }
    v29 = 2LL;
LABEL_26:
    if ( v15 == 0xFFFFFFFFFLL || (v14 & 0xFFF) == 0 )
    {
      ContainingPageTable = MiGetContainingPageTable(v14);
      v9 = 48 * ContainingPageTable - 0x58000000000LL;
    }
    v30 = v14 & 0x7FFFFFFFFFFFFFFFLL;
    if ( (v11 & 0x20) == 0 )
      v30 = v14;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v29);
    v42 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v42);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    *(_BYTE *)(v12 + 34) |= 0x20u;
    if ( *(unsigned __int8 *)(v12 + 34) >> 6 != v28 )
      MiChangePageAttribute(v12, v28, 1u);
    *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v12 + 32) = 1;
    if ( (v11 & 8) != 0 )
      *(_BYTE *)(v12 + 35) ^= (v11 ^ *(_BYTE *)(v12 + 35)) & 7;
    v32 = ContainingPageTable ^ *(_QWORD *)(v12 + 40);
    *(_QWORD *)(v12 + 8) = v30;
    *(_QWORD *)(v12 + 40) ^= v32 & 0xFFFFFFFFFLL;
    *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
    if ( v11 < 0 )
      *(_BYTE *)(v12 + 35) |= 0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    result = TransitionPte;
    if ( (TransitionPte & 0x400) == 0 && (TransitionPte & 0x800) != 0 )
    {
      v6 = v43;
    }
    else
    {
      TransitionPte = MiMakeTransitionPte(*v41, (unsigned int)v17);
      v33 = v43;
      *v43 = TransitionPte;
      result = MiPteInShadowRange(v33);
      if ( (_DWORD)result )
        result = MiWritePteShadow(v34);
    }
    if ( (v11 & 0x40) == 0 )
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      result = *(_QWORD *)(v9 + 24);
      *(_QWORD *)(v9 + 24) = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = v43;
    }
    v8 = a1;
    goto LABEL_51;
  }
  return result;
}

/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x140026A90
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // r11
  __int64 v7; // r9
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r10
  __int64 v10; // rbp
  unsigned __int64 result; // rax
  __int64 v12; // rsi
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 DemandZeroPte; // rax
  bool v15; // dl
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *PrototypePteDirect; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 Address; // rax
  unsigned int v27; // r14d
  __int64 v28; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-78h] BYREF
  int v32; // [rsp+24h] [rbp-74h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-70h] BYREF
  __int64 ContainingPageTable; // [rsp+30h] [rbp-68h]
  unsigned __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-58h]
  _QWORD *v38; // [rsp+A8h] [rbp+10h]
  _QWORD *v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v38 = a2;
  ContainingPageTable = 0xFFFFFFFFFLL;
  v6 = (unsigned __int64)a4;
  v7 = 0xFFFFFFFFFLL;
  v8 = a2;
  v9 = a1;
  v10 = 0LL;
  result = (unsigned __int64)&a2[a3];
  v36 = result;
  if ( (unsigned __int64)a2 < result )
  {
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v12 = 48LL * *v8 - 0x58000000000LL;
      if ( v12 != qword_140389190 )
        break;
LABEL_60:
      v6 += 8LL;
      v8 = v38 + 1;
      v39 = (_QWORD *)v6;
      v38 = v8;
      if ( (unsigned __int64)v8 >= v36 )
        return result;
    }
    PteShadow = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
    v35 = PteShadow;
    DemandZeroPte = PteShadow;
    v15 = (a6 & 0x40) != 0;
    v33 = PteShadow;
    LODWORD(v16) = 0;
    if ( (a6 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
      {
        v17 = (PteShadow >> 5) & 0x1F;
      }
      else
      {
        PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(PteShadow);
        v21 = *PrototypePteDirect;
        if ( (unsigned __int64)PrototypePteDirect >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)PrototypePteDirect <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v21 = MiReadPteShadow(PrototypePteDirect, v21);
        }
        v33 = v21;
        v22 = MI_GET_PFN_FROM_PTE(&v33, v18, PrototypePteDirect, v20);
        LODWORD(v17) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v22 + 16);
      }
      LODWORD(v16) = MmMakeProtectNotWriteCopy[(unsigned int)v17];
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v16);
    }
    else
    {
      if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
        goto LABEL_18;
      v23 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v35);
      DemandZeroPte = *(_QWORD *)(v24 + 48 * v23);
    }
    v33 = DemandZeroPte;
LABEL_18:
    *(_QWORD *)(v12 + 16) = DemandZeroPte;
    if ( v15 )
    {
      v25 = v16;
    }
    else
    {
      if ( (a6 & 0x10) != 0 )
      {
        *(_QWORD *)(v12 + 40) |= 0x200000000000000uLL;
        LODWORD(v16) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v33);
      }
      else
      {
        v16 = (DemandZeroPte >> 5) & 0x1F;
      }
      v25 = v16;
      if ( (_DWORD)v16 == 24 && v9 <= 0x7FFFFFFEFFFFLL )
      {
        Address = MiLocateAddress(v9);
        v7 = ContainingPageTable;
        v25 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
      }
    }
    v27 = 1;
    if ( v25 != 31 )
    {
      if ( v25 >> 3 == 3 )
      {
        if ( (v25 & 7) != 0 )
          v27 = 2;
      }
      else
      {
        v27 = v25 >> 3 != 1;
      }
    }
    if ( v7 == 0xFFFFFFFFFLL || (v6 & 0xFFF) == 0 )
    {
      ContainingPageTable = MiGetContainingPageTable(v6);
      v10 = 48 * ContainingPageTable - 0x58000000000LL;
    }
    v28 = v6 & 0x7FFFFFFFFFFFFFFFLL;
    if ( (a6 & 0x20) == 0 )
      v28 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    *(_BYTE *)(v12 + 34) |= 0x20u;
    if ( a5 )
      *(_QWORD *)v12 = a5 + 32;
    else
      *(_QWORD *)v12 = 0LL;
    if ( *(unsigned __int8 *)(v12 + 34) >> 6 != v27 )
      MiChangePageAttribute(v12, v27, 1LL);
    *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v12 + 32) = 1;
    if ( (a6 & 8) != 0 )
      *(_BYTE *)(v12 + 35) ^= (a6 ^ *(_BYTE *)(v12 + 35)) & 7;
    v7 = ContainingPageTable;
    v30 = ContainingPageTable ^ *(_QWORD *)(v12 + 40);
    *(_QWORD *)(v12 + 8) = v28;
    *(_QWORD *)(v12 + 40) ^= v30 & 0xFFFFFFFFFLL;
    *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
    if ( a6 < 0 )
      *(_BYTE *)(v12 + 35) |= 0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( (PteShadow & 0x400) == 0 && (PteShadow & 0x800) != 0 )
    {
      v6 = (unsigned __int64)v39;
    }
    else
    {
      result = MiMakeTransitionPte(*v38, (unsigned int)v16);
      v6 = (unsigned __int64)v39;
      v35 = result;
      *v39 = result;
      if ( (unsigned __int64)v39 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v39 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        result = MiWritePteShadow(v39, result);
        v7 = ContainingPageTable;
      }
    }
    if ( (a6 & 0x40) == 0 )
    {
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      result = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = (unsigned __int64)v39;
      v7 = ContainingPageTable;
    }
    v9 = a1;
    goto LABEL_60;
  }
  return result;
}

/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x140047D40
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r11
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 result; // rax
  char v11; // bl
  __int64 v12; // rdi
  unsigned __int64 DemandZeroPte; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  int v19; // edx
  unsigned __int64 PrototypePteDirect; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  unsigned __int64 Address; // rax
  unsigned int v24; // r14d
  unsigned __int64 v25; // r11
  __int64 v26; // r15
  unsigned __int8 CurrentIrql; // r12
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-68h] BYREF
  __int64 ContainingPageTable; // [rsp+38h] [rbp-60h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  unsigned __int64 v36; // [rsp+A0h] [rbp+8h]
  _QWORD *v37; // [rsp+A8h] [rbp+10h]
  int v38; // [rsp+B0h] [rbp+18h] BYREF
  _QWORD *v39; // [rsp+B8h] [rbp+20h]

  v39 = (_QWORD *)a4;
  v37 = a2;
  v36 = a1;
  v6 = a2;
  v7 = a1;
  ContainingPageTable = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v35 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v11 = a6;
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v12 = 48LL * *v6 - 0x58000000000LL;
      if ( v12 != qword_1403CC410 )
        break;
LABEL_66:
      a4 += 8LL;
      v6 = v37 + 1;
      v39 = (_QWORD *)a4;
      v37 = v6;
      if ( (unsigned __int64)v6 >= v35 )
        return result;
    }
    DemandZeroPte = *(_QWORD *)a4;
    if ( a4 >= 0xFFFFF6FB7DBED000uLL
      && a4 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(a1, DemandZeroPte, 0xFFFFF6FB7DBED7F8uLL, a4)
      && (DemandZeroPte & 1) != 0
      && ((DemandZeroPte & 0x20) == 0 || (DemandZeroPte & 0x42) == 0) )
    {
      v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 8 * ((a4 >> 3) & 0x1FF));
        v16 = DemandZeroPte | 0x20;
        if ( (v15 & 0x20) == 0 )
          v16 = DemandZeroPte;
        DemandZeroPte = v16;
        if ( (v15 & 0x42) != 0 )
          DemandZeroPte = v16 | 0x42;
      }
    }
    v33 = DemandZeroPte;
    LODWORD(v17) = 0;
    v32 = DemandZeroPte;
    if ( (v11 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(DemandZeroPte) )
      {
        v19 = (v18 >> 5) & 0x1F;
      }
      else
      {
        PrototypePteDirect = MiGetPrototypePteDirect(v18);
        v32 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
        v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32);
        v19 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
      }
      LODWORD(v17) = MmMakeProtectNotWriteCopy[v19];
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v17);
      v32 = DemandZeroPte;
    }
    else if ( (DemandZeroPte & 0x400) == 0 && (DemandZeroPte & 0x800) != 0 )
    {
      DemandZeroPte = *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v33) - 0x57FFFFFFFF0LL);
      v32 = DemandZeroPte;
    }
    *(_QWORD *)(v12 + 16) = DemandZeroPte;
    if ( (v11 & 0x40) != 0 )
    {
      v22 = v17;
    }
    else
    {
      if ( (v11 & 0x10) != 0 )
      {
        *(_QWORD *)(v12 + 40) |= 0x200000000000000uLL;
        LODWORD(v17) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v32);
      }
      else
      {
        v17 = (DemandZeroPte >> 5) & 0x1F;
      }
      v22 = v17;
      if ( (_DWORD)v17 == 24 && v7 <= 0x7FFFFFFEFFFFLL )
      {
        Address = MiLocateAddress(v7);
        a4 = (unsigned __int64)v39;
        v22 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
      }
    }
    v24 = 1;
    if ( v22 != 31 )
    {
      if ( v22 >> 3 == 3 )
      {
        if ( (v22 & 7) != 0 )
        {
          v25 = 2LL;
          v24 = 2;
LABEL_37:
          if ( v9 == 0xFFFFFFFFFLL || (a4 & 0xFFF) == 0 )
          {
            ContainingPageTable = MiGetContainingPageTable(a4);
            v8 = 48 * ContainingPageTable - 0x58000000000LL;
          }
          v26 = a4 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (v11 & 0x20) == 0 )
            v26 = a4;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(v25);
          v38 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v38);
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
          v28 = a5;
          *(_BYTE *)(v12 + 34) |= 0x20u;
          v29 = v28 + 32;
          if ( !v28 )
            v29 = 0LL;
          *(_QWORD *)v12 = v29;
          a1 = *(unsigned __int8 *)(v12 + 34);
          if ( *(unsigned __int8 *)(v12 + 34) >> 6 != v24 )
          {
            MiChangePageAttribute(v12, v24, 1LL);
            a1 = *(unsigned __int8 *)(v12 + 34);
          }
          *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v12 + 32) = 1;
          if ( (v11 & 8) != 0 )
            *(_BYTE *)(v12 + 35) ^= (v11 ^ *(_BYTE *)(v12 + 35)) & 7;
          v9 = ContainingPageTable;
          LOBYTE(a1) = a1 & 0xF8 | 2;
          v30 = ContainingPageTable ^ *(_QWORD *)(v12 + 40);
          *(_QWORD *)(v12 + 8) = v26;
          *(_QWORD *)(v12 + 40) ^= v30 & 0xFFFFFFFFFLL;
          *(_BYTE *)(v12 + 34) = a1;
          if ( v11 < 0 )
            *(_BYTE *)(v12 + 35) |= 0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          result = v33;
          if ( (v33 & 0x400) != 0 || (v33 & 0x800) == 0 )
          {
            result = MiMakeTransitionPte(*v37, (unsigned int)v17);
            a4 = (unsigned __int64)v39;
            v33 = result;
            *v39 = result;
            a1 = 0xFFFFF6FB7DBED000uLL;
            if ( a4 < 0xFFFFF6FB7DBED000uLL )
              goto LABEL_59;
            a1 = 0xFFFFF6FB7DBED7F8uLL;
            if ( a4 > 0xFFFFF6FB7DBED7F8uLL )
              goto LABEL_59;
            result = MiWritePteShadow(a4, result);
          }
          a4 = (unsigned __int64)v39;
LABEL_59:
          if ( (v11 & 0x40) == 0 )
          {
            v31 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v31);
                while ( *(__int64 *)(v8 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
              v9 = ContainingPageTable;
            }
            a1 = *(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            result = 0x7FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v8 + 24) = a1;
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            a4 = (unsigned __int64)v39;
          }
          v7 = v36;
          goto LABEL_66;
        }
      }
      else
      {
        v24 = v22 >> 3 != 1;
      }
    }
    v25 = 2LL;
    goto LABEL_37;
  }
  return result;
}

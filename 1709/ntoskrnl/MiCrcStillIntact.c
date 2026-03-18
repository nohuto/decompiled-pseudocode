/*
 * XREFs of MiCrcStillIntact @ 0x1400EA158
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     MiRecheckVaVm @ 0x140066A38 (MiRecheckVaVm.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiMakeCombineCandidateClean @ 0x1400EB5A4 (MiMakeCombineCandidateClean.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

_BOOL8 __fastcall MiCrcStillIntact(__int64 *a1, __int64 a2, char a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rbp
  __int64 *v9; // rsi
  __int64 PteShadow; // rbx
  __int64 v11; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r9d
  unsigned __int64 Address; // rax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // [rsp+30h] [rbp-108h] BYREF
  int v20; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v21; // [rsp+44h] [rbp-F4h]
  int v22; // [rsp+48h] [rbp-F0h]
  int v23; // [rsp+4Ch] [rbp-ECh]
  __int64 v24; // [rsp+50h] [rbp-E8h]
  __int64 v25; // [rsp+58h] [rbp-E0h]

  v5 = *(_QWORD *)(a4 + 8);
  v9 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiRecheckVaVm(a2, v5) )
    return 0LL;
  PteShadow = *v9;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v9, *v9);
  v19 = PteShadow;
  if ( (PteShadow & 1) == 0 )
    return 0LL;
  v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v19) - 0x58000000000LL;
  MiLockPageAtDpcInline(v11);
  if ( !(unsigned int)MiCombineCandidate(a1, a3, v11) || (*(_BYTE *)(v11 + 34) & 7) != 6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 != (__int64 *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) )
    return 0LL;
  v13 = *(_QWORD *)(v11 + 40);
  if ( (v13 & 0x200000000000000LL) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v11 + 35) & 8) != 0 )
    return 0LL;
  v14 = v13 & 0xFFFFFFFFFLL;
  if ( v14 == 0xFFFFFFFFDLL )
    return 0LL;
  if ( (MiGetWsleContents(v14, v5) & 0xF) == 8 )
    return 0LL;
  if ( *(_WORD *)(v11 + 32) != 1 )
    return 0LL;
  Address = 0LL;
  if ( v15 == 1 )
  {
    Address = MiLocateAddress(v5);
    if ( !Address || ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x55) == 0 )
      return 0LL;
  }
  if ( a5 != 2 )
  {
    if ( a5 != 3 )
      return 1LL;
    v23 = 0;
    v17 = MiTbFlushType(a2);
    v21 = 0;
    v24 = 0LL;
    v25 = 0LL;
    v20 = v17;
    v22 = 20;
    return (unsigned int)MiClearPteAccessed(
                           v18,
                           v11,
                           (unsigned int)(v5 >> 9) & 0xFFFFFFF8,
                           (unsigned int)&v20,
                           dword_140388C68,
                           0) != 0;
  }
  if ( (PteShadow & 0x42) == 0 )
    return 0LL;
  MiMakeCombineCandidateClean(v9, Address);
  return 1LL;
}

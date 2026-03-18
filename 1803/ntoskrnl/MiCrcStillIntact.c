/*
 * XREFs of MiCrcStillIntact @ 0x1400ADE10
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiRecheckVaVm @ 0x1400AE07C (MiRecheckVaVm.c)
 *     MiMakeCombineCandidateClean @ 0x1400AE0C0 (MiMakeCombineCandidateClean.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

_BOOL8 __fastcall MiCrcStillIntact(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r9d
  unsigned __int64 Address; // rax
  int v18; // ecx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-118h] BYREF
  int v23; // [rsp+40h] [rbp-108h] BYREF
  __int16 v24; // [rsp+44h] [rbp-104h]
  __int64 v25; // [rsp+48h] [rbp-100h]
  __int64 v26; // [rsp+50h] [rbp-F8h]
  __int64 v27; // [rsp+58h] [rbp-F0h]

  v5 = *(_QWORD *)(a4 + 8);
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiRecheckVaVm(a1, v5) )
    return 0LL;
  v10 = *(_QWORD *)v9;
  if ( MiPteInShadowRange(v9)
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 8 * ((v9 >> 3) & 0x1FF));
      v21 = v10 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v10;
      v10 = v21;
      if ( (v20 & 0x42) != 0 )
        v10 = v21 | 0x42;
    }
  }
  v22 = v10;
  if ( (v10 & 1) == 0 )
    return 0LL;
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v11);
  if ( !(unsigned int)MiCombineCandidate(a1, a3, v11) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v12 = *(_BYTE *)(v11 + 34);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v12 & 7) != 6 )
    return 0LL;
  if ( v9 != (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) )
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
    v25 = 20LL;
    v23 = MiTbFlushType(a2);
    v24 = 0;
    v26 = 0LL;
    v27 = 0LL;
    return (unsigned int)MiClearPteAccessed(
                           v18,
                           v11,
                           (unsigned int)(v5 >> 9) & 0xFFFFFFF8,
                           (unsigned int)&v23,
                           dword_1403CBF28,
                           0) != 0;
  }
  if ( (v10 & 0x42) == 0 )
    return 0LL;
  MiMakeCombineCandidateClean(v9, Address);
  return 1LL;
}

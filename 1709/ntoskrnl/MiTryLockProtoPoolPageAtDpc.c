/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x1400CBFFC
 * Callers:
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400CBF98 (MiTryLockLeafAndContainingPagesAtDpc.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1)
{
  __int64 *v1; // rsi
  __int64 PteShadow; // rax
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v1;
  if ( (unsigned __int64)v1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v1, *v1);
  v13 = PteShadow;
  if ( (PteShadow & 1) == 0 )
    return 0LL;
  v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v13);
  if ( !(unsigned int)MiIsPfnInline(v3) )
    return 0LL;
  v7 = 48 * v4 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    return 0LL;
  if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
    goto LABEL_18;
  v8 = *v1;
  if ( (unsigned __int64)v1 >= v6 && (unsigned __int64)v1 <= v5 )
    v8 = MiReadPteShadow(v1, *v1);
  v13 = v8;
  if ( (v8 & 1) == 0
    || (v8 & 0x200) != 0
    || (v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v13), v11 != v9)
    || (*(_BYTE *)(v7 + 34) & 0x20) != 0 )
  {
LABEL_18:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  MiAddLockedPageCharge(v7, 1LL, v10);
  *(_BYTE *)(v7 + 34) |= 0x20u;
  if ( (v8 & 0x20) == 0 )
    MiWriteValidPteVolatile(v1, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v7;
}

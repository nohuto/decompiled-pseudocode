/*
 * XREFs of MiBuildForkPageTable @ 0x140002C30
 * Callers:
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r10
  unsigned __int8 v13; // r12
  unsigned __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v10 = 48 * a2 - 0x58000000000LL;
  v11 = 48 * a5 - 0x58000000000LL;
  *(_QWORD *)(v10 + 16) = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)(v10 + 40) ^= (v12 ^ *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFLL;
  v13 = MiLockPageInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v10);
  *(_BYTE *)(v10 + 34) |= 0x10u;
  if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40 )
    MiChangePageAttribute(v10, 1LL, 1LL);
  v14 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v14 | 1;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 6;
  MiAddLockedPageCharge(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  if ( a6 == 1 )
  {
    *a4 = MiMakeTransitionPte(a2, 4LL);
    result = MiPteInShadowRange(a4);
    if ( (_DWORD)result )
      return MiWritePteShadow(v18);
  }
  else
  {
    *a4 = MiMakeValidPte(a3, a2, 2147483652LL) | 4;
    result = MiPteInShadowRange(a4);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v17);
    if ( a6 == 3 && (MiFlags & 0x1800000) != 0 )
    {
      result = *(_QWORD *)(a1 + 1544);
      *(_QWORD *)((a3 & 0xFFF) + result) = v16;
    }
  }
  return result;
}

/*
 * XREFs of MiBuildForkPageTable @ 0x1400CEA74
 * Callers:
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, __int64 a5, int a6)
{
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r10
  unsigned __int8 v13; // r12
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 result; // rax

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
  v15 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v15 | 1;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1LL, v14);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  if ( a6 == 1 )
  {
    result = MiMakeTransitionPte(a2, 4LL);
    *a4 = result;
    if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
      return MiWritePteShadow(a4, result);
  }
  else
  {
    v16 = MiMakeValidPte(a3, a2, -2147483644) | 4;
    *a4 = v16;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiWritePteShadow(a4, v16);
    }
    if ( a6 == 3 && (MiFlags & 0x1800000) != 0 )
    {
      result = *(_QWORD *)(a1 + 1544);
      *(_QWORD *)((a3 & 0xFFF) + result) = v16;
    }
  }
  return result;
}

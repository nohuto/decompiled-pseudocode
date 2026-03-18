/*
 * XREFs of MiBuildForkPageTable @ 0x1401422DC
 * Callers:
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r10
  unsigned __int8 v13; // r12
  char v14; // al
  char v15; // cl
  unsigned __int64 v16; // rax
  BOOL v17; // ebx
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8

  v10 = 48 * a2 - 0x58000000000LL;
  v11 = 48 * a5 - 0x58000000000LL;
  *(_QWORD *)(v10 + 16) = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)(v10 + 40) ^= (v12 ^ *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFLL;
  v13 = MiLockPageInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v10);
  v14 = *(_BYTE *)(v10 + 34) | 0x10;
  *(_BYTE *)(v10 + 34) = v14;
  v15 = v14;
  if ( (v14 & 0xC0) != 0x40 )
  {
    MiChangePageAttribute(v10, 1, 1u);
    v15 = *(_BYTE *)(v10 + 34);
  }
  v16 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v16 | 1;
  *(_BYTE *)(v10 + 34) = v15 & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  v17 = MiPteInShadowRange((unsigned __int64)a4);
  if ( a6 == 1 )
  {
    result = MiMakeTransitionPte(a2, 4LL);
    *a4 = result;
    if ( v17 )
      return (__int64)MiWritePteShadow((__int64)a4, result, v22);
  }
  else
  {
    result = MiMakeValidPte(a3, a2, 2147483652LL, v18);
    v21 = result | 4;
    *a4 = result | 4;
    if ( v17 )
      result = (__int64)MiWritePteShadow((__int64)a4, v21, v20);
    if ( a6 == 3 && (MiFlags & 0x1800000) != 0 )
    {
      result = *(_QWORD *)(a1 + 1544);
      *(_QWORD *)((a3 & 0xFFF) + result) = v21;
    }
  }
  return result;
}

/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x14015C7C0
 * Callers:
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x14015C940 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 result; // rax
  unsigned __int64 UltraMapping; // rdx
  __int64 *v9; // r8
  __int64 v10; // rax
  __int64 **v11; // rcx
  unsigned __int64 *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r10d
  __int64 v16; // rcx

  *(_DWORD *)(a2 + 88) = 512;
  *(_QWORD *)(a2 + 96) = a2 + 104;
  *(_DWORD *)(a2 + 184) = *(_QWORD *)(a3 + 40) >> 58;
  v6 = *(_DWORD **)(a2 + 96);
  *(_QWORD *)(a2 + 168) = a3;
  *(_DWORD *)(a2 + 188) = 1;
  *v6 |= 1u;
  MiLockPageAtDpcInline(a3);
  if ( *(_BYTE *)(a2 + 68) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  else
  {
    UltraMapping = MiGetUltraMapping(a1, 0LL);
    v9 = (__int64 *)(a2 + 72);
    v10 = *(_QWORD *)(a1 + 144) + 168LL;
    v11 = *(__int64 ***)(*(_QWORD *)(a1 + 144) + 176LL);
    if ( *v11 != (__int64 *)v10 )
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(a2 + 80) = v11;
    *v11 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    *(_QWORD *)(a2 + 176) = UltraMapping;
    *(_QWORD *)(a2 + 40) = UltraMapping;
    v12 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
    *v12 = MiMakeValidPte((unsigned __int64)v12, (a3 + 0x58000000000LL) / 48, -1543503868);
    v13 = MiPteInShadowRange(v12);
    v15 = 0;
    if ( v13 )
      MiWritePteShadow(v14);
    v16 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 64) = v15;
    *(_QWORD *)(a2 + 48) = v16 + 0x3FFFFFFF;
    *(_QWORD *)(a2 + 32) = v12;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 112) = a2;
    result = 1LL;
    *(_WORD *)(a1 + 106) = v15;
  }
  return result;
}

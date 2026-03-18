/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x140153B68
 * Callers:
 *     MiGetHugePageToZero @ 0x140134BB0 (MiGetHugePageToZero.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 result; // rax
  unsigned __int64 UltraMapping; // r8
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 **v11; // rdx
  unsigned __int64 *v12; // rsi
  unsigned __int64 ValidPte; // rax
  __int64 v14; // rcx

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
    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 80), 0, 0x40000LL, 1);
    v9 = (__int64 *)(a2 + 72);
    v10 = *(_QWORD *)(a1 + 224) + 32LL;
    v11 = *(__int64 ***)(*(_QWORD *)(a1 + 224) + 40LL);
    if ( *v11 != (__int64 *)v10 )
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(a2 + 80) = v11;
    *v11 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    *(_QWORD *)(a2 + 176) = UltraMapping;
    *(_QWORD *)(a2 + 40) = UltraMapping;
    v12 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v12, (a3 + 0x58000000000LL) / 48, -1543503868);
    *v12 = ValidPte;
    if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v12, ValidPte);
    v14 = *(_QWORD *)(a2 + 40) + 0x3FFFFFFFLL;
    *(_QWORD *)(a2 + 32) = v12;
    *(_QWORD *)(a2 + 48) = v14;
    *(_DWORD *)(a2 + 64) = 0;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 216) = a2;
    result = 1LL;
    *(_WORD *)(a1 + 208) = 0;
  }
  return result;
}

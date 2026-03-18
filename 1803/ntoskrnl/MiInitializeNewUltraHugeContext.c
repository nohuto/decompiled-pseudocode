/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x14017BE2C
 * Callers:
 *     MiGetHugePageToZero @ 0x14017B9F8 (MiGetHugePageToZero.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  unsigned __int64 UltraMapping; // rdx
  __int64 v8; // r9
  __int64 *v9; // r8
  __int64 v10; // rax
  __int64 **v11; // rcx
  unsigned __int64 *v12; // r14
  BOOL v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r10d
  __int64 v18; // rcx
  __int64 result; // rax

  *(_DWORD *)(a2 + 88) = 512;
  *(_QWORD *)(a2 + 96) = a2 + 104;
  *(_DWORD *)(a2 + 184) = *(_QWORD *)(a3 + 40) >> 58;
  v6 = *(_DWORD **)(a2 + 96);
  *(_QWORD *)(a2 + 168) = a3;
  *(_DWORD *)(a2 + 188) = 1;
  *v6 |= 1u;
  MiLockPageAtDpcInline(a3);
  if ( *(_BYTE *)(a2 + 69) == 1 )
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
    *v12 = MiMakeValidPte((unsigned __int64)v12, (a3 + 0x58000000000LL) / 48, 2751463428LL, v8);
    v13 = MiPteInShadowRange((unsigned __int64)v12);
    v17 = 0;
    if ( v13 )
      MiWritePteShadow(v15, v14, v16);
    v18 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 64) = v17;
    *(_QWORD *)(a2 + 48) = v18 + 0x3FFFFFFF;
    *(_QWORD *)(a2 + 32) = v12;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 216) = a2;
    result = 1LL;
    *(_WORD *)(a1 + 208) = v17;
  }
  return result;
}

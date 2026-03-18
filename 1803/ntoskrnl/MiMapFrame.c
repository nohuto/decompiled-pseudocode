/*
 * XREFs of MiMapFrame @ 0x140256814
 * Callers:
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x1402568B0 (MiMapSystemCachePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiMapFrame(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( MiIsPfnInline(a2) )
  {
    v6 = *(unsigned __int8 *)(48 * v3 - 0x57FFFFFFFDELL) >> 6;
    if ( !v6 || v6 == 3 )
    {
      v4 = 12;
    }
    else if ( v6 == 2 )
    {
      v4 = 28;
    }
  }
  *(_QWORD *)a1 = MiMakeValidPte(a1, v3, v4 | 0xA0000000, v5);
  if ( MiPteInShadowRange(a1) )
    MiWritePteShadow(v8, v7, v9);
  return (__int64)(a1 << 25) >> 16;
}

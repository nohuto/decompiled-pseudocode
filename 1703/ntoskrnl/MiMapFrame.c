/*
 * XREFs of MiMapFrame @ 0x14021236C
 * Callers:
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x140212408 (MiMapSystemCachePage.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapFrame(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // ecx

  if ( MiIsPfnInline(a2) )
  {
    v5 = *(unsigned __int8 *)(48 * v3 - 0x57FFFFFFFDELL) >> 6;
    if ( !v5 || v5 == 3 )
    {
      v4 = 12;
    }
    else if ( v5 == 2 )
    {
      v4 = 28;
    }
  }
  *(_QWORD *)a1 = MiMakeValidPte(a1, v3, v4 | 0xA0000000);
  if ( MiPteInShadowRange(a1) )
    MiWritePteShadow();
  return (__int64)(a1 << 25) >> 16;
}

/*
 * XREFs of MiMapFrame @ 0x140219E5C
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x140219F0C (MiMapSystemCachePage.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
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
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  return (__int64)(a1 << 25) >> 16;
}

/*
 * XREFs of vUnmapFile @ 0x1C00C1B94
 * Callers:
 *     vUnmapFontCacheFile @ 0x1C00C1B34 (vUnmapFontCacheFile.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C02686F4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngFreeModule @ 0x1C02693B0 (EngFreeModule.c)
 *     EngUnmapFontFile @ 0x1C0269600 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00B37A0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFile(PVOID *a1)
{
  MmUnmapViewInSessionSpace(a1[1]);
  if ( !a1[2] )
    vUnreferenceFileviewSection((struct _FILEVIEW *)a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}

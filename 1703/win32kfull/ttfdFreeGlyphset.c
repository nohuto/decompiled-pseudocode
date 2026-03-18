/*
 * XREFs of ttfdFreeGlyphset @ 0x1C022E684
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C002FBE0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     vReleaseGlyphSet @ 0x1C022B544 (vReleaseGlyphSet.c)
 */

void __fastcall ttfdFreeGlyphset(__int64 a1, int a2)
{
  EngAcquireSemaphore(ghsemTTFD);
  vReleaseGlyphSet(
    *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL)),
    *(_DWORD *)(a1 + 16LL * (unsigned int)(a2 - 1) + 44));
  EngReleaseSemaphore(ghsemTTFD);
}

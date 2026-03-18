/*
 * XREFs of MiUnlockPageTable @ 0x14018626C
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiUnlockPageTableInternal(a1, a2);
}

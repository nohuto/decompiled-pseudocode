/*
 * XREFs of MiLockPageTable @ 0x140185E74
 * Callers:
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 0LL);
}

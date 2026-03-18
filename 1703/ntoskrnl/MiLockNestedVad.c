/*
 * XREFs of MiLockNestedVad @ 0x14049B43C
 * Callers:
 *     MiUpControlAreaRefs @ 0x14000308C (MiUpControlAreaRefs.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiMarkSharedImageCfgBits @ 0x140063450 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     <none>
 */

void __fastcall MiLockNestedVad(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}

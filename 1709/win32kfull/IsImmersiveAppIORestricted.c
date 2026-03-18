/*
 * XREFs of IsImmersiveAppIORestricted @ 0x1C00C8A38
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppIORestricted(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 776);
  return (v1 & 0x30) == 0x10 && (v1 & 0x200) == 0;
}

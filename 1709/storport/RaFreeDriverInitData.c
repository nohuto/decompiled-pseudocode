/*
 * XREFs of RaFreeDriverInitData @ 0x1C00313AC
 * Callers:
 *     RaDeleteDriver @ 0x1C0067C8C (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeDriverInitData(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x49486152u);
}

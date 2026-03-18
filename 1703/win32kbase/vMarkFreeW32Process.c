/*
 * XREFs of vMarkFreeW32Process @ 0x1C0088A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Process(__int64 a1)
{
  *(_DWORD *)(a1 + 768) |= 0x1000u;
}

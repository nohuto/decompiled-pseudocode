/*
 * XREFs of vMarkFreeW32Thread @ 0x1C00880C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Thread(__int64 a1)
{
  *(_DWORD *)(a1 + 1096) |= 0x1000u;
}

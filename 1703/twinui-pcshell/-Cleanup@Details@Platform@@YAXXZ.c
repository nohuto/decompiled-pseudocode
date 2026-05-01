/*
 * XREFs of ?Cleanup@Details@Platform@@YAXXZ @ 0x180196F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Platform::Details::Cleanup(__int64 a1, int a2)
{
  Platform::Details::UninitializeData((Platform::Details *)(unsigned int)__abi___threading_model, a2);
}

/*
 * XREFs of ?CitIsBufferSmallStatus@@YAEJ@Z @ 0x1C0086CD8
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0085D64 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0086C00 (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C0155CF0 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitIsBufferSmallStatus(int a1)
{
  return a1 == -1073741789 || a1 == -2147483643;
}

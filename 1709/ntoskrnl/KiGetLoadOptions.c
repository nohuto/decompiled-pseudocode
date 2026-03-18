/*
 * XREFs of KiGetLoadOptions @ 0x140858458
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14080C364 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}

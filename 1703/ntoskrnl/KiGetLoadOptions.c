/*
 * XREFs of KiGetLoadOptions @ 0x140826C24
 * Callers:
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}

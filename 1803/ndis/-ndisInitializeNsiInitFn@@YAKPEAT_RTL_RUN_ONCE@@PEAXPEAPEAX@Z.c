/*
 * XREFs of ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C00C9750
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 */

_BOOL8 __fastcall ndisInitializeNsiInitFn(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  return (int)ndisInitializeNsiHelper() >= 0;
}

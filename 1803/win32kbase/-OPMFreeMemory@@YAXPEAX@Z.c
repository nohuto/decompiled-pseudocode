/*
 * XREFs of ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00C6000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall OPMFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4D504F47u);
}

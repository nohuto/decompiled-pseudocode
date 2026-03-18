/*
 * XREFs of ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0092900
 * Callers:
 *     ??_GCOPM@@QEAAPEAXI@Z @ 0x1C006D828 (--_GCOPM@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OPMFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4D504F47u);
}

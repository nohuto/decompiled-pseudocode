/*
 * XREFs of ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C00247F8
 * Callers:
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0154FF0 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01551B4 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpProcessInfoIsValid(struct _CIT_PROCESS *a1)
{
  return (unsigned __int64)a1 - 1 <= 0xCEEE || (unsigned __int64)a1 >= 0xCEF2;
}

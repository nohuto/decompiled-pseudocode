/*
 * XREFs of asm_GetApplicationSubmixes$dtor$0 @ 0x1800D7F07
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall asm_GetApplicationSubmixes_dtor_0(__int64 a1, __int64 a2)
{
  CWatchdogTimer<1>::~CWatchdogTimer<1>(a2 + 96);
}

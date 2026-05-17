/*
 * XREFs of EtwEventWrite @ 0x18005E0F0
 * Callers:
 *     SbSelectProcedure @ 0x180039270 (SbSelectProcedure.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     EtwEventWriteEndScenario @ 0x180060F20 (EtwEventWriteEndScenario.c)
 *     sub_180083094 @ 0x180083094 (sub_180083094.c)
 *     EtwEventWriteStartScenario @ 0x18008F240 (EtwEventWriteStartScenario.c)
 *     sub_1800D3E98 @ 0x1800D3E98 (sub_1800D3E98.c)
 *     sub_1800D3F18 @ 0x1800D3F18 (sub_1800D3F18.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 *     sub_1800FE2D0 @ 0x1800FE2D0 (sub_1800FE2D0.c)
 *     sub_1800FE344 @ 0x1800FE344 (sub_1800FE344.c)
 *     sub_1801063D4 @ 0x1801063D4 (sub_1801063D4.c)
 * Callees:
 *     sub_18005E120 @ 0x18005E120 (sub_18005E120.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return sub_18005E120(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}

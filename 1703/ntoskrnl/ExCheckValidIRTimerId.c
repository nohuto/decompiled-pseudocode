/*
 * XREFs of ExCheckValidIRTimerId @ 0x14003B174
 * Callers:
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14045BCD8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0xEu && a2 < *((unsigned __int8 *)&unk_1402889B0 + 24 * a1);
}

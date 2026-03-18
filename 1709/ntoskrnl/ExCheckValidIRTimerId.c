/*
 * XREFs of ExCheckValidIRTimerId @ 0x140130390
 * Callers:
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14059C904 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0xEu && a2 < *((unsigned __int8 *)&unk_1402B67D0 + 24 * a1);
}

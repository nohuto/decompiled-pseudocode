/*
 * XREFs of ExCheckValidIRTimerId @ 0x14016CFBC
 * Callers:
 *     KeInitializeIRTimer @ 0x14016CF68 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x140612828 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0xEu && a2 < *((unsigned __int8 *)&unk_1402EE470 + 24 * a1);
}

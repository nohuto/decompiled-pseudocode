/*
 * XREFs of KxNmiInterrupt @ 0x14018C140
 * Callers:
 *     KiNmiInterruptStart @ 0x14018BDC0 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x140203ED0 (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x14020DC90 (KiSaveProcessorState.c)
 */

__int64 __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v0 - 128, v2);
  return KiProcessNMI(v0 - 128, v2);
}

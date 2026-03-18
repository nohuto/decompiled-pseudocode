/*
 * XREFs of PopThermalCsEntry @ 0x1402439D0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x1405F2260 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140243AA8 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140248154 (PopTraceThermalStandbyInitiated.c)
 */

__int64 __fastcall PopThermalCsEntry(__int64 a1)
{
  __int64 result; // rax

  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_14036520D = 1;
    LOBYTE(a1) = byte_14036520C;
    qword_140365210 = MEMORY[0xFFFFF78000000008];
    result = PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_140365204 )
    return PopThermalStandbyEndTracking(0LL);
  return result;
}

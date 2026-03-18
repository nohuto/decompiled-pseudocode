/*
 * XREFs of PopThermalCsEntry @ 0x140278D38
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140614150 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x14014DCE4 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x14027E3C8 (PopTraceThermalStandbyInitiated.c)
 */

__int64 __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_1403A9CAD = 1;
    LOBYTE(a1) = byte_1403A9CAC;
    qword_1403A9CB0 = MEMORY[0xFFFFF78000000008];
    result = PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_1403A9CA4 )
    return PopThermalStandbyEndTracking(0LL, a2, a3);
  return result;
}

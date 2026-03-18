/*
 * XREFs of PopThermalCsEntry @ 0x14022F530
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140586350 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x14013C87C (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140232DD4 (PopTraceThermalStandbyInitiated.c)
 */

__int64 __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_14034AB2D = 1;
    LOBYTE(a1) = byte_14034AB2C;
    qword_14034AB30 = MEMORY[0xFFFFF78000000008];
    result = PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_14034AB24 )
    return PopThermalStandbyEndTracking(0LL, a2, a3);
  return result;
}

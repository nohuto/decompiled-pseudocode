/*
 * XREFs of KeInitializeIRTimer @ 0x14003B120
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x140147D90 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x140155A20 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x1402346D0 (PopPowerButtonWorkCallback.c)
 *     NtCreateTimer2 @ 0x14055DBA0 (NtCreateTimer2.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1405A8EC0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopThermalZoneAdd @ 0x1405D6970 (PopThermalZoneAdd.c)
 *     PopBatteryInit @ 0x140822C60 (PopBatteryInit.c)
 * Callees:
 *     ExCheckValidIRTimerId @ 0x14003B174 (ExCheckValidIRTimerId.c)
 *     KiInitializeTimer2 @ 0x14012A6A0 (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  KiInitializeTimer2(a1, a2, a3, a5 | 2u);
  v7 = *a4;
  *(_BYTE *)(a1 + 2) = v7;
  v8 = a4[2];
  *(_BYTE *)(a1 + 3) = a4[2];
  result = ExCheckValidIRTimerId(v7, v8);
  if ( !(_BYTE)result )
    __fastfail(5u);
  return result;
}

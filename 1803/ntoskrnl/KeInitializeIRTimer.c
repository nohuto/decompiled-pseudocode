/*
 * XREFs of KeInitializeIRTimer @ 0x14016CF68
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x140163210 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x140171B48 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x14027FBD0 (PopPowerButtonWorkCallback.c)
 *     NtCreateTimer2 @ 0x14052E740 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x140626F60 (PopThermalZoneAdd.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14062747C (PopIdleInitAoAcDozeS4Timer.c)
 *     PopBatteryInit @ 0x1408C5CA0 (PopBatteryInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14008605C (KiInitializeTimer2.c)
 *     ExCheckValidIRTimerId @ 0x14016CFBC (ExCheckValidIRTimerId.c)
 */

__int64 __fastcall KeInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  KiInitializeTimer2(a1, a2, a3, a5 | 2);
  v7 = *a4;
  *(_BYTE *)(a1 + 2) = v7;
  v8 = a4[2];
  *(_BYTE *)(a1 + 3) = a4[2];
  result = ExCheckValidIRTimerId(v7, v8);
  if ( !(_BYTE)result )
    __fastfail(5u);
  return result;
}

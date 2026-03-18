/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x140765220
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopTriggerMonitorPowerEvent @ 0x14076AEC4 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // di

  v2 = 0;
  v3 = a1;
  if ( PopEventProcessorEnabled )
  {
    PopTriggerMonitorPowerEvent(a1, a2);
    if ( v3 && PopIsPdcEngaged )
      return 259;
  }
  else if ( qword_1403D1428 )
  {
    LOBYTE(a1) = (_BYTE)a1 == 0;
    return (unsigned int)qword_1403D1428(a1);
  }
  return v2;
}

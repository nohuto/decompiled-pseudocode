/*
 * XREFs of WriteGenAddr @ 0x1C0003568
 * Callers:
 *     SetPerfStateIO @ 0x1C0002B20 (SetPerfStateIO.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00036A8 (WriteGenAddrMaybeHidden.c)
 *     WriteGenAddrHidden @ 0x1C00037D4 (WriteGenAddrHidden.c)
 *     PerfControlCpc @ 0x1C0003B50 (PerfControlCpc.c)
 *     CpcReinitializeHandler @ 0x1C00042E0 (CpcReinitializeHandler.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0004430 (CpcSetEnergyPerfPreference.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0004490 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0004500 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0004550 (CpcSetTimeWindow.c)
 *     C2Idle @ 0x1C0004B70 (C2Idle.c)
 *     C3IdleCheck @ 0x1C0004C30 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0004CB0 (C3Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00032E8 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C00033FC (WriteIoMemRaw.c)
 */

char __fastcall WriteGenAddr(_BYTE *a1, unsigned __int64 a2)
{
  char v4; // al
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v6; // cl

  if ( !a1[2] )
  {
    v4 = a1[1];
    if ( *a1 == 10 )
    {
      if ( v4 == 64 )
        return WriteIoMemRaw((__int64)a1, a2);
    }
    else if ( v4 == a1[3] )
    {
      return WriteIoMemRaw((__int64)a1, a2);
    }
  }
  IoMemRaw = ReadIoMemRaw((__int64)a1);
  v6 = a1[1];
  if ( v6 < 0x40u || a1[2] )
    a2 = IoMemRaw & ~(((1LL << v6) - 1) << a1[2]) | (((1LL << v6) - 1) << a1[2]) & (a2 << a1[2]);
  return WriteIoMemRaw((__int64)a1, a2);
}

/*
 * XREFs of WriteGenAddr @ 0x1C0008E5C
 * Callers:
 *     PerfControlCpc @ 0x1C0006A20 (PerfControlCpc.c)
 *     CpcReinitializeHandler @ 0x1C00071B0 (CpcReinitializeHandler.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0007300 (CpcSetEnergyPerfPreference.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0007360 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00073D0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0007420 (CpcSetTimeWindow.c)
 *     C2Idle @ 0x1C0007A40 (C2Idle.c)
 *     C3IdleCheck @ 0x1C0007B00 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0007B80 (C3Idle.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0008F9C (WriteGenAddrMaybeHidden.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
 *     SetPerfStateIO @ 0x1C0009360 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0008BDC (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0008CF0 (WriteIoMemRaw.c)
 */

char __fastcall WriteGenAddr(_BYTE *a1, unsigned __int64 a2)
{
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  if ( !a1[2] )
  {
    if ( *a1 == 10 )
    {
      if ( a1[1] == 64 )
        return WriteIoMemRaw((__int64)a1, a2);
    }
    else if ( a1[1] == a1[3] )
    {
      return WriteIoMemRaw((__int64)a1, a2);
    }
  }
  IoMemRaw = ReadIoMemRaw((__int64)a1);
  v5 = a1[1];
  if ( v5 < 0x40u || a1[2] )
    a2 = IoMemRaw & ~(((1LL << v5) - 1) << a1[2]) | (((1LL << v5) - 1) << a1[2]) & (a2 << a1[2]);
  return WriteIoMemRaw((__int64)a1, a2);
}

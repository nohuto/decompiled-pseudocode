/*
 * XREFs of WriteGenAddrHidden @ 0x1C0008D64
 * Callers:
 *     PerfControlCpcHidden @ 0x1C0006A40 (PerfControlCpcHidden.c)
 *     CpcReinitializeHandler @ 0x1C0006EC0 (CpcReinitializeHandler.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0006FF0 (CpcSetEnergyPerfPreference.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0007040 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00070A0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C00070E0 (CpcSetTimeWindow.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0008C48 (WriteGenAddrMaybeHidden.c)
 *     SetPerfStateIOHidden @ 0x1C0009080 (SetPerfStateIOHidden.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0008B1C (WriteGenAddr.c)
 *     WriteIoMemRawHidden @ 0x1C0008B9C (WriteIoMemRawHidden.c)
 */

void __fastcall WriteGenAddrHidden(unsigned int a1, _BYTE *a2, unsigned __int64 a3)
{
  char v5; // r9
  __int64 v6; // rdx
  unsigned __int8 v7; // bl
  __int64 v8; // r11
  char v9; // cl
  __int64 v10; // rdx

  if ( !*a2 || *a2 == 10 )
  {
    WriteGenAddr(a2, a3);
  }
  else
  {
    v5 = a2[2];
    if ( v5 || a2[1] != a2[3] )
    {
      v7 = a2[1];
      v8 = ((1LL << v7) - 1) << v5;
      v9 = a2[3];
      if ( v9 == 64 )
        v10 = -1LL;
      else
        v10 = (1LL << v9) - 1;
      v6 = ~v8 & v10;
      if ( v7 < 0x40u || v5 )
        a3 = v8 & (a3 << v5);
    }
    else
    {
      v6 = 0LL;
    }
    WriteIoMemRawHidden(a1, (__int64)a2, v6, a3);
  }
}

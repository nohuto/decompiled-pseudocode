/*
 * XREFs of WriteGenAddr @ 0x1C0007984
 * Callers:
 *     WriteGenAddrHidden @ 0x1C0004424 (WriteGenAddrHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00044CC (WriteGenAddrMaybeHidden.c)
 *     MWaitIdleCheck @ 0x1C0007110 (MWaitIdleCheck.c)
 *     PerfControlCpc @ 0x1C0007EF0 (PerfControlCpc.c)
 *     C2Idle @ 0x1C000C010 (C2Idle.c)
 *     C3Idle @ 0x1C000C0D0 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000C1B0 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C000CC60 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0007870 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0007A0C (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2)
{
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  if ( a1 )
  {
    if ( !a1[2] )
    {
      if ( *a1 == 10 )
      {
        if ( a1[1] == 64 )
          goto LABEL_10;
      }
      else if ( a1[1] == a1[3] )
      {
LABEL_10:
        WriteIoMemRaw(a1, a2);
        return;
      }
    }
    IoMemRaw = ReadIoMemRaw((__int64)a1);
    v5 = a1[1];
    if ( v5 < 0x40u || a1[2] )
      a2 = IoMemRaw & ~(((1LL << v5) - 1) << a1[2]) | (((1LL << v5) - 1) << a1[2]) & (a2 << a1[2]);
    goto LABEL_10;
  }
}

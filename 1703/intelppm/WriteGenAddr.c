/*
 * XREFs of WriteGenAddr @ 0x1C00013CC
 * Callers:
 *     SetPerfStateIO @ 0x1C0003930 (SetPerfStateIO.c)
 *     WriteGenAddrHidden @ 0x1C0004254 (WriteGenAddrHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00042FC (WriteGenAddrMaybeHidden.c)
 *     MWaitIdleCheck @ 0x1C0007280 (MWaitIdleCheck.c)
 *     PerfControlCpc @ 0x1C0007C10 (PerfControlCpc.c)
 *     C2Idle @ 0x1C000BC80 (C2Idle.c)
 *     C3Idle @ 0x1C000BD40 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000BE20 (C3IdleCheck.c)
 * Callees:
 *     WriteIoMemRaw @ 0x1C000144C (WriteIoMemRaw.c)
 *     ReadIoMemRaw @ 0x1C00014D8 (ReadIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2)
{
  __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  if ( a1 )
  {
    if ( !a1[2] )
    {
      if ( *a1 == 10 )
      {
        if ( a1[1] != 64 )
          goto LABEL_5;
      }
      else if ( a1[1] != a1[3] )
      {
        goto LABEL_5;
      }
LABEL_8:
      WriteIoMemRaw(a1, a2);
      return;
    }
LABEL_5:
    IoMemRaw = ReadIoMemRaw();
    v5 = a1[1];
    if ( v5 < 0x40u || a1[2] )
      a2 = IoMemRaw & ~(((1LL << v5) - 1) << a1[2]) | (((1LL << v5) - 1) << a1[2]) & (a2 << a1[2]);
    goto LABEL_8;
  }
}

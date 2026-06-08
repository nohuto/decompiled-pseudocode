/*
 * XREFs of ReadGenAddr @ 0x1C0001374
 * Callers:
 *     SetPerfStateIO @ 0x1C0003930 (SetPerfStateIO.c)
 *     ReadGenAddrHidden @ 0x1C0004138 (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00041A4 (ReadGenAddrMaybeHidden.c)
 *     MWaitIdleCheck @ 0x1C0007280 (MWaitIdleCheck.c)
 *     GetCpcDifferentialFeedback @ 0x1C0007BC0 (GetCpcDifferentialFeedback.c)
 *     C2Idle @ 0x1C000BC80 (C2Idle.c)
 *     C3Idle @ 0x1C000BD40 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000BE20 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1C000BEA0 (IoHaltC1Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00014D8 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw();
  v2 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(a1 + 2);
    if ( v5 )
      v2 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(a1 + 1);
    if ( v6 < 0x40u )
      v2 &= (1LL << v6) - 1;
  }
  return v2;
}

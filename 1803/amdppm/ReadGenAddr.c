/*
 * XREFs of ReadGenAddr @ 0x1C0003518
 * Callers:
 *     SetPerfStateIO @ 0x1C0002B20 (SetPerfStateIO.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0003678 (ReadGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C00036DC (ReadGenAddrHidden.c)
 *     GetCpcDifferentialFeedback @ 0x1C0004350 (GetCpcDifferentialFeedback.c)
 *     IoHaltC1Idle @ 0x1C0004B20 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C0004B70 (C2Idle.c)
 *     C3IdleCheck @ 0x1C0004C30 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0004CB0 (C3Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00032E8 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v4; // cl
  unsigned __int8 v5; // cl

  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw(a1);
  v2 = IoMemRaw;
  if ( IoMemRaw )
  {
    v4 = *(_BYTE *)(a1 + 2);
    if ( v4 )
      v2 = IoMemRaw >> v4;
    v5 = *(_BYTE *)(a1 + 1);
    if ( v5 < 0x40u )
      v2 &= (1LL << v5) - 1;
  }
  return v2;
}

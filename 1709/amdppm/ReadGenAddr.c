/*
 * XREFs of ReadGenAddr @ 0x1C0008E0C
 * Callers:
 *     GetCpcDifferentialFeedback @ 0x1C0007220 (GetCpcDifferentialFeedback.c)
 *     IoHaltC1Idle @ 0x1C00079F0 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C0007A40 (C2Idle.c)
 *     C3IdleCheck @ 0x1C0007B00 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0007B80 (C3Idle.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0008F6C (ReadGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0008FD0 (ReadGenAddrHidden.c)
 *     SetPerfStateIO @ 0x1C0009360 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0008BDC (ReadIoMemRaw.c)
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

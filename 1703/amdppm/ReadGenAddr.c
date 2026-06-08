/*
 * XREFs of ReadGenAddr @ 0x1C0008AC4
 * Callers:
 *     GetCpcDifferentialFeedback @ 0x1C0006F30 (GetCpcDifferentialFeedback.c)
 *     IoHaltC1Idle @ 0x1C00076B0 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C0007700 (C2Idle.c)
 *     C3IdleCheck @ 0x1C00077C0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0007840 (C3Idle.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0008C2C (ReadGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0008C6C (ReadGenAddrHidden.c)
 *     SetPerfStateIO @ 0x1C0008FF0 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0008894 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw(a1);
  v3 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(a1 + 2);
    if ( v5 )
      v3 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(a1 + 1);
    if ( v6 < 0x40u )
      v3 &= (1LL << v6) - 1;
  }
  return v3;
}

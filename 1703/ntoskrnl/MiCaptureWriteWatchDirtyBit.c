/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x14002CA88
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     MiMakeCombineCandidateClean @ 0x140100A60 (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 */

char __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 VadEvent; // rax
  unsigned __int64 v4; // r10

  LODWORD(VadEvent) = *(_DWORD *)(a1 + 772);
  if ( (VadEvent & 0x20) == 0 )
  {
    if ( a3 || (VadEvent = MiLocateAddress(a2), (a3 = VadEvent) != 0) )
    {
      LODWORD(VadEvent) = *(_DWORD *)(a3 + 48);
      if ( (VadEvent & 0x80000) == 0 )
      {
        LOBYTE(VadEvent) = VadEvent & 7;
        if ( (_BYTE)VadEvent == 4 )
        {
          VadEvent = MiLocateVadEvent(a3, 4LL);
          _bittestandset64(*(signed __int64 **)(VadEvent + 16), v4);
        }
      }
    }
  }
  return VadEvent;
}

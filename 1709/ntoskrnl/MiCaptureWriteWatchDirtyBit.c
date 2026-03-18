/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1400E9684
 * Callers:
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiMakeCombineCandidateClean @ 0x1400EB5A4 (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
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

/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x140012054
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 *     MiProcessWsInSwapFault @ 0x140011F40 (MiProcessWsInSwapFault.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 && (*(_BYTE *)(a1 + 16) & 6) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      result = MiCapturePageFileInfoInline(a1 + 16, 1LL, 1LL);
      *(_QWORD *)(a1 + 16) &= ~2uLL;
    }
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}

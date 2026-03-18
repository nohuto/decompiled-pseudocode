/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x1400AD9DC
 * Callers:
 *     MiProcessWsInSwapFault @ 0x140003660 (MiProcessWsInSwapFault.c)
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 && (*(_BYTE *)(a1 + 16) & 6) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      result = MiCapturePageFileInfoInline(a1 + 16, 1LL);
      *(_QWORD *)(a1 + 16) &= ~2uLL;
    }
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}

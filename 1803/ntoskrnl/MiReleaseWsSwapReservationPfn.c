/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x1400B330C
 * Callers:
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 result; // rax
  char v3; // cl

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 && (*(_BYTE *)(a1 + 16) & 6) != 0 )
  {
    v3 = *(_BYTE *)(a1 + 34);
    if ( (v3 & 8) == 0 )
    {
      result = MiCapturePageFileInfoInline((_QWORD *)(a1 + 16), 1, 1);
      *(_QWORD *)(a1 + 16) &= ~2uLL;
      v3 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v3 | 0x10;
  }
  return result;
}

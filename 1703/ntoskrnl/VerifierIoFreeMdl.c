/*
 * XREFs of VerifierIoFreeMdl @ 0x140767D00
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoFreeMdl(unsigned __int64 a1)
{
  VfUtilCheckKernelAddress(a1, *(unsigned __int16 *)(a1 + 8));
  if ( (*(_WORD *)(a1 + 10) & 0x11) == 1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  return ((__int64 (__fastcall *)(unsigned __int64))pXdvIoFreeMdl)(a1);
}

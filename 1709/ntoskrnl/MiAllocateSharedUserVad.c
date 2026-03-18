/*
 * XREFs of MiAllocateSharedUserVad @ 0x14045ECD0
 * Callers:
 *     MiComputeProcessUserVa @ 0x14045EAE8 (MiComputeProcessUserVa.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405EF52C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocateVad @ 0x14045ED28 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x1406DEDD8 (MiReturnProcessVads.c)
 */

_QWORD *MiAllocateSharedUserVad()
{
  void *Vad; // rbx
  _QWORD *result; // rax

  Vad = (void *)MiAllocateVad(2147352576LL, 2147356671LL, 1LL);
  if ( Vad )
  {
    result = (_QWORD *)MiAllocateVad(2147356672LL, 2147418111LL, 0LL);
    if ( result )
    {
      *result = Vad;
      return result;
    }
    MiReturnProcessVads(Vad);
  }
  return 0LL;
}

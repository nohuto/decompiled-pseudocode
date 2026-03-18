/*
 * XREFs of MiAllocateSharedUserVad @ 0x14049E740
 * Callers:
 *     MiComputeProcessUserVa @ 0x14049E434 (MiComputeProcessUserVa.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405D36C0 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocateVad @ 0x14049E798 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x1406B2E0C (MiReturnProcessVads.c)
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

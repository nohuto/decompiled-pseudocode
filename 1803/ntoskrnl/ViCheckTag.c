/*
 * XREFs of ViCheckTag @ 0x14081A80C
 * Callers:
 *     ViCheckAdapterBuffers @ 0x14081A530 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x14081A648 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x14081AED8 (ViFreeMapRegistersToFile.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

void __fastcall ViCheckTag(__int64 a1, size_t Size, int a3, char a4)
{
  ULONG_PTR v4; // rsi
  size_t v6; // rbx
  void *v9; // rbp
  const void *v10; // r12

  v4 = (unsigned int)Size;
  v6 = (unsigned int)Size;
  v9 = (void *)a1;
  v10 = (const void *)((unsigned int)Size + a1);
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_14039D0A8,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_14039D0A8);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_14039D098,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_14039D098);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}

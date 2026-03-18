/*
 * XREFs of ViCheckTag @ 0x1407AD69C
 * Callers:
 *     ViCheckAdapterBuffers @ 0x1407AD3C8 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x1407AD4E0 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x1407ADD6C (ViFreeMapRegistersToFile.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
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
        byte_140359A28,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_140359A28);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140359A2C,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_140359A2C);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}

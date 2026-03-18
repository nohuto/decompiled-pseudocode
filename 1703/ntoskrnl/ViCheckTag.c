/*
 * XREFs of ViCheckTag @ 0x14076B9D0
 * Callers:
 *     ViCheckAdapterBuffers @ 0x14076B6FC (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x14076B814 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x14076C0A0 (ViFreeMapRegistersToFile.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall ViCheckTag(__int64 a1, size_t Size, int a3, char a4)
{
  int v4; // esi
  size_t v6; // rbx
  void *v9; // rbp
  const void *v10; // r12

  v4 = Size;
  v6 = (unsigned int)Size;
  v9 = (void *)a1;
  v10 = (const void *)((unsigned int)Size + a1);
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140341398,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 15, 1, v4, a1, byte_140341398);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140341390,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 15, 2, v4, a1, byte_140341390);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}

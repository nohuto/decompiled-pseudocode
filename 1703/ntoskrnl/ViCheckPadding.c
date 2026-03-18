/*
 * XREFs of ViCheckPadding @ 0x14076B814
 * Callers:
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 *     ViSpecialFreeCommonBuffer @ 0x14076D104 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViCheckTag @ 0x14076B9D0 (ViCheckTag.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 *     ViHasBufferBeenTouched @ 0x14076C778 (ViHasBufferBeenTouched.c)
 */

void __fastcall ViCheckPadding(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  int v4; // ebp
  __int64 v6; // rax
  int v7; // ebx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  __int64 HasBufferBeenTouched; // r14
  __int64 v12; // rbx

  if ( a4 != a2 )
  {
    v4 = a3;
    if ( a4 )
    {
      v8 = a4 + a3;
      v9 = a1 + a2 - v8;
      v10 = a3 - a1;
      if ( a3 - a1 >= 8 )
        v10 -= 8LL;
      if ( v9 >= 8 )
      {
        v9 -= 8LL;
        v8 += 8LL;
      }
      ViCheckTag(a3, a4);
      HasBufferBeenTouched = ViHasBufferBeenTouched(a1, v10);
      if ( HasBufferBeenTouched )
      {
        ViHalPreprocessOptions(
          byte_140341388,
          "Padding before allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)4);
        VfReportIssueWithOptions(0xE6u, 15, 4, v4, HasBufferBeenTouched, byte_140341388);
      }
      v12 = ViHasBufferBeenTouched(v8, v9);
      if ( v12 )
      {
        ViHalPreprocessOptions(
          byte_14034138C,
          "Padding after allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)5);
        VfReportIssueWithOptions(0xE6u, 15, 5, v4, v12, byte_14034138C);
      }
    }
    else
    {
      v6 = ViHasBufferBeenTouched(a1, a2);
      v7 = v6;
      if ( v6 )
      {
        ViHalPreprocessOptions(
          &dword_140341394,
          "Verified driver or hardware has corrupted memory at %p.",
          (const void *)0x1000000F);
        VfReportIssueWithOptions(0xE6u, 15, 3, v7, 0LL, &dword_140341394);
      }
    }
  }
}

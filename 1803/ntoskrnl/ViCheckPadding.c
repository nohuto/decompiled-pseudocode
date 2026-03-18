/*
 * XREFs of ViCheckPadding @ 0x14081A648
 * Callers:
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 *     ViSpecialFreeCommonBuffer @ 0x14081BF34 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViCheckTag @ 0x14081A80C (ViCheckTag.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 *     ViHasBufferBeenTouched @ 0x14081B5A8 (ViHasBufferBeenTouched.c)
 */

void __fastcall ViCheckPadding(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 v5; // r8
  ULONG_PTR v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 HasBufferBeenTouched; // rbx
  __int64 v14; // rbx

  if ( a4 != a2 )
  {
    v5 = a2;
    if ( a4 )
    {
      v8 = a3 + a4 + 8;
      v9 = a3 - a1;
      v10 = a2 - (a3 + a4) + a1;
      v11 = v10 - 8;
      if ( v10 < 8 )
      {
        v11 = v5 - (a3 + a4) + a1;
        v8 = a3 + a4;
      }
      ViCheckTag(a3, a4);
      v12 = v9 - 8;
      if ( v9 < 8 )
        v12 = a3 - a1;
      HasBufferBeenTouched = ViHasBufferBeenTouched(a1, v12);
      if ( HasBufferBeenTouched )
      {
        ViHalPreprocessOptions(
          byte_14039D0A0,
          "Padding before allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)4);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 4uLL, a3, HasBufferBeenTouched, byte_14039D0A0);
      }
      v14 = ViHasBufferBeenTouched(v8, v11);
      if ( v14 )
      {
        ViHalPreprocessOptions(
          byte_14039D09C,
          "Padding after allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)5);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 5uLL, a3, v14, byte_14039D09C);
      }
    }
    else
    {
      v7 = ViHasBufferBeenTouched(a1, a2);
      if ( v7 )
      {
        ViHalPreprocessOptions(
          &dword_14039D094,
          "Verified driver or hardware has corrupted memory at %p.",
          (const void *)0x1000000F);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 3uLL, v7, 0LL, &dword_14039D094);
      }
    }
  }
}

/*
 * XREFs of ?CopyFromSurfaceToMem@@YAXPEAEIIAEBUtagRECT@@II0@Z @ 0x1801B1064
 * Callers:
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1801B10F0 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

void __fastcall CopyFromSurfaceToMem(
        unsigned __int8 *a1,
        int a2,
        int a3,
        const struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7)
{
  LONG i; // edi

  for ( i = a4->top; i < a4->bottom; ++i )
    memcpy_0(
      &a7[(unsigned int)(a2 * a4->left) + (unsigned __int64)(a5 * a2 * (a6 - i - 1))],
      &a1[(unsigned int)(a2 * a4->left) + (unsigned __int64)(unsigned int)(a3 * i)],
      (unsigned int)(a2 * (a4->right - a4->left)));
}

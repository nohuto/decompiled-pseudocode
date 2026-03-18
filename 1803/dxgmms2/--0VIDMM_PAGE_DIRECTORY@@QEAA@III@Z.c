/*
 * XREFs of ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C005D820
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00567D4 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 */

VIDMM_PAGE_DIRECTORY *__fastcall VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(
        VIDMM_PAGE_DIRECTORY *this,
        char a2,
        int a3,
        int a4)
{
  int v8; // edx
  int v9; // r9d
  int v10; // eax
  int v11; // r9d
  VIDMM_PAGE_DIRECTORY *result; // rax

  memset(this, 0, 0x28uLL);
  v8 = 0;
  v9 = 0;
  if ( a4 == a3 )
    v9 = 16;
  v10 = 0;
  if ( a4 == 1 )
    v10 = 32;
  v11 = a4 & 7 | v10 | v9;
  *(_DWORD *)this = v11;
  if ( a4 == a3 && a3 == 1 )
    v8 = 8;
  result = this;
  *(_DWORD *)this = v8 | v11 | ((a2 & 0x1F) << 7);
  return result;
}

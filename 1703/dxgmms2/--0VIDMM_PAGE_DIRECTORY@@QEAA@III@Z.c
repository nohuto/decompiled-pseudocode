/*
 * XREFs of ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C00551AC
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C006D4B0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

VIDMM_PAGE_DIRECTORY *__fastcall VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(
        VIDMM_PAGE_DIRECTORY *this,
        __int16 a2,
        int a3,
        int a4)
{
  int v8; // r10d
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // r9d
  int v12; // r9d

  memset(this, 0, 0x28uLL);
  v8 = 0;
  v9 = 0;
  if ( a4 == a3 )
    v9 = 16;
  v10 = 0;
  v11 = a4 & 7 | *(_DWORD *)this & 0xFFFFFFC8 | v9 & 0xFFFFFFDF;
  if ( a4 == 1 )
    v10 = 32;
  v12 = v10 | v11;
  *(_DWORD *)this = v12;
  if ( a4 == a3 && a3 == 1 )
    v8 = 8;
  *(_DWORD *)this = (v8 | v12 & 0xFFFFFFF7) ^ ((unsigned __int16)(a2 << 7) ^ (unsigned __int16)(v8 | v12)) & 0xF80;
  return this;
}

/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01D4930
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01D7080 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::DXGSWAPCHAIN(DXGSWAPCHAIN *this)
{
  char *v2; // rcx
  DXGSWAPCHAIN *result; // rax

  *((_DWORD *)this + 7) = 62;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 32;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  v2 = (char *)this + 64;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((PVOID *)v2, 0, 0);
  *((_QWORD *)this + 22) = 1LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 16;
  *((_QWORD *)this + 26) = 0LL;
  memset((char *)this + 80, 0, 0x60uLL);
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 42) = -1;
  *((_DWORD *)this + 30) = -1;
  result = this;
  *((_DWORD *)this + 27) = 1;
  return result;
}

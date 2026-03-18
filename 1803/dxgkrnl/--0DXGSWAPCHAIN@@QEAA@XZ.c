/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01DD570
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01E0B00 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
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
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  v2 = (char *)this + 72;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((const void **)v2, 0, 0);
  *((_QWORD *)this + 23) = 1LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 16;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  memset((char *)this + 88, 0, 0x60uLL);
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 44) = -1;
  *((_DWORD *)this + 32) = -1;
  result = this;
  *((_DWORD *)this + 29) = 1;
  return result;
}

/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01BC2F0
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01BE8F0 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
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
  v2 = (char *)this + 56;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((PVOID *)v2, 0, 0);
  *((_QWORD *)this + 23) = 1LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  memset((char *)this + 72, 0, 0x38uLL);
  memset((char *)this + 128, 0, 0x38uLL);
  result = this;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 28) = 1;
  return result;
}

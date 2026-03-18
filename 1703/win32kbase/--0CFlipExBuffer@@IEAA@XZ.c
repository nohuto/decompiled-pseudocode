/*
 * XREFs of ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0012658
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C000E7C4 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C0012808 (--0CCompositionBuffer@@IEAA@XZ.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::CFlipExBuffer(CFlipExBuffer *this)
{
  CCompositionBuffer::CCompositionBuffer(this);
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  *((_DWORD *)this + 86) = -1;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 87) = 0;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 0;
  *(_QWORD *)((char *)this + 500) = 0LL;
  *((_DWORD *)this + 16) = 0;
  return this;
}

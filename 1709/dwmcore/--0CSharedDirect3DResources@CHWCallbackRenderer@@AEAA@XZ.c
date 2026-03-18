/*
 * XREFs of ??0CSharedDirect3DResources@CHWCallbackRenderer@@AEAA@XZ @ 0x1800B81DC
 * Callers:
 *     ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800B7F40 (-Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

CHWCallbackRenderer::CSharedDirect3DResources *__fastcall CHWCallbackRenderer::CSharedDirect3DResources::CSharedDirect3DResources(
        CHWCallbackRenderer::CSharedDirect3DResources *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CHWCallbackRenderer::CSharedDirect3DResources::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 2;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = -1;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  memset_0((char *)this + 128, 0, 0x70uLL);
  *((_BYTE *)this + 240) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_BYTE *)this + 264) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_BYTE *)this + 296) = 0;
  memset_0((char *)this + 304, 0, 0x110uLL);
  *((_QWORD *)this + 72) = 0LL;
  *((_BYTE *)this + 584) = 0;
  memset_0((char *)this + 592, 0, 0xD0uLL);
  *((_QWORD *)this + 100) = 0LL;
  *((_BYTE *)this + 808) = 0;
  memset_0((char *)this + 816, 0, 0x110uLL);
  return this;
}

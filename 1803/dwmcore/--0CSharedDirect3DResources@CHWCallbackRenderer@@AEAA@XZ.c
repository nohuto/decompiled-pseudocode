/*
 * XREFs of ??0CSharedDirect3DResources@CHWCallbackRenderer@@AEAA@XZ @ 0x1800BF7FC
 * Callers:
 *     ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800BF768 (-Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
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
  memset_0((char *)this + 128, 0, 0x80uLL);
  *((_BYTE *)this + 256) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_BYTE *)this + 280) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_BYTE *)this + 312) = 0;
  memset_0((char *)this + 320, 0, 0x110uLL);
  *((_QWORD *)this + 74) = 0LL;
  *((_BYTE *)this + 600) = 0;
  memset_0((char *)this + 608, 0, 0xF0uLL);
  *((_QWORD *)this + 106) = 0LL;
  *((_BYTE *)this + 856) = 0;
  memset_0((char *)this + 864, 0, 0x110uLL);
  *((_QWORD *)this + 142) = 0LL;
  *((_BYTE *)this + 1144) = 0;
  memset_0((char *)this + 1152, 0, 0x20uLL);
  return this;
}

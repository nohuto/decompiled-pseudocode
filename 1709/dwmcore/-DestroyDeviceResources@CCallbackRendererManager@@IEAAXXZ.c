/*
 * XREFs of ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800462D0
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800455D4 (--1CD2DContext@@UEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DestroyDeviceResources@CSharedDirect3DResources@CHWCallbackRenderer@@QEAAXXZ @ 0x1800B82F0 (-DestroyDeviceResources@CSharedDirect3DResources@CHWCallbackRenderer@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801A94D8 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 */

void __fastcall CCallbackRendererManager::DestroyDeviceResources(CCallbackRendererManager *this)
{
  CHWCallbackRenderer::CSharedDirect3DResources *v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rdi

  v2 = (CHWCallbackRenderer::CSharedDirect3DResources *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    CHWCallbackRenderer::CSharedDirect3DResources::DestroyDeviceResources(v2);
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease((char *)this + 96);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    ReleaseInterface<CWARPCallbackRenderer>(*((_QWORD *)this + 4) + 8 * i);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 32, 8LL);
  v4 = 0LL;
  for ( *((_DWORD *)this + 29) = *((_DWORD *)this + 14);
        (unsigned int)v4 < *((_DWORD *)this + 22);
        v4 = (unsigned int)(v4 + 1) )
  {
    ReleaseInterface<CWARPCallbackRenderer>(*((_QWORD *)this + 8) + 8 * v4);
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 8LL);
  *((_DWORD *)this + 31) = *((_DWORD *)this + 22);
}

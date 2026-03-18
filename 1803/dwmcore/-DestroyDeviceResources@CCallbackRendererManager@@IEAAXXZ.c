/*
 * XREFs of ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800D9358
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D8378 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800D84E8 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C3D28 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     ?DestroyDeviceResources@CSharedDirect3DResources@CHWCallbackRenderer@@QEAAXXZ @ 0x1800D9480 (-DestroyDeviceResources@CSharedDirect3DResources@CHWCallbackRenderer@@QEAAXXZ.c)
 */

void __fastcall CCallbackRendererManager::DestroyDeviceResources(CCallbackRendererManager *this)
{
  CHWCallbackRenderer::CSharedDirect3DResources *v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rdi
  CMILRefCountBase *v5; // rcx

  v2 = (CHWCallbackRenderer::CSharedDirect3DResources *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    CHWCallbackRenderer::CSharedDirect3DResources::DestroyDeviceResources(v2);
    v5 = (CMILRefCountBase *)*((_QWORD *)this + 12);
    if ( v5 )
    {
      *((_QWORD *)this + 12) = 0LL;
      CMILRefCountBase::Release(v5);
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    ReleaseInterface<CWARPCallbackRenderer>((__int64 *)(*((_QWORD *)this + 4) + 8 * i));
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 8u);
  v4 = 0LL;
  for ( *((_DWORD *)this + 29) = *((_DWORD *)this + 14);
        (unsigned int)v4 < *((_DWORD *)this + 22);
        v4 = (unsigned int)(v4 + 1) )
  {
    ReleaseInterface<CWARPCallbackRenderer>((__int64 *)(*((_QWORD *)this + 8) + 8 * v4));
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 8u);
  *((_DWORD *)this + 31) = *((_DWORD *)this + 22);
}

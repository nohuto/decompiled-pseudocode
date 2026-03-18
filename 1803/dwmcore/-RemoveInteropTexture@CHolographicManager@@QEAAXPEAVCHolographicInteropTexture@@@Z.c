/*
 * XREFs of ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801F918C
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801FAD40 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014A414 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     ?DwmHolographicInteropTextureRemove_@CompositorTracing@@QEAAXI@Z @ 0x1801F84A8 (-DwmHolographicInteropTextureRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?UnregisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXI@Z @ 0x1801FCEE8 (-UnregisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveInteropTexture(
        CHolographicManager *this,
        struct CHolographicInteropTexture *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 i; // r9
  __int64 v7; // rcx
  CHolographicInteropTaskQueue *v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // edi
  CStereoscopicContentManager *StereoscopicContentManager; // rax
  int v12; // edi
  __int64 v13; // rcx
  CompositorTracing *v14; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v4 = *((_DWORD *)this + 36);
  v5 = 0LL;
  for ( i = *((_QWORD *)this + 15); (unsigned int)v5 < v4; v5 = (unsigned int)(v5 + 1) )
  {
    if ( a2 == *(struct CHolographicInteropTexture **)(i + 8 * v5) )
      break;
  }
  if ( (unsigned int)v5 < v4 )
  {
    for ( ; (unsigned int)v5 < v4 - 1; v4 = *((_DWORD *)this + 36) )
    {
      v7 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      *(_QWORD *)(i + 8 * v7) = *(_QWORD *)(i + 8LL * (unsigned int)v5);
    }
    *((_DWORD *)this + 36) = v4 - 1;
    v8 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
    if ( v8 && *((_BYTE *)this + 224) )
      CHolographicInteropTaskQueue::PostMessageW(
        v8,
        3u,
        (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 2)) )
    {
      v10 = *((_DWORD *)a2 + 30);
      StereoscopicContentManager = CComposition::GetStereoscopicContentManager(*((CComposition **)this + 2));
      CStereoscopicContentManager::UnregisterStereoscopicContentConsumer(StereoscopicContentManager, v10);
    }
    v12 = *((_DWORD *)a2 + 30);
    if ( CompositorTracing::IsEnabled(v9) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v13,
        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicInteropTextureRemove_(v14, v12);
    }
    CMILCOMBase::InternalRelease(a2);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this + 10);
}

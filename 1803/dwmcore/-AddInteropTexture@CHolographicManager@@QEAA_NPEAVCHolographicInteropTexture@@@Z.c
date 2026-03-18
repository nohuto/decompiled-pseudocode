/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801F7F90
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1801FB6CC (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014A414 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x1801F83F4 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801F89D8 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801FCD40 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddInteropTexture(
        CHolographicManager *this,
        struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  bool v4; // bp
  struct CHolographicInteropTexture *InteropTextureByBindId; // rdi
  bool v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  CHolographicInteropTaskQueue *v10; // rcx
  struct IUnknown *v11; // r8
  __int64 v12; // rcx
  CStereoscopicContentManager *StereoscopicContentManager; // rax
  unsigned int v14; // edi
  __int64 v15; // rcx
  CompositorTracing *v16; // rcx
  CMILCOMBase *v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = a2;
  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  v4 = 0;
  AcquireSRWLockShared((PSRWLOCK)this + 10);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(this, *((_DWORD *)v18 + 30));
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    v6 = 0;
    AcquireSRWLockExclusive(v2);
    CMILCOMBase::InternalAddRef(v18);
    v7 = *((_DWORD *)this + 36);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7 + 1 < v7 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)this + 35) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 120, 8u, 1, &v18);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v7) = v18;
      *((_DWORD *)this + 36) = v8;
    }
    v10 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
    if ( v10 && *((_BYTE *)this + 224) )
    {
      if ( v18 )
        v11 = (struct IUnknown *)((char *)v18 + 64);
      else
        v11 = 0LL;
      v4 = CHolographicInteropTaskQueue::PostMessageW(v10, 2u, v11, 0LL, 0LL, 0LL, 0LL);
    }
    if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 2)) )
    {
      StereoscopicContentManager = CComposition::GetStereoscopicContentManager(*((CComposition **)this + 2));
      CStereoscopicContentManager::RegisterStereoscopicContentConsumer(StereoscopicContentManager, v18);
      v6 = 1;
    }
    v14 = *((_DWORD *)v18 + 30);
    if ( CompositorTracing::IsEnabled(v12) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v15,
        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicInteropTextureAdd_(v16, v14, v6);
    }
    ReleaseSRWLockExclusive(v2);
  }
  return v4;
}

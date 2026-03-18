/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800AE630
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18003A580 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078E6C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800AE5D4 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18004BE4C (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800ABDB0 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800AC6E4 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C9990 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DContext *this)
{
  CD2DResourceManager *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int i; // edi
  __int64 v14; // r14
  __int64 v15; // rcx

  SAFE_DELETE<CD2DTarget>((char *)this + 432);
  v2 = (CD2DResourceManager *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v2);
    v3 = (void *)*((_QWORD *)this + 18);
    if ( v3 )
    {
      WPF::ProcessHeapImpl::Free(v3);
      *((_QWORD *)this + 18) = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable(this);
  v4 = *((_QWORD *)this + 39);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 39) = 0LL;
  }
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)this + 40) = 0LL;
  }
  v6 = *((_QWORD *)this + 41);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 41) = 0LL;
  }
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 24) = 0LL;
  }
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 23) = 0LL;
  }
  v9 = *((_QWORD *)this + 22);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 22) = 0LL;
  }
  v10 = *((_QWORD *)this + 20);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 20) = 0LL;
  }
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 21) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 76); ++i )
  {
    v14 = *((_QWORD *)this + 35);
    v15 = *(_QWORD *)(v14 + 8LL * i);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      *(_QWORD *)(v14 + 8LL * i) = 0LL;
    }
  }
  *((_DWORD *)this + 76) = 0;
  CCallbackRendererManager::DestroyDeviceResources((CD2DContext *)((char *)this + 8));
  return 0LL;
}

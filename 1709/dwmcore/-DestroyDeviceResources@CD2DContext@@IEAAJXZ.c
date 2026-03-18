/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800455D4 (--1CD2DContext@@UEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x180043E9C (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800462D0 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C00F4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1801AAECC (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DContext *this)
{
  __int64 v2; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int i; // edi
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx

  SAFE_DELETE<CD2DTarget>((char *)this + 416);
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    while ( *(_QWORD *)v2 != v2 )
    {
      v13 = *(_QWORD **)(v2 + 8);
      if ( *v13 != v2 || (v14 = (_QWORD *)v13[1], (_QWORD *)*v14 != v13) )
        __fastfail(3u);
      *(_QWORD *)(v2 + 8) = v14;
      *v14 = v2;
      *((_BYTE *)v13 - 8) = 0;
      if ( *((_BYTE *)v13 - 7) )
        --*(_DWORD *)(v2 + 16);
      CD2DResource::MarkInvalid((CD2DResource *)(v13 - 5));
    }
    v3 = (void *)*((_QWORD *)this + 18);
    if ( v3 )
    {
      WPF::ProcessHeapImpl::Free(v3);
      *((_QWORD *)this + 18) = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable(this);
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 36) = 0LL;
  }
  v5 = *((_QWORD *)this + 37);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)this + 37) = 0LL;
  }
  v6 = *((_QWORD *)this + 38);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 38) = 0LL;
  }
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 22) = 0LL;
  }
  v9 = *((_QWORD *)this + 20);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 20) = 0LL;
  }
  v10 = *((_QWORD *)this + 21);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 21) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 70); ++i )
  {
    v15 = *((_QWORD *)this + 32);
    v16 = *(_QWORD *)(v15 + 8LL * i);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *(_QWORD *)(v15 + 8LL * i) = 0LL;
    }
  }
  *((_DWORD *)this + 70) = 0;
  CCallbackRendererManager::DestroyDeviceResources((CD2DContext *)((char *)this + 8));
  return 0LL;
}

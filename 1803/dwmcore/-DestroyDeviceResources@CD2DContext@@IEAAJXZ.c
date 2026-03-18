/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D8378
 * Callers:
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800D84E8 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C87FC (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800D82DC (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800D9358 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1801E4CDC (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DTarget **this)
{
  CD2DTarget *v2; // rdi
  CD2DTarget *v3; // rcx
  CD2DTarget *v4; // rcx
  CD2DTarget *v5; // rcx
  CD2DTarget *v6; // rcx
  CD2DTarget *v7; // rcx
  CD2DTarget *v8; // rcx
  CD2DTarget *v9; // rcx
  CD2DTarget *v10; // rcx
  unsigned int i; // edi
  CD2DTarget *v13; // rax
  CD2DTarget **v14; // rcx
  CD2DTarget *v15; // r14
  __int64 v16; // rcx

  SAFE_DELETE<CD2DTarget>(this + 52);
  v2 = this[18];
  if ( v2 )
  {
    while ( *(CD2DTarget **)v2 != v2 )
    {
      v13 = (CD2DTarget *)*((_QWORD *)v2 + 1);
      if ( *(CD2DTarget **)v13 != v2 || (v14 = (CD2DTarget **)*((_QWORD *)v13 + 1), *v14 != v13) )
        __fastfail(3u);
      *((_QWORD *)v2 + 1) = v14;
      *v14 = v2;
      *((_BYTE *)v13 - 8) = 0;
      if ( *((_BYTE *)v13 - 7) )
        --*((_DWORD *)v2 + 4);
      CD2DResource::MarkInvalid((CD2DTarget *)((char *)v13 - 40));
    }
    v3 = this[18];
    if ( v3 )
    {
      operator delete(v3, 0x20uLL);
      this[18] = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable((CD2DContext *)this);
  v4 = this[36];
  if ( v4 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v4 + 8LL))(v4);
    this[36] = 0LL;
  }
  v5 = this[37];
  if ( v5 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v5 + 8LL))(v5);
    this[37] = 0LL;
  }
  v6 = this[38];
  if ( v6 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v6 + 16LL))(v6);
    this[38] = 0LL;
  }
  v7 = this[23];
  if ( v7 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v7 + 16LL))(v7);
    this[23] = 0LL;
  }
  v8 = this[22];
  if ( v8 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v8 + 16LL))(v8);
    this[22] = 0LL;
  }
  v9 = this[20];
  if ( v9 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v9 + 16LL))(v9);
    this[20] = 0LL;
  }
  v10 = this[21];
  if ( v10 )
  {
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v10 + 16LL))(v10);
    this[21] = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 70); ++i )
  {
    v15 = this[32];
    v16 = *((_QWORD *)v15 + i);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)v15 + i) = 0LL;
    }
  }
  *((_DWORD *)this + 70) = 0;
  CCallbackRendererManager::DestroyDeviceResources((CCallbackRendererManager *)(this + 1));
  return 0LL;
}

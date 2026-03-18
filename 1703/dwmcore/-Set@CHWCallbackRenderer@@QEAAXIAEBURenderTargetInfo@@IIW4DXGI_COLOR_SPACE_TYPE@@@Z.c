/*
 * XREFs of ?Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008DF3C
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800ADB70 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::Set(
        CHWCallbackRenderer *this,
        int a2,
        const struct RenderTargetInfo *a3,
        int a4,
        signed int a5,
        enum DXGI_COLOR_SPACE_TYPE a6)
{
  char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  CMILPoolResource *v11; // rcx
  CMILPoolResource *v12; // rcx

  *((_DWORD *)this + 19) = a2;
  v7 = (char *)this + 128;
  *((_OWORD *)this + 5) = *(_OWORD *)a3;
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 25) = a6;
  *((_DWORD *)this + 34) = -1082130432;
  *((_DWORD *)this + 35) = 1065353216;
  *((float *)this + 32) = 2.0 / (float)a4;
  *((float *)this + 33) = -2.0 / (float)a5;
  v8 = *((_QWORD *)this + 8);
  v9 = v8 + 16;
  v10 = -v8;
  if ( (v9 & -(__int64)(v10 != 0)) != 0 )
  {
    *((_OWORD *)v7 + 2) = *(_OWORD *)(v9 & -(__int64)(v10 != 0));
    *((_OWORD *)v7 + 3) = *(_OWORD *)((v9 & -(__int64)(v10 != 0)) + 0x10);
    *((_OWORD *)v7 + 4) = *(_OWORD *)((v9 & -(__int64)(v10 != 0)) + 0x20);
    *((_OWORD *)v7 + 5) = *(_OWORD *)((v9 & -(__int64)(v10 != 0)) + 0x30);
    *((_OWORD *)v7 + 6) = *(_OWORD *)((v9 & -(__int64)(v10 != 0)) + 0x40);
    v7[120] = 1;
  }
  else
  {
    v7[120] = 0;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 3)
                                                                                               + 648LL)
                                                                                 + 384LL))(
    *(_QWORD *)(*((_QWORD *)this + 3) + 648LL),
    *((_QWORD *)v7 + 14),
    0LL,
    0LL,
    v7,
    0,
    0);
  if ( !*((_QWORD *)this + 4) )
  {
    v11 = (CMILPoolResource *)*((_QWORD *)this + 5);
    if ( v11 )
    {
      CMILPoolResource::Release(v11);
      *((_QWORD *)this + 5) = 0LL;
    }
    v12 = (CMILPoolResource *)*((_QWORD *)this + 6);
    if ( v12 )
    {
      CMILPoolResource::Release(v12);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}

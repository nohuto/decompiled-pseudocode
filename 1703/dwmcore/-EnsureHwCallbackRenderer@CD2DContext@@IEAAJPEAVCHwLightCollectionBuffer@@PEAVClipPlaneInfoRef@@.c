/*
 * XREFs of ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801307D4
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801307D4 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800ABE38 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetLightingCollection@CHWCallbackRenderer@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1801306C4 (-SetLightingCollection@CHWCallbackRenderer@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801307D4 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 */

__int64 __fastcall CD2DContext::EnsureHwCallbackRenderer(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  struct CHWCallbackRenderer **v3; // rbp
  unsigned int v4; // edi
  __int64 v5; // rax
  struct CD3DDeviceLevel1 *v8; // rax
  unsigned int v9; // r9d
  int NextHWCallbackRenderer; // eax
  int v11; // eax

  v3 = (struct CHWCallbackRenderer **)((char *)this + 464);
  v4 = 0;
  v5 = *((_QWORD *)this + 58);
  if ( v5 )
  {
    if ( *(struct CHwLightCollectionBuffer **)(v5 + 32) != a2 || *(struct ClipPlaneInfoRef **)(v5 + 64) != a3 )
    {
      CD2DContext::FlushDrawList(this);
      CD2DContext::EnsureHwCallbackRenderer(this, a2, a3);
    }
  }
  else
  {
    v8 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 176LL))(this);
    NextHWCallbackRenderer = CCallbackRendererManager::GetNextHWCallbackRenderer(
                               (struct CD3DDynamicAppendBuffer **)this + 1,
                               v8,
                               v3,
                               v9);
    v4 = NextHWCallbackRenderer;
    if ( NextHWCallbackRenderer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NextHWCallbackRenderer, 0x361u);
    }
    else
    {
      v11 = CHWCallbackRenderer::SetLightingCollection(*v3, a2);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x362u);
      }
      else
      {
        *((_QWORD *)*v3 + 8) = a3;
        if ( a3 )
          (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))a3)(a3);
      }
    }
  }
  return v4;
}

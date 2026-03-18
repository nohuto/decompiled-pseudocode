/*
 * XREFs of ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004413C
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004413C (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004413C (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x180046348 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::EnsureHwCallbackRenderer(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  struct CD3DDeviceLevel1 *v8; // rax
  int NextHWCallbackRenderer; // eax
  struct CHWCallbackRenderer *v10; // rsi
  __int64 v11; // rcx
  struct CHWCallbackRenderer *v12; // rdi
  __int64 v14; // rcx
  int v15; // eax
  struct CHWCallbackRenderer **v16; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v16 = (struct CHWCallbackRenderer **)((char *)this + 448);
  v5 = *((_QWORD *)this + 56);
  if ( v5 )
  {
    if ( *(struct CHwLightCollectionBuffer **)(v5 + 32) != a2 || *(struct ClipPlaneInfoRef **)(v5 + 40) != a3 )
    {
      CD2DContext::FlushDrawList(this);
      v15 = CD2DContext::EnsureHwCallbackRenderer(this, a2, a3);
      v3 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2A7u);
    }
  }
  else
  {
    v8 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 152LL))(this);
    NextHWCallbackRenderer = CCallbackRendererManager::GetNextHWCallbackRenderer(
                               (CD2DContext *)((char *)this + 8),
                               v8,
                               v16);
    v3 = NextHWCallbackRenderer;
    if ( NextHWCallbackRenderer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NextHWCallbackRenderer, 0x299u);
    }
    else
    {
      v10 = *v16;
      if ( *((struct CHwLightCollectionBuffer **)*v16 + 4) != a2 )
      {
        if ( a2 )
          (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))a2)(a2);
        v11 = *((_QWORD *)v10 + 4);
        *((_QWORD *)v10 + 4) = a2;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v12 = *v16;
      if ( *((struct ClipPlaneInfoRef **)*v16 + 5) != a3 )
      {
        if ( a3 )
          (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))a3)(a3);
        v14 = *((_QWORD *)v12 + 5);
        *((_QWORD *)v12 + 5) = a3;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  return v3;
}

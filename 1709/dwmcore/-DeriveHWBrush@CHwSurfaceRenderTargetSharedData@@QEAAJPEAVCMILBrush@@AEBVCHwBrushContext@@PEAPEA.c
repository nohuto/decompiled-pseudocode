/*
 * XREFs of ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18007BD14
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x18008F1CC (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801B725C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18007BFC0 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x18007C070 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180085B4C (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
        CHwSurfaceRenderTargetSharedData *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **a4)
{
  unsigned int v5; // edi
  const struct CHwBrushContext *v7; // rbx
  signed int HwBrush; // eax
  char *v11; // rbp
  unsigned int v12; // edx
  signed int Resource; // eax
  int v14; // esi
  struct IMILCacheableResource *v15; // rbx
  struct IMILCacheableResource *v16; // [rsp+78h] [rbp+10h] BYREF
  const struct CHwBrushContext *v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v5 = 0;
  *a4 = 0LL;
  v7 = a3;
  if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 24LL))(a2) == 2 )
  {
    v11 = (char *)a2 - 24;
    if ( *(_DWORD *)this != -1 )
    {
      v12 = *(_DWORD *)this;
      v16 = 0LL;
      Resource = CMILResourceCache::GetResource((CMILResourceCache *)(v11 + 48), v12, &v16);
      v14 = Resource;
      if ( Resource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Resource, 0x83u);
      }
      else
      {
        v15 = v16;
        if ( v16 )
        {
          v14 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *, unsigned __int64, const struct CHwBrushContext *))(*(_QWORD *)v16 + 40LL))(
                  v16,
                  (unsigned __int64)a2 & -(__int64)(a2 != (struct CMILBrush *)24),
                  v17);
          if ( v14 >= 0 )
          {
            *a4 = (struct IMILCacheableResource *)((char *)v15 + 32);
          }
          else
          {
            CMILResourceCache::SetResource((CMILResourceCache *)(v11 + 48), *(_DWORD *)this, 0LL);
            (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
        v7 = v17;
      }
      if ( v14 < 0 )
        goto LABEL_3;
    }
  }
  if ( !*a4 )
  {
LABEL_3:
    HwBrush = CHwBrushPool::GetHwBrush((CHwSurfaceRenderTargetSharedData *)((char *)this + 8), a2, v7, a4);
    v5 = HwBrush;
    if ( HwBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, HwBrush, 0xD3u);
  }
  return v5;
}

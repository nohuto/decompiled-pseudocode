/*
 * XREFs of ?GetCachedBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x1801E9D38
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x1801E9CB0 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 * Callees:
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18001DD10 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x18001DDC0 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTargetSharedData::GetCachedBrush(
        CHwSurfaceRenderTargetSharedData *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **a4)
{
  int v5; // edi
  char *v9; // rsi
  unsigned int v10; // edx
  int Resource; // eax
  struct IMILCacheableResource *v12; // rbx
  struct IMILCacheableResource *v14; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  *a4 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 24LL))(a2) == 2 )
  {
    v9 = (char *)a2 - 24;
    if ( *(_DWORD *)this != -1 )
    {
      v10 = *(_DWORD *)this;
      v14 = 0LL;
      Resource = CMILResourceCache::GetResource((CMILResourceCache *)(v9 + 48), v10, (void ****)&v14);
      v5 = Resource;
      if ( Resource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Resource, 0x83u);
      }
      else
      {
        v12 = v14;
        if ( v14 )
        {
          v5 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *, unsigned __int64, const struct CHwBrushContext *))(*(_QWORD *)v14 + 40LL))(
                 v14,
                 (unsigned __int64)(v9 + 24) & -(__int64)(v9 != 0LL),
                 a3);
          if ( v5 >= 0 )
          {
            *a4 = (struct IMILCacheableResource *)((char *)v12 + 32);
          }
          else
          {
            CMILResourceCache::SetResource((CMILResourceCache *)(v9 + 48), *(_DWORD *)this, 0LL);
            (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v12 + 8LL))(v12);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}

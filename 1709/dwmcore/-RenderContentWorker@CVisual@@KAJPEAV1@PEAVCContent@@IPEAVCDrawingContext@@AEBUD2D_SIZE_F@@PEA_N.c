/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180177CF4
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180022550 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800844E4 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800B2960 (-GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x18011AD50 (-IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        CVisual *this,
        __int64 a2,
        int a3,
        struct IRenderTarget **a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct CDrawListCache *v8; // rbx
  __int64 v12; // rdx
  __int64 v13; // r9
  signed int v14; // ebx
  struct _LIST_ENTRY *TreeData; // rax
  signed int Cache; // eax
  signed int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  struct CDrawListCache *v20[3]; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0LL;
  v20[0] = 0LL;
  if ( CDrawingContext::IsBounding((CDrawingContext *)a4)
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 208LL))(a2, v13) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64))(*(_QWORD *)a2 + 160LL))(
            a2,
            a4,
            a5,
            a6,
            a7);
    v14 = v17;
    if ( v17 < 0 )
    {
      v19 = 3610;
      goto LABEL_17;
    }
    if ( !CDrawingContext::IsBounding((CDrawingContext *)a4) )
      ++dword_18026EE34;
LABEL_15:
    v14 = 0;
    goto LABEL_18;
  }
  if ( CDrawingContext::IsDrawListCachingDisabled((CDrawingContext *)a4) )
  {
LABEL_10:
    v17 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64, struct CDrawListCache *))(*(_QWORD *)a2 + 232LL))(
            a2,
            a4,
            a5,
            a6,
            a7,
            v8);
    v14 = v17;
    if ( v17 < 0 )
    {
      v19 = 3606;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, v17, v19);
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)v20);
  v14 = -2003292412;
  TreeData = CVisual::FindTreeData(this, a4[816]);
  if ( TreeData )
  {
    Cache = CDrawListCacheSet::GetCache((char **)&TreeData[8], a3, a4[45], v20);
    v14 = Cache;
    if ( Cache < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Cache, 0x5FDu);
  }
  if ( v14 >= 0 )
  {
    v8 = v20[0];
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024F8, 1u, v14, 0xE0Eu);
LABEL_18:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)v20);
  return (unsigned int)v14;
}

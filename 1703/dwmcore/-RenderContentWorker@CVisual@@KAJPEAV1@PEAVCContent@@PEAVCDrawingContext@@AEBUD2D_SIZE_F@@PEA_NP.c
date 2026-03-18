/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160ED8
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C920 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCDrawListCache@@@@YAXPEAVCDrawListCache@@@Z @ 0x18004F7FC (--$ReleaseInterfaceNoNULL@VCDrawListCache@@@@YAXPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x1800A1E78 (-IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDrawListCache@CTreeData@@IEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180134698 (-EnsureDrawListCache@CTreeData@@IEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        CVisual *this,
        struct CContent *a2,
        const struct IRenderTarget **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct CDrawListCache *v7; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ebx
  struct _LIST_ENTRY *TreeData; // rax
  int v15; // eax
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-48h]
  struct CDrawListCache *v19; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  v19 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding((CDrawingContext *)a3)
    || !(*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)v11 + 192LL))(a2, v12) )
  {
    v16 = (*(__int64 (__fastcall **)(struct CContent *, const struct IRenderTarget **, __int64, __int64, __int64))(*(_QWORD *)a2 + 144LL))(
            a2,
            a3,
            a4,
            a5,
            a6);
    v13 = v16;
    if ( v16 < 0 )
    {
      v18 = 3562;
      goto LABEL_15;
    }
LABEL_13:
    v13 = 0;
    goto LABEL_16;
  }
  if ( (unsigned __int8)CDrawingContext::IsDrawListCachingDisabled((CDrawingContext *)a3) )
    goto LABEL_10;
  v13 = -2003292412;
  TreeData = CVisual::FindTreeData(this, a3[808]);
  if ( TreeData )
  {
    v15 = CTreeData::EnsureDrawListCache((CTreeData *)TreeData, a2, a3[46], &v19);
    v13 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x5D2u);
    v7 = v19;
  }
  if ( v13 >= 0 )
  {
LABEL_10:
    v16 = (*(__int64 (__fastcall **)(struct CContent *, const struct IRenderTarget **, __int64, __int64, __int64, struct CDrawListCache *))(*(_QWORD *)a2 + 216LL))(
            a2,
            a3,
            a4,
            a5,
            a6,
            v7);
    v13 = v16;
    if ( v16 < 0 )
    {
      v18 = 3554;
LABEL_15:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v18);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xDDAu);
LABEL_16:
  ReleaseInterfaceNoNULL<CDrawListCache>(v7);
  return (unsigned int)v13;
}

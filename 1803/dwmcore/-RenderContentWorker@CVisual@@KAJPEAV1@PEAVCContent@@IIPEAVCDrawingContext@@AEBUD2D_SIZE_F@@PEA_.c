/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A88B4
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009DD60 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z @ 0x1801A8B0C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180040CE0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        CVisual *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct IRenderTarget **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  CMILRefCountBase *v12; // rbx
  int v13; // edi
  struct _LIST_ENTRY *TreeData; // rax
  int Cache; // eax
  int v16; // eax
  int v17; // eax
  struct CDrawListCache *v19; // [rsp+40h] [rbp-28h] BYREF

  if ( dword_1802D6BA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802D6BA0);
    if ( dword_1802D6BA0 == -1 )
    {
      dword_1802D485C = -2147022876;
      Init_thread_footer(&dword_1802D6BA0);
    }
  }
  if ( CDrawingContext::IsBounding((CDrawingContext *)a5)
    || !(*(unsigned __int8 (__fastcall **)(__int64, struct IRenderTarget **))(*(_QWORD *)a2 + 208LL))(a2, a5) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64))(*(_QWORD *)a2 + 160LL))(
            a2,
            a5,
            a6,
            a7,
            a8);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4858, 2u, v17, 0xF33u);
      return (unsigned int)v13;
    }
    if ( !CDrawingContext::IsBounding((CDrawingContext *)a5) )
      ++dword_1802D6374;
    return 0;
  }
  v12 = 0LL;
  v19 = 0LL;
  if ( !CCommonRegistryData::m_fDisableDrawListCaching && *((_BYTE *)a5 + 6830) )
  {
    v13 = -2003292412;
    TreeData = CVisual::FindTreeData(this, a5[816]);
    if ( TreeData )
    {
      Cache = CDrawListCacheSet::GetCache((char **)&TreeData[8], a3, a4, a5[45], &v19);
      v13 = Cache;
      if ( Cache < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Cache, 0x66Fu);
      v12 = v19;
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4858, 2u, v13, 0xF27u);
      goto LABEL_14;
    }
  }
  v16 = (*(__int64 (__fastcall **)(__int64, struct IRenderTarget **, __int64, __int64, __int64, CMILRefCountBase *))(*(_QWORD *)a2 + 232LL))(
          a2,
          a5,
          a6,
          a7,
          a8,
          v12);
  v13 = v16;
  if ( v16 >= 0 )
  {
    if ( v12 )
      CMILRefCountBase::Release(v12);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4858, 2u, v16, 0xF2Fu);
LABEL_14:
  if ( v12 )
    CMILRefCountBase::Release(v12);
  return (unsigned int)v13;
}

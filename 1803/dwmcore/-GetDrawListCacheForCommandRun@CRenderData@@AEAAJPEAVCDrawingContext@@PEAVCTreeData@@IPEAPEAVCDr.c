/*
 * XREFs of ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180056EE4
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180040CE0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18009AF60 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18009BE3C (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::GetDrawListCacheForCommandRun(
        CRenderData *this,
        struct IRenderTarget **a2,
        char **a3,
        unsigned int a4,
        struct CDrawListCache **a5)
{
  int Cache; // edi
  __int64 v8; // rcx
  struct CDrawingContext *v9; // r8
  struct CDrawListCache *v10; // rbx
  bool (__fastcall *v11)(CContent *__hidden, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *, const struct CMILMatrix *); // rax
  bool IsDrawListCacheDirty; // al
  unsigned int v14; // eax
  struct CDrawListCache *v15; // [rsp+30h] [rbp-18h] BYREF
  struct D2D_SIZE_F v16; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)a2 + 6830) )
  {
    Cache = CDrawListCache::Create(&v15);
    if ( Cache >= 0 )
    {
      v10 = v15;
LABEL_8:
      *a5 = v10;
      return (unsigned int)Cache;
    }
    v14 = 439;
  }
  else
  {
    Cache = CDrawListCacheSet::GetCache(a3 + 16, 3u, a4, a2[45], &v15);
    if ( Cache >= 0 )
    {
      v8 = *(_QWORD *)this;
      v9 = (struct CDrawingContext *)a2;
      v10 = v15;
      v16.width = 1.0;
      v11 = *(bool (__fastcall **)(CContent *__hidden, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *, const struct CMILMatrix *))(v8 + 216);
      v16.height = 1.0;
      if ( v11 == CContent::IsDrawListCacheDirty )
        IsDrawListCacheDirty = CContent::IsDrawListCacheDirty(this, v15, v9, &v16, 0LL);
      else
        IsDrawListCacheDirty = v11(this, v15, v9, &v16, 0LL);
      if ( IsDrawListCacheDirty && *((_QWORD *)v10 + 3) )
      {
        if ( *((_DWORD *)v10 + 4) == 1 )
        {
          ++dword_1802D6340;
        }
        else if ( *((_DWORD *)v10 + 4) == 2 )
        {
          ++dword_1802D634C;
        }
        *((_QWORD *)v10 + 3) = 0LL;
        *((_DWORD *)v10 + 4) = 0;
        CDrawListCache::ReleaseDrawListEntries(v10);
        *((_BYTE *)v10 + 108) = 0;
      }
      goto LABEL_8;
    }
    v14 = 429;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Cache, v14);
  if ( v15 )
    CMILRefCountBase::Release(v15);
  return (unsigned int)Cache;
}

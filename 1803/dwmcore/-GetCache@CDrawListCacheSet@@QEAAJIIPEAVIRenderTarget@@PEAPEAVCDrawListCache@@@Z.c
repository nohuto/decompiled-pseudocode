/*
 * XREFs of ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180040CE0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180056EE4 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A88B4 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 * Callees:
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCacheSet::GetCache(
        char **this,
        unsigned int a2,
        unsigned int a3,
        struct IRenderTarget *a4,
        struct CDrawListCache **a5)
{
  char *v5; // rdi
  char *v7; // rdx
  int v8; // esi
  struct IRenderTarget *v12; // rax
  char *v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 result; // rax
  char *v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  unsigned int v24; // edx
  int v25; // eax
  __int128 v26; // [rsp+30h] [rbp-28h] BYREF
  struct CDrawListCache *v27; // [rsp+60h] [rbp+8h] BYREF

  v5 = *this;
  v7 = 0LL;
  v8 = 0;
  if ( *this )
  {
    while ( 1 )
    {
      v12 = (struct IRenderTarget *)*((_QWORD *)v5 + 2);
      v13 = v5;
      if ( v12 == a4 )
        break;
      v5 = (char *)*((_QWORD *)v5 + 11);
      if ( v12 )
        v13 = v7;
      v7 = v13;
      if ( !v5 )
      {
        if ( !v13 )
          goto LABEL_16;
        v5 = v13;
        break;
      }
    }
    if ( !v5 )
      goto LABEL_16;
    v14 = *((_DWORD *)v5 + 12);
    v15 = 0;
    if ( v14 )
    {
      while ( 1 )
      {
        v16 = *((_QWORD *)v5 + 3) + 16LL * v15;
        if ( *(_DWORD *)v16 == a2 && *(_DWORD *)(v16 + 4) == a3 )
          break;
        if ( ++v15 >= v14 )
          goto LABEL_18;
      }
      if ( v16 )
      {
        v17 = *(volatile signed __int32 **)(v16 + 8);
        goto LABEL_9;
      }
    }
  }
  else
  {
LABEL_16:
    v19 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    v5 = v19;
    if ( !v19 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x64u);
      result = 2147942414LL;
      *a5 = 0LL;
      return result;
    }
    memset_0(v19, 0, 0x60uLL);
    *((_DWORD *)v5 + 10) = 2;
    *((_QWORD *)v5 + 3) = v5 + 56;
    *((_QWORD *)v5 + 4) = v5 + 56;
    *(_QWORD *)(v5 + 44) = 2LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 11) = *this;
    *this = v5;
  }
LABEL_18:
  v27 = 0LL;
  v20 = CDrawListCache::Create(&v27);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x7Au);
    if ( v27 )
      CMILRefCountBase::Release(v27);
    *a5 = 0LL;
    return v21;
  }
  v22 = *((unsigned int *)v5 + 12);
  v23 = v5 + 24;
  v17 = (volatile signed __int32 *)v27;
  *(_QWORD *)&v26 = __PAIR64__(a3, a2);
  v24 = v22 + 1;
  *((_QWORD *)&v26 + 1) = v27;
  if ( (int)v22 + 1 < (unsigned int)v22 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_30;
  }
  if ( v24 > *((_DWORD *)v5 + 11) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet(v23, 16LL, 1LL, &v26);
    v8 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
LABEL_30:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x7Cu);
      if ( v17 )
        CMILRefCountBase::Release((CMILRefCountBase *)v17);
      *a5 = 0LL;
      return (unsigned int)v8;
    }
    goto LABEL_22;
  }
  *(_OWORD *)(*v23 + 16 * v22) = v26;
  *((_DWORD *)v5 + 12) = v24;
LABEL_22:
  if ( *((struct IRenderTarget **)v5 + 2) != a4 )
  {
    (*(void (__fastcall **)(struct IRenderTarget *, char *))(*(_QWORD *)a4 + 200LL))(a4, v5);
    *((_QWORD *)v5 + 2) = a4;
  }
LABEL_9:
  result = (unsigned int)v8;
  *a5 = (struct CDrawListCache *)v17;
  if ( v17 )
    _InterlockedIncrement(v17 + 2);
  return result;
}

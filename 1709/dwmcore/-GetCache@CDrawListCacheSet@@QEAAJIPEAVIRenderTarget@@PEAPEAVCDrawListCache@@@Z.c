/*
 * XREFs of ?GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800B2960
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180177CF4 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_N.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800844E4 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800B2B14 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCacheSet::GetCache(
        char **this,
        int a2,
        struct IRenderTarget *a3,
        struct CDrawListCache **a4)
{
  char *v4; // rdi
  char *v6; // rcx
  DWORD v7; // ebp
  struct IRenderTarget *v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  __int64 v14; // rbx
  struct CDrawListCache *v15; // rbx
  __int64 result; // rax
  char *v17; // rax
  signed int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  unsigned int v22; // edx
  signed int v23; // eax
  __int128 v24; // [rsp+30h] [rbp-28h] BYREF
  struct CDrawListCache *v25; // [rsp+60h] [rbp+8h] BYREF

  v4 = *this;
  v6 = 0LL;
  v7 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v11 = (struct IRenderTarget *)*((_QWORD *)v4 + 2);
      if ( v11 == a3 )
        break;
      if ( !v11 )
        v6 = v4;
      v4 = (char *)*((_QWORD *)v4 + 11);
      if ( !v4 )
      {
        if ( !v6 )
          goto LABEL_13;
        v4 = v6;
        break;
      }
    }
    v12 = *((_DWORD *)v4 + 12);
    v13 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v14 = *((_QWORD *)v4 + 3) + 16LL * v13;
        if ( *(_DWORD *)v14 == a2 )
          break;
        if ( ++v13 >= v12 )
          goto LABEL_15;
      }
      if ( v14 )
      {
        v15 = *(struct CDrawListCache **)(v14 + 8);
        goto LABEL_7;
      }
    }
  }
  else
  {
LABEL_13:
    v17 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    v4 = v17;
    if ( !v17 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x63u);
      result = 2147942414LL;
      goto LABEL_32;
    }
    memset_0(v17, 0, 0x60uLL);
    *((_DWORD *)v4 + 10) = 2;
    *((_QWORD *)v4 + 3) = v4 + 56;
    *((_QWORD *)v4 + 4) = v4 + 56;
    *(_QWORD *)(v4 + 44) = 2LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 11) = *this;
    *this = v4;
  }
LABEL_15:
  v25 = 0LL;
  v18 = CDrawListCache::Create(&v25);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v20 = *((unsigned int *)v4 + 12);
    v21 = v4 + 24;
    v15 = v25;
    LODWORD(v24) = a2;
    *((_QWORD *)&v24 + 1) = v25;
    v22 = v20 + 1;
    if ( (int)v20 + 1 < (unsigned int)v20 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0xB5u);
    }
    else
    {
      if ( v22 <= *((_DWORD *)v4 + 11) )
      {
        *(_OWORD *)(*v21 + 16 * v20) = v24;
        *((_DWORD *)v4 + 12) = v22;
        goto LABEL_19;
      }
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v21, 0x10u, 1, &v24);
      v7 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xC0u);
    }
    if ( (v7 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x7Bu);
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v25);
      *a4 = 0LL;
      return v7;
    }
LABEL_19:
    if ( *((struct IRenderTarget **)v4 + 2) != a3 )
    {
      (*(void (__fastcall **)(struct IRenderTarget *, char *))(*(_QWORD *)a3 + 176LL))(a3, v4);
      *((_QWORD *)v4 + 2) = a3;
    }
LABEL_7:
    *a4 = v15;
    if ( v15 )
    {
      (**(void (__fastcall ***)(struct CDrawListCache *))v15)(v15);
      return v7;
    }
    return v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x79u);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v25);
  result = v19;
LABEL_32:
  *a4 = 0LL;
  return result;
}

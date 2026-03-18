/*
 * XREFs of ?EnsureCacheRenderTargetEntry@CDrawListCacheSet@@AEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAUDrawListCacheRenderTargetEntry@1@@Z @ 0x18013370C
 * Callers:
 *     ?EnsureDrawListCache@CTreeData@@IEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180134698 (-EnsureDrawListCache@CTreeData@@IEAAJPEBVCContent@@PEBVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDrawListCacheSet::EnsureCacheRenderTargetEntry(
        CDrawListCacheSet *this,
        const struct CContent *a2,
        const struct IRenderTarget *a3,
        struct CDrawListCacheSet::DrawListCacheRenderTargetEntry **a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // ebx
  __int64 v10; // r11
  __int64 v11; // rdx
  struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *v12; // rax
  char *v13; // rax
  char *v14; // rcx
  char *v15; // rax
  __int64 v16; // r10
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]
  unsigned int v26; // [rsp+70h] [rbp+8h]

  v4 = *(_QWORD **)this;
  v5 = 0;
  if ( *(_QWORD *)this && (v10 = 0LL, *((_DWORD *)v4 + 6)) )
  {
    v11 = *v4;
    while ( *(const struct CContent **)(v11 + 24 * v10) != a2
         || *(const struct IRenderTarget **)(v11 + 24 * v10 + 8) != a3 )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)v4 + 6) )
        goto LABEL_7;
    }
    v12 = (struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *)(v11 + 24 * v10);
  }
  else
  {
LABEL_7:
    v12 = 0LL;
  }
  if ( !v12 )
  {
    if ( !v4 )
    {
      v13 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
      v14 = v13;
      if ( v13 )
      {
        v15 = v13 + 32;
        *((_DWORD *)v14 + 6) = 0;
        *(_QWORD *)v14 = v15;
        *((_QWORD *)v14 + 1) = v15;
        *((_DWORD *)v14 + 4) = 2;
        *((_DWORD *)v14 + 5) = 2;
      }
      else
      {
        v14 = 0LL;
      }
      *(_QWORD *)this = v14;
      if ( !v14 )
      {
        v5 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12Fu);
        return v5;
      }
    }
    v25 = 0LL;
    v16 = *(_QWORD *)this;
    v17 = v26;
    *((_QWORD *)&v24 + 1) = a3;
    *(_QWORD *)&v24 = a2;
    v18 = *(unsigned int *)(v16 + 24);
    v19 = v18 + 1;
    if ( (int)v18 + 1 >= (unsigned int)v18 )
      v17 = v18 + 1;
    v5 = v19 < (unsigned int)v18 ? 0x80070216 : 0;
    if ( v19 < (unsigned int)v18 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
    }
    else if ( v17 > *(_DWORD *)(v16 + 20) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet(v16, 0x18u, 1, &v24);
      v5 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      v20 = *(_QWORD *)v16;
      v21 = 3 * v18;
      *(_OWORD *)(v20 + 8 * v21) = v24;
      *(_QWORD *)(v20 + 8 * v21 + 16) = v25;
      *(_DWORD *)(v16 + 24) = v17;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x137u);
      return v5;
    }
    v12 = (struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *)(**(_QWORD **)this
                                                                     + 24LL
                                                                     * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL)
                                                                                    - 1));
  }
  *a4 = v12;
  return v5;
}

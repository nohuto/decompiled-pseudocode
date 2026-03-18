/*
 * XREFs of ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@Z @ 0x18008BC70
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180077360 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x180140B08 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 */

__int64 __fastcall std::vector<EffectInput>::emplace_back<std::nullptr_t>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdi
  char v17; // cl
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1[2];
  v3 = a1[1];
  if ( v2 == v3 )
  {
    v5 = (unsigned __int128)((v3 - *a1) * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64;
    v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 5);
    if ( v6 == 0x276276276276276LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = v6 + 1;
    v8 = (v2 - *a1) / 104;
    v9 = v8 >> 1;
    if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 104LL);
    v12 = 104 * v6;
    v13 = v11;
    *(_QWORD *)(v12 + v11) = 0LL;
    *(_QWORD *)(v12 + v11 + 8) = 0LL;
    *(_BYTE *)(v12 + v11 + 16) = 0;
    *(_QWORD *)(v12 + v11 + 48) = 0LL;
    *(_QWORD *)(v12 + v11 + 56) = 0LL;
    v14 = a1[1];
    v15 = *a1;
    if ( *a1 != v14 )
    {
      v16 = v11 + 40;
      do
      {
        CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v16 - 40), (const struct CDrawListBitmap *)v15);
        *(_OWORD *)(v16 - 16) = *(_OWORD *)(v15 + 24);
        *(_DWORD *)v16 = *(_DWORD *)(v15 + 40);
        v17 = *(_BYTE *)(v15 + 44);
        *(_BYTE *)(v16 + 4) = v17;
        *(_BYTE *)(v16 + 5) = *(_BYTE *)(v15 + 45);
        *(_OWORD *)(v16 + 8) = *(_OWORD *)(v15 + 48);
        if ( v17 )
        {
          *(_OWORD *)(v16 + 24) = *(_OWORD *)(v15 + 64);
          *(_OWORD *)(v16 + 40) = *(_OWORD *)(v15 + 80);
          *(_QWORD *)(v16 + 56) = *(_QWORD *)(v15 + 96);
        }
        v16 += 104LL;
        v15 += 104LL;
      }
      while ( v15 != v14 );
    }
    return std::vector<EffectInput>::_Change_array(a1, v13, v7, v10);
  }
  else
  {
    *(_QWORD *)v3 = 0LL;
    result = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_BYTE *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)(v3 + 56) = 0LL;
    a1[1] += 104LL;
  }
  return result;
}

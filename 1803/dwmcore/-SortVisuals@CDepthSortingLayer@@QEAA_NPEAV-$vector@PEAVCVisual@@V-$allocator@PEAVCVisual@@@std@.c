/*
 * XREFs of ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18021FF24
 * Callers:
 *     ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18021F9B0 (-SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVis.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801C2C28 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ??$emplace_back@PEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAX$$QEAPEAUDepthGraphNode@@@Z @ 0x18021FCC0 (--$emplace_back@PEAUDepthGraphNode@@@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDepthGraphNod.c)
 *     ??0?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@QEAA@_KAEBV?$allocator@UDepthGraphNode@@@1@@Z @ 0x18021FD80 (--0-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@QEAA@_KAEBV-$allocator@UD.c)
 *     ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x1802201A4 (-_Tidy@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ.c)
 */

char __fastcall CDepthSortingLayer::SortVisuals(unsigned int **a1, const void **a2, _QWORD *a3)
{
  _QWORD *v3; // r12
  __int64 v5; // rdi
  char *v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // r12d
  __int64 v16; // rdx
  int RelativeOrder; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // rax
  const void **v21; // r13
  unsigned int v22; // r12d
  char *v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r15d
  __int64 v28; // rcx
  bool v30; // di
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  char *v34; // [rsp+38h] [rbp-40h] BYREF
  __int128 v35; // [rsp+40h] [rbp-38h]
  unsigned __int64 v36[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+48h] BYREF
  const void **v38; // [rsp+C8h] [rbp+50h]
  _QWORD *v39; // [rsp+D0h] [rbp+58h]
  _DWORD *v40; // [rsp+D8h] [rbp+60h] BYREF

  v39 = a3;
  v38 = a2;
  v3 = a3;
  v5 = a1[1] - *a1;
  if ( (_DWORD)v5 == 1 )
  {
    v37 = *(_QWORD *)(192LL * **a1 + *a3);
    std::vector<DepthGraphNode *>::emplace_back<DepthGraphNode *>(a2, &v37);
    return 1;
  }
  std::vector<DepthGraphNode>::vector<DepthGraphNode>(v36, (unsigned int)v5);
  v7 = 0LL;
  v8 = 0;
  v34 = 0LL;
  v35 = 0LL;
  if ( (_DWORD)v5 )
  {
    v9 = v36[0];
    v10 = 0LL;
    v32 = 0LL;
    v11 = (_DWORD *)(v36[0] + 48);
    while ( 1 )
    {
      v12 = *(unsigned int *)((char *)*a1 + v10);
      v13 = v8 + 1;
      LODWORD(v37) = v8 + 1;
      v14 = *v3 + 192 * v12;
      v15 = v8 + 1;
      *(v11 - 12) = v8;
      *((_QWORD *)v11 - 5) = v14;
      if ( (unsigned int)v13 < (unsigned int)v5 )
        break;
LABEL_13:
      if ( *((_BYTE *)v11 - 32) )
      {
        v40 = (_DWORD *)(v9 + 56LL * v8);
        std::vector<DepthGraphNode *>::emplace_back<DepthGraphNode *>((const void **)&v34, (__int64 *)&v40);
      }
      v11 += 14;
      v8 = v37;
      v10 = v32 + 4;
      v3 = v39;
      v32 += 4LL;
      if ( (unsigned int)v37 >= (unsigned int)v5 )
      {
        v7 = v34;
        goto LABEL_17;
      }
    }
    v16 = 4LL * (unsigned int)v13;
    v31 = v16;
    v40 = (_DWORD *)(56 * v13 + v9 + 48);
    while ( 1 )
    {
      RelativeOrder = CVisualDepthGeometry::GetRelativeOrder(v14, *v39 + 192LL * *(unsigned int *)((char *)*a1 + v16));
      if ( !RelativeOrder )
        break;
      if ( RelativeOrder == 1 )
      {
        v20 = v40;
        *((_BYTE *)v40 - 32) = 0;
        ++*v20;
        v18 = 56LL * v15;
        v19 = v8;
        goto LABEL_11;
      }
LABEL_12:
      ++v15;
      v40 += 14;
      v16 = v31 + 4;
      v31 += 4LL;
      if ( v15 >= (unsigned int)v5 )
        goto LABEL_13;
    }
    *((_BYTE *)v11 - 32) = 0;
    ++*v11;
    v18 = 56LL * v8;
    v19 = v15;
LABEL_11:
    v33 = v9 + v18;
    std::vector<DepthGraphNode *>::emplace_back<DepthGraphNode *>((const void **)(v9 + 56 * v19 + 24), (__int64 *)&v33);
    goto LABEL_12;
  }
LABEL_17:
  v21 = v38;
  v22 = 0;
LABEL_18:
  v23 = (char *)v35;
  while ( v7 != v23 )
  {
    v24 = *(_QWORD *)v7;
    v37 = **(_QWORD **)(*(_QWORD *)v7 + 8LL);
    std::vector<DepthGraphNode *>::emplace_back<DepthGraphNode *>(v21, &v37);
    memmove(v7, v7 + 8, v23 - (v7 + 8));
    v25 = *(_QWORD *)(v24 + 24);
    v23 -= 8;
    ++v22;
    v26 = *(_QWORD *)(v24 + 32) - v25;
    *(_QWORD *)&v35 = v23;
    v27 = 0;
    if ( v26 >> 3 )
    {
      v28 = 0LL;
      do
      {
        v37 = *(_QWORD *)(v25 + 8 * v28);
        if ( (*(_DWORD *)(v37 + 48))-- == 1 )
          std::vector<DepthGraphNode *>::emplace_back<DepthGraphNode *>((const void **)&v34, &v37);
        v25 = *(_QWORD *)(v24 + 24);
        v28 = ++v27;
      }
      while ( v27 < (unsigned __int64)((*(_QWORD *)(v24 + 32) - v25) >> 3) );
      v7 = v34;
      goto LABEL_18;
    }
  }
  v30 = v22 >= (unsigned int)v5;
  if ( v7 )
    std::_Deallocate(v7, (__int64)(*((_QWORD *)&v35 + 1) - (_QWORD)v7) >> 3, 8uLL);
  std::vector<DepthGraphNode>::_Tidy(v36);
  return v30;
}

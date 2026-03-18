/*
 * XREFs of ??$emplace_back@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAX$$QEAVCVisualDepthGeometry@@@Z @ 0x18021F454
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18021F6B4 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXQEAVCVisualDepthGeometry@@_K1@Z @ 0x18021FB3C (-_Change_array@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@A.c)
 */

void __fastcall std::vector<CVisualDepthGeometry>::emplace_back<CVisualDepthGeometry>(_QWORD *a1, _OWORD *a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // r8
  _OWORD *v6; // r8
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r10
  _OWORD *v12; // rdx
  _OWORD *v13; // r8
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  _OWORD *v16; // r11
  _OWORD *v17; // rdx
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (_OWORD *)a1[2];
  v5 = (_OWORD *)a1[1];
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *a1) / 192;
    if ( v7 == 0x155555555555555LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = ((__int64)v4 - *a1) / 192;
    v9 = v8 >> 1;
    if ( v8 <= 0x155555555555555LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0xC0uLL);
    v12 = (_OWORD *)(v11 + 192 * v7);
    v13 = (_OWORD *)v11;
    *v12 = *a2;
    v12[1] = a2[1];
    v12[2] = a2[2];
    v12[3] = a2[3];
    v12[4] = a2[4];
    v12[5] = a2[5];
    v12[6] = a2[6];
    v12 += 8;
    v14 = a2[7];
    v15 = a2 + 8;
    *(v12 - 1) = v14;
    *v12 = *v15;
    v12[1] = v15[1];
    v12[2] = v15[2];
    v12[3] = v15[3];
    v16 = (_OWORD *)a1[1];
    v17 = (_OWORD *)*a1;
    while ( v17 != v16 )
    {
      v18 = v13 + 8;
      v19 = v17 + 8;
      *v13 = *v17;
      v13[1] = v17[1];
      v13[2] = v17[2];
      v13[3] = v17[3];
      v13[4] = v17[4];
      v13[5] = v17[5];
      v13[6] = v17[6];
      v13 += 12;
      v20 = v17[7];
      v17 += 12;
      *(v18 - 1) = v20;
      *v18 = *v19;
      v18[1] = v19[1];
      v18[2] = v19[2];
      v18[3] = v19[3];
    }
    std::vector<CVisualDepthGeometry>::_Change_array(a1, v11, v7 + 1, v10);
  }
  else
  {
    *v5 = *a2;
    v5[1] = a2[1];
    v5[2] = a2[2];
    v5[3] = a2[3];
    v5[4] = a2[4];
    v5[5] = a2[5];
    v5[6] = a2[6];
    v6 = v5 + 8;
    *(v6 - 1) = a2[7];
    *v6 = a2[8];
    v6[1] = a2[9];
    v6[2] = a2[10];
    v6[3] = a2[11];
    a1[1] += 192LL;
  }
}

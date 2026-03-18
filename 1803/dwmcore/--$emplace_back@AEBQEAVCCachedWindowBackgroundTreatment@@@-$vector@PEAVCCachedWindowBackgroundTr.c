/*
 * XREFs of ??$emplace_back@AEBQEAVCCachedWindowBackgroundTreatment@@@?$vector@PEAVCCachedWindowBackgroundTreatment@@V?$allocator@PEAVCCachedWindowBackgroundTreatment@@@std@@@std@@QEAAXAEBQEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18001B14C
 * Callers:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180003030 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@A.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006860 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001F26C (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<CCachedWindowBackgroundTreatment *>::emplace_back<CCachedWindowBackgroundTreatment * const &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(__int64 **)(a1 + 16);
  v4 = *(__int64 **)(a1 + 8);
  if ( v2 == v4 )
  {
    v6 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v6 + 1;
    }
    else
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    v10 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v9, 8LL);
    v10[v6] = *a2;
    memmove(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<CVectorShape *>::_Change_array(a1, v10, v6 + 1, v9);
  }
  else
  {
    result = *a2;
    *v4 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}

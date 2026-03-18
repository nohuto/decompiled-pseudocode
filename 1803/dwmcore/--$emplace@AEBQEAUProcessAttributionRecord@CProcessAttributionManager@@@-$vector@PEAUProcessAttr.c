/*
 * XREFs of ??$emplace@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@1@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x180020890
 * Callers:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180022210 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001F26C (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Calculate_growth@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEBA_K_K@Z @ 0x1800209D0 (-_Calculate_growth@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::emplace<CProcessAttributionManager::ProcessAttributionRecord * const &>(
        const void **a1,
        _QWORD *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rsi
  __int64 v6; // rbp
  __int64 v10; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  char *v14; // r14
  char *v15; // rcx
  _BYTE *v16; // rdx
  size_t v17; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h]

  v4 = (char *)a1[1];
  v6 = (a3 - (_BYTE *)*a1) >> 3;
  if ( a1[2] == v4 )
  {
    v12 = (v4 - (_BYTE *)*a1) >> 3;
    if ( v12 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v13 = v12 + 1;
    v19 = std::vector<CColorGradientStop *>::_Calculate_growth(a1, v12 + 1);
    v14 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v19, 8LL);
    *(_QWORD *)&v14[8 * v6] = *a4;
    v15 = v14;
    v16 = *a1;
    if ( a3 == v4 )
    {
      v17 = (_BYTE *)a1[1] - v16;
    }
    else
    {
      memmove(v14, v16, a3 - (_BYTE *)*a1);
      v17 = (_BYTE *)a1[1] - a3;
      v15 = &v14[8 * v6 + 8];
      v16 = a3;
    }
    memmove(v15, v16, v17);
    std::vector<CVectorShape *>::_Change_array((__int64)a1, (__int64)v14, v13, v19);
  }
  else
  {
    v10 = *a4;
    if ( a3 == v4 )
    {
      *(_QWORD *)v4 = v10;
      a1[1] = (char *)a1[1] + 8;
    }
    else
    {
      *(_QWORD *)v4 = *((_QWORD *)v4 - 1);
      a1[1] = (char *)a1[1] + 8;
      memmove(a3 + 8, a3, v4 - a3 - 8);
      *(_QWORD *)a3 = v10;
    }
  }
  *a2 = (char *)*a1 + 8 * v6;
  return a2;
}

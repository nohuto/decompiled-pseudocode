/*
 * XREFs of ??$emplace@AEBQEAURecord@CProcessAttributionManager@@@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@1@AEBQEAURecord@CProcessAttributionManager@@@Z @ 0x18001F2D4
 * Callers:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180022498 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001F26C (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<CProcessAttributionManager::Record *>::emplace<CProcessAttributionManager::Record * const &>(
        const void **a1,
        _QWORD *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rsi
  __int64 v5; // r14
  char *v7; // rcx
  __int64 v9; // r14
  __int64 v11; // rbp
  _QWORD *result; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  char *v18; // r12
  char *v19; // rcx
  _BYTE *v20; // rdx
  size_t v21; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)a1[1];
  v5 = a3 - (_BYTE *)*a1;
  v7 = (char *)a1[2];
  v9 = v5 >> 3;
  if ( v7 == v4 )
  {
    v13 = (v4 - (_BYTE *)*a1) >> 3;
    if ( v13 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v14 = v13 + 1;
    v15 = (v7 - (_BYTE *)*a1) >> 3;
    v16 = v15 >> 1;
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL - (v15 >> 1) )
    {
      v17 = v14;
    }
    else
    {
      v17 = v16 + v15;
      if ( v16 + v15 < v14 )
        v17 = v14;
    }
    v18 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v17, 8LL);
    *(_QWORD *)&v18[8 * v9] = *a4;
    v19 = v18;
    v20 = *a1;
    if ( a3 == v4 )
    {
      v21 = (_BYTE *)a1[1] - v20;
    }
    else
    {
      memmove(v18, v20, a3 - (_BYTE *)*a1);
      v21 = (_BYTE *)a1[1] - a3;
      v19 = &v18[8 * v9 + 8];
      v20 = a3;
    }
    memmove(v19, v20, v21);
    std::vector<CVectorShape *>::_Change_array((__int64)a1, (__int64)v18, v14, v17);
  }
  else
  {
    v11 = *a4;
    if ( a3 == v4 )
    {
      *(_QWORD *)v4 = v11;
      a1[1] = (char *)a1[1] + 8;
    }
    else
    {
      *(_QWORD *)v4 = *((_QWORD *)v4 - 1);
      a1[1] = (char *)a1[1] + 8;
      memmove(a3 + 8, a3, v4 - a3 - 8);
      *(_QWORD *)a3 = v11;
    }
  }
  result = a2;
  *a2 = (char *)*a1 + 8 * v9;
  return result;
}

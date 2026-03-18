/*
 * XREFs of ?_Insert_n@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@2@_KAEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x1800BD4A8
 * Callers:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180007DA8 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180007F80 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Insert_n(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  _QWORD *result; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = (__int64)(a3 - *(_QWORD *)a1) >> 3;
  if ( (*(_QWORD *)(a1 + 16) - v5) >> 3 )
  {
    if ( (__int64)(v5 - a3) >> 3 )
    {
      v21 = *a5;
      *(_QWORD *)(a1 + 8) = (char *)memmove(*(void **)(a1 + 8), (const void *)(v5 - 8), 8uLL) + 8;
      memmove((void *)(v5 - 8 * ((__int64)(v5 - 8 - a3) >> 3)), (const void *)a3, 8 * ((__int64)(v5 - 8 - a3) >> 3));
      if ( a3 >= a3 + 8 )
        goto LABEL_8;
      v22 = v21;
      v12 = a3 < a3 + 8;
    }
    else
    {
      v10 = *a5;
      memmove((void *)(a3 + 8), (const void *)a3, 0LL);
      v11 = 1 - ((__int64)(*(_QWORD *)(a1 + 8) - a3) >> 3);
      if ( v11 )
        memset64(*(void **)(a1 + 8), v10, v11);
      *(_QWORD *)(a1 + 8) += 8LL;
      v12 = (*(_QWORD *)(a1 + 8) - 8LL - a3 + 7) >> 3;
      if ( a3 > *(_QWORD *)(a1 + 8) - 8LL )
        v12 = 0LL;
      if ( !v12 )
        goto LABEL_8;
      v22 = v10;
    }
    memset64((void *)a3, v22, v12);
    goto LABEL_8;
  }
  v14 = (v5 - *(_QWORD *)a1) >> 3;
  if ( 0x1FFFFFFFFFFFFFFFLL == v14 )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v15 = v14 + 1;
  v16 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v17 = 0LL;
  v18 = 0LL;
  if ( 0x1FFFFFFFFFFFFFFFLL - (v16 >> 1) >= v16 )
    v17 = v16 + (v16 >> 1);
  if ( v17 >= v15 )
    v15 = v17;
  if ( v15 )
  {
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL || (v18 = operator new(8 * v15)) == 0LL )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v19 = (__int64)(a3 - *(_QWORD *)a1) >> 3;
  v18[v19] = *a5;
  memmove(v18, *(const void **)a1, (a3 - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  memmove(&v18[v19 + 1], (const void *)a3, (*(_QWORD *)(a1 + 8) - a3) & 0xFFFFFFFFFFFFFFF8uLL);
  v20 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  *(_QWORD *)a1 = v18;
  *(_QWORD *)(a1 + 16) = &v18[v15];
  *(_QWORD *)(a1 + 8) = &v18[v20 + 1];
LABEL_8:
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v6;
  return result;
}

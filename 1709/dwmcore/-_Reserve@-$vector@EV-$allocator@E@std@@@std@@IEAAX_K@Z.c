/*
 * XREFs of ?_Reserve@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x180006374
 * Callers:
 *     ??$_Copy_impl@PEBDV?$back_insert_iterator@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@EV?$allocator@E@std@@@std@@@0@PEBD0V10@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800062BC (--$_Copy_impl@PEBDV-$back_insert_iterator@V-$vector@EV-$allocator@E@std@@@std@@@std@@@std@@YA-AV.c)
 *     ?push_back@?$vector@EV?$allocator@E@std@@@std@@QEAAX$$QEAE@Z @ 0x180006488 (-push_back@-$vector@EV-$allocator@E@std@@@std@@QEAAX$$QEAE@Z.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180034960 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<unsigned char>::_Reserve(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  char *result; // rax
  unsigned __int64 v5; // r8
  SIZE_T v6; // rdi
  SIZE_T v7; // rdx
  char *v8; // rsi
  __int64 v9; // rbp
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 8);
  result = (char *)(*(_QWORD *)(a1 + 16) - v3);
  if ( (unsigned __int64)result < a2 )
  {
    if ( *(_QWORD *)a1 - v3 - 1 < a2 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    v6 = a2 + v3 - *(_QWORD *)a1;
    v7 = 0LL;
    if ( ~(v5 >> 1) >= v5 )
      v7 = v5 + (v5 >> 1);
    if ( v7 >= v6 )
      v6 = v7;
    v8 = 0LL;
    if ( v6 )
    {
      v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, v6);
      if ( !v8 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    memmove(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v9 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
      WPF::ProcessHeapImpl::Free(*(void **)a1);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = &v8[v6];
    result = &v8[v9];
    *(_QWORD *)(a1 + 8) = &v8[v9];
  }
  return result;
}

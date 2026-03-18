/*
 * XREFs of ??$_Insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@std@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800722B0
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18007148C (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??$rotate@PEAPEAVCColorGradientStop@@@std@@YAPEAPEAVCColorGradientStop@@PEAPEAV1@00@Z @ 0x1801673D8 (--$rotate@PEAPEAVCColorGradientStop@@@std@@YAPEAPEAVCColorGradientStop@@PEAPEAV1@00@Z.c)
 */

void __fastcall std::vector<CColorGradientStop *>::_Insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CColorGradientStop *>>>>(
        __int64 a1,
        const void *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  char *v15; // r12
  size_t v16; // rbp
  _QWORD *v17; // rcx
  unsigned __int64 v18; // r15
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3;
  v6 = a4 - a3;
  if ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_QWORD **)(a1 + 8);
    if ( (v9 - (__int64)v10) >> 3 >= v6 )
    {
      while ( v5 != a4 )
      {
        if ( v10 )
          *v10 = *v5;
        ++v10;
        ++v5;
      }
      std::rotate<CColorGradientStop * *>(a2, *(_QWORD *)(a1 + 8), 8 * v6 + *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) += 8 * v6;
    }
    else
    {
      v11 = ((__int64)v10 - *(_QWORD *)a1) >> 3;
      if ( 0x1FFFFFFFFFFFFFFFLL - v11 < v6 )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v12 = v11 + v6;
      v13 = (v9 - *(_QWORD *)a1) >> 3;
      v14 = 0LL;
      if ( 0x1FFFFFFFFFFFFFFFLL - (v13 >> 1) >= v13 )
        v14 = v13 + (v13 >> 1);
      if ( v14 >= v12 )
        v12 = v14;
      v15 = 0LL;
      if ( v12 )
      {
        if ( v12 > 0x1FFFFFFFFFFFFFFFLL || (v15 = (char *)operator new(8 * v12)) == 0LL )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v16 = ((unsigned __int64)a2 - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL;
      v17 = (char *)memmove(v15, *(const void **)a1, v16) + v16;
      while ( v5 != a4 )
      {
        if ( v17 )
          *v17 = *v5;
        ++v17;
        ++v5;
      }
      memmove(v17, a2, (*(_QWORD *)(a1 + 8) - (_QWORD)a2) & 0xFFFFFFFFFFFFFFF8uLL);
      v18 = ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) + v6;
      if ( *(_QWORD *)a1 )
        WPF::ProcessHeapImpl::Free(*(void **)a1);
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 16) = &v15[8 * v12];
      *(_QWORD *)(a1 + 8) = &v15[8 * v18];
    }
  }
}

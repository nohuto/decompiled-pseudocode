/*
 * XREFs of ??$_Insert@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$vector@DV?$allocator@D@std@@@std@@QEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180006108
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??$_Rotate@PEAD_JD@std@@YAXPEAD00PEA_J0@Z @ 0x18012468C (--$_Rotate@PEAD_JD@std@@YAXPEAD00PEA_J0@Z.c)
 */

void __fastcall std::vector<char>::_Insert<std::_String_iterator<std::_String_val<std::_Simple_types<char>>>>(
        __int64 a1,
        char *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  _BYTE *v5; // rbx
  unsigned __int64 v8; // r12
  _BYTE *v9; // r15
  char *v10; // rdx
  unsigned __int64 v11; // r8
  SIZE_T v12; // rdx
  SIZE_T v13; // r15
  char *v14; // r13
  size_t v15; // rbp
  _BYTE *v16; // rcx
  unsigned __int64 v17; // r12
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a3;
  v8 = a4 - a3;
  if ( a4 != a3 )
  {
    v9 = *(_BYTE **)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) - (_QWORD)v9 < v8 )
    {
      if ( *(_QWORD *)a1 - (_QWORD)v9 - 1LL < v8 )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v11 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
      v12 = 0LL;
      v13 = (SIZE_T)&v9[v8 - *(_QWORD *)a1];
      if ( ~(v11 >> 1) >= v11 )
        v12 = v11 + (v11 >> 1);
      if ( v12 >= v13 )
        v13 = v12;
      v14 = 0LL;
      if ( v13 )
      {
        v14 = (char *)operator new(v13);
        if ( !v14 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v15 = (size_t)&a2[-*(_QWORD *)a1];
      v16 = (char *)memmove(v14, *(const void **)a1, v15) + v15;
      while ( v5 != a4 )
      {
        if ( v16 )
          *v16 = *v5;
        ++v16;
        ++v5;
      }
      memmove(v16, a2, *(_QWORD *)(a1 + 8) - (_QWORD)a2);
      v17 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + v8;
      if ( *(_QWORD *)a1 )
        WPF::ProcessHeapImpl::Free(*(void **)a1);
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 16) = &v14[v13];
      *(_QWORD *)(a1 + 8) = &v14[v17];
    }
    else
    {
      while ( v5 != a4 )
      {
        if ( v9 )
          *v9 = *v5;
        ++v9;
        ++v5;
      }
      v10 = *(char **)(a1 + 8);
      if ( a2 != v10 && v10 != &v10[v8] )
        std::_Rotate<char *,__int64,char>(a2);
      *(_QWORD *)(a1 + 8) += v8;
    }
  }
}

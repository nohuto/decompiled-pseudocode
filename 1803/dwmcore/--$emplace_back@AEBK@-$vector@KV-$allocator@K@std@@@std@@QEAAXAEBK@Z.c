/*
 * XREFs of ??$emplace_back@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAXAEBK@Z @ 0x180147FB4
 * Callers:
 *     _lambda_365183fea5c3529ee8e4714511b90111_::_lambda_invoker_cdecl_ @ 0x180022650 (_lambda_365183fea5c3529ee8e4714511b90111_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180016F94 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<unsigned long>::emplace_back<unsigned long const &>(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  _DWORD *v4; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  _DWORD *v11; // rbx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_DWORD **)(a1 + 16);
  v4 = *(_DWORD **)(a1 + 8);
  if ( v2 == v4 )
  {
    v7 = ((__int64)v4 - *(_QWORD *)a1) >> 2;
    if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = ((__int64)v2 - *(_QWORD *)a1) >> 2;
    v9 = v8 >> 1;
    if ( v8 <= 0x3FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (_DWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 4uLL);
    v11[v7] = *a2;
    memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<unsigned int>::_Change_array(a1, (__int64)v11, v7 + 1, v10);
  }
  else
  {
    result = (unsigned int)*a2;
    *v4 = result;
    *(_QWORD *)(a1 + 8) += 4LL;
  }
  return result;
}

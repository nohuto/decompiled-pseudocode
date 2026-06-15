/*
 * XREFs of ??$emplace_back@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAXAEBK@Z @ 0x180031AA8
 * Callers:
 *     ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x1800302E0 (-AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x180018F80 (-_Xlength@-$vector@KV-$allocator@K@std@@@std@@CAXXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180019750 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned long>::emplace_back<unsigned long const &>(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  char *v12; // rax
  char *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  HANDLE ProcessHeap; // rax
  char *v22; // [rsp+70h] [rbp+18h]

  v4 = *(_DWORD **)(a1 + 16);
  v5 = *(_DWORD **)(a1 + 8);
  if ( v4 != v5 )
  {
    result = (unsigned int)*a2;
    *v5 = result;
    *(_QWORD *)(a1 + 8) += 4LL;
    return result;
  }
  v7 = ((__int64)v5 - *(_QWORD *)a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<unsigned long>::_Xlength();
  v8 = v7 + 1;
  v9 = ((__int64)v4 - *(_QWORD *)a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v11, 4uLL);
  v13 = v12;
  v22 = v12;
  try
  {
    *(_DWORD *)&v12[4 * v7] = *a2;
    memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  }
  catch ( ... )
  {
    std::allocator<unsigned long>::deallocate(v15, v22, v11, v17);
    throw;
  }
  v18 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v19 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v18) >> 2;
    if ( v19 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v19 < 0x1000 )
      {
LABEL_16:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v18);
        goto LABEL_17;
      }
      if ( ((unsigned __int8)v18 & 0x1F) == 0 )
      {
        v20 = *((_QWORD *)v18 - 1);
        if ( v20 < (unsigned __int64)v18 && (unsigned __int64)v18 - v20 - 8 <= 0x1F )
        {
          v18 = (void *)*((_QWORD *)v18 - 1);
          goto LABEL_16;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15, v14, v16, v17);
    __debugbreak();
  }
LABEL_17:
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 8) = &v13[4 * v8];
  result = (unsigned __int64)&v13[4 * v11];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

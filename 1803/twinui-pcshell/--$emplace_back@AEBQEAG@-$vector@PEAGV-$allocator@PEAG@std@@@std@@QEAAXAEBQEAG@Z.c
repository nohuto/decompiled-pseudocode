/*
 * XREFs of ??$emplace_back@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18014A16C
 * Callers:
 *     ?AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z @ 0x18014AA48 (-AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18014ACC8 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Change_array@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAXQEAPEAG_K1@Z @ 0x18014BC94 (-_Change_array@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAXQEAPEAG_K1@Z.c)
 */

__int64 __fastcall std::vector<unsigned short *>::emplace_back<unsigned short * const &>(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char *v11; // rax
  char *v12; // r15
  char *v13; // [rsp+70h] [rbp+18h]

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v13 = v11;
    try
    {
      *(_QWORD *)&v11[8 * v7] = *a2;
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v10, 8uLL);
      throw;
    }
    return std::vector<unsigned short *>::_Change_array(a1, v12, v7 + 1, v10, -2LL);
  }
  else
  {
    result = *a2;
    *v5 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}

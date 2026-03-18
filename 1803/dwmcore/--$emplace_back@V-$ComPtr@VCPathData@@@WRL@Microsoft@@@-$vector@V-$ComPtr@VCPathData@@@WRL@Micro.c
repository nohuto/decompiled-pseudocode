/*
 * XREFs of ??$emplace_back@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@@Z @ 0x180197550
 * Callers:
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180197A20 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@_K1@Z @ 0x1801A0FD0 (-_Change_array@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::emplace_back<Microsoft::WRL::ComPtr<CPathData>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __int64 *v11; // rdx
  _QWORD *v12; // r9
  _QWORD *v13; // rdx
  _QWORD *i; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = a1[2];
  v4 = (__int64 *)a1[1];
  if ( (__int64 *)result == v4 )
  {
    v6 = ((__int64)v4 - *a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = (result - *a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = std::_Allocate<std::_Default_allocate_traits<1>>(v9, 8uLL);
    v11 = (__int64 *)(v10 + 8 * v6);
    *v11 = 0LL;
    if ( v11 != a2 )
    {
      *v11 = *a2;
      *a2 = 0LL;
    }
    v12 = (_QWORD *)a1[1];
    v13 = (_QWORD *)v10;
    for ( i = (_QWORD *)*a1; i != v12; ++i )
    {
      *v13 = 0LL;
      if ( v13 != i )
      {
        *v13 = *i;
        *i = 0LL;
      }
      ++v13;
    }
    return std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array(a1, v10, v6 + 1, v9);
  }
  else
  {
    *v4 = 0LL;
    if ( v4 != a2 )
    {
      result = *a2;
      *v4 = *a2;
      *a2 = 0LL;
    }
    a1[1] += 8LL;
  }
  return result;
}

/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@Z @ 0x18019F7F4
 * Callers:
 *     ?CreateShadow@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowReceiver@@PEAVCProjectedShadowScene@@@Z @ 0x18019FAC4 (-CreateShadow@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowReceiver@@PEAVCProjectedShadowSce.c)
 *     ?CreateShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowScene@@@Z @ 0x1801A1254 (-CreateShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowSce.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@_K1@Z @ 0x1801A0FD0 (-_Change_array@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::emplace_back<Microsoft::WRL::ComPtr<CProjectedShadow> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 *v13; // rcx
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *i; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)a1[2];
  v4 = (__int64 *)a1[1];
  if ( v2 == v4 )
  {
    v8 = ((__int64)v4 - *a1) >> 3;
    if ( v8 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v9 = ((__int64)v2 - *a1) >> 3;
    v10 = v9 >> 1;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 + 1 )
        v11 = v8 + 1;
    }
    else
    {
      v11 = v8 + 1;
    }
    v12 = std::_Allocate<std::_Default_allocate_traits<1>>(v11, 8uLL);
    v13 = (__int64 *)(v12 + 8 * v8);
    *v13 = *a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v13);
    v14 = (_QWORD *)a1[1];
    v15 = (_QWORD *)v12;
    for ( i = (_QWORD *)*a1; i != v14; ++i )
    {
      *v15 = 0LL;
      if ( v15 != i )
      {
        *v15 = *i;
        *i = 0LL;
      }
      ++v15;
    }
    return std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array(a1, v12, v8 + 1, v11);
  }
  else
  {
    v6 = (__int64 *)a1[1];
    *v4 = *a2;
    result = Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v6);
    a1[1] += 8LL;
  }
  return result;
}

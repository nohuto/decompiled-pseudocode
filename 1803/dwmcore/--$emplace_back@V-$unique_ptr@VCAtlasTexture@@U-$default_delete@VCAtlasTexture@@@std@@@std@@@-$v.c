/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@@Z @ 0x180013760
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001171C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@2@_K1@Z @ 0x1800136F8 (-_Change_array@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@s.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CAtlasTexture>>::emplace_back<std::unique_ptr<CAtlasTexture>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 *v13; // r9
  __int64 *i; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2];
  v4 = a1[1];
  if ( v2 == v4 )
  {
    v6 = v4 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = v2 - *a1;
    v8 = v7 >> 1;
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v6 + 1;
    }
    else
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    v10 = std::_Allocate<std::_Default_allocate_traits<1>>(v9, 8LL);
    v11 = *a2;
    v12 = (_QWORD *)v10;
    *a2 = 0LL;
    *(_QWORD *)(v10 + 8 * v6) = v11;
    v13 = a1[1];
    for ( i = *a1; i != v13; ++i )
    {
      v16 = *i;
      *i = 0LL;
      *v12++ = v16;
    }
    return std::vector<std::unique_ptr<CAtlasTexture>>::_Change_array((__int64)a1, v10, v6 + 1, v9);
  }
  else
  {
    result = *a2;
    *a2 = 0LL;
    *v4 = result;
    ++a1[1];
  }
  return result;
}

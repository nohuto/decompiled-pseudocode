/*
 * XREFs of ?_Reserve@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C0518
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001714C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 * Callees:
 *     ?_Reallocate@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C044C (-_Reallocate@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CAtlasTexture>>::_Reserve(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  result = (a1[2] - v2) >> 3;
  if ( !result )
  {
    v4 = (v2 - *a1) >> 3;
    if ( v4 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v5 = v4 + 1;
    v6 = (__int64)(a1[2] - *a1) >> 3;
    v7 = 0LL;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    return (__int64)std::vector<std::unique_ptr<CAtlasTexture>>::_Reallocate((__int64)a1, v5);
  }
  return result;
}

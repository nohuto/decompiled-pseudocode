/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@PEAV10@00AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800D5E5C
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@@Z @ 0x1800D6044 (--$emplace_back@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientConte.c)
 * Callees:
 *     <none>
 */

CAppSubmixClientContext **__fastcall std::_Uninitialized_move_al_unchecked<std::unique_ptr<CAppSubmixClientContext> *,std::unique_ptr<CAppSubmixClientContext> *,std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
        CAppSubmixClientContext **a1,
        unsigned __int64 a2,
        CAppSubmixClientContext **a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  CAppSubmixClientContext *v5; // rax
  CAppSubmixClientContext **v7; // [rsp+50h] [rbp+18h]
  CAppSubmixClientContext **v8; // [rsp+58h] [rbp+20h]

  v7 = a3;
  v8 = a3;
  try
  {
    v3 = 0LL;
    v4 = (a2 - (unsigned __int64)a1 + 7) >> 3;
    if ( (unsigned __int64)a1 > a2 )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        v5 = *a1;
        *a1 = 0LL;
        *a3++ = v5;
        v7 = a3;
        ++a1;
        ++v3;
      }
      while ( v3 != v4 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(v8, v7);
    throw;
  }
  return a3;
}

/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D7418
 * Callers:
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800D6710 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     ??4?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D658C (--4-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientContext@@@std@@@std.c)
 *     ??_GCAppSubmixClientContext@@QEAAPEAXI@Z @ 0x1800D65BC (--_GCAppSubmixClientContext@@QEAAPEAXI@Z.c)
 */

CAppSubmixClientContext ***__fastcall std::vector<std::unique_ptr<CAppSubmixClientContext>>::erase(
        __int64 a1,
        CAppSubmixClientContext ***a2,
        CAppSubmixClientContext **a3,
        CAppSubmixClientContext **a4)
{
  CAppSubmixClientContext **v4; // rsi
  CAppSubmixClientContext **v8; // rbp
  CAppSubmixClientContext **v9; // rdi
  CAppSubmixClientContext **i; // rsi
  CAppSubmixClientContext ***result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(CAppSubmixClientContext ***)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
        std::unique_ptr<CAppSubmixClientContext>::operator=(v9++, v4++);
      while ( v4 != v8 );
      v8 = *(CAppSubmixClientContext ***)(a1 + 8);
    }
    for ( i = v9; i != v8; ++i )
    {
      if ( *i )
        CAppSubmixClientContext::`scalar deleting destructor'(*i);
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}

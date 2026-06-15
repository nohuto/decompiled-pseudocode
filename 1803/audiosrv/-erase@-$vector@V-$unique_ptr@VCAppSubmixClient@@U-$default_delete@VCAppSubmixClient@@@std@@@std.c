/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D7368
 * Callers:
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800D6710 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??4?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D6544 (--4-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$.c)
 */

__int64 ***__fastcall std::vector<std::unique_ptr<CAppSubmixClient>>::erase(
        __int64 a1,
        __int64 ***a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 **v4; // rsi
  __int64 **v8; // rbp
  __int64 **v9; // rdi
  __int64 **i; // rsi
  __int64 *v11; // r12
  __int64 ***result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(__int64 ***)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
        std::unique_ptr<CAppSubmixClient>::operator=(v9++, v4++);
      while ( v4 != v8 );
      v8 = *(__int64 ***)(a1 + 8);
    }
    for ( i = v9; i != v8; ++i )
    {
      v11 = *i;
      if ( *i )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*i);
        operator delete(v11, (const struct std::nothrow_t *)0x10);
      }
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}

/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AFAD4
 * Callers:
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800AF080 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 *     ??4?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEFF8 (--4-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@@std@@QEAAAEAV.c)
 */

CApplicationSubmix ***__fastcall std::vector<std::unique_ptr<CApplicationSubmix>>::erase(
        __int64 a1,
        CApplicationSubmix ***a2,
        CApplicationSubmix **a3,
        CApplicationSubmix **a4)
{
  CApplicationSubmix **v4; // rsi
  CApplicationSubmix **v8; // r15
  CApplicationSubmix **v9; // rdi
  CApplicationSubmix **v10; // r12
  CApplicationSubmix **i; // rsi
  CApplicationSubmix *v12; // r15
  CApplicationSubmix ***result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(CApplicationSubmix ***)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
        std::unique_ptr<CApplicationSubmix>::operator=(v9++, v4++);
      while ( v4 != v8 );
    }
    v10 = *(CApplicationSubmix ***)(a1 + 8);
    for ( i = v9; i != v10; ++i )
    {
      v12 = *i;
      if ( *i )
      {
        CApplicationSubmix::~CApplicationSubmix(*i);
        operator delete(v12, (const struct std::nothrow_t *)0x40);
      }
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}

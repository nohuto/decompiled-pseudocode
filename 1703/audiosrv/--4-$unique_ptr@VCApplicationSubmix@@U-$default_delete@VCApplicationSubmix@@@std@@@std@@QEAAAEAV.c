/*
 * XREFs of ??4?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEFF8
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix___________lambda_d1ef71c9e005ee3e22f3fa4533c9d9bf___ @ 0x1800AED50 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CApplic.c)
 *     ?erase@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AFAD4 (-erase@-$vector@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 */

CApplicationSubmix **__fastcall std::unique_ptr<CApplicationSubmix>::operator=(
        CApplicationSubmix **a1,
        CApplicationSubmix **a2)
{
  CApplicationSubmix *v3; // rax
  CApplicationSubmix *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      CApplicationSubmix::~CApplicationSubmix(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x40);
    }
  }
  return a1;
}

/*
 * XREFs of ??$destroy@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@1@@Z @ 0x1800AE734
 * Callers:
 *     _std::vector_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix____std::allocator_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix_______::emplace_back_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix______::_1_::catch$99 @ 0x1800AEADF (_std--vector_std--unique_ptr_CApplicationSubmix_std--default_delete_CApplicationSubmix____std--a.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::unique_ptr<CApplicationSubmix>>>::destroy<std::unique_ptr<CApplicationSubmix>>(
        __int64 a1,
        CApplicationSubmix **a2)
{
  CApplicationSubmix *v2; // rbx

  v2 = *a2;
  if ( *a2 )
  {
    CApplicationSubmix::~CApplicationSubmix(*a2);
    operator delete(v2, (const struct std::nothrow_t *)0x40);
  }
}

/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@PEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@2@@std@@YAXPEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@0@@Z @ 0x1800AE4E8
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked1_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________ptr64_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________ptr64_std::allocator_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix________::_1_::catch$17 @ 0x1800AE6B8 (_std--_Uninitialized_move_al_unchecked1_std--unique_ptr_CApplicationSubmix_std--default_delete_C.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CApplicationSubmix>>,std::unique_ptr<CApplicationSubmix> *>(
        CApplicationSubmix **a1,
        CApplicationSubmix **a2)
{
  CApplicationSubmix **v3; // rbx
  CApplicationSubmix *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CApplicationSubmix::~CApplicationSubmix(*v3);
        operator delete(v4, (const struct std::nothrow_t *)0x40);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}

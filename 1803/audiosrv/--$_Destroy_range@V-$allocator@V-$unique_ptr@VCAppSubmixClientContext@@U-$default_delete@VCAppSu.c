/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800D5D9C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________ptr64_std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext________::_1_::catch$15 @ 0x1800D5EBE (_std--_Uninitialized_move_al_unchecked_std--unique_ptr_CAppSubmixClientContext_std--default_dele.c)
 * Callees:
 *     ??_GCAppSubmixClientContext@@QEAAPEAXI@Z @ 0x1800D65BC (--_GCAppSubmixClientContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
        CAppSubmixClientContext **a1,
        CAppSubmixClientContext **a2)
{
  CAppSubmixClientContext **v3; // rbx
  void *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CAppSubmixClientContext::`scalar deleting destructor'(*v3, (unsigned int)a2);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}

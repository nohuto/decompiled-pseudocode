/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@2@_K@Z @ 0x18001E450
 * Callers:
 *     _std::vector_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64______std::allocator_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64_________::emplace_back_std::pair_unsigned_long_std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64________::_1_::catch$194 @ 0x1800CD635 (_std--vector_std--pair_unsigned_long_std--vector_IDisplayBindingObserver_____ptr64_std--allocato.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 32 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x18001E4A0LL);
  }
LABEL_7:
  operator delete(a2);
}

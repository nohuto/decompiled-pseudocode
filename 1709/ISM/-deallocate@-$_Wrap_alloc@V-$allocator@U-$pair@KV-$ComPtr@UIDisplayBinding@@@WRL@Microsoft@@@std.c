/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@2@_K@Z @ 0x18001E4A4
 * Callers:
 *     _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding_______::emplace_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IDisplayBinding______::_1_::catch$154 @ 0x1800CD6C3 (_std--vector_std--pair_unsigned_long_Microsoft--WRL--ComPtr_IDisplayBinding____std--allocator_st.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 16 * a3 >= 0x1000 )
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
    JUMPOUT(0x18001E4F4LL);
  }
LABEL_7:
  operator delete(a2);
}

/*
 * XREFs of ?deallocate@?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@Input@Gaming@Windows@@_K@Z @ 0x180025884
 * Callers:
 *     _std::vector_unsigned_int_std::allocator_unsigned_int___::emplace_back_unsigned_int_const_&___ptr64__::_1_::catch$67 @ 0x1800E458A (_std--vector_unsigned_int_std--allocator_unsigned_int___--emplace_back_unsigned_int_const_-___pt.c)
 *     _std::vector_enum__Button_std::allocator_enum__Button___::emplace_back_enum__Button_&___ptr64__::_1_::catch$102 @ 0x1800E4B90 (_std--vector_enum__Button_std--allocator_enum__Button___--emplace_back_enum__Button_-___ptr64__-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 4 * a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x1800258D6LL);
  }
LABEL_7:
  operator delete((void *)a2);
}

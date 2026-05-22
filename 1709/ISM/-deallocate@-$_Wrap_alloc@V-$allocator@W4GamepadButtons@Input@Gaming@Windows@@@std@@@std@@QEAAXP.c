/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAXPEAW4GamepadButtons@Input@Gaming@Windows@@_K@Z @ 0x18002B6B8
 * Callers:
 *     _std::vector_enum_Windows::Gaming::Input::GamepadButtons_std::allocator_enum_Windows::Gaming::Input::GamepadButtons___::emplace_back_enum_Windows::Gaming::Input::GamepadButtons_const_&___ptr64__::_1_::catch$106 @ 0x1800CDE0D (_std--vector_enum_Windows--Gaming--Input--GamepadButtons_std--allocator_enum_Windows--Gaming--In.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<enum Windows::Gaming::Input::GamepadButtons>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 4 * a3 >= 0x1000 )
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
    JUMPOUT(0x18002B70ALL);
  }
LABEL_7:
  operator delete(a2);
}

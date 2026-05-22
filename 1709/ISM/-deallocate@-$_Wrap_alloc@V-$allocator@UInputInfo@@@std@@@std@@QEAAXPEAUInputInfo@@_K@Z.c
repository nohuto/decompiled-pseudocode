/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UInputInfo@@@std@@@std@@QEAAXPEAUInputInfo@@_K@Z @ 0x180067658
 * Callers:
 *     _std::vector_InputInfo_std::allocator_InputInfo___::emplace_back_InputInfo_const_&___ptr64__::_1_::catch$72 @ 0x1800CFA01 (_std--vector_InputInfo_std--allocator_InputInfo___--emplace_back_InputInfo_const_-___ptr64__--_1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<InputInfo>>::deallocate(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1702E05C0B8170LL )
    goto LABEL_8;
  if ( 2848 * a3 >= 0x1000 )
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
    JUMPOUT(0x1800676AALL);
  }
LABEL_7:
  operator delete(a2);
}

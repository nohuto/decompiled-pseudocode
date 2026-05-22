/*
 * XREFs of ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x18009C9E8
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch$102 @ 0x1800E9E45 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned char>::deallocate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) != 0 || (v3 = *(_QWORD *)(a2 - 8), v3 >= a2) || (a2 = a2 - v3 - 8, a2 > 0x1F) )
    {
      _o__invalid_parameter_noinfo_noreturn(a1, a2);
      JUMPOUT(0x18009CA25LL);
    }
    a2 = v3;
  }
  operator delete((void *)a2);
}

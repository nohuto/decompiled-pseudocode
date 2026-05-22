/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18009CA28
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::vector_unsigned_char_std::allocator_unsigned_char____::_1_::catch$42 @ 0x1800E9CC4 (_std--vector_unsigned_char_std--allocator_unsigned_char___--vector_unsigned_char_std--allocator_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Tidy(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v3 = *a1;
  if ( v3 )
  {
    if ( a1[2] - v3 >= 0x1000 )
    {
      if ( (v3 & 0x1F) != 0 || (v4 = *(_QWORD *)(v3 - 8), v4 >= v3) || (v3 = v3 - v4 - 8, v3 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v3, a2);
        JUMPOUT(0x18009CA85LL);
      }
      v3 = v4;
    }
    operator delete((void *)v3);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}

/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800B90A4
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$2 @ 0x1800D1B0E (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_1800D1B0E.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::vector_unsigned_char_std::allocator_unsigned_char____::_1_::catch$47 @ 0x1800D1D2D (_std--vector_unsigned_char_std--allocator_unsigned_char___--vector_unsigned_char_std--allocator_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Tidy(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax

  v2 = *a1;
  if ( v2 )
  {
    if ( a1[2] - v2 >= 0x1000 )
    {
      if ( (v2 & 0x1F) != 0 || (v3 = *(_QWORD *)(v2 - 8), v3 >= v2) || (v2 = v2 - v3 - 8, v2 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v2);
        JUMPOUT(0x1800B9101LL);
      }
      v2 = v3;
    }
    operator delete((void *)v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}

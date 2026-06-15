/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x18009B998
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180096F98 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 */

__int64 __fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
        __int64 a1,
        size_t a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _BYTE *v11; // rax
  _BYTE *v12; // rsi
  __int64 result; // rax

  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("string too long");
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a2 | 0xF;
  if ( (a2 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v4 = a2 | 0xF;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = (_BYTE *)std::_Allocate<std::_Default_allocate_traits<1>>(v4 + 1, 1uLL);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v4;
  v12 = v11;
  memcpy_0(v11, a4, a2);
  v12[a2] = 0;
  if ( v8 >= 0x10 )
    std::_Deallocate(*(_QWORD **)a1, v8 + 1, 1uLL);
  result = a1;
  *(_QWORD *)a1 = v12;
  return result;
}

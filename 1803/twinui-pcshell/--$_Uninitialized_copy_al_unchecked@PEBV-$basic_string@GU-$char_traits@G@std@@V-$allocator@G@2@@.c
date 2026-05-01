/*
 * XREFs of ??$_Uninitialized_copy_al_unchecked@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18008C57C
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18008C4F4 (--$_Range_construct_or_tidy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Uninitialized_copy_al_unchecked<std::wstring const *,std::wstring *,std::allocator<std::wstring>>(
        _QWORD *Src,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r14
  _OWORD *v7; // r15
  __int64 v8; // rsi
  void *v9; // rax
  __int64 v11; // [rsp+80h] [rbp+18h]

  v11 = a3;
  v3 = a3;
  try
  {
    while ( Src != a2 )
    {
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 0LL;
      v6 = Src[2];
      v7 = Src;
      if ( Src[3] >= 8uLL )
        v7 = (_OWORD *)*Src;
      if ( v6 < 8 )
      {
        *(_OWORD *)v3 = *v7;
        v8 = 7LL;
      }
      else
      {
        v8 = v6 | 7;
        if ( (v6 | 7) > 0x7FFFFFFFFFFFFFFELL )
          v8 = 0x7FFFFFFFFFFFFFFELL;
        v9 = (void *)std::_Allocate<std::_Default_allocate_traits<1>>(v8 + 1, 2LL);
        *(_QWORD *)v3 = v9;
        memcpy_0(v9, v7, 2 * v6 + 2);
      }
      *(_QWORD *)(v3 + 16) = v6;
      *(_QWORD *)(v3 + 24) = v8;
      v3 += 32LL;
      v11 = v3;
      Src += 4;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(a3, v11);
    throw;
  }
  return v3;
}

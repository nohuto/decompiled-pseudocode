/*
 * XREFs of ??$_Uninitialized_copy_al_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801A9EC4
 * Callers:
 *     ??$_Assign_range@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x1801A9D30 (--$_Assign_range@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$b.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800F7430 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Uninitialized_copy_al_unchecked<std::wstring *,std::wstring *,std::allocator<std::wstring>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v7; // [rsp+60h] [rbp+18h]

  v7 = a3;
  v3 = (_QWORD *)a3;
  try
  {
    while ( a1 != a2 )
    {
      std::wstring::wstring(v3, a1);
      v3 += 4;
      v7 = (__int64)v3;
      a1 += 32LL;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(a3, v7);
    throw;
  }
  return v3;
}

/*
 * XREFs of ?make@?$string_maker@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@details@wil@@QEAAJPEB_W_K@Z @ 0x180091354
 * Callers:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@wil@@YAJAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x180090F14 (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18008DBA4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::string_maker<std::wstring>::make(__int64 a1, char *a2, unsigned __int64 a3)
{
  void **v4; // r14
  char v5; // bl
  __int64 result; // rax
  void *v7[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+40h] [rbp-68h]
  unsigned __int64 v9; // [rsp+48h] [rbp-60h]
  void *v10[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp-40h]

  try
  {
    if ( a2 )
    {
      v11 = 7LL;
      v10[2] = 0LL;
      LOWORD(v10[0]) = 0;
      std::wstring::assign(v10, a2, a3);
      v4 = v10;
      v5 = 1;
    }
    else
    {
      v9 = 7LL;
      v8 = 0LL;
      LOWORD(v7[0]) = 0;
      std::wstring::assign((__int64)v7, a3, 0);
      v4 = v7;
      v5 = 2;
    }
    if ( (void **)a1 != v4 )
    {
      if ( *(_QWORD *)(a1 + 24) >= 8uLL )
        operator delete(*(void **)a1);
      *(_QWORD *)(a1 + 24) = 7LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_WORD *)a1 = 0;
      std::wstring::_Assign_rv((_QWORD *)a1, v4);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v9 >= 8 )
        operator delete(v7[0]);
      v9 = 7LL;
      v8 = 0LL;
      LOWORD(v7[0]) = 0;
    }
    if ( (v5 & 1) != 0 && v11 >= 8 )
      operator delete(v10[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147942414LL;
  }
  return result;
}

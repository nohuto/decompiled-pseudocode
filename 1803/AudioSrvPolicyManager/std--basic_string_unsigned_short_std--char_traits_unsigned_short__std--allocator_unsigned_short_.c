/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x1800179EC
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180016F94 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180023788 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180017B84 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180019750 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memcpy_0 @ 0x1800362AD (memcpy_0.c)
 */

__int64 __fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _WORD *v11; // rax
  _WORD *v12; // rbp
  void *v13; // rbx
  unsigned __int64 v14; // rax
  HANDLE ProcessHeap; // rax
  __int64 result; // rax

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v4 = v9;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = (_WORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v4 + 1);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 16) = a2;
  v12 = v11;
  memcpy_0(v11, a4, 2 * a2);
  v12[a2] = 0;
  if ( v8 >= 8 )
  {
    v13 = *(void **)a1;
    if ( v8 + 1 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * (v8 + 1) < 0x1000 )
      {
LABEL_13:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v13);
        goto LABEL_14;
      }
      if ( ((unsigned __int8)v13 & 0x1F) == 0 )
      {
        v14 = *((_QWORD *)v13 - 1);
        if ( v14 < (unsigned __int64)v13 && (unsigned __int64)v13 - v14 - 8 <= 0x1F )
        {
          v13 = (void *)*((_QWORD *)v13 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
LABEL_14:
  result = a1;
  *(_QWORD *)a1 = v12;
  return result;
}

/*
 * XREFs of ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180115CE0
 * Callers:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180113D90 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800278D0 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  int v4; // edx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  const void *v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  __int128 v11; // xmm0
  unsigned __int64 *v12; // rcx
  __int128 v13; // xmm1
  __int64 v14; // r8
  const void *v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v22; // [rsp+20h] [rbp-29h] BYREF
  __m128i v23; // [rsp+30h] [rbp-19h]
  __int128 v24; // [rsp+40h] [rbp-9h] BYREF
  __m128i si128; // [rsp+50h] [rbp+7h]
  _OWORD v26[2]; // [rsp+60h] [rbp+17h] BYREF

  v4 = *(_DWORD *)(a1 + 136);
  if ( (v4 & 2) != 0 || (v5 = *(unsigned __int64 **)(a1 + 88), !*v5) )
  {
    if ( (v4 & 4) != 0 || (v14 = **(_QWORD **)(a1 + 80)) == 0 )
    {
      v13 = _xmm;
      LOWORD(v26[0]) = 0;
      v12 = (unsigned __int64 *)v26;
      v20 = v26[0];
      LOWORD(v26[0]) = 0;
      v26[1] = _xmm;
      *a2 = v20;
    }
    else
    {
      v15 = **(const void ***)(a1 + 48);
      v16 = 2LL * **(int **)(a1 + 104);
      LOWORD(v24) = 0;
      v17 = (v14 + v16 - (__int64)v15) >> 1;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      if ( v17 > 7 )
      {
        std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
          (unsigned __int64 *)&v24,
          v17,
          v14,
          v15);
      }
      else
      {
        v18 = 2 * v17;
        si128.m128i_i64[0] = v17;
        memmove(&v24, v15, 2 * v17);
        *(_WORD *)((char *)&v24 + v18) = 0;
      }
      v19 = v24;
      LOWORD(v24) = 0;
      v12 = (unsigned __int64 *)&v24;
      v13 = (__int128)si128;
      *a2 = v19;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 128);
    v7 = _mm_load_si128((const __m128i *)&_xmm);
    if ( v6 < *v5 )
      v6 = *v5;
    v8 = **(const void ***)(a1 + 56);
    LOWORD(v22) = 0;
    v9 = (__int64)(v6 - (_QWORD)v8) >> 1;
    v23 = v7;
    if ( v9 > 7 )
    {
      std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        (unsigned __int64 *)&v22,
        v9,
        a3,
        v8);
    }
    else
    {
      v10 = 2 * v9;
      v23.m128i_i64[0] = v9;
      memmove(&v22, v8, 2 * v9);
      *(_WORD *)((char *)&v22 + v10) = 0;
    }
    v11 = v22;
    LOWORD(v22) = 0;
    v12 = (unsigned __int64 *)&v22;
    v13 = (__int128)v23;
    *a2 = v11;
    v23 = _mm_load_si128((const __m128i *)&_xmm);
  }
  a2[1] = v13;
  std::wstring::~wstring(v12);
  return a2;
}

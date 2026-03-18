/*
 * XREFs of std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize__lambda_de503bca2ec23f17d3532137bfe816e6___ @ 0x18021CDF8
 * Callers:
 *     CalculateDisplayBlankTime @ 0x18021D30C (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_PATH_INFO@@_K1@Z @ 0x18021E5E0 (-_Change_array@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@.c)
 */

unsigned __int64 __fastcall std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize__lambda_de503bca2ec23f17d3532137bfe816e6___(
        __int64 a1,
        unsigned __int64 a2)
{
  _BYTE *v2; // rsi
  _BYTE *v4; // r9
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  char *v12; // r15
  unsigned __int64 v13; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_BYTE **)(a1 + 8);
  v4 = *(_BYTE **)a1;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
  v8 = (v2 - v4) / 72;
  v9 = v6 / 72;
  if ( a2 <= v6 / 72 )
  {
    if ( a2 <= v8 )
    {
      if ( a2 != v8 )
      {
        result = 9 * a2;
        *(_QWORD *)(a1 + 8) = &v4[72 * a2];
      }
    }
    else
    {
      v13 = a2 - v8;
      if ( v13 )
      {
        memset_0(v2, 0, 72 * v13);
        result = 9 * v13;
        v2 += 72 * v13;
      }
      *(_QWORD *)(a1 + 8) = v2;
    }
  }
  else
  {
    if ( a2 > 0x38E38E38E38E38ELL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v10 = v9 >> 1;
    if ( v9 <= 0x38E38E38E38E38ELL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < a2 )
        v11 = a2;
    }
    else
    {
      v11 = a2;
    }
    v12 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v11, 0x48uLL);
    if ( a2 != v8 )
      memset_0(&v12[72 * v8], 0, 72 * (a2 - v8));
    memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<DISPLAYCONFIG_PATH_INFO>::_Change_array(a1, v12, a2, v11);
  }
  return result;
}

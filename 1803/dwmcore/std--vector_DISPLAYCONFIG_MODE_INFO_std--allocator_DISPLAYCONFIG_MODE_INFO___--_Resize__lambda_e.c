/*
 * XREFs of std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize__lambda_ee323788c970fc7c9151a258c0e46d6f___ @ 0x18021CF50
 * Callers:
 *     CalculateDisplayBlankTime @ 0x18021D30C (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K1@Z @ 0x18021E574 (-_Change_array@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@.c)
 */

unsigned __int64 __fastcall std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize__lambda_ee323788c970fc7c9151a258c0e46d6f___(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  char *v9; // rbp
  unsigned __int64 v10; // r8
  char *v11; // rdi
  unsigned __int64 v12; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v5 = (v2 - *(_QWORD *)a1) >> 6;
  result = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6;
  if ( a2 <= result )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + (a2 << 6);
    }
    else
    {
      v12 = a2 - v5;
      if ( a2 != v5 )
      {
        result = (unsigned __int64)memset_0(*(void **)(a1 + 8), 0, v12 << 6);
        v2 += v12 << 6;
      }
      *(_QWORD *)(a1 + 8) = v2;
    }
  }
  else
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = result >> 1;
    if ( result <= 0x3FFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v8 = v7 + result;
      if ( v7 + result < a2 )
        v8 = a2;
    }
    else
    {
      v8 = a2;
    }
    v9 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v8, 0x40uLL);
    v10 = a2 - v5;
    v11 = &v9[64 * v5];
    if ( v10 )
      memset_0(v11, 0, v10 << 6);
    memmove(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array(a1, v9, a2, v8);
  }
  return result;
}

/*
 * XREFs of ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18005ED98
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18005EED8 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x180060638 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_13.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180060730 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060730.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     sprintf_s @ 0x1800CAE70 (sprintf_s.c)
 *     _scprintf @ 0x1800CAF18 (_scprintf.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::to_string(_QWORD *Src, float a2)
{
  int v3; // eax
  unsigned __int64 v4; // rbp
  int v5; // eax
  size_t v6; // rbx
  void *v7; // rsi
  char *v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  _QWORD *v13; // rax
  char *v14; // rbx

  v3 = scprintf("%f", a2);
  v4 = v3;
  v5 = v3 + 1;
  v6 = v5;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  if ( (unsigned __int64)v5 > Src[3] )
  {
    std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_(
      Src,
      v5);
  }
  else
  {
    v7 = Src;
    if ( Src[3] >= 0x10uLL )
      v7 = (void *)*Src;
    Src[2] = v5;
    memset(v7, 0, v5);
    *((_BYTE *)v7 + v6) = 0;
  }
  v8 = (char *)Src;
  if ( Src[3] >= 0x10uLL )
    v8 = (char *)*Src;
  sprintf_s(v8, v6, "%f", a2);
  v9 = Src[2];
  if ( v4 > v9 )
  {
    v11 = v4 - v9;
    v12 = Src[3];
    if ( v4 - v9 > v12 - v9 )
    {
      std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_(Src);
    }
    else
    {
      Src[2] = v4;
      v13 = Src;
      if ( v12 >= 0x10 )
        v13 = (_QWORD *)*Src;
      v14 = (char *)v13 + v9;
      memset((char *)v13 + v9, 0, v4 - v9);
      v14[v11] = 0;
    }
  }
  else
  {
    Src[2] = v4;
    v10 = Src;
    if ( Src[3] >= 0x10uLL )
      v10 = (_QWORD *)*Src;
    *((_BYTE *)v10 + v4) = 0;
  }
  return Src;
}

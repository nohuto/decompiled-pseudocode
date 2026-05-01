/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180017AF8
 * Callers:
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014F90 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000AF10 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000C5CC (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180042950 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180042FEC (memset_0.c)
 */

unsigned __int64 __fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        const void **a1,
        unsigned __int64 a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  size_t v8; // rbx
  _QWORD *v9; // rdi
  void *v10; // rax
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char *v16; // rbx

  v4 = (char *)*a1;
  v5 = (_BYTE *)a1[1] - v4;
  result = (_BYTE *)a1[2] - v4;
  if ( a2 <= result )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
      {
        result = (unsigned __int64)&v4[a2];
        a1[1] = &v4[a2];
      }
    }
    else
    {
      v16 = &v4[a2];
      result = (unsigned __int64)memset_0((void *)a1[1], 0, &v4[a2] - (_BYTE *)a1[1]);
      a1[1] = v16;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
    v7 = result >> 1;
    if ( result <= 0x7FFFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v8 = v7 + result;
      if ( v7 + result < a2 )
        v8 = a2;
    }
    else
    {
      v8 = a2;
    }
    if ( v8 )
    {
      if ( v8 < 0x1000 )
      {
        v9 = operator new(v8);
      }
      else
      {
        if ( v8 + 39 < v8 )
          std::_Default_allocate_traits<1>::_Fail();
        v10 = operator new(v8 + 39);
        v9 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v9 - 1) = v10;
      }
    }
    else
    {
      v9 = 0LL;
    }
    try
    {
      v11 = (char *)v9 + a2;
      memset_0((char *)v9 + v5, 0, v11 - ((char *)v9 + v5));
      memmove(v9, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    }
    catch ( ... )
    {
      std::allocator<unsigned char>::deallocate(v13, (unsigned __int64)v9, v8);
      throw;
    }
    v14 = (unsigned __int64)*a1;
    if ( *a1 )
    {
      if ( (char *)a1[2] - v14 >= (char *)0x1000 )
      {
        if ( (v14 & 0x1F) != 0 || (v15 = *(_QWORD *)(v14 - 8), v15 >= v14) || (v14 = v14 - v15 - 8, v14 > 0x1F) )
        {
          _o__invalid_parameter_noinfo_noreturn(v14, v12);
          __debugbreak();
        }
        v14 = v15;
      }
      operator delete((void *)v14);
    }
    *a1 = v9;
    a1[1] = v11;
    result = (unsigned __int64)v9 + v8;
    a1[2] = (char *)v9 + v8;
  }
  return result;
}

/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18007FE40
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K@Z @ 0x18007B0C8 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0@Z @ 0x18007FFF0 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0@Z.c)
 */

void **__fastcall std::wstring::assign(void **a1, void **a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  void **v7; // rdi
  void **v8; // rbx
  unsigned __int64 v9; // rax
  void *v10; // rax
  void *v11; // rcx
  bool v12; // cf
  void **v13; // rax

  v4 = (unsigned __int64)a2[2];
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v4 < a3 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
  v9 = v4 - a3;
  if ( v9 < a4 )
    v5 = v9;
  if ( a1 == a2 )
  {
    v10 = (void *)(v5 + a3);
    if ( (unsigned __int64)a1[2] < v5 + a3 )
    {
      std::_Xout_of_range("invalid string position");
      __debugbreak();
    }
    a1[2] = v10;
    if ( (unsigned __int64)a1[3] >= 8 )
      a1 = (void **)*a1;
    *((_WORD *)a1 + (_QWORD)v10) = 0;
    std::wstring::erase(v8);
  }
  else if ( std::wstring::_Grow((const void **)a1, v5) )
  {
    if ( (unsigned __int64)v7[3] >= 8 )
      v7 = (void **)*v7;
    if ( (unsigned __int64)v8[3] < 8 )
      v11 = v8;
    else
      v11 = *v8;
    memcpy_0(v11, (char *)v7 + 2 * a3, 2 * v5);
    v12 = (unsigned __int64)v8[3] < 8;
    v8[2] = (void *)v5;
    if ( v12 )
      v13 = v8;
    else
      v13 = (void **)*v8;
    *((_WORD *)v13 + v5) = 0;
  }
  return v8;
}

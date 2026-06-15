/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18007AF1C
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18007AD94 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K@Z @ 0x18007AFF8 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x18007FF7C (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 */

void **__fastcall std::string::assign(void **a1, void **a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rdi
  void **v7; // rsi
  void **v8; // rbx
  size_t v9; // rax
  size_t v10; // rax
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
    v10 = v5 + a3;
    if ( (unsigned __int64)a1[2] < v5 + a3 )
    {
      std::_Xout_of_range("invalid string position");
      __debugbreak();
    }
    a1[2] = (void *)v10;
    if ( (unsigned __int64)a1[3] >= 0x10 )
      a1 = (void **)*a1;
    *((_BYTE *)a1 + v10) = 0;
    std::string::erase(v8);
  }
  else if ( (unsigned __int8)std::string::_Grow(a1, v5) )
  {
    if ( (unsigned __int64)v7[3] >= 0x10 )
      v7 = (void **)*v7;
    if ( (unsigned __int64)v8[3] < 0x10 )
      v11 = v8;
    else
      v11 = *v8;
    memcpy_0(v11, (char *)v7 + a3, v5);
    v12 = (unsigned __int64)v8[3] < 0x10;
    v8[2] = (void *)v5;
    if ( v12 )
      v13 = v8;
    else
      v13 = (void **)*v8;
    *((_BYTE *)v13 + v5) = 0;
  }
  return v8;
}

/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180138450
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180138530 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180138340 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x180138660 (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 */

void **__fastcall std::string::assign(void **a1, void **a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rdi
  void **v6; // rsi
  void **v7; // rbx
  size_t v8; // rdi
  size_t v9; // rax
  bool v10; // cf
  void *v11; // rcx
  void **v12; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (unsigned __int64)a2[2];
  v6 = a2;
  v7 = a1;
  if ( v4 < a3 )
  {
    ModuleFailFastForHRESULT(-2147483637, retaddr);
    __debugbreak();
  }
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 == a2 )
  {
    v9 = v8 + a3;
    if ( (unsigned __int64)a1[2] < v8 + a3 )
    {
      ModuleFailFastForHRESULT(-2147483637, retaddr);
      __debugbreak();
    }
    v10 = (unsigned __int64)a1[3] < 0x10;
    a1[2] = (void *)v9;
    if ( !v10 )
      a1 = (void **)*a1;
    *((_BYTE *)a1 + v9) = 0;
    std::string::erase(v7);
  }
  else if ( std::string::_Grow(a1, v8) )
  {
    if ( (unsigned __int64)v6[3] >= 0x10 )
      v6 = (void **)*v6;
    if ( (unsigned __int64)v7[3] < 0x10 )
      v11 = v7;
    else
      v11 = *v7;
    if ( v8 )
      memcpy_0(v11, (char *)v6 + a3, v8);
    v10 = (unsigned __int64)v7[3] < 0x10;
    v7[2] = (void *)v8;
    if ( v10 )
      v12 = v7;
    else
      v12 = (void **)*v7;
    *((_BYTE *)v12 + v8) = 0;
  }
  return v7;
}

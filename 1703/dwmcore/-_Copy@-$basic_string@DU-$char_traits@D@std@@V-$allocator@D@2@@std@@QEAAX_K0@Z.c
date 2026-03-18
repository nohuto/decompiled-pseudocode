/*
 * XREFs of ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180138230
 * Callers:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180138340 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18013839C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 */

__int64 __fastcall std::string::_Copy(const void **Src, unsigned __int64 a2, size_t a3)
{
  unsigned __int64 v3; // rdi
  const void **v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  void *v8; // rbp
  const void **v9; // rdx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 | 0xF;
  v5 = Src;
  if ( (a2 | 0xF) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v3 = a2;
  }
  else
  {
    v6 = (unsigned __int64)Src[3];
    a2 = v3 / 3;
    v7 = v6 >> 1;
    if ( v6 >> 1 > v3 / 3 )
    {
      v3 = v7 + v6;
      if ( v6 > -2LL - v7 )
        v3 = -2LL;
    }
  }
  v8 = 0LL;
  if ( v3 != -1LL )
  {
    v8 = operator new(v3 + 1);
    if ( !v8 )
    {
      ModuleFailFastForHRESULT(-2147024882, retaddr);
      __debugbreak();
    }
  }
  if ( a3 )
  {
    if ( (unsigned __int64)v5[3] < 0x10 )
      v9 = v5;
    else
      v9 = (const void **)*v5;
    memcpy_0(v8, v9, a3);
  }
  LOBYTE(a2) = 1;
  result = std::string::_Tidy(v5, a2, 0LL);
  if ( v5 )
    *v5 = v8;
  v5[3] = (const void *)v3;
  v5[2] = (const void *)a3;
  if ( v3 >= 0x10 )
    v5 = (const void **)*v5;
  *((_BYTE *)v5 + a3) = 0;
  return result;
}

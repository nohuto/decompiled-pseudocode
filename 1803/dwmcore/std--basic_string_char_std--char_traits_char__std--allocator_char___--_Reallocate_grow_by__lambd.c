/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_ @ 0x1800D3484
 * Callers:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800D30DC (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800D3454 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800D355C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_K_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

const void **__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(
        const void **Src,
        __int64 a2,
        __int64 a3,
        char a4)
{
  size_t v4; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  char *v11; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (size_t)Src[2];
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v7 = (unsigned __int64)Src[3];
  v8 = std::string::_Calculate_growth(Src, v4 + 1);
  v9 = (_BYTE *)std::_Allocate<std::_Default_allocate_traits<1>>(v8 + 1, 1uLL);
  Src[2] = (const void *)(v4 + 1);
  v10 = v9;
  Src[3] = (const void *)v8;
  if ( v7 < 0x10 )
  {
    memcpy_0(v9, Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
  }
  else
  {
    v11 = (char *)*Src;
    memcpy_0(v9, *Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
    std::_Deallocate(v11, v7 + 1, 1uLL);
  }
  *Src = v10;
  return Src;
}

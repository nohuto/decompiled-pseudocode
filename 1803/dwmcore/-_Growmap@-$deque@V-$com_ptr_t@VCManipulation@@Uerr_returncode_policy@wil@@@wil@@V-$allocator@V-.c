/*
 * XREFs of ?_Growmap@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1801CAD28
 * Callers:
 *     ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801CB37C (-push_front@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@.c)
 *     ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801CB440 (-push_front@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_ea_1801CB440.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  char *v6; // r14
  __int64 v7; // r15
  size_t v8; // rbx
  const void *v9; // rdx
  char *v10; // rbx
  size_t v11; // r8
  char *v12; // rcx
  char *v13; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  v6 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v3, 8uLL);
  v7 = 8 * v5;
  v8 = 8LL * a1[2] - 8 * v5;
  memmove(&v6[8 * v5], (const void *)(a1[1] + 8 * v5), v8);
  v9 = (const void *)a1[1];
  v10 = &v6[8 * v5 + v8];
  if ( v5 > v4 )
  {
    memmove(v10, v9, 8 * v4);
    memmove(v6, (const void *)(8 * v4 + a1[1]), v7 - 8 * v4);
    v12 = &v6[v7 - 8 * v4];
    v11 = 8 * v4;
  }
  else
  {
    memmove(v10, v9, 8 * v5);
    memset_0(&v10[v7], 0, 8 * (v4 - v5));
    v11 = 8 * v5;
    v12 = v6;
  }
  memset_0(v12, 0, v11);
  v13 = (char *)a1[1];
  if ( v13 )
    std::_Deallocate(v13, a1[2], 8uLL);
  a1[1] = v6;
  a1[2] += v4;
}

/*
 * XREFs of ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@IEAAXXZ @ 0x1801972A4
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801C96F8 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801C9A80 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18019735C (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdi
  char *v3; // rcx
  char *v4; // rcx

  while ( a1[4] )
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
  v2 = a1[2];
  while ( v2 )
  {
    --v2;
    v3 = *(char **)(a1[1] + 8 * v2);
    if ( v3 )
      std::_Deallocate(v3, 2uLL, 8uLL);
  }
  v4 = (char *)a1[1];
  if ( v4 )
    std::_Deallocate(v4, a1[2], 8uLL);
  a1[2] = 0LL;
  a1[1] = 0LL;
}

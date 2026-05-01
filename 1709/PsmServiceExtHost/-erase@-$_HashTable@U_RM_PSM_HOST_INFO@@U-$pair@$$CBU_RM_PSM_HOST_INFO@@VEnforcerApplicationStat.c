/*
 * XREFs of ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@0@Z @ 0x180006C44
 * Callers:
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C400 (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 **__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v7; // r14
  __int64 **result; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rdx

  v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
  while ( a3 != a4 )
  {
    v10 = a3;
    a3 = (__int64 *)*a3;
    v11 = (__int64 *)v10[1];
    v12 = *v10;
    *v11 = *v10;
    *(_QWORD *)(v12 + 8) = v11;
    v13 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16 * (v7 & v10[2]));
    if ( (__int64 *)*v13 == v10 )
    {
      if ( (__int64 *)v13[1] == v10 )
      {
        *v13 = 0LL;
        v13[1] = 0LL;
      }
      else
      {
        *v13 = *v10;
      }
    }
    else if ( (__int64 *)v13[1] == v10 )
    {
      v13[1] = v10[1];
    }
    operator delete(v10);
    --*(_QWORD *)(a1 + 24);
  }
  result = a2;
  *a2 = a4;
  return result;
}

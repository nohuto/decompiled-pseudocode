/*
 * XREFs of ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@2@@2@0@Z @ 0x18000DCEC
 * Callers:
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180015C48 (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 **__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v7; // rsi
  __int64 **result; // rax
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax

  v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
  while ( a3 != a4 )
  {
    v10 = a3;
    a3 = (__int64 *)*a3;
    v11 = (__int64 **)v10[1];
    *v11 = a3;
    a3[1] = (__int64)v11;
    v12 = *(_QWORD *)(a1 + 16);
    v13 = 2 * (v7 & v10[2]);
    if ( *(__int64 **)(v12 + 16 * (v7 & v10[2])) == v10 )
    {
      if ( *(__int64 **)(v12 + 16 * (v7 & v10[2]) + 8) == v10 )
      {
        *(_QWORD *)(v12 + 16 * (v7 & v10[2]) + 8) = 0LL;
        v14 = 0LL;
      }
      else
      {
        v14 = *v10;
      }
      *(_QWORD *)(v12 + 8 * v13) = v14;
    }
    else if ( *(__int64 **)(v12 + 16 * (v7 & v10[2]) + 8) == v10 )
    {
      *(_QWORD *)(v12 + 16 * (v7 & v10[2]) + 8) = v10[1];
    }
    operator delete(v10);
    --*(_QWORD *)(a1 + 24);
  }
  result = a2;
  *a2 = a4;
  return result;
}

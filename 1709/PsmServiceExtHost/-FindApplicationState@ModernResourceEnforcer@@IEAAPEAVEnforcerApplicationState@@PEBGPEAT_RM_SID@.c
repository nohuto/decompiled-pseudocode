/*
 * XREFs of ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CB94
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C694 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 * Callees:
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180006950 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$_ea_180006950.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18001F09C (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::FindApplicationState(
        ModernResourceEnforcer *this,
        wchar_t *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v7; // rdx
  struct EnforcerApplicationState *result; // rax
  __int64 v9; // [rsp+30h] [rbp-268h] BYREF
  __int64 v10; // [rsp+38h] [rbp-260h] BYREF
  __int64 v11; // [rsp+40h] [rbp-258h] BYREF
  wchar_t Destination[280]; // [rsp+50h] [rbp-248h] BYREF

  RmpPsmAppInstanceIdInitialize(Destination, a2, a3, a4, a5, a6);
  this = (ModernResourceEnforcer *)((char *)this + 304);
  v9 = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (__int64)this,
    v7,
    (unsigned __int64)Destination,
    &v9,
    &v11,
    &v10);
  result = (struct EnforcerApplicationState *)(v9 + 576);
  if ( (ModernResourceEnforcer *)v9 == this )
    return 0LL;
  return result;
}

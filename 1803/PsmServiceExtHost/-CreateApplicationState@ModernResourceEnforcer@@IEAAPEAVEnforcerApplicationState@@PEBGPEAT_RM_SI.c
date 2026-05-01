/*
 * XREFs of ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x180016170
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x180016110 (-FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT.c)
 * Callees:
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18000B6F0 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ??$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAVEnforcerApplicationState@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@1@AEAU_RM_PSM_HOST_INFO@@AEAVEnforcerApplicationState@@@Z @ 0x18000D91C (--$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAVEnforcerApplicationState@@@-$_HashTable@U_RM_PSM.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@2@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18000DDAC (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::CreateApplicationState(
        ModernResourceEnforcer *this,
        wchar_t *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v7; // rcx
  __int64 *Block; // rax
  __int64 v9; // r8
  struct EnforcerApplicationState *result; // rax
  _BYTE v11[2]; // [rsp+30h] [rbp-268h] BYREF
  __int16 v12; // [rsp+32h] [rbp-266h]
  int v13[2]; // [rsp+38h] [rbp-260h] BYREF
  wchar_t Destination[280]; // [rsp+50h] [rbp-248h] BYREF

  v11[0] = 0;
  v12 = -1;
  RmpPsmAppInstanceIdInitialize(Destination, a2, a3, a4, a5, a6);
  Block = (__int64 *)utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_NewNodeConstruct<_RM_PSM_HOST_INFO &,EnforcerApplicationState &>(
                       v7,
                       Destination,
                       (__int64)v11);
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EmplaceImpl(
    (__int64)this + 320,
    (__int64)v13,
    v9,
    0LL,
    Block);
  result = (struct EnforcerApplicationState *)(*(_QWORD *)v13 + 576LL);
  if ( *(_QWORD *)v13 == -576LL )
    __fastfail(0x80004003);
  return result;
}

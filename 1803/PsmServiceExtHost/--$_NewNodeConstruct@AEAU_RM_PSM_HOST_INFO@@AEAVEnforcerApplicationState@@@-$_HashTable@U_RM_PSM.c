/*
 * XREFs of ??$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAVEnforcerApplicationState@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@1@AEAU_RM_PSM_HOST_INFO@@AEAVEnforcerApplicationState@@@Z @ 0x18000D91C
 * Callers:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x180016170 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_NewNodeConstruct<_RM_PSM_HOST_INFO &,EnforcerApplicationState &>(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  char *v5; // rax
  char *v6; // rdx
  _OWORD *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm1

  v5 = (char *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = v5 + 24;
  v8 = 4LL;
  do
  {
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    v7[5] = a2[5];
    v7[6] = a2[6];
    v7 += 8;
    v9 = a2[7];
    a2 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *a2;
  v7[1] = a2[1];
  *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
  v6[576] = *(_BYTE *)a3;
  *((_WORD *)v6 + 289) = *(_WORD *)(a3 + 2);
  return v6;
}

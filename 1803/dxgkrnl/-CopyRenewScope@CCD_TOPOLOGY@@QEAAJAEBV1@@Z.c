/*
 * XREFs of ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02296CC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C0228A04 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B2288 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00B409C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00B41DC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyRenewScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  _DWORD *v6[3]; // [rsp+20h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int16 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+68h] [rbp-8h]

  v4 = CCD_TOPOLOGY::CopyInheritScope(this, a2);
  if ( v4 >= 0 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v10 = 0LL;
    v11 = 0;
    CCD_BTL::Global(v3);
    v6[0] = &v7;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v4 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v6);
    if ( v4 >= 0 )
      v4 = CCD_TOPOLOGY::SetConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v7);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v7);
  }
  return (unsigned int)v4;
}

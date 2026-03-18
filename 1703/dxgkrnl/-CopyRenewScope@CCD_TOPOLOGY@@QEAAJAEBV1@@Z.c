/*
 * XREFs of ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DE30C
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00EB9B0 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00ED2FC (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyRenewScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v11[3]; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  __int16 v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+68h] [rbp-8h]

  v5 = CCD_TOPOLOGY::CopyInheritScope(this, a2);
  if ( v5 >= 0 )
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v15 = 0LL;
    v16 = 0;
    CCD_BTL::Global(v4, v3, v6, v7);
    v11[0] = &v12;
    v11[1] = 0LL;
    v11[2] = 0LL;
    v5 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v11);
    if ( v5 >= 0 )
      v5 = CCD_TOPOLOGY::SetConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v12, v8, v9);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v12);
  }
  return (unsigned int)v5;
}

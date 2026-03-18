/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01028B0
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0101D00 (DxgkProcessDisplayCalloutBatch.c)
 *     DxgkPollDisplayChildren @ 0x1C0180A30 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DxgkSetPresenterViewMode @ 0x1C00F9610 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4928 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  struct _LUID v6; // rbx
  __int64 v9; // rcx
  bool v11; // zf
  int v12; // eax
  char v13; // r12
  __int64 v15; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  struct _LUID v18; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-85h]
  __int64 v21; // [rsp+40h] [rbp-81h]
  int v22; // [rsp+48h] [rbp-79h]
  int v23; // [rsp+4Ch] [rbp-75h]
  int v24; // [rsp+50h] [rbp-71h]
  __int16 v25; // [rsp+54h] [rbp-6Dh]
  char v26; // [rsp+56h] [rbp-6Bh]
  unsigned int v27; // [rsp+58h] [rbp-69h]
  _QWORD v28[12]; // [rsp+60h] [rbp-61h] BYREF

  v23 = -1;
  v5 = 0;
  v19 = 0;
  v6 = a1;
  v27 = 0;
  *(_BYTE *)a5 |= 2u;
  v18 = a1;
  v9 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v22 = 0;
  v24 = 257;
  v25 = 0;
  v26 = 0;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_19;
  if ( a3 == 10 )
  {
    if ( a4 != 2 )
    {
      v11 = a4 == 1;
      goto LABEL_7;
    }
LABEL_19:
    DxgkSetPresenterViewMode(0LL, 0);
    v12 = HandleMonitorDepartureCase(&v19, &v18, a2, a3, a4, a5 + 24);
    goto LABEL_9;
  }
  if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
    goto LABEL_8;
  v11 = a3 == 3;
LABEL_7:
  if ( v11 )
  {
LABEL_8:
    DxgkSetPresenterViewMode(0LL, 0);
    v12 = HandleMonitorArrival(&v19, &v18, a2, a3, a4, a5 + 24);
    v6 = v18;
    goto LABEL_9;
  }
  if ( a3 != 6 )
    goto LABEL_11;
  if ( a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v15 + 24) = 4343LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v12 = HandleRapidHPDAction(
          (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v19,
          &v18,
          a2,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
LABEL_9:
  v5 = v12;
  if ( v12 < 0 )
  {
LABEL_37:
    v13 = BYTE1(v24);
    goto LABEL_16;
  }
  v9 = v20;
LABEL_11:
  if ( !(_DWORD)v9 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v6, (unsigned __int64 *)&v18);
    if ( v17 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *((_BYTE *)v17 + 2208)))) & 0x10;
      DXGADAPTER::ReleaseReferenceNoTracking(v17);
    }
  }
  if ( a3 || a4 != 1 )
    v9 = 0LL;
  else
    LOBYTE(v9) = 32;
  LOBYTE(v9) = v9 & 0x20;
  *(_BYTE *)a5 |= v9;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v9) + 1617) )
    goto LABEL_37;
  v13 = BYTE1(v24);
  *(_BYTE *)a5 = (v26 != 0 ? 0x40 : 0) | *(_BYTE *)a5 & 0xBF | (BYTE1(v24) != 0 ? 4 : 0) | ((_BYTE)v25 != 0 ? 8 : 0);
LABEL_16:
  memset(v28, 0, sizeof(v28));
  memset(&v28[1], 0, 36);
  v28[0] = 0x6000000002LL;
  HIDWORD(v28[6]) = a3;
  v28[7] = a4;
  v28[11] = __PAIR64__(v20, v21);
  LODWORD(v28[6]) = v13 & 1 | (4 * (BYTE2(v24) & 1 | (2 * (HIBYTE(v24) & 1))));
  v28[8] = v6;
  v28[9] = __PAIR64__(v27, a2);
  v28[10] = __PAIR64__(v19, v5);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28);
  return v5;
}

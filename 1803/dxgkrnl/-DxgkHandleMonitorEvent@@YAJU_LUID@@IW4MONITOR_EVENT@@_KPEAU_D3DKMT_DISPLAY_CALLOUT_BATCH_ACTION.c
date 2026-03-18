/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01C50F8
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C01683B0 (DxgkPollDisplayChildren.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C01C78A0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DxgkSetPresenterViewMode @ 0x1C00DEE40 (DxgkSetPresenterViewMode.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C6B98 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  __int64 v9; // rcx
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  char v16; // r12
  char v17; // cl
  unsigned int v19; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-8Dh]
  __int64 v21; // [rsp+38h] [rbp-89h]
  int v22; // [rsp+40h] [rbp-81h]
  int v23; // [rsp+44h] [rbp-7Dh]
  int v24; // [rsp+48h] [rbp-79h]
  __int16 v25; // [rsp+4Ch] [rbp-75h]
  char v26; // [rsp+4Eh] [rbp-73h]
  unsigned int v27; // [rsp+50h] [rbp-71h]
  struct _LUID v28; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v29[12]; // [rsp+60h] [rbp-61h] BYREF

  v23 = -1;
  v5 = 0;
  v19 = 0;
  v27 = 0;
  *(_BYTE *)a5 |= 2u;
  v28 = a1;
  v9 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v22 = 0;
  v24 = 257;
  v25 = 0;
  v26 = 0;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_8:
      DxgkSetPresenterViewMode(0LL, 0);
      v11 = HandleMonitorDepartureCase(&v19, &v28, a2, a3, a4, a5 + 24);
      goto LABEL_22;
    }
    v12 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_21;
    v12 = a3 == 3;
  }
  if ( v12 )
  {
LABEL_21:
    DxgkSetPresenterViewMode(0LL, 0);
    v11 = HandleMonitorArrival(&v19, &v28, a2, a3, a4, a5 + 24);
    goto LABEL_22;
  }
  if ( a3 != 6 )
    goto LABEL_24;
  if ( a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v13 + 24) = 4314LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v11 = HandleRapidHPDAction(
          (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v19,
          &v28,
          a2,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
LABEL_22:
  v5 = v11;
  if ( v11 < 0 )
  {
LABEL_33:
    v16 = BYTE1(v24);
    goto LABEL_34;
  }
  v9 = v20;
LABEL_24:
  if ( !(_DWORD)v9 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v28);
    if ( v15 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *((_BYTE *)v15 + 2352)))) & 0x10;
      DXGADAPTER::ReleaseReferenceNoTracking(v15);
    }
  }
  if ( a3 || a4 != 1 )
    LOBYTE(v9) = 0;
  else
    LOBYTE(v9) = 32;
  LOBYTE(v9) = v9 & 0x20;
  *(_BYTE *)a5 |= v9;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v9) + 1745) )
    goto LABEL_33;
  v16 = BYTE1(v24);
  v17 = *(_BYTE *)a5 | (BYTE1(v24) != 0 ? 4 : 0);
  *(_BYTE *)a5 = (v26 != 0 ? 0x40 : 0) | (v17 ^ (v17 ^ (v17 | ((_BYTE)v25 != 0 ? 8 : 0))) & 8) & 0xBF;
LABEL_34:
  memset(v29, 0, sizeof(v29));
  memset(&v29[1], 0, 36);
  v29[0] = 0x6000000002LL;
  HIDWORD(v29[6]) = a3;
  v29[7] = a4;
  v29[11] = __PAIR64__(v20, v21);
  LODWORD(v29[6]) = v16 & 1 | (4 * (BYTE2(v24) & 1 | (2 * (HIBYTE(v24) & 1))));
  v29[8] = a1;
  v29[9] = __PAIR64__(v27, a2);
  v29[10] = __PAIR64__(v19, v5);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
  return v5;
}

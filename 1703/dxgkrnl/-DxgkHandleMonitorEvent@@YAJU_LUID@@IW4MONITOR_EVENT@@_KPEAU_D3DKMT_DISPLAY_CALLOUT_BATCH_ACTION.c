/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C017D060 (DxgkPollDisplayChildren.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C01AB7E0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkSetPresenterViewMode @ 0x1C00A5D50 (DxgkSetPresenterViewMode.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAB1C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r13d
  struct _LUID v8; // rbx
  unsigned int v9; // r15d
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rax
  DXGGLOBAL *Global; // rax
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rax
  char v16; // cl
  char v17; // dl
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _LUID v23; // [rsp+30h] [rbp-91h] BYREF
  __int64 v24; // [rsp+38h] [rbp-89h] BYREF
  __int64 v25; // [rsp+40h] [rbp-81h]
  int v26; // [rsp+48h] [rbp-79h]
  int v27; // [rsp+4Ch] [rbp-75h]
  int v28; // [rsp+50h] [rbp-71h]
  __int16 v29; // [rsp+54h] [rbp-6Dh]
  unsigned int v30; // [rsp+58h] [rbp-69h]
  _QWORD v31[12]; // [rsp+60h] [rbp-61h] BYREF

  v27 = -1;
  v23 = (struct _LUID)a1;
  v24 = 0LL;
  *(_BYTE *)a5 |= 2u;
  v25 = 0LL;
  v7 = a2;
  v26 = 0;
  v8 = (struct _LUID)a1;
  v28 = 257;
  v9 = 0;
  v29 = 0;
  v30 = 0;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_8:
      DxgkSetPresenterViewMode(0, 0);
      v10 = HandleMonitorDepartureCase(&v24, &v23, v7, a3, a4, a5 + 40);
      goto LABEL_22;
    }
    v11 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_21;
    v11 = a3 == 3;
  }
  if ( v11 )
  {
LABEL_21:
    DxgkSetPresenterViewMode(0, 0);
    v10 = HandleMonitorArrival(&v24, &v23, v7, a3, a4, a5 + 40);
    v8 = v23;
    goto LABEL_22;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      v12 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
      *(_QWORD *)(v12 + 24) = 4927LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v10 = HandleRapidHPDAction(
            (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v24,
            &v23,
            v7,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 40));
LABEL_22:
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_30;
  }
  if ( !HIDWORD(v24) )
  {
    Global = DXGGLOBAL::GetGlobal(a1, a2, 0LL, a4);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v8, (unsigned __int64 *)&v23, v14);
    if ( v15 )
    {
      *(_BYTE *)a5 |= 16 * (*((_BYTE *)v15 + 2184) & 1);
      DXGADAPTER::ReleaseReference(v15);
    }
  }
  v16 = *(_BYTE *)a5 ^ (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (4 * (BYTE1(v28) != 0)))) & 4;
  v17 = v16 ^ (v16 ^ (v16 | (8 * ((_BYTE)v29 != 0)))) & 8;
  *(_BYTE *)a5 = v17;
  if ( a3 || (v18 = 1, a4 != 1) )
    v18 = 0;
  *(_BYTE *)a5 = v17 ^ (v17 ^ (v17 | (32 * v18))) & 0x20;
LABEL_30:
  memset(v31, 0, sizeof(v31));
  memset(&v31[1], 0, 36);
  v31[0] = 0x6000000002LL;
  HIDWORD(v31[6]) = a3;
  v31[11] = __PAIR64__(HIDWORD(v24), v25);
  LODWORD(v31[6]) = BYTE1(v28) & 1 | (4 * (BYTE2(v28) & 1 | (2 * (HIBYTE(v28) & 1))));
  v31[7] = a4;
  v31[8] = v8;
  v31[9] = __PAIR64__(v30, v7);
  v31[10] = __PAIR64__(v24, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, v19, v20, v21);
  return v9;
}

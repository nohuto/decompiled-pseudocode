/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01AAF40
 * Callers:
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C008D03C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(
        __int64 a1,
        struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  _QWORD *v15; // rax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v24[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v26[40]; // [rsp+58h] [rbp-30h] BYREF

  v4 = a3;
  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2, a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v23, v8);
  v14 = (__int64)v9;
  if ( !v9 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v15[3] = 0LL;
    v15[4] = a2->HighPart;
    v15[5] = a2->LowPart;
    return 3223191554LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v9, 0LL);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
  if ( v17 >= 0 )
  {
    MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, v14, v4);
    goto LABEL_7;
  }
  if ( v17 == -1073741130 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    v22[3] = v14;
    v22[4] = *(int *)(v14 + 272);
    v22[5] = *(unsigned int *)(v14 + 268);
LABEL_7:
    v17 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v26);
  COREACCESS::~COREACCESS((COREACCESS *)v25);
  return (unsigned int)v17;
}

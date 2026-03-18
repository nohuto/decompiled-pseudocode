/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01A9808
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v7; // r9
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // di
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v33[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v34[40]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v35; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2, a3, a4);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v36, v7);
  v11 = v8;
  if ( !v8 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 3355LL;
    WdLogEvent5_WdError(v12);
    return 0;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v8, 0LL);
  v14 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
  DXGADAPTER::ReleaseReference(v11);
  if ( (int)v14 >= 0 )
  {
    v20 = *((_QWORD *)v11 + 285);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 88);
      if ( v21 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v35, *(_QWORD *)(v20 + 88), v17, v18);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
        v23 = *(_QWORD *)(v21 + 80);
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v23,
                       (unsigned int)v4,
                       v24,
                       v25);
        if ( TargetById )
        {
          v22 = *((_BYTE *)TargetById + 397);
        }
        else
        {
          v31 = WdLogNewEntry5_WdError(v28, v27);
          *(_QWORD *)(v31 + 24) = v4;
          *(_QWORD *)(v31 + 32) = v11;
          WdLogEvent5_WdError(v31);
          v22 = 0;
        }
        if ( v23 )
          ReferenceCounted::Release((ReferenceCounted *)(v23 + 64), v27);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40), v27, v29, v30);
        goto LABEL_15;
      }
    }
    v19 = WdLogNewEntry5_WdError(v16, v15);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v19 + 32) = v14;
  }
  *(_QWORD *)(v19 + 24) = v11;
  WdLogEvent5_WdError(v19);
  v22 = 0;
LABEL_15:
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  return v22;
}

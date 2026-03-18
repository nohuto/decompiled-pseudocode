/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01C53A8
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

unsigned __int8 __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  DXGADAPTER *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h]
  _BYTE v25[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v26[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v27[40]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v29; // [rsp+B8h] [rbp+38h] BYREF

  v24 = 0LL;
  v4 = a2;
  v23 = 2180;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2180);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2180);
  Global = DXGGLOBAL::GetGlobal(v5);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v29);
  v9 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v7, 0LL);
    v11 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
    if ( (int)v11 >= 0 )
    {
      v14 = *((_QWORD *)v9 + 307);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 88);
        if ( v15 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, *(_QWORD *)(v14 + 88));
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
          v16 = *(_QWORD *)(v15 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, v4);
          if ( TargetById )
          {
            LOBYTE(v9) = *((_BYTE *)TargetById + 397);
          }
          else
          {
            v19 = WdLogNewEntry5_WdError(v18);
            *(_QWORD *)(v19 + 24) = v4;
            *(_QWORD *)(v19 + 32) = v9;
            WdLogEvent5_WdError(v19);
            LOBYTE(v9) = 0;
          }
          if ( v16 )
            ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
          goto LABEL_18;
        }
      }
      v13 = WdLogNewEntry5_WdError(v12);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 32) = v11;
    }
    *(_QWORD *)(v13 + 24) = v9;
    WdLogEvent5_WdError(v13);
    LOBYTE(v9) = 0;
LABEL_18:
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    COREACCESS::~COREACCESS((COREACCESS *)v26);
    goto LABEL_19;
  }
  v10 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v10 + 24) = 2774LL;
  WdLogEvent5_WdError(v10);
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return (unsigned __int8)v9;
}

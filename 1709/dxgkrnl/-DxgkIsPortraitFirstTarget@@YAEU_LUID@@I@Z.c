/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C01C4258
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2)
{
  __int64 v2; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rcx
  DXGADAPTER *v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  char v15; // di
  volatile signed __int32 *v16; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  int v21; // ebx
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v24[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v25[40]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v27);
  v7 = v5;
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 2747LL;
    WdLogEvent5_WdError(v8);
    return 0;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v5, 0LL);
  v10 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
  DXGADAPTER::ReleaseReferenceNoTracking(v7);
  if ( (int)v10 >= 0 )
  {
    v13 = *((_QWORD *)v7 + 288);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 88);
      if ( v14 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, *(_QWORD *)(v13 + 88));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
        v16 = *(volatile signed __int32 **)(v14 + 80);
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, v2);
        if ( TargetById )
        {
          v15 = *((_BYTE *)TargetById + 397);
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v19 + 24) = v2;
          *(_QWORD *)(v19 + 32) = v7;
          WdLogEvent5_WdError(v19);
          v15 = 0;
        }
        if ( v16 )
        {
          v20 = (void (__fastcall ***)(_QWORD, __int64))(v16 + 16);
          v21 = _InterlockedDecrement(v16 + 18);
          if ( v21 )
          {
            if ( v21 < 0 )
            {
              v22 = WdLogNewEntry5_WdError(v20);
              *(_QWORD *)(v22 + 24) = v21;
              WdLogEvent5_WdError(v22);
            }
          }
          else if ( v20 )
          {
            (**v20)(v20, 1LL);
          }
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
        goto LABEL_19;
      }
    }
    v12 = WdLogNewEntry5_WdError(v11);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 32) = v10;
  }
  *(_QWORD *)(v12 + 24) = v7;
  WdLogEvent5_WdError(v12);
  v15 = 0;
LABEL_19:
  COREACCESS::~COREACCESS((COREACCESS *)v25);
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  return v15;
}

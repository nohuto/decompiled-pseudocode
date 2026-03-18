/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C008BCF8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C008BE70 (MonitorFillMonitorDeviceInfo.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rsi
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  _QWORD *v27; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  __int64 v29; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _BYTE v36[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v37[32]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v38[80]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+10h] BYREF

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal();
    v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), &v40);
    v11 = v6;
    if ( v6 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v6, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
      DXGADAPTER::ReleaseReference(v11);
      if ( v12 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        v32[3] = v11;
        v32[4] = *((int *)v11 + 68);
        v32[5] = *((unsigned int *)v11 + 67);
        WdLogEvent5_WdWarning(v32);
        v12 = -1073741811;
      }
      else
      {
        v17 = *((_QWORD *)v11 + 285);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v39, v18, v15, v16);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
          v19 = *(_QWORD **)(v18 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v19,
                         *((unsigned int *)a1 + 4),
                         v20,
                         v21);
          if ( TargetById )
          {
            v27 = (_QWORD *)v19[3];
            if ( v27 == v19 + 3 )
              NextTarget = 0LL;
            else
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v27 - 1);
            for ( ;
                  NextTarget != TargetById;
                  NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                 (DMMVIDEOPRESENTTARGETSET *)v19,
                                 NextTarget,
                                 v24,
                                 v25) )
            {
              if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)TargetById + 20) )
                ++*((_DWORD *)a1 + 8);
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)TargetById + 20);
            v29 = *((_QWORD *)TargetById + 13);
            if ( v29 )
              v12 = MonitorFillMonitorDeviceInfo(v29, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
            v12 = -1073741811;
            v34[3] = *((unsigned int *)a1 + 4);
            v34[4] = a1;
            v34[5] = v11;
          }
          if ( v19 )
            ReferenceCounted::Release((ReferenceCounted *)(v19 + 8), v22);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39 + 40), v22, v24, v25);
        }
        else
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          v33[3] = v11;
          v33[4] = *((int *)v11 + 68);
          v33[5] = *((unsigned int *)v11 + 67);
          WdLogEvent5_WdWarning(v33);
          v12 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      return (unsigned int)v12;
    }
    else
    {
      v31 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      *(_QWORD *)(v31 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v31 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v35 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v35 + 24) = a1;
    WdLogEvent5_WdWarning(v35);
    return 3221225485LL;
  }
}

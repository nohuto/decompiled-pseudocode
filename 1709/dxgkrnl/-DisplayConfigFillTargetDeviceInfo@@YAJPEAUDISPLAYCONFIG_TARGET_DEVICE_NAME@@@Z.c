/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00F326C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C00F3400 (MonitorFillMonitorDeviceInfo.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rsi
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  int v17; // edx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DMMVIDEOPRESENTTARGET *v21; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  int v26; // ebx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v35[32]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v36[80]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+18h]

  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 36, 0, 0x180uLL);
    *((_DWORD *)a1 + 6) = -1;
    Global = DXGGLOBAL::GetGlobal(v4);
    v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a1 + 8), &v38);
    v9 = v6;
    if ( v6 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v6, 0LL);
      v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
      DXGADAPTER::ReleaseReferenceNoTracking(v9);
      if ( v10 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v29[3] = v9;
        v29[4] = *((int *)v9 + 68);
        v29[5] = *((unsigned int *)v9 + 67);
        WdLogEvent5_WdWarning(v29);
        v10 = -1073741811;
      }
      else
      {
        v14 = *((_QWORD *)v9 + 288);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v37, v15);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
          v16 = *(_QWORD *)(v15 + 80);
          v17 = *((_DWORD *)a1 + 4);
          v39 = v16;
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, v17);
          v21 = TargetById;
          if ( TargetById )
          {
            NextTarget = 0LL;
            v23 = *(_QWORD *)(v16 + 24);
            if ( v23 != v16 + 24 )
              NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v23 - 8);
            if ( NextTarget != TargetById )
            {
              do
              {
                if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)v21 + 20) )
                  ++*((_DWORD *)a1 + 8);
                NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v16, NextTarget);
              }
              while ( NextTarget != v21 );
            }
            *((_DWORD *)a1 + 6) = *((_DWORD *)v21 + 20);
            v24 = *((_QWORD *)v21 + 13);
            if ( v24 )
              v10 = MonitorFillMonitorDeviceInfo(v24, a1);
            else
              *((_DWORD *)a1 + 5) |= 2u;
          }
          else
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
            v10 = -1073741811;
            v31[3] = *((unsigned int *)a1 + 4);
            v31[4] = a1;
            v31[5] = v9;
          }
          if ( v16 )
          {
            v25 = (void (__fastcall ***)(_QWORD, __int64))(v16 + 64);
            v26 = _InterlockedDecrement((volatile signed __int32 *)(v16 + 72));
            if ( v26 )
            {
              if ( v26 < 0 )
              {
                v32 = WdLogNewEntry5_WdError(v25);
                *(_QWORD *)(v32 + 24) = v26;
                WdLogEvent5_WdError(v32);
              }
            }
            else if ( v25 )
            {
              (**v25)(v25, 1LL);
            }
          }
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
          v30[3] = v9;
          v30[4] = *((int *)v9 + 68);
          v30[5] = *((unsigned int *)v9 + 67);
          WdLogEvent5_WdWarning(v30);
          v10 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      return (unsigned int)v10;
    }
    else
    {
      v28 = WdLogNewEntry5_WdTrace(v8, v7);
      *(_QWORD *)(v28 + 24) = *((int *)a1 + 3);
      *(_QWORD *)(v28 + 32) = *((unsigned int *)a1 + 2);
      return 3223191554LL;
    }
  }
  else
  {
    v33 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdWarning(v33);
    return 3221225485LL;
  }
}

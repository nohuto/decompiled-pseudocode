/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00F8964
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
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rsi
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rbx
  int LowPart; // edx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  int v21; // ebx
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v30[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v31[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v32; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp+10h] BYREF
  volatile signed __int32 *v34; // [rsp+A0h] [rbp+18h]

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], &v33);
    v8 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
      v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
      DXGADAPTER::ReleaseReferenceNoTracking(v8);
      if ( v9 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v24[3] = v8;
        v24[4] = *((int *)v8 + 68);
        v24[5] = *((unsigned int *)v8 + 67);
        WdLogEvent5_WdWarning(v24);
        v9 = -1073741811;
      }
      else
      {
        v13 = *((_QWORD *)v8 + 288);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v32, v14);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
          v15 = *(volatile signed __int32 **)(v14 + 80);
          LowPart = a1[2].LowPart;
          v34 = v15;
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
            v9 = -1073741811;
            v26[3] = a1[2].LowPart;
            v26[4] = a1;
            v26[5] = v8;
          }
          if ( v15 )
          {
            v20 = (void (__fastcall ***)(_QWORD, __int64))(v15 + 16);
            v21 = _InterlockedDecrement(v15 + 18);
            if ( v21 )
            {
              if ( v21 < 0 )
              {
                v27 = WdLogNewEntry5_WdError(v20);
                *(_QWORD *)(v27 + 24) = v21;
                WdLogEvent5_WdError(v27);
              }
            }
            else if ( v20 )
            {
              (**v20)(v20, 1LL);
            }
          }
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
        }
        else
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
          v25[3] = v8;
          v25[4] = *((int *)v8 + 68);
          v25[5] = *((unsigned int *)v8 + 67);
          WdLogEvent5_WdWarning(v25);
          v9 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      return (unsigned int)v9;
    }
    else
    {
      v23 = WdLogNewEntry5_WdTrace(v7, v6);
      *(_QWORD *)(v23 + 24) = a1[1].HighPart;
      *(_QWORD *)(v23 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdWarning(v28);
    return 3221225485LL;
  }
}

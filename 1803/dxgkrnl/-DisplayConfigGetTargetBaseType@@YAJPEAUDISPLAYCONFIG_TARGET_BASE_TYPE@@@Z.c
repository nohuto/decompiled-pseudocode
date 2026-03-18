/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01114C0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGADAPTER *v10; // rsi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  _BYTE v29[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v30[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v31[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v32; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp+10h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], &v33);
    v10 = v5;
    if ( v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
      v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
      DXGADAPTER::ReleaseReferenceNoTracking(v10);
      if ( v11 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
        v25[3] = v10;
        v25[4] = *((int *)v10 + 68);
        v25[5] = *((unsigned int *)v10 + 67);
        WdLogEvent5_WdWarning(v25);
        v11 = -1073741811;
      }
      else
      {
        v15 = *((_QWORD *)v10 + 307);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v16);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 72LL));
          v17 = *(_QWORD *)(v16 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
            v11 = -1073741811;
            v27[3] = a1[2].LowPart;
            v27[4] = a1;
            v27[5] = v10;
          }
          if ( v17 )
            ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
        }
        else
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v26[3] = v10;
          v26[4] = *((int *)v10 + 68);
          v26[5] = *((unsigned int *)v10 + 67);
          WdLogEvent5_WdWarning(v26);
          v11 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      return (unsigned int)v11;
    }
    else
    {
      v24 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      *(_QWORD *)(v24 + 24) = a1[1].HighPart;
      *(_QWORD *)(v24 + 32) = a1[1].LowPart;
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

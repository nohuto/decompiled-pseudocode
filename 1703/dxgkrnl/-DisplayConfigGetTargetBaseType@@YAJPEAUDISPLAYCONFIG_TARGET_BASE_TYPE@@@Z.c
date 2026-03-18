/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00A580C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
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

__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  _BYTE v33[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v34[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v35[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v36; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp+10h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal();
    v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], &v37);
    v11 = v6;
    if ( v6 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v6, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33);
      DXGADAPTER::ReleaseReference(v11);
      if ( v12 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        v29[3] = v11;
        v29[4] = *((int *)v11 + 68);
        v29[5] = *((unsigned int *)v11 + 67);
        WdLogEvent5_WdWarning(v29);
        v12 = -1073741811;
      }
      else
      {
        v17 = *((_QWORD *)v11 + 285);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v36, v18, v15, v16);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
          v19 = *(_QWORD *)(v18 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v19, a1[2].LowPart, v20, v21);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
            v12 = -1073741811;
            v31[3] = a1[2].LowPart;
            v31[4] = a1;
            v31[5] = v11;
          }
          if ( v19 )
            ReferenceCounted::Release((ReferenceCounted *)(v19 + 64), v23);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40), v23, v25, v26);
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
          v30[3] = v11;
          v30[4] = *((int *)v11 + 68);
          v30[5] = *((unsigned int *)v11 + 67);
          WdLogEvent5_WdWarning(v30);
          v12 = -1073741637;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      COREACCESS::~COREACCESS((COREACCESS *)v34);
      return (unsigned int)v12;
    }
    else
    {
      v28 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      *(_QWORD *)(v28 + 24) = a1[1].HighPart;
      *(_QWORD *)(v28 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v32 + 24) = a1;
    WdLogEvent5_WdWarning(v32);
    return 3221225485LL;
  }
}

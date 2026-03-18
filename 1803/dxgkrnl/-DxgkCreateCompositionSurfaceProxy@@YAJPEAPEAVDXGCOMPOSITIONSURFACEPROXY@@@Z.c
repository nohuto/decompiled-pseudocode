/*
 * XREFs of ?DxgkCreateCompositionSurfaceProxy@@YAJPEAPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01BE054
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAX0@Z @ 0x1C01BE244 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJPEAX0@Z.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAPEAX0@Z @ 0x1C01E80C0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAPEAX0@Z.c)
 */

__int64 __fastcall DxgkCreateCompositionSurfaceProxy(struct DXGCOMPOSITIONSURFACEPROXY **a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rdx
  DXGCOMPOSITIONSURFACEPROXY *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _BYTE v29[40]; // [rsp+20h] [rbp-28h] BYREF
  void *v30; // [rsp+58h] [rbp+10h] BYREF
  void *v31; // [rsp+60h] [rbp+18h] BYREF

  v31 = 0LL;
  LODWORD(v3) = 0;
  v30 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  if ( *((_DWORD *)Current + 98) && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
  {
    if ( !*((_BYTE *)Current + 448) )
    {
      v3 = -2147483611LL;
LABEL_15:
      v18 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v18 + 24) = v3;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_16;
    }
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9) + 74);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v17 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionDataForSpecifiedSession, &v31, &v30);
      v3 = v17;
      if ( v17 < 0 )
        goto LABEL_15;
    }
    else
    {
      LODWORD(v3) = -1073741811;
      v15 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v16);
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  if ( (int)v3 >= 0 )
  {
    v19 = operator new(0x20uLL, 0x4B677844u, 1, PagedPool);
    if ( v19 )
    {
      *v19 = 0;
      v19[1] = 1;
      *((_BYTE *)v19 + 8) = 0;
      *((_QWORD *)v19 + 2) = 0LL;
      *((_QWORD *)v19 + 3) = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    if ( !v19 )
    {
      LODWORD(v3) = -1073741801;
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      WdLogEvent5_WdWarning(v23);
    }
    if ( (int)v3 >= 0 )
    {
      v24 = DXGCOMPOSITIONSURFACEPROXY::Initialize(v21, v31, v30);
      v3 = v24;
      if ( v24 < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v28 + 24) = v3;
        WdLogEvent5_WdWarning(v28);
      }
    }
  }
  *a1 = 0LL;
  return (unsigned int)v3;
}

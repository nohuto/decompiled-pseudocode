/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00DDAE8
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00A6B30 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C000D9AC (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00FADC0 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C01B0B44 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGSESSIONDATA *v15; // rax
  DXGSESSIONDATA *v16; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v26[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, this, v7, v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGSESSIONMGR *)((char *)this + 80), v9, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v5 = DXGSESSIONMGR::IncreaseNumSessions(this, CurrentProcessSessionId);
    if ( v5 < 0 )
      goto LABEL_12;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v21 + 24) = 3409LL;
      WdLogEvent5_WdAssertion(v21);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v22 + 24) = 3410LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
  {
    v23 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v23 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v23 + 32) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v23);
  }
  else
  {
    v15 = (DXGSESSIONDATA *)operator new(0x48C0uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v15 )
      v16 = DXGSESSIONDATA::DXGSESSIONDATA(v15, CurrentProcessSessionId);
    else
      v16 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = v16;
    if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 32) |= 1u;
      v24 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v24 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v24);
      v5 = -1073741801;
    }
  }
  if ( v5 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v16, v11, v13, v14);
    v5 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1108),
           *(struct DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId));
    if ( v5 >= 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
      v19[3] = CurrentProcessSessionId;
      v19[4] = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
      v19[5] = *((unsigned int *)this + 18);
      WdLogEvent5_WdEvent(v19);
    }
  }
LABEL_12:
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v11, v13, v14);
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v11, v13, v14);
  return (unsigned int)v5;
}

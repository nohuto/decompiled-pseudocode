/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01CECD4
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C01CF980 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0038510 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01CDBC4 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C01CFB8C (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR *this)
{
  int v2; // esi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  DXGSESSIONDATA *v11; // rcx
  DXGSESSIONDATA *v12; // rax
  __int64 v13; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _BYTE v19[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v2 = DXGSESSIONMGR::IncreaseNumSessions(this, CurrentProcessSessionId);
    if ( v2 < 0 )
      goto LABEL_16;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v5 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v5 + 24) = 3600LL;
      WdLogEvent5_WdAssertion(v5);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId)
    && (v6 = WdLogNewEntry5_WdAssertion(v4),
        *(_QWORD *)(v6 + 24) = 3601LL,
        WdLogEvent5_WdAssertion(v6),
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId)) )
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v12 = (DXGSESSIONDATA *)operator new[](0x4938uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v12 )
      v11 = DXGSESSIONDATA::DXGSESSIONDATA(v12, CurrentProcessSessionId);
    else
      v11 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = v11;
    if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 32) |= 1u;
      v13 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v13 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v13);
      v2 = -1073741801;
    }
  }
  if ( v2 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v11);
    v2 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1188),
           *(struct DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId));
    if ( v2 >= 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
      v17[3] = CurrentProcessSessionId;
      v17[4] = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
      v17[5] = *((unsigned int *)this + 18);
      WdLogEvent5_WdEvent(v17);
    }
  }
LABEL_16:
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v2;
}

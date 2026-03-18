/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0090170
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00FA530 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0008C60 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00B2A74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C01CA904 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR *this)
{
  int v2; // esi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  DXGSESSIONDATA *v7; // rax
  DXGSESSIONDATA *v8; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGSESSIONMGR *)((char *)this + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v2 = DXGSESSIONMGR::IncreaseNumSessions(this, CurrentProcessSessionId);
    if ( v2 < 0 )
      goto LABEL_12;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v12 + 24) = 3446LL;
      WdLogEvent5_WdAssertion(v12);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v13 + 24) = 3447LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
  {
    v14 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v14 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v14);
  }
  else
  {
    v7 = (DXGSESSIONDATA *)operator new(0x48C8uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v7 )
      v8 = DXGSESSIONDATA::DXGSESSIONDATA(v7, CurrentProcessSessionId);
    else
      v8 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = v8;
    if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 32) |= 1u;
      v15 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v15 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v15);
      v2 = -1073741801;
    }
  }
  if ( v2 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v8);
    v2 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1108),
           *(struct DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId));
    if ( v2 >= 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v10[3] = CurrentProcessSessionId;
      v10[4] = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
      v10[5] = *((unsigned int *)this + 18);
      WdLogEvent5_WdEvent(v10);
    }
  }
LABEL_12:
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v2;
}

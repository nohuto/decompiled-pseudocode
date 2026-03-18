/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C01075F4
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0107378 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C010744C (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v5; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = 16LL;
LABEL_15:
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId, v5);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v11 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v11 + 24) = 905LL;
    goto LABEL_15;
  }
  v7 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v7 )
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = 912LL;
    goto LABEL_15;
  }
  *((_DWORD *)this + 2) = *v7;
  v8 = operator new(0x18uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v8 )
  {
    v8[1] = 0LL;
    *v8 = 0LL;
    *((_DWORD *)v8 + 4) = 50;
  }
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result < 0 )
      *((_DWORD *)this + 13) = 0;
    else
      return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v12 + 24) = 922LL;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
  return result;
}

/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C01C9B44
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C88D4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C01C8D48 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v2 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v2 + 24) = 16LL;
LABEL_3:
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v2 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v2 + 24) = 905LL;
    goto LABEL_3;
  }
  v8 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v8 )
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = 912LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 2) = *v8;
  v9 = operator new[](0x18uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v9 )
  {
    v9[1] = 0LL;
    *v9 = 0LL;
    *((_DWORD *)v9 + 4) = 50;
  }
  *((_QWORD *)this + 3) = v9;
  if ( v9 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result >= 0 )
      return 0LL;
    else
      *((_DWORD *)this + 13) = 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v11 + 24) = 922LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
  return result;
}

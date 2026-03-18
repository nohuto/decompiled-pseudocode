/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0118618
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C011839C (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0118470 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v19 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v19 + 24) = 16LL;
LABEL_15:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 73);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       v7,
                                       CurrentProcessSessionId,
                                       v11,
                                       v12);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v19 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v19 + 24) = 824LL;
    goto LABEL_15;
  }
  v14 = (_DWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v14 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v5);
    *(_QWORD *)(v19 + 24) = 831LL;
    goto LABEL_15;
  }
  *((_DWORD *)this + 2) = *v14;
  v15 = operator new(0x18uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v15 )
  {
    v15[1] = 0LL;
    *v15 = 0LL;
    *((_DWORD *)v15 + 4) = 50;
  }
  *((_QWORD *)this + 3) = v15;
  if ( v15 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this, v16);
    if ( (int)result < 0 )
      *((_DWORD *)this + 13) = 0;
    else
      return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v20 + 24) = 841LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
  return result;
}

/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C01B9150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00344BC (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0034638 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rcx
  int v11; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    *((_BYTE *)Current + 322) = 1;
    v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v3) + 74);
    if ( v7 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v11 = 0;
    for ( i = 15LL; ; ++i )
    {
      DXGGLOBAL::GetGlobal(v10);
      if ( DXGGLOBAL::m_pDxgmmsExport[i - 15] )
      {
        v13 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v10) + i * 8);
        v16 = DXGPROCESS::GetCurrent(v15, v14);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v13, v16);
        if ( (int)result < 0 )
          break;
      }
      if ( (unsigned int)++v11 >= 2 )
        return 0LL;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v4 + 24) = 3138LL;
    WdLogEvent5_WdError(v4);
    return 3221225473LL;
  }
  return result;
}

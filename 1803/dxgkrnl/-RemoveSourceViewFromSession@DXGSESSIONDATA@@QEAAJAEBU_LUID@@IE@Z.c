/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C01D0428
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01D123C (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C00029F0 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00A0410 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00A2578 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00AA42C (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C01D03B0 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveSourceViewFromSession(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rbp
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v10; // rcx
  struct DISPLAY_SOURCE *DisplaySource; // rsi
  _QWORD *v12; // rax
  DXGSESSIONDATA **SessionViewFromSource; // rax
  DXGSESSIONDATA **v15; // rbx
  DXGSESSIONDATA *v16; // rdx
  DXGSESSIONDATA ***v17; // r8
  unsigned __int8 v18; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v18 = 0;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v5);
  else
    DisplaySource = 0LL;
  if ( !DisplaySource
    || (SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5),
        (v15 = SessionViewFromSource) == 0LL) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12[3] = v5;
    v12[4] = a2->HighPart;
    v12[5] = a2->LowPart;
    v12[6] = this;
    v12[7] = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  if ( a4 )
  {
    SESSION_VIEW::RemoveAllDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    goto LABEL_10;
  }
  v4 = SESSION_VIEW::RemoveDisplaySource((SESSION_VIEW *)SessionViewFromSource, DisplaySource, (bool *)&v18);
  if ( v18 )
  {
LABEL_10:
    v16 = v15[1];
    if ( *((DXGSESSIONDATA ***)v16 + 1) != v15 + 1 || (v17 = (DXGSESSIONDATA ***)v15[2], *v17 != v15 + 1) )
      __fastfail(3u);
    *v17 = (DXGSESSIONDATA **)v16;
    *((_QWORD *)v16 + 1) = v17;
    SESSION_VIEW::`scalar deleting destructor'((SESSION_VIEW *)v15);
  }
  return v4;
}

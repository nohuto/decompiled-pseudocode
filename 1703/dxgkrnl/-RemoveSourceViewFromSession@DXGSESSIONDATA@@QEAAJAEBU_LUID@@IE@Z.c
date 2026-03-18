/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00FAB1C
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C009A800 (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000CDA0 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00F8D34 (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00FB0A8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00FB168 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C01B0EA0 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DISPLAY_SOURCE *DisplaySource; // rsi
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v14; // rbx
  SESSION_VIEW **v15; // r8
  SESSION_VIEW **v16; // rdx
  _QWORD *v18; // rax
  unsigned __int8 v19[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v19[0] = 0;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v5);
  else
    DisplaySource = 0LL;
  if ( DisplaySource )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
    v14 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( a4 )
      {
        SESSION_VIEW::RemoveAllDisplaySource(SessionViewFromSource);
      }
      else
      {
        v4 = SESSION_VIEW::RemoveDisplaySource(SessionViewFromSource, DisplaySource, v19);
        if ( !v19[0] )
          return v4;
      }
      v15 = (SESSION_VIEW **)*((_QWORD *)v14 + 1);
      v16 = (SESSION_VIEW **)*((_QWORD *)v14 + 2);
      if ( v15[1] != (SESSION_VIEW *)((char *)v14 + 8) || *v16 != (SESSION_VIEW *)((char *)v14 + 8) )
        __fastfail(3u);
      *v16 = (SESSION_VIEW *)v15;
      v15[1] = (SESSION_VIEW *)v16;
      SESSION_VIEW::`scalar deleting destructor'(v14);
      return v4;
    }
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
  v18[3] = v5;
  v18[4] = a2->HighPart;
  v18[5] = a2->LowPart;
  v18[6] = this;
  v18[7] = -1073741811LL;
  WdLogEvent5_WdError(v18);
  return 3221225485LL;
}

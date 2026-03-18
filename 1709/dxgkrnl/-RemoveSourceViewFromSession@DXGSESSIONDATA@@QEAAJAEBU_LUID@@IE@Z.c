/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00B27C8
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00BBC7C (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000833C (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00B2D7C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00B3210 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00B50F4 (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C01CAC60 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
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
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v13; // rbx
  SESSION_VIEW **v14; // rdx
  SESSION_VIEW **v15; // r8
  _QWORD *v17; // rax
  unsigned __int8 v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v18[0] = 0;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v5);
  else
    DisplaySource = 0LL;
  if ( DisplaySource )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
    v13 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( a4 )
      {
        SESSION_VIEW::RemoveAllDisplaySource(SessionViewFromSource);
      }
      else
      {
        v4 = SESSION_VIEW::RemoveDisplaySource(SessionViewFromSource, DisplaySource, v18);
        if ( !v18[0] )
          return v4;
      }
      v14 = (SESSION_VIEW **)*((_QWORD *)v13 + 1);
      if ( v14[1] != (SESSION_VIEW *)((char *)v13 + 8)
        || (v15 = (SESSION_VIEW **)*((_QWORD *)v13 + 2), *v15 != (SESSION_VIEW *)((char *)v13 + 8)) )
      {
        __fastfail(3u);
      }
      *v15 = (SESSION_VIEW *)v14;
      v14[1] = (SESSION_VIEW *)v15;
      SESSION_VIEW::`scalar deleting destructor'(v13);
      return v4;
    }
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v17[3] = v5;
  v17[4] = a2->HighPart;
  v17[5] = a2->LowPart;
  v17[6] = this;
  v17[7] = -1073741811LL;
  WdLogEvent5_WdError(v17);
  return 3221225485LL;
}

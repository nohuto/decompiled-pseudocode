/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C01B4120
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C01CEE00 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  struct _LUID v9; // rbx
  __int64 v10; // r14
  INT v12; // eax
  __int64 v13; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  _BYTE v30[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _LUID v31; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v32[8]; // [rsp+60h] [rbp+7h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v33; // [rsp+80h] [rbp+27h] BYREF

  v2 = a2;
  if ( !this )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v4 + 24) = 1559LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1560LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 1561LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 288);
  v9 = *(struct _LUID *)((char *)this + 268);
  v31 = v9;
  v10 = *(_QWORD *)(v8 + 112) + 3760 * v2;
  if ( !v10 )
    return -1073741811LL;
  if ( *(_BYTE *)(v10 + 724) )
  {
    *(_QWORD *)&v33.VidPnSourceId = 0LL;
    *(_QWORD *)&v33.Y = 0LL;
    v33.VidPnSourceId = *(_DWORD *)(v10 + 16);
    v33.X = *(_DWORD *)(v10 + 680);
    v12 = *(_DWORD *)(v10 + 684);
    v33.Flags.Value = 1;
    v33.Y = v12;
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 73);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId,
                                         v16);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v17 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
LABEL_22:
      memset(v32, 0, sizeof(v32));
      v32[0] = 13;
      return SMgrGdiCallout(v32, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    v30[0] = 0;
    v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v30, 0);
    v24 = v19;
    if ( v19 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v31,
                                *(_DWORD *)(v10 + 16));
      if ( SessionViewFromSource )
      {
        LODWORD(v24) = SetPointerShapeForDisplaySource(
                         (struct DISPLAY_SOURCE *)v10,
                         &v33,
                         0LL,
                         (struct SESSION_VIEW *)SessionViewFromSource,
                         0LL,
                         0,
                         0,
                         1,
                         0);
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v29[3] = *(unsigned int *)(v10 + 16);
        v29[4] = v31.HighPart;
        v29[5] = v9.LowPart;
        LODWORD(v24) = -1073741811;
        v29[6] = (unsigned int)PsGetCurrentProcessSessionId(v9.LowPart);
        v29[7] = -1073741811LL;
        WdLogEvent5_WdError(v29);
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdEvent(v21, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = v24;
      WdLogEvent5_WdEvent(v25);
    }
    if ( v30[0] )
      DxgkReleaseSessionModeChangeLock(v26);
    if ( (int)v24 < 0 )
      goto LABEL_22;
  }
  return 0LL;
}

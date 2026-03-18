/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C019D780
 * Callers:
 *     _lambda_2c9284ca1958a319979d23566d67cec5_::_lambda_invoker_cdecl_ @ 0x1C01B6D80 (_lambda_2c9284ca1958a319979d23566d67cec5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  struct _LUID v14; // rbx
  __int64 v15; // r14
  INT v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  _BYTE v46[8]; // [rsp+40h] [rbp-9h] BYREF
  struct _LUID v47; // [rsp+48h] [rbp-1h] BYREF
  _DWORD v48[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v49; // [rsp+70h] [rbp+27h] BYREF

  v4 = (unsigned int)a2;
  if ( !this )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1476LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)this + 285) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1477LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 1478LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)this + 285);
  v14 = *(struct _LUID *)((char *)this + 268);
  v47 = v14;
  v15 = *(_QWORD *)(v13 + 112) + 3208 * v4;
  if ( !v15 )
    return -1073741811LL;
  if ( *(_BYTE *)(v15 + 724) )
  {
    *(_QWORD *)&v49.VidPnSourceId = 0LL;
    *(_QWORD *)&v49.Y = 0LL;
    v49.VidPnSourceId = *(_DWORD *)(v15 + 16);
    v49.X = *(_DWORD *)(v15 + 680);
    v17 = *(_DWORD *)(v15 + 684);
    v49.Flags.Value = 1;
    v49.Y = v17;
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8, v10, v11) + 73);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18, v21, v22);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId,
                                         v24,
                                         v25);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v26 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v26 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v28, v27, v29, v30);
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v26);
LABEL_22:
      memset(v48, 0, sizeof(v48));
      v48[0] = 13;
      return SMgrGdiCallout(v48, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    v46[0] = 0;
    v31 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v46, 0);
    v33 = v31;
    if ( v31 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v47,
                                *(_DWORD *)(v15 + 16));
      if ( SessionViewFromSource )
      {
        LODWORD(v33) = SetPointerShapeForDisplaySource(
                         (struct DISPLAY_SOURCE *)v15,
                         &v49,
                         0LL,
                         (struct SESSION_VIEW *)SessionViewFromSource,
                         0LL,
                         0,
                         0,
                         1u);
      }
      else
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
        v42[3] = *(unsigned int *)(v15 + 16);
        v42[4] = v47.HighPart;
        v42[5] = v14.LowPart;
        LODWORD(v33) = -1073741811;
        v42[6] = (unsigned int)PsGetCurrentProcessSessionId(v14.LowPart, v43, v44, v45);
        v42[7] = -1073741811LL;
        WdLogEvent5_WdError(v42);
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdEvent(v32);
      *(_QWORD *)(v34 + 24) = v33;
      WdLogEvent5_WdEvent(v34);
    }
    if ( v46[0] )
      DxgkReleaseSessionModeChangeLock(v36, v35, v37, v38);
    if ( (int)v33 < 0 )
      goto LABEL_22;
  }
  return 0LL;
}

/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00B289C
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00F84DC (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C002B488 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00B2D7C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00B3210 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C00B513C (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        unsigned int a4,
        unsigned __int8 a5,
        struct _LUID *a6)
{
  __int64 v7; // r14
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct DISPLAY_SOURCE *DisplaySource; // rbp
  __int64 v14; // rcx
  char *v15; // rdi
  char *i; // r8
  char *v17; // r9
  char *v18; // rax
  __int64 v19; // rcx
  struct tagRECT v20; // xmm0
  _QWORD *v21; // rax
  char **v22; // rcx
  char *v23; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  char **v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx

  v7 = a4;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a3);
  v12 = 0LL;
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v7);
  else
    DisplaySource = 0LL;
  if ( !DisplaySource )
    goto LABEL_17;
  v14 = *((_QWORD *)DisplaySource + 6);
  if ( v14 )
  {
    if ( IsEqualRect((const struct tagRECT *)(v14 + 24), a2) )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v26);
      v27[3] = v7;
      v27[4] = a3->HighPart;
      v27[5] = a3->LowPart;
      v27[7] = -1071774953LL;
      v27[6] = this;
      return 3223192343LL;
    }
LABEL_17:
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v25[3] = v7;
    v25[4] = a3->HighPart;
    v25[5] = a3->LowPart;
    v25[6] = this;
    v25[7] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v15 = (char *)this + 18560;
  for ( i = (char *)*((_QWORD *)this + 2320); i != v15; i = *v28 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      goto LABEL_8;
  }
  v17 = 0LL;
LABEL_8:
  if ( v17 )
    goto LABEL_14;
  v18 = (char *)operator new(0x48uLL, 0x4B677844u, PagedPool);
  v17 = v18;
  if ( v18 )
  {
    *(_QWORD *)v18 = this;
    v20 = *a2;
    *((_DWORD *)v18 + 10) = 0;
    *(struct tagRECT *)(v18 + 24) = v20;
    v21 = v18 + 48;
    v21[1] = v21;
    *v21 = v21;
    *((_QWORD *)v17 + 8) = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
  {
    v22 = (char **)*((_QWORD *)this + 2321);
    v23 = v17 + 8;
    if ( *v22 != v15 )
      __fastfail(3u);
    *(_QWORD *)v23 = v15;
    *((_QWORD *)v17 + 2) = v22;
    *v22 = v23;
    *((_QWORD *)this + 2321) = v23;
LABEL_14:
    *((struct _LUID *)v17 + 8) = *a6;
    SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v17, DisplaySource, a5);
    return 0LL;
  }
  v29 = WdLogNewEntry5_WdLowResource(v19);
  v30 = (_QWORD *)(v29 + 24);
  do
  {
    v31 = *(&a2->left + v12++);
    *v30++ = v31;
  }
  while ( v12 < 4 );
  *(_QWORD *)(v29 + 56) = this;
  WdLogEvent5_WdLowResource(v29);
  return 3221225495LL;
}

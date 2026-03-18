/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00FABF0
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00A5254 (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C003AFEC (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C00F8D7C (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00FB0A8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00FB168 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        unsigned int a4,
        char a5,
        struct _LUID *a6)
{
  __int64 v7; // r14
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct DISPLAY_SOURCE *DisplaySource; // rbp
  __int64 v15; // rcx
  char *v16; // rdi
  char *i; // r8
  char *v18; // r9
  char *v19; // rax
  __int64 v20; // rcx
  struct tagRECT v21; // xmm0
  _QWORD *v22; // rax
  char **v23; // rcx
  char *v24; // rax
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  char **v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rcx

  v7 = a4;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a3);
  v13 = 0LL;
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v7);
  else
    DisplaySource = 0LL;
  if ( !DisplaySource )
    goto LABEL_17;
  v15 = *((_QWORD *)DisplaySource + 6);
  if ( v15 )
  {
    if ( IsEqualRect((const struct tagRECT *)(v15 + 24), a2) )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v27, v28);
      v29[3] = v7;
      v29[4] = a3->HighPart;
      v29[5] = a3->LowPart;
      v29[7] = -1071774953LL;
      v29[6] = this;
      return 3223192343LL;
    }
LABEL_17:
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v26[3] = v7;
    v26[4] = a3->HighPart;
    v26[5] = a3->LowPart;
    v26[6] = this;
    v26[7] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v16 = (char *)this + 18552;
  for ( i = (char *)*((_QWORD *)this + 2319); i != v16; i = *v30 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      goto LABEL_8;
  }
  v18 = 0LL;
LABEL_8:
  if ( v18 )
    goto LABEL_14;
  v19 = (char *)operator new(0x48uLL, 0x4B677844u, PagedPool);
  v18 = v19;
  if ( v19 )
  {
    *(_QWORD *)v19 = this;
    v21 = *a2;
    *((_DWORD *)v19 + 10) = 0;
    *(struct tagRECT *)(v19 + 24) = v21;
    v22 = v19 + 48;
    v22[1] = v22;
    *v22 = v22;
    *((_QWORD *)v18 + 8) = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v23 = (char **)*((_QWORD *)this + 2320);
    v24 = v18 + 8;
    if ( *v23 != v16 )
      __fastfail(3u);
    *(_QWORD *)v24 = v16;
    *((_QWORD *)v18 + 2) = v23;
    *v23 = v24;
    *((_QWORD *)this + 2320) = v24;
LABEL_14:
    *((struct _LUID *)v18 + 8) = *a6;
    SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v18, DisplaySource, a5);
    return 0LL;
  }
  v31 = WdLogNewEntry5_WdLowResource(v20);
  v32 = (_QWORD *)(v31 + 24);
  do
  {
    v33 = *(&a2->left + v13++);
    *v32++ = v33;
  }
  while ( v13 < 4 );
  *(_QWORD *)(v31 + 56) = this;
  WdLogEvent5_WdLowResource(v31);
  return 3221225495LL;
}

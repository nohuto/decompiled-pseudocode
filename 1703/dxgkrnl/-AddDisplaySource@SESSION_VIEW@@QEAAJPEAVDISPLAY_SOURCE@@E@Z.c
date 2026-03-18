/*
 * XREFs of ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C00F8D7C
 * Callers:
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00FABF0 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_VIEW::AddDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, char a3)
{
  SESSION_VIEW *v3; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx

  v3 = (SESSION_VIEW *)*((_QWORD *)a2 + 6);
  if ( !v3 )
  {
    *((_QWORD *)a2 + 6) = this;
    v5 = (_QWORD *)((char *)a2 + 56);
    ++*((_DWORD *)this + 10);
    v6 = (_QWORD *)((char *)this + 48);
    if ( !a3 )
    {
      v12 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v12 != v6 )
        __fastfail(3u);
      *v5 = v6;
      v5[1] = v12;
      *v12 = v5;
      v6[1] = v5;
      return 0LL;
    }
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      __fastfail(3u);
    goto LABEL_4;
  }
  if ( v3 == this )
  {
    if ( !a3 )
      return 0LL;
    v5 = (_QWORD *)((char *)a2 + 56);
    v10 = *((_QWORD *)a2 + 7);
    v11 = (_QWORD *)*((_QWORD *)a2 + 8);
    if ( *(_QWORD **)(v10 + 8) != v5 || (_QWORD *)*v11 != v5 )
      __fastfail(3u);
    *v11 = v10;
    v6 = (_QWORD *)((char *)this + 48);
    *(_QWORD *)(v10 + 8) = v11;
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      __fastfail(3u);
LABEL_4:
    *v5 = v7;
    v5[1] = v6;
    *(_QWORD *)(v7 + 8) = v5;
    *v6 = v5;
    return 0LL;
  }
  v9 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v9);
  return 3221225485LL;
}

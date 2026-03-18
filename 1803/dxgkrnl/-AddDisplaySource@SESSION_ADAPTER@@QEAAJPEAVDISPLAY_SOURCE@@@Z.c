/*
 * XREFs of ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01CE570
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01D1304 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_ADAPTER::AddDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  SESSION_ADAPTER *v2; // rax
  __int64 v4; // rax
  int v6; // ecx
  char *v7; // r8
  char *v8; // rax
  char **v9; // rcx

  v2 = (SESSION_ADAPTER *)*((_QWORD *)a2 + 3);
  if ( v2 )
  {
    if ( v2 != this )
    {
      v4 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v4 + 24) = 2338LL;
      WdLogEvent5_WdError(v4);
      return 3221225506LL;
    }
  }
  else
  {
    v6 = *((_DWORD *)a2 + 4);
    *((_QWORD *)a2 + 3) = this;
    ++*((_DWORD *)this + 21);
    *((_DWORD *)this + 20) |= 1 << v6;
    v7 = (char *)this + 88;
    v8 = (char *)a2 + 32;
    v9 = (char **)*((_QWORD *)v7 + 1);
    if ( *v9 != v7 )
      __fastfail(3u);
    *(_QWORD *)v8 = v7;
    *((_QWORD *)a2 + 5) = v9;
    *v9 = v8;
    *((_QWORD *)v7 + 1) = v8;
  }
  ++*((_DWORD *)a2 + 18);
  return 0LL;
}

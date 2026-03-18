/*
 * XREFs of ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00B3234
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BA360 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall SESSION_ADAPTER::RemoveDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  int v5; // ecx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v10; // rax

  if ( *((SESSION_ADAPTER **)a2 + 3) == this )
  {
    if ( (*((_DWORD *)a2 + 18))-- == 1 )
    {
      memset((char *)a2 + 88, 0, 0x200uLL);
      v5 = *((_DWORD *)a2 + 4);
      *((_QWORD *)a2 + 75) = 0LL;
      *((_DWORD *)this + 18) &= ~(1 << v5);
      *((_QWORD *)a2 + 3) = 0LL;
      v6 = (_QWORD *)((char *)a2 + 32);
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      --*((_DWORD *)this + 19);
    }
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}

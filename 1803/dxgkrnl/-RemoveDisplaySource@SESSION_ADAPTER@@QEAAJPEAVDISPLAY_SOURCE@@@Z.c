/*
 * XREFs of ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01D0308
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01D1304 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall SESSION_ADAPTER::RemoveDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  __int64 v4; // rax
  int v7; // ecx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  if ( *((SESSION_ADAPTER **)a2 + 3) == this )
  {
    if ( (*((_DWORD *)a2 + 18))-- == 1 )
    {
      memset((char *)a2 + 88, 0, 0x200uLL);
      v7 = *((_DWORD *)a2 + 4);
      *((_QWORD *)a2 + 75) = 0LL;
      *((_DWORD *)this + 20) &= ~(1 << v7);
      *((_QWORD *)a2 + 3) = 0LL;
      v8 = (_QWORD *)((char *)a2 + 32);
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      --*((_DWORD *)this + 21);
    }
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}

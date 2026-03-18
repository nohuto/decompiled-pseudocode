/*
 * XREFs of ?GetWindowData@@YA_JPEAUtagWND@@_JH@Z @ 0x1C01E27F0
 * Callers:
 *     NtUserfnGETWINDOWDATA @ 0x1C01EDCE0 (NtUserfnGETWINDOWDATA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowData(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v4; // ebx
  __int64 v6; // rdx
  bool v7; // sf
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  v3 = 0LL;
  v4 = a3 - *((_DWORD *)a1 + 63);
  if ( v4 < 0 )
    return v3;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return v3;
      v7 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x80u) != 0;
      v8 = *((unsigned int *)a1 + 62);
      v9 = (unsigned int)v4;
      if ( !v7 )
      {
        if ( (unsigned __int64)(unsigned int)v4 + 8 <= v8 )
          return *(_QWORD *)(v4 + *((_QWORD *)a1 + 48));
        return v3;
      }
    }
    else
    {
      v8 = *((unsigned int *)a1 + 62);
      v9 = (unsigned int)v4;
    }
    if ( v9 + 4 <= v8 )
      return *(unsigned int *)(*((_QWORD *)a1 + 48) + v4);
  }
  else if ( (unsigned __int64)(unsigned int)v4 + 2 <= *((unsigned int *)a1 + 62) )
  {
    return *(unsigned __int16 *)(*((_QWORD *)a1 + 48) + v4);
  }
  return v3;
}

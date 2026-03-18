/*
 * XREFs of UserCommitDesktopMemory @ 0x1C0111B20
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C008E520 (MapDesktop.c)
 *     GetDesktopView @ 0x1C008E7D0 (GetDesktopView.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 result; // rax
  __int64 v10; // r9
  _QWORD *i; // rcx
  __int64 v12; // rcx
  __int64 j; // rbx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+38h] [rbp-10h]
  int v20; // [rsp+3Ch] [rbp-Ch]
  int v21; // [rsp+68h] [rbp+20h] BYREF

  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v10 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v10 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_13;
      }
      v10 = *(_QWORD *)(v10 + 8);
    }
    while ( v10 );
LABEL_13:
    if ( !v10 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v21);
    if ( (int)result >= 0 )
      *a2 += v21;
  }
  else
  {
    v8 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v6) + 672);
    if ( !v8 )
      goto LABEL_30;
    do
    {
      if ( *(_QWORD *)(v8[1] + 16LL) == a1 )
        break;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 );
    if ( !v8 )
    {
LABEL_30:
      v12 = grpWinStaList;
      if ( !grpWinStaList )
        return 3221225495LL;
      do
      {
        for ( j = *(_QWORD *)(v12 + 16); j; j = *(_QWORD *)(j + 32) )
        {
          if ( *(_QWORD *)(j + 16) == a1 )
            goto LABEL_24;
        }
        v12 = *(_QWORD *)(v12 + 8);
      }
      while ( v12 );
LABEL_24:
      if ( !v12 )
        return 3221225495LL;
      v16 = 1;
      v19 = 0;
      CurrentProcess = PsGetCurrentProcess(v12, v7);
      v18 = j;
      v20 = 1;
      if ( (int)MapDesktop((__int64)&v16) < 0 )
        return 3221225495LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
      if ( !GetDesktopView(CurrentProcessWin32Process, j) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}

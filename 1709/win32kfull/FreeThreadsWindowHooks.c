/*
 * XREFs of FreeThreadsWindowHooks @ 0x1C0054220
 * Callers:
 *     <none>
 * Callees:
 *     FreeHook @ 0x1C0055C70 (FreeHook.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C0055CD4 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 */

void FreeThreadsWindowHooks()
{
  __int64 i; // rsi
  __int64 v1; // rbx
  __int64 v2; // rbp

  if ( gptiCurrent && *(_QWORD *)(gptiCurrent + 432LL) )
  {
    HMAssignmentUnlock(gptiCurrent + 664LL);
    for ( i = 32LL; i <= 152; i += 8LL )
    {
      v1 = *(_QWORD *)(gptiCurrent + i + 848);
      if ( !v1 )
      {
        v1 = *(_QWORD *)(i + *(_QWORD *)(gptiCurrent + 440LL));
        if ( !v1 )
          continue;
      }
      do
      {
        v2 = *(_QWORD *)(v1 + 40);
        if ( !v2 && (*(_DWORD *)(v1 + 64) & 1) == 0 )
          v2 = *(_QWORD *)(i + *(_QWORD *)(gptiCurrent + 440LL));
        if ( (*(_DWORD *)(v1 + 64) & 1) == 0 )
        {
          UnlinkHook((struct tagHOOK *)v1);
          *(_DWORD *)(v1 + 64) |= 0x80u;
          *(_QWORD *)(v1 + 40) = 0LL;
        }
        if ( *(_QWORD *)(v1 + 16) == gptiCurrent )
          FreeHook((struct tagHOOK *)v1);
        v1 = v2;
      }
      while ( v2 );
    }
    *(_DWORD *)(gptiCurrent + 656LL) = 0;
  }
}

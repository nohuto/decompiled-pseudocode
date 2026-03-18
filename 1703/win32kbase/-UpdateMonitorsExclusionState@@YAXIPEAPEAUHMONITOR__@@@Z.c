/*
 * XREFs of ?UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z @ 0x1C0130C64
 * Callers:
 *     UserProcessInputIsolationPolicy @ 0x1C0130CBC (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateMonitorsExclusionState(unsigned int a1, HMONITOR *a2)
{
  __int64 i; // r8
  __int64 v3; // r9

  for ( i = *((_QWORD *)gpDispInfo + 12); i; i = *(_QWORD *)(i + 56) )
  {
    v3 = 0LL;
    if ( a1 )
    {
      while ( *(HMONITOR *)i != a2[v3] )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= a1 )
          goto LABEL_5;
      }
      *(_DWORD *)(i + 536) = 0;
    }
    else
    {
LABEL_5:
      *(_DWORD *)(i + 536) = 1;
    }
  }
}

/*
 * XREFs of ?UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z @ 0x1C013261C
 * Callers:
 *     UserProcessInputIsolationPolicy @ 0x1C0132670 (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateMonitorsExclusionState(unsigned int a1, HMONITOR *a2)
{
  __int64 i; // r8
  __int64 v3; // r9
  int v4; // eax

  for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
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
      v4 = 0;
    }
    else
    {
LABEL_5:
      v4 = 1;
    }
    *(_DWORD *)(i + 600) = v4;
  }
}

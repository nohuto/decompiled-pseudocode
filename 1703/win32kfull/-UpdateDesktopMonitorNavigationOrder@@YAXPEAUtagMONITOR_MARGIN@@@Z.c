/*
 * XREFs of ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C00BB570
 * Callers:
 *     UpdateDesktopThresholds @ 0x1C00BB290 (UpdateDesktopThresholds.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateDesktopMonitorNavigationOrder(struct tagMONITOR_MARGIN *Base)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  _QWORD *i; // rdx
  unsigned int v5; // r10d
  char *v6; // rsi
  _DWORD *v7; // rcx
  _QWORD *v8; // r9
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx
  _QWORD *v12; // rcx

  v2 = 0LL;
  v3 = 255;
  for ( i = *(_QWORD **)(gpDispInfo + 96LL); i; i = (_QWORD *)i[7] )
  {
    if ( (*(_DWORD *)(i[5] + 24LL) & 1) != 0 && (unsigned int)v2 < *(_DWORD *)*gpDispInfo )
    {
      *((_QWORD *)Base + 3 * v2 + 2) = i;
      i[57] = 0LL;
      i[58] = 0LL;
      v2 = (unsigned int)(v2 + 1);
    }
  }
  qsort(Base, (unsigned int)v2, 0x18uLL, MonitorCoordComp);
  v5 = 0;
  *(_QWORD *)(gpDispInfo + 168LL) = gpDispInfo + 160LL;
  *(_QWORD *)(gpDispInfo + 160LL) = gpDispInfo + 160LL;
  if ( !(_DWORD)v2 )
    goto LABEL_16;
  v6 = (char *)Base + 16;
  do
  {
    v7 = *(_DWORD **)(*(_QWORD *)v6 + 40LL);
    v8 = (_QWORD *)(*(_QWORD *)v6 + 456LL);
    v9 = v7[26] - v7[24];
    v10 = v7[25] - v7[23];
    if ( v10 < v9 )
      v9 = v10;
    v11 = (unsigned int)v9 >> 1;
    if ( v3 < v11 )
      v11 = v3;
    v3 = v11;
    v12 = *(_QWORD **)(gpDispInfo + 168LL);
    if ( *v12 != gpDispInfo + 160LL )
      __fastfail(3u);
    *v8 = gpDispInfo + 160LL;
    ++v5;
    v8[1] = v12;
    v6 += 24;
    *v12 = v8;
    *(_QWORD *)(gpDispInfo + 168LL) = v8;
  }
  while ( v5 < (unsigned int)v2 );
  if ( v11 == -1 )
    *(_DWORD *)(gpDispInfo + 152LL) = 0;
  else
LABEL_16:
    *(_DWORD *)(gpDispInfo + 152LL) = v3;
}

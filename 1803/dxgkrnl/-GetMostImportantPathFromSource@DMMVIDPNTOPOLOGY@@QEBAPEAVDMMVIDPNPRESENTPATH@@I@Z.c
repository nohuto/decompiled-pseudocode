/*
 * XREFs of ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00BC2E8
 * Callers:
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00AA594 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C021425C (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(DMMVIDPNTOPOLOGY *this, int a2)
{
  char *v2; // r11
  char *v3; // rcx
  char *v4; // r8
  char *v5; // r9
  int v6; // r10d
  char *v7; // rcx

  v2 = (char *)this + 24;
  v3 = (char *)*((_QWORD *)this + 3);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 32;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL) == a2 && *((_DWORD *)v4 + 26) < v6 )
    {
      v5 = v4;
      v6 = *((_DWORD *)v4 + 26);
    }
    v7 = (char *)*((_QWORD *)v4 + 1);
    v4 = v7 - 8;
    if ( v7 == v2 )
      v4 = 0LL;
  }
  return (struct DMMVIDPNPRESENTPATH *)v5;
}

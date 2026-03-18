/*
 * XREFs of ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00A3874
 * Callers:
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00F8784 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0102158 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(DMMVIDPNTOPOLOGY *this, int a2)
{
  DMMVIDPNTOPOLOGY *v2; // r8
  char *v3; // r9
  int v4; // r10d
  char *v5; // r8
  char *v6; // r11
  char *v7; // rcx

  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v3 = 0LL;
  v4 = 32;
  if ( v2 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v5 = (char *)v2 - 8;
    if ( v5 )
    {
      v6 = (char *)this + 24;
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL) == a2 && *((_DWORD *)v5 + 26) < v4 )
        {
          v3 = v5;
          v4 = *((_DWORD *)v5 + 26);
        }
        v7 = (char *)*((_QWORD *)v5 + 1);
        v5 = v7 - 8;
        if ( v7 == v6 )
          v5 = 0LL;
      }
      while ( v5 );
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v3;
}

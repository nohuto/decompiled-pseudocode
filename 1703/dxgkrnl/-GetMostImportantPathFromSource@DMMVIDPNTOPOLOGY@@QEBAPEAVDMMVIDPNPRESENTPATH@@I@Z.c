/*
 * XREFs of ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00E1550
 * Callers:
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00A5300 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0104858 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(DMMVIDPNTOPOLOGY *this, int a2)
{
  DMMVIDPNTOPOLOGY *v2; // r8
  char *v4; // r9
  int v5; // r10d
  char *v6; // r8
  char *v7; // rdx
  char *v8; // rcx

  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v4 = 0LL;
  v5 = 32;
  if ( v2 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v6 = (char *)v2 - 8;
    if ( v6 )
    {
      v7 = (char *)this + 24;
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v6 + 11) + 24LL) == a2 && *((_DWORD *)v6 + 26) < v5 )
        {
          v4 = v6;
          v5 = *((_DWORD *)v6 + 26);
        }
        v8 = (char *)*((_QWORD *)v6 + 1);
        v6 = v8 - 8;
        if ( v8 == v7 )
          v6 = 0LL;
      }
      while ( v6 );
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v4;
}

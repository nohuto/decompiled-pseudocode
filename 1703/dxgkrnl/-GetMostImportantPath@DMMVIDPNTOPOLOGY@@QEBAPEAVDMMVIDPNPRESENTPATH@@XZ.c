/*
 * XREFs of ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00E1304
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPath(DMMVIDPNTOPOLOGY *this)
{
  DMMVIDPNTOPOLOGY *v1; // rdx
  char *v2; // r8
  int v3; // r9d
  char *v4; // rdx
  char *v5; // r10
  char *v6; // rcx

  v1 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v2 = 0LL;
  v3 = 32;
  if ( v1 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v4 = (char *)v1 - 8;
    if ( v4 )
    {
      v5 = (char *)this + 24;
      do
      {
        if ( *((_DWORD *)v4 + 26) < v3 )
        {
          v2 = v4;
          v3 = *((_DWORD *)v4 + 26);
        }
        v6 = (char *)*((_QWORD *)v4 + 1);
        v4 = v6 - 8;
        if ( v6 == v5 )
          v4 = 0LL;
      }
      while ( v4 );
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v2;
}

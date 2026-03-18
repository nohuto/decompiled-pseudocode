/*
 * XREFs of ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C021EF80
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C021128C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPath(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // r10
  char *v2; // rcx
  char *v3; // r9
  char *v4; // r8
  int v5; // r11d
  int v6; // ecx
  char *v7; // rax
  bool v8; // cc
  int v9; // edx
  char *v10; // rax

  v1 = (char *)this + 24;
  v2 = (char *)*((_QWORD *)this + 3);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 32;
  if ( v2 != v1 )
    v3 = v2 - 8;
  while ( v3 )
  {
    v6 = *((_DWORD *)v3 + 26);
    v7 = v3;
    v8 = v6 < v5;
    v9 = v5;
    v5 = v6;
    if ( !v8 )
      v7 = v4;
    v4 = v7;
    v10 = (char *)*((_QWORD *)v3 + 1);
    v3 = v10 - 8;
    if ( v10 == v1 )
      v3 = 0LL;
    if ( v6 >= v9 )
      v5 = v9;
  }
  return (struct DMMVIDPNPRESENTPATH *)v4;
}

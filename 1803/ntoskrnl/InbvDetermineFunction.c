/*
 * XREFs of InbvDetermineFunction @ 0x14017C380
 * Callers:
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x140187B20 (_strupr.c)
 *     strstr @ 0x140187E10 (strstr.c)
 */

__int64 __fastcall InbvDetermineFunction(__int64 a1)
{
  unsigned int v1; // edx
  char *v4; // rcx
  bool v5; // bl
  char *v6; // rax
  char *v7; // rax
  __int64 (__fastcall **v8)(); // rax

  v1 = dword_1403CDD20;
  if ( !dword_1403CDD20 )
  {
    v4 = *(char **)(a1 + 216);
    v5 = 1;
    if ( v4 )
    {
      v6 = strupr(v4);
      v7 = strstr(v6, "NOVGA");
      v1 = dword_1403CDD20;
      v5 = v7 == 0LL;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL) )
    {
      v8 = off_140397F10;
      if ( !v5 )
        v8 = off_140397E50;
      qword_1403CDD28 = (__int64)v8;
      v1 = 2 * v5 + 1;
    }
    else
    {
      if ( !v5 )
        return v1;
      v1 = 2;
      qword_1403CDD28 = (__int64)off_140397F10;
    }
    dword_1403CDD20 = v1;
  }
  return v1;
}

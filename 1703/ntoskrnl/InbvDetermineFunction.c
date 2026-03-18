/*
 * XREFs of InbvDetermineFunction @ 0x14015E03C
 * Callers:
 *     InbvDriverInitialize @ 0x140818F1C (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x1401694E0 (_strupr.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 */

__int64 __fastcall InbvDetermineFunction(__int64 a1)
{
  unsigned int v1; // edx
  char *v4; // rcx
  bool v5; // bl
  char *v6; // rax
  char *v7; // rax
  __int64 (__fastcall **v8)(); // rax

  v1 = dword_14036E460;
  if ( !dword_14036E460 )
  {
    v4 = *(char **)(a1 + 216);
    v5 = 1;
    if ( v4 )
    {
      v6 = strupr(v4);
      v7 = strstr(v6, "NOVGA");
      v1 = dword_14036E460;
      v5 = v7 == 0LL;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL) )
    {
      if ( !v5 )
      {
        v8 = off_14033C810;
        v1 = 1;
        goto LABEL_9;
      }
      v1 = 3;
    }
    else
    {
      if ( !v5 )
        return v1;
      v1 = 2;
    }
    v8 = off_14033C8D0;
LABEL_9:
    qword_14036E468 = (__int64)v8;
    dword_14036E460 = v1;
  }
  return v1;
}

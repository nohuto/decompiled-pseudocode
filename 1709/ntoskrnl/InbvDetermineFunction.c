/*
 * XREFs of InbvDetermineFunction @ 0x14013EB6C
 * Callers:
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x14015DE20 (_strupr.c)
 *     strstr @ 0x14015E110 (strstr.c)
 */

__int64 __fastcall InbvDetermineFunction(__int64 a1)
{
  unsigned int v1; // edx
  char *v4; // rcx
  bool v5; // bl
  char *v6; // rax
  char *v7; // rax
  __int64 (__fastcall **v8)(); // rax

  v1 = dword_140389EF0;
  if ( !dword_140389EF0 )
  {
    v4 = *(char **)(a1 + 216);
    v5 = 1;
    if ( v4 )
    {
      v6 = strupr(v4);
      v7 = strstr(v6, "NOVGA");
      v1 = dword_140389EF0;
      v5 = v7 == 0LL;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 184LL) )
    {
      if ( !v5 )
      {
        v8 = off_140355040;
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
    v8 = off_140355100;
LABEL_9:
    qword_140389EF8 = (__int64)v8;
    dword_140389EF0 = v1;
  }
  return v1;
}

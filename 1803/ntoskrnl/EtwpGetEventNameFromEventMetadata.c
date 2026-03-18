/*
 * XREFs of EtwpGetEventNameFromEventMetadata @ 0x1402B3004
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x1402B29A4 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     strnlen @ 0x14018A290 (strnlen.c)
 */

const char *__fastcall EtwpGetEventNameFromEventMetadata(__int64 a1, unsigned int a2, _WORD *a3)
{
  const char *v4; // rdi
  const char *v5; // rbx
  const char *v6; // rax
  unsigned __int16 v7; // bx
  __int16 v8; // ax

  if ( a2 >= 3 )
  {
    v4 = (const char *)(a1 + 2);
    v5 = (const char *)(a1 + a2);
    v6 = (const char *)(a1 + 2);
    while ( v6 != v5 )
    {
      v6 = ++v4;
      if ( *(v4 - 1) >= 0 )
      {
        if ( v4 == v5 )
          return 0LL;
        v7 = (_WORD)v5 - (_WORD)v4;
        if ( v4 )
          v8 = strnlen(v4, v7);
        else
          v8 = 0;
        *a3 = v8;
        if ( v8 == v7 )
          return 0LL;
        return v4;
      }
    }
  }
  return 0LL;
}

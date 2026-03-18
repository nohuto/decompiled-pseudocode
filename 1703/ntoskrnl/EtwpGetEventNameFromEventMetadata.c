/*
 * XREFs of EtwpGetEventNameFromEventMetadata @ 0x14002D414
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x14002CF40 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     strnlen @ 0x14016B760 (strnlen.c)
 */

const char *__fastcall EtwpGetEventNameFromEventMetadata(__int64 a1, unsigned int a2, _WORD *a3)
{
  const char *v4; // rbx
  const char *v5; // rdi
  unsigned __int16 v6; // di
  __int16 v7; // ax

  if ( a2 >= 3 )
  {
    v4 = (const char *)(a1 + 2);
    v5 = (const char *)(a1 + a2);
    while ( v4 != v5 )
    {
      if ( *v4++ >= 0 )
      {
        if ( v4 == v5 )
          return 0LL;
        v6 = (_WORD)v5 - (_WORD)v4;
        v7 = strnlen(v4, v6);
        *a3 = v7;
        if ( v7 == v6 )
          return 0LL;
        return v4;
      }
    }
  }
  return 0LL;
}

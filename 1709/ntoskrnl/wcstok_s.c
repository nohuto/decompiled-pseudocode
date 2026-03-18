/*
 * XREFs of wcstok_s @ 0x140164F44
 * Callers:
 *     GetOperatorIndexByName @ 0x14073513C (GetOperatorIndexByName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *Str, const wchar_t *Delim, wchar_t **Context)
{
  wchar_t *result; // rax
  wchar_t v6; // ax
  wchar_t v7; // r11
  const wchar_t *v8; // rdx
  wchar_t v9; // r8
  const wchar_t *v10; // rdx
  wchar_t v11; // r8

  if ( !Context || !Delim )
    goto LABEL_2;
  if ( !Str )
  {
    if ( *Context )
    {
      Str = *Context;
      goto LABEL_7;
    }
LABEL_2:
    xHalTimerWatchdogStop();
    return 0LL;
  }
LABEL_7:
  v6 = *Str;
  if ( *Str )
  {
    v7 = *Delim;
    do
    {
      v8 = Delim;
      if ( v7 )
      {
        v9 = v7;
        do
        {
          if ( v9 == v6 )
            break;
          v9 = *++v8;
        }
        while ( *v8 );
      }
      if ( !*v8 )
        break;
      v6 = *++Str;
    }
    while ( *Str );
  }
  result = Str;
  if ( *Str )
  {
    while ( 1 )
    {
      v10 = Delim;
      if ( *Delim )
      {
        v11 = *Delim;
        do
        {
          if ( v11 == *Str )
            break;
          v11 = *++v10;
        }
        while ( *v10 );
      }
      if ( *v10 )
        break;
      if ( !*++Str )
        goto LABEL_24;
    }
    *Str++ = 0;
  }
LABEL_24:
  *Context = Str;
  if ( result == Str )
    return 0LL;
  return result;
}

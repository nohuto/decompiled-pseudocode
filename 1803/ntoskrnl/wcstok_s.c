/*
 * XREFs of wcstok_s @ 0x14018EEFC
 * Callers:
 *     GetOperatorIndexByName @ 0x140798974 (GetOperatorIndexByName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *Str, const wchar_t *Delim, wchar_t **Context)
{
  wchar_t *result; // rax
  wchar_t v5; // ax
  wchar_t v6; // r11
  const wchar_t *v7; // rbx
  wchar_t v8; // dx
  wchar_t v9; // r10
  const wchar_t *v10; // rbx
  wchar_t v11; // dx
  wchar_t v12; // r10
  wchar_t *v13; // r10

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
  v5 = *Str;
  if ( *Str )
  {
    v6 = *Delim;
    do
    {
      v7 = Delim;
      v8 = v6;
      if ( v6 )
      {
        v9 = v6;
        do
        {
          v8 = v9;
          if ( v9 == v5 )
            break;
          v8 = *++v7;
          v9 = *v7;
        }
        while ( *v7 );
      }
      if ( !v8 )
        break;
      v5 = *++Str;
    }
    while ( *Str );
  }
  result = Str;
  if ( *Str )
  {
    while ( 1 )
    {
      v10 = Delim;
      v11 = *Delim;
      if ( *Delim )
      {
        v12 = *Delim;
        do
        {
          v11 = v12;
          if ( v12 == *Str )
            break;
          v11 = *++v10;
          v12 = *v10;
        }
        while ( *v10 );
      }
      v13 = Str + 1;
      if ( v11 )
        break;
      ++Str;
      if ( !*v13 )
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

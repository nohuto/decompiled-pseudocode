/*
 * XREFs of wcstok_s @ 0x180096DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *String, const wchar_t *Delimiter, wchar_t **Context)
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

  if ( !Context || !Delimiter )
    goto LABEL_2;
  if ( !String )
  {
    if ( *Context )
    {
      String = *Context;
      goto LABEL_7;
    }
LABEL_2:
    sub_18008B020();
    return 0LL;
  }
LABEL_7:
  v5 = *String;
  if ( *String )
  {
    v6 = *Delimiter;
    do
    {
      v7 = Delimiter;
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
      v5 = *++String;
    }
    while ( *String );
  }
  result = String;
  if ( *String )
  {
    while ( 1 )
    {
      v10 = Delimiter;
      v11 = *Delimiter;
      if ( *Delimiter )
      {
        v12 = *Delimiter;
        do
        {
          v11 = v12;
          if ( v12 == *String )
            break;
          v11 = *++v10;
          v12 = *v10;
        }
        while ( *v10 );
      }
      v13 = String + 1;
      if ( v11 )
        break;
      ++String;
      if ( !*v13 )
        goto LABEL_24;
    }
    *String++ = 0;
  }
LABEL_24:
  *Context = String;
  if ( result == String )
    return 0LL;
  return result;
}

/*
 * XREFs of wcsncpy @ 0x14018A730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncpy(wchar_t *Dest, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // r9
  signed __int64 v4; // rdx
  wchar_t v5; // ax
  size_t v6; // rdi
  size_t v7; // rdx
  size_t v8; // rdx
  wchar_t *v9; // rdi
  size_t i; // rcx

  v3 = Dest;
  if ( Count )
  {
    v4 = (char *)Source - (char *)Dest;
    do
    {
      v5 = *(wchar_t *)((char *)Dest + v4);
      v6 = Count;
      *Dest++ = v5;
      if ( !v5 )
        break;
      --Count;
    }
    while ( Count );
    v7 = v6 - 1;
    if ( !v5 )
      v7 = v6;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = Dest;
        for ( i = v8; i; --i )
          *v9++ = 0;
      }
    }
  }
  return v3;
}

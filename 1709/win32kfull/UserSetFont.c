/*
 * XREFs of UserSetFont @ 0x1C008218C
 * Callers:
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     SetIconMetrics @ 0x1C0082F1C (SetIconMetrics.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1C0082080 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C00822BC (GreMarkDeletableFont.c)
 */

struct HLFONT__ *__fastcall UserSetFont(struct _UNICODE_STRING *a1, _DWORD *a2, unsigned int a3, struct HLFONT__ **a4)
{
  struct HLFONT__ *result; // rax
  struct HLFONT__ *v6; // rdi
  __int64 v7; // rdx
  struct HLFONT__ *v8; // rcx
  __int64 v9; // r8

  result = CreateFontFromUserProfile(a1, a2, a3);
  v6 = result;
  if ( result )
  {
    if ( *a4 )
    {
      v8 = *(struct HLFONT__ **)(GetSessionDpiServerInfo() + 24);
      if ( *a4 != v8 && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo(v8, v7, v9) + 24) )
      {
        GreMarkDeletableFont(*a4);
        GreDeleteObject(*a4);
      }
    }
    *a4 = v6;
    return (struct HLFONT__ *)1;
  }
  return result;
}

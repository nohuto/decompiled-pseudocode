/*
 * XREFs of ?WideString_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?NullValue_ToString@Input@@YA_NPEBXPEAGK@Z @ 0x180034CD8 (-NullValue_ToString@Input@@YA_NPEBXPEAGK@Z.c)
 */

__int64 __fastcall Input::WideString_ToString(Input *this, const void *a2, wchar_t *a3, unsigned __int16 *a4)
{
  unsigned int v5; // ebx

  v5 = (unsigned int)a4;
  if ( Input::NullValue_ToString(this, (char *)a3, (unsigned __int16 *)(unsigned int)a4) )
    return 0LL;
  else
    return StringCchPrintfW(a3, v5, L"\"%s\"", this);
}

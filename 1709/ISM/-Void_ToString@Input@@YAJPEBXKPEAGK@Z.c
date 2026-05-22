/*
 * XREFs of ?Void_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x1800351B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?NullValue_ToString@Input@@YA_NPEBXPEAGK@Z @ 0x180034CD8 (-NullValue_ToString@Input@@YA_NPEBXPEAGK@Z.c)
 */

__int64 __fastcall Input::Void_ToString(Input *this, const void *a2, char *a3, unsigned __int16 *a4)
{
  unsigned int v5; // ebx
  int v6; // ebp
  int v9; // [rsp+20h] [rbp-18h]

  v5 = (unsigned int)a4;
  v6 = (int)a2;
  if ( Input::NullValue_ToString(this, a3, (unsigned __int16 *)(unsigned int)a4) )
    return 0LL;
  v9 = v6;
  return StringCchPrintfW((wchar_t *)a3, v5, L"(void* @ 0x%p, %d bytes)", this, v9);
}

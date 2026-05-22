/*
 * XREFs of ?Guid_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NullValue_ToString@Input@@YA_NPEBXPEAGK@Z @ 0x180034CD8 (-NullValue_ToString@Input@@YA_NPEBXPEAGK@Z.c)
 */

__int64 __fastcall Input::Guid_ToString(GUID *rguid, const void *a2, char *a3, unsigned __int16 *a4)
{
  int v4; // ebx

  v4 = (int)a4;
  if ( (_DWORD)a2 != 16 )
    return 2205630475LL;
  if ( Input::NullValue_ToString((Input *)rguid, a3, (unsigned __int16 *)(unsigned int)a4)
    || StringFromGUID2(rguid, (LPOLESTR)a3, v4) )
  {
    return 0LL;
  }
  return 2147942487LL;
}

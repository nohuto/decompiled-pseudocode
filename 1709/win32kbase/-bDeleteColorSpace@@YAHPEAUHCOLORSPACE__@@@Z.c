/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0085788
 * Callers:
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0085738 (-vCleanupLCSPs@@YAXK@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C00FB090 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1)
{
  unsigned int v1; // ebx
  void *v2; // rax

  v1 = 0;
  if ( a1 != (struct HOBJ__ *)ghStockColorSpace )
  {
    v2 = HmgRemoveObject(a1, 0, 0, 1, 9, 0LL);
    if ( !v2 )
    {
      EngSetLastError(0x57u);
      return v1;
    }
    FreeObject((__int64)v2, 9);
  }
  return 1;
}

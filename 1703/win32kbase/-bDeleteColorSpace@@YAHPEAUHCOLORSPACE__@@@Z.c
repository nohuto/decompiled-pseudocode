/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0080864
 * Callers:
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0080814 (-vCleanupLCSPs@@YAXK@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C00FAAE0 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1)
{
  unsigned int v1; // ebx
  void *v2; // rax

  v1 = 0;
  if ( a1 != (struct HOBJ__ *)ghStockColorSpace )
  {
    v2 = HmgRemoveObjectImpl(a1, 0, 0, 1u, 9, 0LL);
    if ( !v2 )
    {
      EngSetLastError(0x57u);
      return v1;
    }
    FreeObject((__int64)v2, 9);
  }
  return 1;
}

/*
 * XREFs of ?ForcePresent@CHwndRenderTarget@@UEAA_NXZ @ 0x1800174D0
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::ForcePresent(CHwndRenderTarget *this)
{
  bool result; // al
  __int64 v2; // rdx

  result = 0;
  if ( *((_BYTE *)this + 807) )
    return 1;
  v2 = *((_QWORD *)this + 14);
  if ( *(_BYTE *)(v2 + 304) )
  {
    if ( *(_BYTE *)(v2 + 305) && !*((_BYTE *)this + 805) )
      return 1;
  }
  return result;
}

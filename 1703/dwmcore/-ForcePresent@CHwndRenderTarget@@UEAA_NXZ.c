/*
 * XREFs of ?ForcePresent@CHwndRenderTarget@@UEAA_NXZ @ 0x18006EE30
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18006CE40 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ForcePresent(CHwndRenderTarget *this)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( *((_BYTE *)this + 794) )
    return 1LL;
  v2 = *((_QWORD *)this + 14);
  if ( *(_BYTE *)(v2 + 294) )
  {
    if ( *(_BYTE *)(v2 + 295) && !*((_BYTE *)this + 792) )
      return 1LL;
  }
  return result;
}

/*
 * XREFs of ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x18000AFD0
 * Callers:
 *     ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x18000FA10 (-AddRef@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CDuckingManager@@WBI@EAAKXZ @ 0x18000FA20 (-AddRef@CDuckingManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackgroundSessionCallbacks::AddRef(CBackgroundSessionCallbacks *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}

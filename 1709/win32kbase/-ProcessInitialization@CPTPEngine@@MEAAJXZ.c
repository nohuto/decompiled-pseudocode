/*
 * XREFs of ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C0135890
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0137568 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  *((_DWORD *)this + 820) |= 0x80000000;
  *((_DWORD *)this + 750) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  return 0LL;
}

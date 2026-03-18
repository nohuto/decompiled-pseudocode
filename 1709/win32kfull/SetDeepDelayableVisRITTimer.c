/*
 * XREFs of SetDeepDelayableVisRITTimer @ 0x1C0087684
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00874F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 */

__int64 __fastcall SetDeepDelayableVisRITTimer(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = 864000000;
  if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 1) == 0 )
    v2 = a2;
  return InternalSetTimer(
           0,
           gtmridAniCursor,
           v2,
           (unsigned int)zzzAnimateCursor,
           (BYTE4(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 1) != 0 ? 0x36EE80 : 0,
           20);
}

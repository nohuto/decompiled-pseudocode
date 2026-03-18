/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C0049A34
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C004B848 (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(__int64 a1, char a2)
{
  __int64 result; // rax

  result = UpdateCheckpoint();
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 32) |= 1u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 32) |= 2u;
    else
      *(_DWORD *)(result + 32) &= ~2u;
  }
  return result;
}

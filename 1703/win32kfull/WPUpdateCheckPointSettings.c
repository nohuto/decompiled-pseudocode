/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C0101708
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxSetWindowPlacement @ 0x1C0101008 (xxxSetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C001D3E8 (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(__int64 a1, char a2)
{
  __int64 result; // rax

  result = UpdateCheckpoint(a1);
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

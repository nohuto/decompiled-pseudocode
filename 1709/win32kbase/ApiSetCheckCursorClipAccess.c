/*
 * XREFs of ApiSetCheckCursorClipAccess @ 0x1C005D7F0
 * Callers:
 *     NtUserLockCursor @ 0x1C005D750 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00A2040 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C00E7BA0 (NtUserGetClipCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetCheckCursorClipAccess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (int)IsCheckCursorClipAccessSupported() >= 0 )
    return (unsigned int)CheckCursorClipAccess(a1, a2) != 0;
  return v4;
}

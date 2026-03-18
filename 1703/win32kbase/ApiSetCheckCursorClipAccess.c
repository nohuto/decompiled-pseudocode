/*
 * XREFs of ApiSetCheckCursorClipAccess @ 0x1C0071510
 * Callers:
 *     NtUserLockCursor @ 0x1C00713C0 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C0097F10 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C00E15C0 (NtUserGetClipCursor.c)
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

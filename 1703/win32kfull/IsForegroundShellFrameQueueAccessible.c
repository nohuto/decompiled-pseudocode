/*
 * XREFs of IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C003B7CC (xxxInternalKeyEventDirect.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00B3D90 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     NtUserGetKeyState @ 0x1C00B8500 (NtUserGetKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C00B86B0 (NtUserGetKeyboardState.c)
 *     EditionIsGpqForegroundInaccessible @ 0x1C00B9660 (EditionIsGpqForegroundInaccessible.c)
 *     zzzSetCursorPosByType @ 0x1C00BBA6C (zzzSetCursorPosByType.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00EB950 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionIsGpqForegroundAccessible @ 0x1C01B1C30 (EditionIsGpqForegroundAccessible.c)
 *     xxxInjectTouchInput @ 0x1C01B85C0 (xxxInjectTouchInput.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 376)) )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 384);
  if ( gpqForeground != v2 || (*(_DWORD *)(v2 + 340) & 0x2000000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 80LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 16);
  return v4 && *(_QWORD *)(v4 + 376) == *(_QWORD *)(a1 + 376);
}

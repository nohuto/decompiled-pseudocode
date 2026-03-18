/*
 * XREFs of ProcessHungWindow @ 0x1C01321FC
 * Callers:
 *     NtUserQueryWindow @ 0x1C003C1C0 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C0049F40 (xxxHungAppDemon.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     EditionHandleHungWindow @ 0x1C0112380 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C01199B0 (ShouldProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013224C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall ProcessHungWindow(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagWND *v2; // rax
  struct tagWND *v3; // rsi
  __int64 *i; // rdi

  v1 = 0;
  v2 = ShouldProcessHungWindow(a1);
  v3 = v2;
  if ( v2 )
  {
    for ( i = (__int64 *)((char *)v2 + 120); *i && (unsigned int)IsHungWindow(*i); i = (__int64 *)(*i + 120) )
      v3 = (struct tagWND *)*i;
    return (unsigned int)_GhostOwnerWindowAndOwnees(v3);
  }
  return v1;
}

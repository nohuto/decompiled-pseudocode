/*
 * XREFs of ProcessHungWindow @ 0x1C013431C
 * Callers:
 *     EditionHandleHungWindow @ 0x1C0084F70 (EditionHandleHungWindow.c)
 *     NtUserQueryWindow @ 0x1C0087260 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C0088D20 (xxxHungAppDemon.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     ShouldProcessHungWindow @ 0x1C00842F8 (ShouldProcessHungWindow.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013436C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
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

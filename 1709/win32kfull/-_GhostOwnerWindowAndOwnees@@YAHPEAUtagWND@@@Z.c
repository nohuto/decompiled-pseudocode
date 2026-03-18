/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013436C
 * Callers:
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 * Callees:
 *     ShouldProcessHungWindow @ 0x1C00842F8 (ShouldProcessHungWindow.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01343F0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall _GhostOwnerWindowAndOwnees(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 i; // rbx
  __int64 j; // rax

  v2 = 0;
  if ( ShouldProcessHungWindow((__int64)a1) )
    v2 = _GhostWindow(a1);
  if ( IsNonImmersiveBand((__int64)a1) )
  {
    for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 96) )
    {
      for ( j = *(_QWORD *)(i + 120); j; j = *(_QWORD *)(j + 120) )
      {
        if ( (struct tagWND *)j == a1 )
        {
          if ( ShouldProcessHungWindow(i) == (struct tagWND *)i )
            v2 |= _GhostWindow((struct tagWND *)i);
          break;
        }
      }
    }
  }
  return v2;
}

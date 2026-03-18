/*
 * XREFs of IsSAS @ 0x1C00EFFC8
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00CAF60 (EditionKeyEventLLHook.c)
 *     EditionDoHotKeys @ 0x1C00EF980 (EditionDoHotKeys.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     EditionIsSAS @ 0x1C0139C30 (EditionIsSAS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSAS(unsigned __int8 a1, _DWORD *a2)
{
  PVOID *p_CurrentIrp; // r8
  int v3; // r9d
  int v4; // r10d
  __int64 result; // rax

  p_CurrentIrp = &WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)p_CurrentIrp + 1);
    if ( !v4 )
      return 0LL;
    if ( a1 == v4 && gfsSASModifiersDown == *(_DWORD *)p_CurrentIrp )
      break;
    ++v3;
    ++p_CurrentIrp;
    if ( v3 >= 2 )
      return 0LL;
  }
  result = 1LL;
  *a2 = gfsSASModifiersDown;
  return result;
}

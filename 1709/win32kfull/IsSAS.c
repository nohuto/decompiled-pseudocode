/*
 * XREFs of IsSAS @ 0x1C00FA4E0
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C0055E90 (EditionKeyEventLLHook.c)
 *     EditionDoHotKeys @ 0x1C00F9E30 (EditionDoHotKeys.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 *     EditionIsSAS @ 0x1C0140900 (EditionIsSAS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSAS(unsigned __int8 a1, _DWORD *a2)
{
  PVOID *p_DeviceObject; // r8
  int v3; // r9d
  int v4; // r10d
  __int64 result; // rax

  p_DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)p_DeviceObject + 1);
    if ( !v4 )
      return 0LL;
    if ( a1 == v4 && gfsSASModifiersDown == *(_DWORD *)p_DeviceObject )
      break;
    ++v3;
    ++p_DeviceObject;
    if ( v3 >= 2 )
      return 0LL;
  }
  result = 1LL;
  *a2 = gfsSASModifiersDown;
  return result;
}

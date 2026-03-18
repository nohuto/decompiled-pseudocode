/*
 * XREFs of ImeCanDestroyDefIMEforChild @ 0x1C00C9C98
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00C9E28 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     IsChildSameThread @ 0x1C01BDE34 (IsChildSameThread.c)
 */

__int64 __fastcall ImeCanDestroyDefIMEforChild(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx

  v3 = (unsigned __int64 *)unsafe_cast_fnid_or_class_to_PIMEWND();
  if ( !v3 )
    return 0LL;
  v4 = *v3;
  if ( !*v3 || v4 == -1LL )
    return 0LL;
  if ( v4 >= W32UserProbeAddress )
    v4 = W32UserProbeAddress;
  if ( (*(_DWORD *)(v4 + 44) & 0x10) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 104);
  if ( !v6 || *(_QWORD *)(a2 + 16) == *(_QWORD *)(v6 + 16) )
    return 0LL;
  do
  {
    if ( v6 == GetDesktopWindow(v6) )
      break;
    if ( (unsigned int)IsChildSameThread(v7, a2) )
      return 0LL;
    v6 = *(_QWORD *)(v6 + 104);
  }
  while ( v6 );
  return 1LL;
}

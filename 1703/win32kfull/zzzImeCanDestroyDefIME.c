/*
 * XREFs of zzzImeCanDestroyDefIME @ 0x1C00C9D04
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 * Callees:
 *     zzzImeSetFutureOwner @ 0x1C001C368 (zzzImeSetFutureOwner.c)
 *     ImeCheckTopmost @ 0x1C001E73C (ImeCheckTopmost.c)
 *     DwmAsyncOwnerChange @ 0x1C005CFBC (DwmAsyncOwnerChange.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00C9E28 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(__int64 a1, struct tagWND *a2)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rdx
  struct tagWND **v7; // rsi
  __int64 v8; // rax
  struct tagWND *i; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax

  v4 = (unsigned __int64 *)unsafe_cast_fnid_or_class_to_PIMEWND();
  if ( !v4 )
    return 0LL;
  v5 = *v4;
  if ( !*v4 || v5 == -1LL )
    return 0LL;
  if ( v5 >= W32UserProbeAddress )
    v5 = W32UserProbeAddress;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = (struct tagWND **)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    while ( (struct tagWND *)v8 != a2 )
    {
      if ( !v8 )
        return 0LL;
      v8 = *(_QWORD *)(v8 + 120);
    }
    if ( !v8 )
      return 0LL;
  }
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 15) )
  {
    v10 = *((_QWORD *)i + 21);
    if ( (*(_BYTE *)(v10 + 94) & 1) != 0 || *(_WORD *)(v10 + 8) == *(_WORD *)(gpsi + 882LL) )
      return 0LL;
  }
  zzzImeSetFutureOwner((struct tagWND *)a1, a2);
  ImeCheckTopmost(a1);
  if ( *v7 && a2 != *v7 )
    return 0LL;
  HMAssignmentUnlock(a1 + 120);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v15 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
    DwmAsyncOwnerChange(v15, *(_QWORD *)a1, 0LL);
  }
  return 1LL;
}

/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C01DDB40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMenuItemFromPoint @ 0x1C0217B68 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v16;
    v16[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v12 = ValidateHmenu(a2);
    if ( v12 )
    {
      if ( a1
        && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
        && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) == 0
        && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (*(_DWORD *)(a1 + 368) & 0xF) )
      {
        TransformPointBetweenCoordinateSpaces(&v18, &v18, a1, 0LL);
      }
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v12;
      ++*(_DWORD *)(v12 + 8);
      v9 = xxxMenuItemFromPoint(a1, v12, v18);
      ThreadUnlock1(v14, v13);
    }
    else
    {
      v9 = -1;
    }
    ThreadUnlock1(v11, v10);
  }
  else
  {
    v9 = -1;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}

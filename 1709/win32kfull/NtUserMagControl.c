/*
 * XREFs of NtUserMagControl @ 0x1C01E8EA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     MagControl @ 0x1C01A8228 (MagControl.c)
 */

_BOOL8 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 ThreadWin32Thread; // rax
  BOOL v10; // ebx
  ULONG v11; // eax
  __int64 v12; // rdx

  EnterCrit(0LL, 1LL);
  if ( !a2 || (a2 = ValidateHwnd(a2)) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
    v8 = MagControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, a1, a2);
  }
  else
  {
    v8 = -1073741811;
  }
  v10 = v8 >= 0;
  if ( v8 < 0 )
  {
    v11 = RtlNtStatusToDosError(v8);
    UserSetLastError(v11, v12);
  }
  UserSessionSwitchLeaveCrit(v7, v4);
  return v10;
}

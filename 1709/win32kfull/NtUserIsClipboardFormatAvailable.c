/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C00C6530
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  PVOID v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = 0LL;
  v5 = CheckClipboardAccess();
  if ( v5 )
  {
    if ( !gbLockScreenActive )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v6, v7);
      v4 = grpdeskLogon;
      if ( *(PVOID *)(ThreadWin32Thread + 432) != grpdeskLogon )
        LOBYTE(v2) = FindClipFormat(v5, a1, 1LL) != 0;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}

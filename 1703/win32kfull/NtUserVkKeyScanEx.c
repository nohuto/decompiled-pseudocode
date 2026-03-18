/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C01071C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int16 v12; // bx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 )
    v11 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v11 = *(_QWORD *)(ThreadWin32Thread + 392);
  if ( v11 )
    v12 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v11 + 48) + 32LL));
  else
    v12 = -1;
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v12;
}

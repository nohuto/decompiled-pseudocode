/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C0111700
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int16 v13; // bx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
  if ( a3 )
    v12 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 416);
  if ( v12 )
    v13 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL));
  else
    v13 = -1;
  UserSessionSwitchLeaveCrit(v11, v10);
  return v13;
}

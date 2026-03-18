/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00FB2EC
 * Callers:
 *     NtUserGetCIMSSM @ 0x1C00036D0 (NtUserGetCIMSSM.c)
 *     NtUserGetCurrentInputMessageSource @ 0x1C00FB230 (NtUserGetCurrentInputMessageSource.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(int a1, struct tagINPUT_MESSAGE_SOURCE *a2)
{
  __int64 ThreadWin32Thread; // rdi
  BOOL v5; // edx
  BOOL v7; // [rsp+20h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) & 0x40000000) != 0;
  v5 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) < 0;
  if ( a1 )
  {
    if ( v5 || (**(_DWORD **)(ThreadWin32Thread + 400) & 8) != 0 )
      goto LABEL_4;
LABEL_5:
    *(_DWORD *)a2 = *(_DWORD *)(ThreadWin32Thread + 1100);
    *((_DWORD *)a2 + 1) = *(_DWORD *)(ThreadWin32Thread + 1104);
    return 1LL;
  }
  if ( !v7 && (**(_DWORD **)(ThreadWin32Thread + 400) & 6) == 0 )
    goto LABEL_5;
LABEL_4:
  SetUnavailableInputSource(a2);
  return 1LL;
}

/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01BE7C8
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C010F60C (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01BE0D8 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxImmUnloadLayout(__int64 a1, int a2)
{
  struct _LARGE_STRING *v3; // rdi
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  v3 = (struct _LARGE_STRING *)a2;
  if ( *(_QWORD *)(a1 + 696) )
  {
    v4 = *(_QWORD *)(a1 + 392);
    if ( v4 )
    {
      if ( a2 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v6 = *(_QWORD *)(a1 + 696);
        v9[0] = *(_QWORD *)(ThreadWin32Thread + 368);
        *(_QWORD *)(ThreadWin32Thread + 368) = v9;
        v9[1] = v6;
        ++*(_DWORD *)(v6 + 8);
        xxxSendTransformableMessageTimeout(
          *(_QWORD *)(a1 + 696),
          0x287u,
          0x11uLL,
          v3,
          8,
          gdwHungAppTimeout,
          (__int64 *)&BugCheckParameter3,
          1,
          0);
        ThreadUnlock1(v8, v7);
      }
    }
  }
}

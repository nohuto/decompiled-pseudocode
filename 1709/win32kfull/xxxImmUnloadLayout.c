/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01C22E8
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C01190EC (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01C1BD8 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxImmUnloadLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LARGE_STRING *v5; // rdi
  __int64 v6; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  v5 = (struct _LARGE_STRING *)(int)a2;
  if ( *(_QWORD *)(a1 + 752) )
  {
    v6 = *(_QWORD *)(a1 + 416);
    if ( v6 )
    {
      if ( (_DWORD)a2 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v6 + 42) & 0xF000) == 0xE000 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v6, a4);
        v8 = *(_QWORD *)(a1 + 752);
        v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v11;
        v11[1] = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        xxxSendTransformableMessageTimeout(
          *(__int64 **)(a1 + 752),
          647LL,
          0x11uLL,
          v5,
          8,
          gdwHungAppTimeout,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
        ThreadUnlock1(v10, v9);
      }
    }
  }
}

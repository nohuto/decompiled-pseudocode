/*
 * XREFs of xxxImmActivateLayout @ 0x1C011BE9C
 * Callers:
 *     EditionImmActivateLayout @ 0x1C011BE90 (EditionImmActivateLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01BE0D8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01BE4E0 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

_UNKNOWN **__fastcall xxxImmActivateLayout(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rsi
  __int128 *v6; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  struct _LARGE_STRING *v9; // r9
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // [rsp+58h] [rbp-9h]
  __int128 v14; // [rsp+68h] [rbp+7h]
  __int128 v15; // [rsp+78h] [rbp+17h] BYREF
  __int128 v16; // [rsp+88h] [rbp+27h] BYREF
  _QWORD v17[4]; // [rsp+98h] [rbp+37h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v3 = a1 + 392;
  if ( *(_QWORD *)(a1 + 392) != a2 )
  {
    if ( *(_QWORD *)(a1 + 696) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v8 = *(_QWORD *)(a1 + 696);
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 368);
      *(_QWORD *)(ThreadWin32Thread + 368) = v17;
      v17[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      v9 = *(struct _LARGE_STRING **)(a2 + 40);
      v10 = *(_QWORD *)(a1 + 696);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v10, 0x287u, 0x19uLL, v9, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v12, v11);
      *(_QWORD *)&v14 = v3;
      v6 = &v16;
      *((_QWORD *)&v14 + 1) = a2;
      v16 = v14;
    }
    else
    {
      *(_QWORD *)&v13 = a1 + 392;
      v6 = &v15;
      *((_QWORD *)&v13 + 1) = a2;
      v15 = v13;
    }
    return (_UNKNOWN **)HMAssignmentLock(v6);
  }
  return result;
}

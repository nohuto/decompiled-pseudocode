/*
 * XREFs of xxxImmActivateLayout @ 0x1C0125C04
 * Callers:
 *     EditionImmActivateLayout @ 0x1C0125BF0 (EditionImmActivateLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01C1BD8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01C1FF4 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

_UNKNOWN **__fastcall xxxImmActivateLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rsi
  __int128 *v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  struct _LARGE_STRING *v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // [rsp+58h] [rbp-9h]
  __int128 v16; // [rsp+68h] [rbp+7h]
  __int128 v17; // [rsp+78h] [rbp+17h] BYREF
  __int128 v18; // [rsp+88h] [rbp+27h] BYREF
  _QWORD v19[4]; // [rsp+98h] [rbp+37h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v5 = a1 + 416;
  if ( *(_QWORD *)(a1 + 416) != a2 )
  {
    if ( *(_QWORD *)(a1 + 752) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v10 = *(_QWORD *)(a1 + 752);
      v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v19;
      v19[1] = v10;
      _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
      v11 = *(struct _LARGE_STRING **)(a2 + 40);
      v12 = *(__int64 **)(a1 + 752);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v12, 647LL, 0x19uLL, v11, 0, 0, 0LL, 1u, 1);
      ThreadUnlock1(v14, v13);
      *(_QWORD *)&v16 = v5;
      v8 = &v18;
      *((_QWORD *)&v16 + 1) = a2;
      v18 = v16;
    }
    else
    {
      *(_QWORD *)&v15 = a1 + 416;
      v8 = &v17;
      *((_QWORD *)&v15 + 1) = a2;
      v17 = v15;
    }
    return (_UNKNOWN **)HMAssignmentLock(v8);
  }
  return result;
}

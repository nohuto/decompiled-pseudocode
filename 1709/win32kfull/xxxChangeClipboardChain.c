/*
 * XREFs of xxxChangeClipboardChain @ 0x1C00C52C0
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C00C51E0 (NtUserChangeClipboardChain.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 a2)
{
  __int64 **v4; // rdi
  __int64 v5; // r9
  __int64 **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbp
  unsigned int v11; // edi
  __int64 ThreadWin32Thread; // rax
  struct _LARGE_STRING *v14; // r9
  unsigned __int64 v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v19; // [rsp+50h] [rbp-68h]
  __int128 v20; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v21[3]; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v22[3]; // [rsp+88h] [rbp-30h] BYREF

  v4 = (__int64 **)CheckClipboardAccess();
  if ( !v4 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v6 = v4 + 9;
  if ( !v4[9] )
    return 0LL;
  if ( a2 && *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 400LL) + 640LL) != v4 )
    a2 = 0LL;
  PushW32ThreadLock((__int64)v4, v22, UserDereferenceObject, v5);
  ObfReferenceObject(v4);
  v10 = *v6;
  if ( a1 == (unsigned __int64 *)*v6 )
  {
    *(_QWORD *)&v19 = v4 + 9;
    *((_QWORD *)&v19 + 1) = a2;
    v20 = v19;
    HMAssignmentLock(&v20);
    v11 = 1;
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v21[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v21;
    v21[1] = v10;
    _InterlockedAdd((volatile signed __int32 *)v10 + 2, 1u);
    v14 = 0LL;
    if ( a2 )
      v14 = *(struct _LARGE_STRING **)a2;
    v15 = *a1;
    v16 = *v6;
    _InterlockedAdd(&glSendMessage, 1u);
    v11 = xxxSendTransformableMessageTimeout(v16, 781LL, v15, v14, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v18, v17);
  }
  PopAndFreeW32ThreadLock(v22);
  return v11;
}

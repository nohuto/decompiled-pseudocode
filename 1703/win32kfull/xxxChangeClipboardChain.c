/*
 * XREFs of xxxChangeClipboardChain @ 0x1C00AE420
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C00AE340 (NtUserChangeClipboardChain.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 a2)
{
  ULONG_PTR *v4; // rdi
  ULONG_PTR *v5; // rsi
  ULONG_PTR v6; // rdx
  unsigned int v7; // edi
  struct _LARGE_STRING *v9; // r9
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int128 v15; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+70h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+88h] [rbp-20h] BYREF

  v4 = (ULONG_PTR *)CheckClipboardAccess();
  if ( !v4 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v5 = v4 + 9;
  if ( !v4[9] )
    return 0LL;
  if ( a2 && *(ULONG_PTR **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 376LL) + 632LL) != v4 )
    a2 = 0LL;
  PushW32ThreadLock((__int64)v4, v17, UserDereferenceObject);
  ObfReferenceObject(v4);
  v6 = *v5;
  if ( a1 == (unsigned __int64 *)*v5 )
  {
    *(_QWORD *)&v14 = v4 + 9;
    *((_QWORD *)&v14 + 1) = a2;
    v15 = v14;
    HMAssignmentLock(&v15);
    v7 = 1;
  }
  else
  {
    v9 = 0LL;
    v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v16;
    v16[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( a2 )
      v9 = *(struct _LARGE_STRING **)a2;
    v10 = *a1;
    v11 = *v5;
    _InterlockedAdd(&glSendMessage, 1u);
    v7 = xxxSendTransformableMessageTimeout(v11, 0x30Du, v10, v9, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v13, v12);
  }
  PopAndFreeW32ThreadLock(v17);
  return v7;
}

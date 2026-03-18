/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C000BD0C
 * Callers:
 *     xxxGetClipboardData @ 0x1C00C5AC0 (xxxGetClipboardData.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ClipFormat; // rax
  _QWORD v15[3]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v16[24]; // [rsp+68h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 8) & 0x40;
    *((_DWORD *)a1 + 8) |= 0x80u;
    v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 400LL), 0LL, 2LL);
    v7 = v6;
    if ( v6 )
      PushW32ThreadLock(v6, v16, ReleaseWakeReference);
    v8 = *((_QWORD *)a1 + 10);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v15[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v15;
    v15[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v10 = xxxSendTransformableMessageTimeout(*((_QWORD *)a1 + 10), 66, 30000, (ULONG_PTR)&BugCheckParameter3, 1, 0) != 0;
    ThreadUnlock1(v12, v11);
    if ( v7 )
      PopAndFreeAlwaysW32ThreadLock(v16);
    if ( v5 )
      *((_DWORD *)a1 + 8) |= 0x40u;
    else
      *((_DWORD *)a1 + 8) &= ~0x40u;
    *((_DWORD *)a1 + 8) &= ~0x80u;
    if ( !v10 )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 1LL);
  if ( ClipFormat )
    return *(void **)(ClipFormat + 8);
  else
    return 0LL;
}

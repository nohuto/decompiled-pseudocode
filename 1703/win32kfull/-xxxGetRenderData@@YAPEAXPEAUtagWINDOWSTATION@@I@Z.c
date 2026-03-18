/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0006A14
 * Callers:
 *     xxxGetClipboardData @ 0x1C00AEDEC (xxxGetClipboardData.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     FindClipFormat @ 0x1C00AF864 (FindClipFormat.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  BOOL v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 ClipFormat; // rax
  _QWORD v14[3]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v15[24]; // [rsp+68h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 8) & 0x40;
    *((_DWORD *)a1 + 8) |= 0x80u;
    v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 376LL), 0LL, 2LL);
    v7 = v6;
    if ( v6 )
      PushW32ThreadLock(v6, v15, ReleaseWakeReference);
    v8 = *((_QWORD *)a1 + 10);
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v9 = xxxSendTransformableMessageTimeout(
           *((_QWORD *)a1 + 10),
           773,
           a2,
           0,
           66,
           30000,
           (ULONG_PTR)&BugCheckParameter3,
           1,
           0) != 0;
    ThreadUnlock1(v11, v10);
    if ( v7 )
      PopAndFreeAlwaysW32ThreadLock(v15);
    if ( v5 )
      *((_DWORD *)a1 + 8) |= 0x40u;
    else
      *((_DWORD *)a1 + 8) &= ~0x40u;
    *((_DWORD *)a1 + 8) &= ~0x80u;
    if ( !v9 )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 1LL);
  if ( ClipFormat )
    return *(void **)(ClipFormat + 8);
  else
    return 0LL;
}

/*
 * XREFs of xxxWindowFromPoint @ 0x1C0061E0C
 * Callers:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     NtUserWindowFromPoint @ 0x1C0060A90 (NtUserWindowFromPoint.c)
 * Callees:
 *     xxxDCEWindowHitTest @ 0x1C0061F80 (xxxDCEWindowHitTest.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     xxxWindowHitTest2 @ 0x1C0109384 (xxxWindowHitTest2.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxWindowFromPoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ebx
  ULONG_PTR v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _KTHREAD *v14; // rbp
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rbp
  struct _KTHREAD *v23; // r14
  __int64 *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD v32[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v33[3]; // [rsp+58h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v12 = *ThreadWin32Thread;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 440);
        if ( v13 )
          v6 = *(_QWORD *)(v13 + 16);
      }
    }
  }
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
  {
    v16 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v16 )
      v15 = *v16;
  }
  v32[0] = *(_QWORD *)(v15 + 392);
  *(_QWORD *)(v15 + 392) = v32;
  v32[1] = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  if ( (unsigned int)IsWindowDesktopComposed(v6) )
  {
    v21 = *(_QWORD *)(v6 + 112);
    v22 = 0LL;
    v23 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17, v19, v20) )
    {
      v24 = (__int64 *)PsGetThreadWin32Thread(v23);
      if ( v24 )
        v22 = *v24;
    }
    v33[0] = *(_QWORD *)(v22 + 392);
    *(_QWORD *)(v22 + 392) = v33;
    v33[1] = v21;
    if ( v21 )
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    v25 = xxxDCEWindowHitTest(*(_QWORD *)(v6 + 112), 0, 0, 0, v5, 0LL, 5);
    ThreadUnlock1(v27, v26);
  }
  else
  {
    v25 = xxxWindowHitTest2(v6);
  }
  ThreadUnlock1(v29, v28);
  LOBYTE(v30) = 1;
  return HMValidateHandleNoSecure(v25, v30);
}

/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01C1664
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01C1874 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  ULONG64 v8; // rdx
  struct tagIMEUI *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int32 *v13; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h]
  _QWORD v20[3]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v21[8]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v23; // [rsp+F0h] [rbp+28h]

  v23 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, v21, a3, a4);
    KeAttachProcess(*a1[50]);
  }
  v8 = MmUserProbeAddress;
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (struct tagIMEUI *)MmUserProbeAddress;
  LOBYTE(v8) = 1;
  BugCheckParameter2 = HMValidateHandleNoSecure(*((_QWORD *)v9 + 4), v8, a3, a4);
  if ( BugCheckParameter2 )
  {
    v13 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v13);
    if ( v7 )
      KeDetachProcess();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v20;
    v20[1] = BugCheckParameter2;
    _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 8));
    _InterlockedIncrement(&glSendMessage);
    v23 = xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 642LL, a4, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v16, v15);
    if ( v7 )
    {
      if ( ((_DWORD)a1[58] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v21, v17);
        return v23;
      }
      KeAttachProcess(*a1[50]);
    }
    _InterlockedDecrement(v13);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v23;
}

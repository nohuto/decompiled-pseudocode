/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01BDB84
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01BDD8C (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  struct tagIMEUI *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG_PTR v13; // [rsp+50h] [rbp-78h]
  _QWORD v14[3]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v15[8]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v17; // [rsp+F0h] [rbp+28h]

  v17 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, v15);
    KeAttachProcess(*a1[47]);
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v8 = (struct tagIMEUI *)W32UserProbeAddress;
  v13 = HMValidateHandleNoSecure(*((_QWORD *)v8 + 4), 1);
  if ( v13 )
  {
    v9 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v9);
    if ( v7 )
      KeDetachProcess();
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v13;
    ++*(_DWORD *)(v13 + 8);
    _InterlockedIncrement(&glSendMessage);
    v17 = xxxSendTransformableMessageTimeout(v13, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v11, v10);
    if ( v7 )
    {
      if ( ((_DWORD)a1[55] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v15);
        return v17;
      }
      KeAttachProcess(*a1[47]);
    }
    _InterlockedDecrement(v9);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v17;
}

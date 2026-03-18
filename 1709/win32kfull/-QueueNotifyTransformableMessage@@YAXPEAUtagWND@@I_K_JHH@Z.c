/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00E34AC
 * Callers:
 *     xxxActivateApp @ 0x1C00544F0 (xxxActivateApp.c)
 *     xxxFocusSetInputContext @ 0x1C008585C (xxxFocusSetInputContext.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CC3F4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00E33AC (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01405C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     QueueNotifyMessage @ 0x1C01F2BA0 (QueueNotifyMessage.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[4]; // [rsp+50h] [rbp-28h] BYREF
  char v17; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v16;
  v16[1] = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v15, v14);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
}

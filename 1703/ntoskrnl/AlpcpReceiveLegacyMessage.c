/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x14047C970
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x14047C7E0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpReadMessageData @ 0x14047C750 (AlpcpReadMessageData.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14056AA6C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(__int64 *a1, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v8; // r12
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // r15
  unsigned int v14; // r14d
  ULONG_PTR v15; // rdi
  char *v16; // rdx
  void **v18; // rdi
  __int64 v19; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h]
  void *v23; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v24; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v21 = 0LL;
  v9 = *a1;
  v19 = *a1;
  v22 = *a1;
  if ( v8 )
  {
    if ( a3 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a3;
      v21 = *(_QWORD *)v12;
      a3 = &v21;
    }
    if ( a2 )
    {
      v10 = a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 39) = *(_BYTE *)(v10 + 39);
    }
    if ( a4 )
    {
      v11 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
  }
  else
  {
    v8 = (CurrentThread->MiscFlags & 0x400) != 0;
  }
  v13 = 0LL;
  v23 = 0LL;
  if ( (*(_BYTE *)(v9 + 416) & 6) == 6 )
  {
    v18 = *(void ***)(v9 + 16);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v18 - 2), 0LL);
    v13 = *v18;
    v23 = v13;
    if ( v13 && ObReferenceObjectSafe((__int64)v13) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v18 - 2);
      KeAbPostRelease((ULONG_PTR)(v18 - 2));
      v19 = (__int64)v13;
      v22 = (__int64)v13;
      *a1 = (__int64)v13;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v18 - 2);
    KeAbPostRelease((ULONG_PTR)(v18 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_17:
    while ( 1 )
    {
      v14 = AlpcpReceiveMessagePort((_DWORD)a1, v8, (_DWORD)a3, (unsigned int)&BugCheckParameter2, 0);
      if ( v14 )
        break;
      v15 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 200) = v24;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v15 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v15 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v15 + 272);
          if ( (*(_DWORD *)(v19 + 256) & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v16 = (char *)(a2 + 40);
          if ( *(_QWORD *)(v15 + 176) )
            AlpcpGetDataFromUserVaSafe(v15, v16);
          else
            AlpcpReadMessageData(v15, v16);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v15 + 120);
        if ( a2 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v15);
          AlpcpUnlockBlob(v15);
        }
        else
        {
          *(_QWORD *)(v15 + 200) = 0LL;
          AlpcpCancelMessage(v19, v15, 0x10000);
        }
        break;
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 64) == v19 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      AlpcpCancelMessage(v19, v15, 0x10000);
      BugCheckParameter2 = 0LL;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    return v14;
  }
}

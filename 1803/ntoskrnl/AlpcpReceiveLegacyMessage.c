/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x1404D0660
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1404D04D0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     AlpcpReadMessageData @ 0x1404CBF1C (AlpcpReadMessageData.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140748138 (AlpcpGetDataFromUserVaSafe.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(_QWORD *a1, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v8; // r12
  _DWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r14d
  ULONG_PTR v18; // rdi
  char *v19; // rdx
  void **v21; // rdi
  _DWORD *v22; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-50h]
  void *v26; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v27; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v24 = 0LL;
  v9 = (_DWORD *)*a1;
  v22 = (_DWORD *)*a1;
  v25 = (_DWORD *)*a1;
  if ( v8 )
  {
    if ( a3 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a3;
      v24 = *(_QWORD *)v12;
      a3 = &v24;
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
  v26 = 0LL;
  if ( (v9[104] & 6) == 6 )
  {
    v21 = (void **)*((_QWORD *)v9 + 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v21 - 2), 0LL);
    v13 = *v21;
    v26 = v13;
    if ( v13 && ObReferenceObjectSafe((__int64)v13) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v21 - 2);
      KeAbPostRelease((ULONG_PTR)(v21 - 2));
      v22 = v13;
      v25 = v13;
      *a1 = v13;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v21 - 2);
    KeAbPostRelease((ULONG_PTR)(v21 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_17:
    while ( 1 )
    {
      v17 = AlpcpReceiveMessagePort(a1, v8, (__int64)a3, &BugCheckParameter2, 0);
      if ( v17 )
        break;
      v18 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 200) = v27;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v18 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v18 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v18 + 272);
          if ( (v22[64] & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v19 = (char *)(a2 + 40);
          if ( *(_QWORD *)(v18 + 176) )
            AlpcpGetDataFromUserVaSafe(v18, v19);
          else
            AlpcpReadMessageData(v18, v19);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v18 + 120);
        if ( a2 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v18, v14, v15, v16);
          AlpcpUnlockBlob(v18, v14, v15, v16);
        }
        else
        {
          *(_QWORD *)(v18 + 200) = 0LL;
          AlpcpCancelMessage(v22, v18, 0x10000LL);
        }
        break;
      }
      if ( *(_DWORD **)(BugCheckParameter2 + 64) == v22 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v18 + 56) = 0LL;
      }
      AlpcpCancelMessage(v22, v18, 0x10000LL);
      BugCheckParameter2 = 0LL;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    return v17;
  }
}

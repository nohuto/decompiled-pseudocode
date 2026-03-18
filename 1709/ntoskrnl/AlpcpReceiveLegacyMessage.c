/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x140464260
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140464104 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140464544 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReadMessageData @ 0x1404A25E0 (AlpcpReadMessageData.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406DD418 (AlpcpGetDataFromUserVaSafe.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(__int64 *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 *v6; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v8; // r13
  __int64 v9; // rdx
  __int64 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // r12
  unsigned int v14; // r15d
  ULONG_PTR v15; // rdi
  __int64 v16; // rdx
  void **v18; // rdi
  __int64 v19; // [rsp+30h] [rbp-68h]
  ULONG_PTR v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h]
  void *v23; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v24; // [rsp+58h] [rbp-40h]
  int v25; // [rsp+A0h] [rbp+8h]
  __int64 *v26; // [rsp+B0h] [rbp+18h]

  LODWORD(v26) = a3;
  v25 = (int)a1;
  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v21 = 0LL;
  v9 = *v6;
  v19 = *v6;
  v22 = *v6;
  if ( v8 )
  {
    LODWORD(v10) = a3;
    if ( a3 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( a3 < 0x7FFFFFFF0000LL )
        v12 = a3;
      v21 = *(_QWORD *)v12;
      v10 = &v21;
      v26 = &v21;
    }
    if ( a2 )
    {
      AlpcpProbeForWriteMessageHeader(a2, 0LL);
      v9 = v19;
    }
    if ( a4 )
    {
      v11 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      LODWORD(v10) = (_DWORD)v26;
    }
  }
  else
  {
    LODWORD(v10) = a3;
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
      *v6 = (__int64)v13;
      LODWORD(v10) = (_DWORD)v26;
      goto LABEL_13;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v18 - 2);
    KeAbPostRelease((ULONG_PTR)(v18 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      v14 = AlpcpReceiveMessagePort((_DWORD)v6, v8, (_DWORD)v10, (unsigned int)&v20, 0);
      if ( v14 )
        break;
      v15 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(v20 + 200) = v24;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v15 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v15 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v15 + 272);
          if ( (*(_DWORD *)(v19 + 256) & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v16 = a2 + 40;
          if ( *(_QWORD *)(v15 + 176) )
            AlpcpGetDataFromUserVaSafe(v15, v16);
          else
            AlpcpReadMessageData(v15, v16);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v15 + 120);
        if ( a2 )
        {
          AlpcpUnlockMessage(v15);
        }
        else
        {
          *(_QWORD *)(v15 + 200) = 0LL;
          AlpcpCancelMessage(v19, v15, 0x10000);
        }
        break;
      }
      if ( *(_QWORD *)(v20 + 64) == v19 )
      {
        *(_QWORD *)(v20 + 64) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      AlpcpCancelMessage(v19, v15, 0x10000);
      v20 = 0LL;
      LODWORD(v6) = v25;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    return v14;
  }
}

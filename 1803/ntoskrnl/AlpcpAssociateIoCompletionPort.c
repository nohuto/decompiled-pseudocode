/*
 * XREFs of AlpcpAssociateIoCompletionPort @ 0x14052E268
 * Callers:
 *     NtAlpcSetInformation @ 0x14052E020 (NtAlpcSetInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400845E0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400B88D8 (AlpcpFreeCompletionPacketLookaside.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14052E8E4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpAssociateIoCompletionPort(__int64 a1, void *a2, __int64 a3)
{
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 CompletionPacketLookaside; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *i; // r14
  void *v23; // rcx
  KSPIN_LOCK *v24; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6, v7, v8, v9);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225544LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v10 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
      v13 = Object;
      *(_QWORD *)(a1 + 32) = Object;
      v14 = v10;
      if ( v10 >= 0 )
      {
        v15 = *(_QWORD *)(a1 + 360);
        *(_QWORD *)(a1 + 40) = a3;
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 96) >> 3;
        }
        else
        {
          if ( (*(_BYTE *)v13 & 0x7F) == 0x15 )
            LODWORD(v16) = v13[166];
          else
            LODWORD(v16) = v13[11];
          if ( (unsigned int)v16 > 4 )
            LODWORD(v16) = 4;
        }
        CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside((unsigned int)v16, v13, a3);
        *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
        if ( CompletionPacketLookaside )
        {
          ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
          for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
            AlpcpQueueIoCompletionPort((_QWORD *)a1, 0, 0, 0);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 136), v18, v19, v20);
          KeAbPostRelease(a1 + 136);
          v14 = 0;
LABEL_16:
          if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v6, (__int64)v13, v11, v12);
          KeAbPostRelease((ULONG_PTR)v6);
          return v14;
        }
        v14 = -1073741670;
      }
      v23 = *(void **)(a1 + 32);
      if ( v23 )
      {
        ObfDereferenceObject(v23);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      v24 = *(KSPIN_LOCK **)(a1 + 48);
      if ( v24 )
      {
        AlpcpFreeCompletionPacketLookaside(v24);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      goto LABEL_16;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6, v7, v8, v9);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225659LL;
  }
}

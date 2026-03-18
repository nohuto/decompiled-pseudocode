/*
 * XREFs of AlpcpLookupMessage @ 0x1404A1F90
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     NtAlpcOpenSenderProcess @ 0x140467C20 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcOpenSenderThread @ 0x140468EC8 (NtAlpcOpenSenderThread.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14049DAF0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x140505F58 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14056F0C0 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcCancelMessage @ 0x1405E6040 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x1406DD164 (AlpcpCopyRequestData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x140283E9C (ExHandleLogBadReference.c)
 *     AlpcReferenceBlobByHandle @ 0x140462188 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, int a2, int a3, ULONG_PTR *a4)
{
  ULONG_PTR v8; // r14
  char PreviousMode; // r12
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  ULONG_PTR v12; // rbx
  signed __int64 BugCheckParameter4; // rax
  bool v14; // zf
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR v18; // rax
  _DWORD *v19; // rbx
  signed __int32 v20; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF

  if ( a2 >= 0 )
  {
    if ( (a2 & 0xFC000000) != 0 )
    {
      if ( !AlpcpSecondaryMessageTables )
        return 3221227266LL;
      v8 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)(unsigned int)a2 >> 26));
    }
    else
    {
      v8 = AlpcMessageTable;
    }
    if ( v8 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( (a2 & 0x3FC) == 0 || (v10 = (signed __int64 *)ExpLookupHandleTableEntry(v8, a2 & 0x3FFFFFF)) == 0LL )
      {
LABEL_37:
        ExHandleLogBadReference(v8, a2 & 0x3FFFFFF, PreviousMode);
        return 3221227266LL;
      }
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v10);
          v11 = *v10;
          if ( (*v10 & 1) != 0 )
            break;
          if ( !v11 )
            goto LABEL_37;
          ExpBlockOnLockedHandleEntry(v8, v10, v11);
        }
      }
      while ( v11 != _InterlockedCompareExchange64(v10, v11 - 1, v11) );
      v12 = (*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(v12 + 0x108) != a2
        || a3 && *(_DWORD *)(((*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x110) != a3
        || !AlpcpReferenceBlob((*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        _InterlockedExchangeAdd64(v10, 1uLL);
        _InterlockedOr(v21, 0);
        if ( *(_QWORD *)(v8 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
        return 3221227266LL;
      }
      ExAcquirePushLockExclusiveEx(v12 - 16, 0LL);
      *(_BYTE *)(v12 - 32) |= 1u;
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), 0x10000uLL) + 0x10000;
      if ( BugCheckParameter4 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v12, 0x26uLL, BugCheckParameter4);
      --*(_WORD *)(v12 - 30);
      _InterlockedExchangeAdd64(v10, 1uLL);
      _InterlockedOr(v21, 0);
      if ( *(_QWORD *)(v8 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
      if ( *(_DWORD *)(v12 + 264) != a2
        || a3 && *(_DWORD *)(v12 + 272) != a3
        || !*(_QWORD *)(v12 + 24) && !*(_QWORD *)(v12 + 16) )
      {
        AlpcpUnlockMessage(v12);
        return 3221227266LL;
      }
      if ( a1 )
      {
        if ( *(_QWORD *)(v12 + 184) == *(_QWORD *)(a1 + 16) )
        {
LABEL_24:
          *a4 = v12;
          return 0LL;
        }
        v14 = *(_QWORD *)(v12 + 192) == a1;
      }
      else
      {
        v16 = *(_QWORD *)(v12 + 16);
        if ( !v16 )
        {
LABEL_49:
          AlpcpUnlockMessage(v12);
          return 3221225506LL;
        }
        v14 = *(_KPROCESS **)(v16 + 24) == KeGetCurrentThread()->ApcState.Process;
      }
      if ( v14 )
        goto LABEL_24;
      goto LABEL_49;
    }
    return 3221227266LL;
  }
  if ( !a1 )
    return 3221227266LL;
  v17 = *(_QWORD *)(a1 + 16);
  if ( !v17 )
    return 3221226224LL;
  v18 = AlpcReferenceBlobByHandle(v17 + 40, a2 & 0x7FFFFFFF, AlpcReserveType);
  if ( !v18 )
    return 3221226224LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), 1, 0) )
  {
    AlpcpDereferenceBlobEx(v18, 1);
    return 3221227272LL;
  }
  else
  {
    v19 = *(_DWORD **)(v18 + 24);
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)v19);
    v19[10] |= 0x2000u;
    v19[66] &= ~0x80000000;
    do
      v20 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v20 );
    v19[68] = v20;
    result = 0LL;
    *a4 = (ULONG_PTR)v19;
  }
  return result;
}

/*
 * XREFs of AlpcpLookupMessage @ 0x14047D360
 * Callers:
 *     NtAlpcCancelMessage @ 0x14042F61C (NtAlpcCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderThread @ 0x140447D5C (NtAlpcOpenSenderThread.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1404705E8 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderProcess @ 0x1404751D8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14047CFB0 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcQueryInformationMessage @ 0x140516968 (NtAlpcQueryInformationMessage.c)
 *     AlpcpCopyRequestData @ 0x1406B1584 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CEE0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, int a2, int a3, ULONG_PTR *a4)
{
  ULONG_PTR v8; // r14
  char PreviousMode; // r12
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  ULONG_PTR v12; // rbx
  signed __int64 BugCheckParameter4; // rax
  __int64 result; // rax
  bool v15; // zf
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
LABEL_29:
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
            goto LABEL_29;
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
LABEL_22:
          *a4 = v12;
          return 0LL;
        }
        v15 = *(_QWORD *)(v12 + 192) == a1;
      }
      else
      {
        v16 = *(_QWORD *)(v12 + 16);
        if ( !v16 )
        {
LABEL_50:
          AlpcpUnlockMessage(v12);
          return 3221225506LL;
        }
        v15 = *(_KPROCESS **)(v16 + 24) == KeGetCurrentThread()->ApcState.Process;
      }
      if ( v15 )
        goto LABEL_22;
      goto LABEL_50;
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
    AlpcpDereferenceBlobEx(v18);
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

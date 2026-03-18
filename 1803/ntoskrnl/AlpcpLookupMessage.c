/*
 * XREFs of AlpcpLookupMessage @ 0x1404CDFA0
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1404CED50 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     NtAlpcOpenSenderProcess @ 0x1404DDA8C (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderThread @ 0x1404E032C (NtAlpcOpenSenderThread.c)
 *     AlpcpReceiveDirectMessagePort @ 0x140558B14 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcQueryInformationMessage @ 0x14055DB84 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcCancelMessage @ 0x140582FB0 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x140747E84 (AlpcpCopyRequestData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x1402B8000 (ExHandleLogBadReference.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1404D03B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, __int64 a2, int a3, ULONG_PTR *a4)
{
  int v4; // esi
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rbx
  char PreviousMode; // r12
  signed __int64 *v11; // rdi
  signed __int64 v12; // r8
  ULONG_PTR v13; // rbx
  signed __int64 BugCheckParameter4; // rax
  bool v15; // zf
  signed __int64 v16; // rdx
  signed __int64 v17; // rax
  bool v18; // zf
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  ULONG_PTR v23; // rdi
  ULONG_PTR v24; // rbx
  signed __int32 v25; // eax
  signed __int32 v26[8]; // [rsp+0h] [rbp-58h] BYREF

  v4 = a2;
  if ( (int)a2 >= 0 )
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
      v9 = a2 & 0x3FFFFFF;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( (a2 & 0x3FC) != 0 )
      {
        v11 = (signed __int64 *)ExpLookupHandleTableEntry(v8, (unsigned int)v9);
        if ( v11 )
        {
          do
          {
            while ( 1 )
            {
              _m_prefetchw(v11);
              v12 = *v11;
              if ( (*v11 & 1) != 0 )
                break;
              if ( !v12 )
                goto LABEL_32;
              ExpBlockOnLockedHandleEntry(v8, v11, v12);
            }
          }
          while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
          v13 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( *(_DWORD *)(v13 + 0x108) == v4
            && (!a3 || *(_DWORD *)(((*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x110) == a3) )
          {
            _m_prefetchw((const void *)(v13 - 24));
            BugCheckParameter4 = *(_QWORD *)(v13 - 24);
            v15 = BugCheckParameter4 == 0;
            if ( BugCheckParameter4 > 0 )
            {
              while ( 1 )
              {
                v16 = BugCheckParameter4;
                BugCheckParameter4 = _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v13 - 24),
                                       BugCheckParameter4 + 1,
                                       BugCheckParameter4);
                if ( BugCheckParameter4 == v16 )
                  break;
                if ( BugCheckParameter4 <= 0 )
                {
                  v15 = BugCheckParameter4 == 0;
                  goto LABEL_51;
                }
              }
              if ( BugCheckParameter4 == -1 )
                goto LABEL_34;
              ExAcquirePushLockExclusiveEx(v13 - 16, 0LL);
              *(_BYTE *)(v13 - 32) |= 1u;
              v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
              if ( v17 <= 0 )
                KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, v17);
              --*(_WORD *)(v13 - 30);
              _InterlockedExchangeAdd64(v11, 1uLL);
              _InterlockedOr(v26, 0);
              if ( *(_QWORD *)(v8 + 48) )
                ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
              if ( *(_DWORD *)(v13 + 264) != v4
                || a3 && *(_DWORD *)(v13 + 272) != a3
                || !*(_QWORD *)(v13 + 24) && !*(_QWORD *)(v13 + 16) )
              {
                AlpcpUnlockMessage(v13);
                return 3221227266LL;
              }
              if ( a1 )
              {
                if ( *(_QWORD *)(v13 + 184) == *(_QWORD *)(a1 + 16) )
                {
LABEL_26:
                  *a4 = v13;
                  return 0LL;
                }
                v18 = *(_QWORD *)(v13 + 192) == a1;
              }
              else
              {
                v20 = *(_QWORD *)(v13 + 16);
                if ( !v20 )
                {
LABEL_55:
                  AlpcpUnlockMessage(v13);
                  return 3221225506LL;
                }
                v18 = *(_KPROCESS **)(v20 + 24) == KeGetCurrentThread()->ApcState.Process;
              }
              if ( v18 )
                goto LABEL_26;
              goto LABEL_55;
            }
LABEL_51:
            if ( !v15 )
              KeBugCheckEx(0x18u, 0LL, v13, 0x20uLL, BugCheckParameter4);
          }
LABEL_34:
          _InterlockedExchangeAdd64(v11, 1uLL);
          _InterlockedOr(v26, 0);
          if ( *(_QWORD *)(v8 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
          return 3221227266LL;
        }
      }
LABEL_32:
      ExHandleLogBadReference(v8, v9, PreviousMode);
    }
    return 3221227266LL;
  }
  if ( !a1 )
    return 3221227266LL;
  v21 = *(_QWORD *)(a1 + 16);
  if ( !v21 )
    return 3221226224LL;
  a2 = (unsigned int)a2;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v22 = AlpcReferenceBlobByHandle(v21 + 40, a2, &AlpcReserveType);
  v23 = v22;
  if ( !v22 )
    return 3221226224LL;
  v24 = *(_QWORD *)(v22 + 24);
  AlpcpLockForCachedReferenceBlob(v24);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 40), 1, 0) )
  {
    AlpcpUnlockMessage(v24);
    AlpcpDereferenceBlobEx(v23);
    return 3221227272LL;
  }
  else
  {
    *(_DWORD *)(v24 + 264) &= ~0x80000000;
    do
      v25 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v25 );
    *(_DWORD *)(v24 + 272) = v25;
    result = 0LL;
    *a4 = v24;
  }
  return result;
}

/*
 * XREFs of AlpcpCreateSecurityContext @ 0x14047C5D4
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x14047A324 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14047CDCC (AlpcpCaptureSecurityAttributeInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14047A170 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcAddHandleTableEntry @ 0x14047A19C (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14047A2E4 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14047BFBC (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C5A0 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        volatile signed __int64 *Object,
        char a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KPROCESS *Process; // rdi
  char *Blob; // rax
  ULONG_PTR v11; // rbx
  int ClientSecurity; // ebp
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  ULONG_PTR v17[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  Blob = AlpcpAllocateBlob((__int64)&AlpcSecurityType, 112LL, 0);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  ClientSecurity = AlpcpChargePagedPoolQuota(Process, 0xA0uLL);
  if ( ClientSecurity >= 0 )
  {
    ClientSecurity = SeCreateClientSecurity(CurrentThread, a3, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota(Process, 0xA0uLL);
    }
    else
    {
      ObfReferenceObjectWithTag(Process, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = Process;
      if ( !a2 )
      {
LABEL_10:
        result = 0LL;
        *a4 = v11;
        return result;
      }
      v13 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) == 0 )
      {
        ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
        *(_BYTE *)(v11 - 32) |= 4u;
        AlpcpReferenceBlob(v11);
        v14 = *((_QWORD *)Object + 2) + 40LL;
        v17[0] = v11;
        *(_QWORD *)v11 = v14;
        v15 = AlpcAddHandleTableEntry(v14, v17);
        *(_QWORD *)(v11 + 8) = v15;
        if ( v15 != -1 )
        {
          ObfReferenceObject((PVOID)Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpInsertResourcePort((__int64)Object, v11);
          if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 44));
          AlpcpEndInitialization(v11);
          goto LABEL_10;
        }
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11);
  return (unsigned int)ClientSecurity;
}

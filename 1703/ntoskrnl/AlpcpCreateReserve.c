/*
 * XREFs of AlpcpCreateReserve @ 0x14043CDF4
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x14043CD0C (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpCaptureMessageData @ 0x14043D038 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessage @ 0x140479EA0 (AlpcpAllocateMessage.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14047A170 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcAddHandleTableEntry @ 0x14047A19C (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14047A2E4 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14047BFBC (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C5A0 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  signed __int64 **Blob; // rax
  signed __int64 **v8; // rdi
  _KPROCESS *Process; // r14
  int v10; // ebx
  ULONG_PTR v11; // rbx
  int v12; // esi
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v16; // [rsp+68h] [rbp+10h] BYREF
  signed __int64 **v17; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = (signed __int64 **)AlpcpAllocateBlob(&AlpcReserveType, 48LL);
  v8 = Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x30uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = AlpcpChargePagedPoolQuota(Process, 792LL);
  if ( v10 < 0 )
    goto LABEL_8;
  v10 = AlpcpAllocateMessage(&v16, a2, 1LL);
  if ( v10 < 0 )
  {
    AlpcpReleasePagedPoolQuota(Process, 792LL);
LABEL_8:
    AlpcpDereferenceBlobEx((ULONG_PTR)v8);
    return (unsigned int)v10;
  }
  ObfReferenceObjectWithTag(Process, 0x63706C41u);
  v11 = v16;
  *(_QWORD *)(v16 + 48) = Process;
  v8[3] = (signed __int64 *)v11;
  v8[4] = (signed __int64 *)a2;
  *(_QWORD *)(v11 + 96) = v8;
  v12 = AlpcpCaptureMessageData(v8[3], a2, 0LL);
  AlpcpUnlockMessage(v11);
  if ( v12 >= 0 )
  {
    v13 = Object + 44;
    ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
    if ( (Object[52] & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v12 = -1073741769;
    }
    else
    {
      AlpcpReferenceBlob((ULONG_PTR)v8);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 - 2), 0LL);
      *((_BYTE *)v8 - 32) |= 4u;
      v14 = Object[2] + 40;
      v17 = v8;
      v8[1] = (signed __int64 *)v14;
      v15 = AlpcAddHandleTableEntry(Object[2] + 40, &v17);
      v8[2] = (signed __int64 *)v15;
      if ( v15 == -1 )
      {
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        v8[1] = 0LL;
        AlpcpEndInitialization(v8);
        AlpcpDereferenceBlobEx((ULONG_PTR)v8);
        return 3221225626LL;
      }
      *v8 = Object;
      ObfReferenceObject(Object);
      AlpcpInsertResourcePort(Object, v8);
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = v8[2];
      AlpcpEndInitialization(v8);
      v12 = 0;
    }
  }
  AlpcpDereferenceBlobEx((ULONG_PTR)v8);
  return (unsigned int)v12;
}

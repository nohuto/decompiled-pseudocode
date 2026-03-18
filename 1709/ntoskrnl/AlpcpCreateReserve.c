/*
 * XREFs of AlpcpCreateReserve @ 0x140571730
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x140571648 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpChargePagedPoolQuota @ 0x140462248 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpEndInitialization @ 0x140462284 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x1404622C4 (AlpcpInsertResourcePort.c)
 *     AlpcAddHandleTableEntry @ 0x140462348 (AlpcAddHandleTableEntry.c)
 *     AlpcpAllocateMessage @ 0x140466410 (AlpcpAllocateMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateBlob @ 0x1404A0EE0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1405404A4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpCaptureMessageData @ 0x140571974 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  signed __int64 **Blob; // rax
  signed __int64 **v8; // rdi
  struct _KPROCESS *Process; // r14
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
  Blob = (signed __int64 **)AlpcpAllocateBlob((__int64)AlpcReserveType, 48LL, 1);
  v8 = Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x30uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = AlpcpChargePagedPoolQuota(Process, 0x318uLL);
  if ( v10 < 0 )
    goto LABEL_8;
  v10 = AlpcpAllocateMessage(&v16, a2, 1LL);
  if ( v10 < 0 )
  {
    AlpcpReleasePagedPoolQuota(Process, 0x318uLL);
LABEL_8:
    AlpcpDereferenceBlobEx((ULONG_PTR)v8, 1);
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
        AlpcpEndInitialization((__int64)v8);
        AlpcpDereferenceBlobEx((ULONG_PTR)v8, 2);
        return 3221225626LL;
      }
      *v8 = Object;
      ObfReferenceObject(Object);
      AlpcpInsertResourcePort((__int64)Object, (__int64)v8);
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = v8[2];
      AlpcpEndInitialization((__int64)v8);
      v12 = 0;
    }
  }
  AlpcpDereferenceBlobEx((ULONG_PTR)v8, 1);
  return (unsigned int)v12;
}

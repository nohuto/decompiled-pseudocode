/*
 * XREFs of AlpcpCreateReserve @ 0x140556174
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x14055608C (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x1404D44BC (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x1404D44F8 (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x1404D4A3C (AlpcpInsertResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404D7B54 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpAllocateMessage @ 0x1404DCA4C (AlpcpAllocateMessage.c)
 *     AlpcpEndInitialization @ 0x140556DF4 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140556E34 (AlpcAddHandleTableEntry.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  char *Blob; // rax
  ULONG_PTR v8; // rdi
  struct _KPROCESS *Process; // r14
  int Message; // ebx
  ULONG_PTR v11; // rbx
  int v12; // eax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  volatile signed __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v21; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = AlpcpAllocateBlob((__int64)&AlpcReserveType, 48LL, 1);
  v8 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x30uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  Message = AlpcpChargePagedPoolQuota((__int64)Process, 0x318uLL);
  if ( Message < 0 )
    goto LABEL_8;
  Message = AlpcpAllocateMessage((char **)&BugCheckParameter2, a2, 1);
  if ( Message < 0 )
  {
    AlpcpReleasePagedPoolQuota(Process, 0x318uLL);
LABEL_8:
    AlpcpDereferenceBlobEx(v8, 1);
    return (unsigned int)Message;
  }
  ObfReferenceObjectWithTag(Process, 0x63706C41u);
  v11 = BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 48) = Process;
  *(_QWORD *)(v8 + 24) = v11;
  *(_QWORD *)(v8 + 32) = a2;
  *(_QWORD *)(v11 + 96) = v8;
  v12 = AlpcpCaptureMessageData(*(_QWORD *)(v8 + 24), a2, 0LL);
  *(_DWORD *)(v8 + 40) = 1;
  v13 = v12;
  AlpcpReferenceBlob(v8);
  AlpcpUnlockMessage(v11, v14, v15, v16);
  if ( v13 >= 0 )
  {
    v17 = Object + 44;
    ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
    if ( (Object[52] & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v13 = -1073741769;
    }
    else
    {
      AlpcpReferenceBlob(v8);
      ExAcquirePushLockExclusiveEx(v8 - 16, 0LL);
      *(_BYTE *)(v8 - 32) |= 4u;
      v18 = Object[2] + 40;
      v21 = v8;
      *(_QWORD *)(v8 + 8) = v18;
      v19 = AlpcAddHandleTableEntry(Object[2] + 40, &v21);
      *(_QWORD *)(v8 + 16) = v19;
      if ( v19 == -1 )
      {
        if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)(v8 + 8) = 0LL;
        AlpcpEndInitialization(v8);
        AlpcpDereferenceBlobEx(v8, 2);
        return 3221225626LL;
      }
      *(_QWORD *)v8 = Object;
      ObfReferenceObject(Object);
      AlpcpInsertResourcePort((__int64)Object, v8);
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = *(_QWORD *)(v8 + 16);
      AlpcpEndInitialization(v8);
      v13 = 0;
    }
  }
  AlpcpDereferenceBlobEx(v8, 1);
  return (unsigned int)v13;
}

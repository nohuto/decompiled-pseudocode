/*
 * XREFs of AlpcpCreateSection @ 0x140436860
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x140436098 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x1404366D8 (NtAlpcCreatePortSection.c)
 * Callees:
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmCreateSection @ 0x140436B00 (MmCreateSection.c)
 *     AlpcAddHandleTableEntry @ 0x14047A19C (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14047A2E4 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14047BFBC (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, __int64 a5, ULONG_PTR *a6)
{
  void *Blob; // rax
  ULONG_PTR v12; // rbx
  NTSTATUS Section; // edi
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  PVOID v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR v19[2]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a5 || a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = (void *)AlpcpAllocateBlob(&AlpcSectionType, 72LL);
  v12 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v12 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v12 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & (a5 + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v12 + 64) = v12 + 56;
  *(_QWORD *)(v12 + 56) = v12 + 56;
  if ( a4 )
  {
    Section = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &v17, 0LL);
    *(_QWORD *)v12 = v17;
  }
  else
  {
    v18 = *(_QWORD *)(v12 + 8);
    *(_DWORD *)(v12 + 48) = *(_DWORD *)(v12 + 48) ^ (*(_DWORD *)(v12 + 48) ^ (2 * a2)) & 2 | 1;
    Section = MmCreateSection(v12, 983071, 0, (unsigned int)&v18, 4, 0x8000000, 0LL, 0LL);
  }
  if ( Section < 0 )
    goto LABEL_17;
  v14 = (volatile signed __int64 *)(Object + 352);
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 352), 0LL);
  if ( (*((_DWORD *)Object + 104) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    Section = -1073741769;
LABEL_17:
    AlpcpDereferenceBlobEx(v12);
    return (unsigned int)Section;
  }
  ExAcquirePushLockExclusiveEx(v12 - 16, 0LL);
  *(_BYTE *)(v12 - 32) |= 4u;
  if ( a3 )
  {
    AlpcpReferenceBlob(v12);
    v15 = *((_QWORD *)Object + 2) + 40LL;
    v19[0] = v12;
    *(_QWORD *)(v12 + 16) = v15;
    v16 = AlpcAddHandleTableEntry(v15, v19);
    *(_QWORD *)(v12 + 24) = v16;
    if ( v16 == -1 )
    {
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      *(_QWORD *)(v12 + 16) = 0LL;
      AlpcpEndInitialization(v12);
      AlpcpDereferenceBlobEx(v12);
      return 3221225626LL;
    }
  }
  ObfReferenceObject(Object);
  *(_QWORD *)(v12 + 40) = Object;
  AlpcpInsertResourcePort(Object, v12);
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpEndInitialization(v12);
  *a6 = v12;
  return 0LL;
}

/*
 * XREFs of AlpcpCreateView @ 0x14047BD30
 * Callers:
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     MmMapSecureViewOfSection @ 0x14047BC78 (MmMapSecureViewOfSection.c)
 *     AlpcpInsertResourcePort @ 0x14047BFBC (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     MmMapViewOfSection @ 0x14049C1F0 (MmMapViewOfSection.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  void *Blob; // rax
  ULONG_PTR v10; // rdi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-78h]
  __int64 v18; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v13 = -1073741769;
  }
  else
  {
    v7 = Object[38];
    v8 = Object[3];
    if ( v7 && v7 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v13 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v13 = -1073741790;
    }
    else
    {
      Blob = (void *)AlpcpAllocateBlob(&AlpcViewType, 96LL);
      v10 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v20 = *(_QWORD *)(BugCheckParameter2 + 24);
        v19 = *(_QWORD *)(BugCheckParameter2 + 40);
        v11 = *(_DWORD *)(v3 + 48);
        v18 = 0LL;
        if ( (v11 & 2) != 0 )
          v12 = MmMapSecureViewOfSection(
                  *(_QWORD *)v3,
                  v8,
                  &v18,
                  0,
                  v17,
                  (__int64)&v20,
                  (__int64)&v19,
                  2,
                  0,
                  4,
                  2,
                  v10 + 56);
        else
          v12 = MmMapViewOfSection(
                  **(_QWORD **)(BugCheckParameter2 + 16),
                  v8,
                  (unsigned int)&v18,
                  0,
                  0LL,
                  (__int64)&v20,
                  (__int64)&v19,
                  2,
                  0,
                  4);
        v13 = v12;
        if ( v12 < 0 )
        {
          AlpcpDereferenceBlobEx(v10);
        }
        else
        {
          v14 = v18;
          *(_DWORD *)(v10 + 72) |= 1u;
          *(_QWORD *)(v10 + 40) = v14;
          *(_QWORD *)(v10 + 48) = v19;
          ObfReferenceObjectWithTag((PVOID)v8, 0x63706C41u);
          *(_QWORD *)(v10 + 32) = v8;
          ObfReferenceObject(Object);
          *(_QWORD *)(v10 + 24) = Object;
          AlpcpReferenceBlob(BugCheckParameter2);
          *(_QWORD *)(v10 + 16) = BugCheckParameter2;
          v15 = *(_QWORD *)(BugCheckParameter2 + 64);
          *(_QWORD *)v10 = BugCheckParameter2 + 56;
          *(_QWORD *)(v10 + 8) = v15;
          **(_QWORD **)(BugCheckParameter2 + 64) = v10;
          *(_QWORD *)(BugCheckParameter2 + 64) = v10;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          AlpcpInsertResourcePort(Object, v10);
          ExAcquirePushLockExclusiveEx(v8 + 1616, 0LL);
          *(_QWORD *)(v10 + 88) = *(_QWORD *)(v8 + 1632);
          *(_QWORD *)(v10 + 80) = v8 + 1624;
          **(_QWORD **)(v8 + 1632) = v10 + 80;
          *(_QWORD *)(v8 + 1632) = v10 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1616), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 1616));
          KeAbPostRelease(v8 + 1616);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v10;
          AlpcpReferenceBlob(v10);
          *a3 = v10;
          v13 = 0;
        }
      }
      else
      {
        v13 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3);
  return v13;
}

/*
 * XREFs of AlpcpCreateView @ 0x1404618E0
 * Callers:
 *     AlpcpCreateSectionView @ 0x1404610D4 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     AlpcpInsertResourcePort @ 0x1404622C4 (AlpcpInsertResourcePort.c)
 *     MmMapSecureViewOfSection @ 0x14046252C (MmMapSecureViewOfSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpAllocateBlob @ 0x1404A0EE0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  void *Blob; // rax
  ULONG_PTR v10; // rsi
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v17; // [rsp+B0h] [rbp+48h]
  __int64 v18; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+60h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v14 = -1073741769;
  }
  else
  {
    v7 = Object[38];
    v8 = Object[3];
    if ( v7 && v7 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v14 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v14 = -1073741790;
    }
    else
    {
      Blob = (void *)AlpcpAllocateBlob(&AlpcViewType, 96LL, 0LL);
      v10 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v20 = *(_QWORD *)(BugCheckParameter2 + 24);
        v19 = *(_QWORD *)(BugCheckParameter2 + 40);
        v11 = (Object[32] & 0x100000) == 0;
        v12 = Object[32] & 0x100000;
        v18 = 0LL;
        v17 = v12;
        if ( v11 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v13 = MmMapSecureViewOfSection(*(_QWORD *)v3, v8, (unsigned int)&v18, 0);
          else
            v13 = MmMapViewOfSection(
                    **(_QWORD **)(BugCheckParameter2 + 16),
                    v8,
                    &v18,
                    0,
                    0LL,
                    (__int64)&v20,
                    (__int64)&v19,
                    2,
                    0,
                    4);
        }
        else
        {
          v13 = MiMapViewInSystemSpace(
                  *(_QWORD *)v3,
                  (unsigned int)&unk_140388438,
                  (unsigned int)&v18,
                  (unsigned int)&v19,
                  (__int64)&v20,
                  0LL,
                  0LL);
        }
        v14 = v13;
        if ( v13 < 0 )
        {
          AlpcpDereferenceBlobEx(v10);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v18;
          *(_QWORD *)(v10 + 48) = v19;
          *(_DWORD *)(v10 + 72) = *(_DWORD *)(v10 + 72) & 0xFFFFFFF7 | (v17 != 0 ? 8 : 0) | 1;
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
          v14 = 0;
          *a3 = v10;
        }
      }
      else
      {
        v14 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3);
  return v14;
}

/*
 * XREFs of AlpcpCreateView @ 0x1404D47E8
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateSectionView @ 0x140556764 (AlpcpCreateSectionView.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiMapViewInSystemSpace @ 0x1404BBE1C (MiMapViewInSystemSpace.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x1404D44F8 (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x1404D4A3C (AlpcpInsertResourcePort.c)
 *     MmMapSecureViewOfSection @ 0x1404D4AC0 (MmMapSecureViewOfSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     MmMapViewOfSection @ 0x1404EA390 (MmMapViewOfSection.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  char *Blob; // rax
  ULONG_PTR v13; // rsi
  int v14; // r9d
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+B0h] [rbp+48h]
  __int64 v24; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v25; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v18 = -1073741769;
  }
  else
  {
    v10 = Object[38];
    v11 = Object[3];
    if ( v10 && v10 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v18 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v18 = -1073741790;
    }
    else
    {
      Blob = AlpcpAllocateBlob((__int64)&AlpcViewType, 96LL, 0);
      v13 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v26 = *(_QWORD *)(BugCheckParameter2 + 24);
        v25 = *(_QWORD *)(BugCheckParameter2 + 40);
        v15 = (Object[32] & 0x100000) == 0;
        v16 = Object[32] & 0x100000;
        v24 = 0LL;
        v23 = v16;
        if ( v15 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v17 = MmMapSecureViewOfSection(*(_QWORD *)v3, v11, (unsigned int)&v24, v14);
          else
            v17 = MmMapViewOfSection(
                    **(_QWORD **)(BugCheckParameter2 + 16),
                    v11,
                    (unsigned int)&v24,
                    0,
                    0LL,
                    (__int64)&v26,
                    (__int64)&v25,
                    2,
                    0,
                    4);
        }
        else
        {
          v17 = MiMapViewInSystemSpace(*(_QWORD *)v3, (__int64)&unk_1403CB5C0, &v24, &v25, &v26, 0LL, 0LL);
        }
        v18 = v17;
        if ( v17 < 0 )
        {
          AlpcpDereferenceBlobEx(v13, 1);
        }
        else
        {
          *(_QWORD *)(v13 + 40) = v24;
          *(_QWORD *)(v13 + 48) = v25;
          *(_DWORD *)(v13 + 72) = *(_DWORD *)(v13 + 72) & 0xFFFFFFF7 | (v23 != 0 ? 8 : 0) | 1;
          ObfReferenceObjectWithTag((PVOID)v11, 0x63706C41u);
          *(_QWORD *)(v13 + 32) = v11;
          ObfReferenceObject(Object);
          *(_QWORD *)(v13 + 24) = Object;
          AlpcpReferenceBlob(BugCheckParameter2);
          *(_QWORD *)(v13 + 16) = BugCheckParameter2;
          v19 = *(_QWORD *)(BugCheckParameter2 + 64);
          *(_QWORD *)v13 = BugCheckParameter2 + 56;
          *(_QWORD *)(v13 + 8) = v19;
          **(_QWORD **)(BugCheckParameter2 + 64) = v13;
          *(_QWORD *)(BugCheckParameter2 + 64) = v13;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          AlpcpInsertResourcePort(Object, v13);
          ExAcquirePushLockExclusiveEx(v11 + 1616, 0LL);
          *(_QWORD *)(v13 + 88) = *(_QWORD *)(v11 + 1632);
          *(_QWORD *)(v13 + 80) = v11 + 1624;
          **(_QWORD **)(v11 + 1632) = v13 + 80;
          *(_QWORD *)(v11 + 1632) = v13 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 1616), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 1616), v13 + 80, v20, v21);
          KeAbPostRelease(v11 + 1616);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v13;
          AlpcpReferenceBlob(v13);
          v18 = 0;
          *a3 = v13;
        }
      }
      else
      {
        v18 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3, v7, v8, v9);
  return v18;
}

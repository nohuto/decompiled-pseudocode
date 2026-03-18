/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x1404DF1FC
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140449A9C (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140485C3C (PiDmGetCacheKeys.c)
 *     PiDmCacheDataDecode @ 0x140486324 (PiDmCacheDataDecode.c)
 *     PiDmGetCachedKeyIndex @ 0x14048683C (PiDmGetCachedKeyIndex.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x140487C44 (PnpGetObjectProperty.c)
 *     PiDmCacheDataFree @ 0x1404DF680 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1404DF6B8 (PiDmCacheDataEncode.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        _WORD *a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  _BYTE *v6; // r15
  int Object; // ebx
  GUID *PoolWithTag; // r12
  DEVPROPKEY **v11; // rsi
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v17; // r14
  _DWORD *v18; // r14
  int v19; // eax
  unsigned int v20; // ebx
  bool v21; // zf
  unsigned int v22; // r8d
  _QWORD *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rcx
  char *v27; // rdi
  struct _KTHREAD *v28; // rax
  __int64 v29; // rdi
  ULONG_PTR v30; // rsi
  int v31; // eax
  int v32; // eax
  __int128 v33; // [rsp+68h] [rbp-19h] BYREF
  void *Buf2; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v35; // [rsp+80h] [rbp-1h] BYREF
  DEVPROPKEY **v36; // [rsp+88h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp+67h] BYREF
  char v39; // [rsp+F0h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v6 = a6;
  *((_QWORD *)&v33 + 1) = 0LL;
  v39 = 0;
  Object = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  Buf2 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  v35 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v36, &a6);
  if ( !(_DWORD)a6 )
    return;
  v11 = v36;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v36, (unsigned int)a6, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2);
    if ( Object < 0 )
      return;
    v39 = 1;
  }
  v15 = 3 * v13;
  if ( LODWORD(v11[3 * v13 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(
               0x5A706E50u,
               0x10uLL,
               (__int64)a2,
               a1,
               0LL,
               0LL,
               a5,
               (__int64)&v33,
               &Buf2,
               (_DWORD *)&v33 + 3,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v33) = 0;
      HIDWORD(v33) = 0;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v18 = (_DWORD *)(v17 + 8 * v15 + 104);
  if ( !*v18 )
  {
    if ( !LODWORD(v11[v15 + 2]) )
      goto LABEL_28;
    goto LABEL_24;
  }
  if ( *v18 == 1 || Object < 0 || !LODWORD(v11[v15 + 2]) )
    goto LABEL_24;
  v19 = PiDmCacheDataDecode((__int64)v18, (_DWORD *)&v33 + 1, 0LL, 0, (unsigned int *)&v33 + 2);
  Object = v19;
  if ( v19 == -1073741275 )
  {
    DWORD1(v33) = 0;
    Object = 0;
    v21 = (_DWORD)v33 == 0;
  }
  else
  {
    if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
      goto LABEL_24;
    v20 = DWORD2(v33);
    if ( DWORD2(v33) )
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, DWORD2(v33), 0x5A706E50u);
      if ( !PoolWithTag )
      {
        Object = -1073741670;
        goto LABEL_24;
      }
    }
    Object = PiDmCacheDataDecode((__int64)v18, (_DWORD *)&v33 + 1, PoolWithTag, v20, (unsigned int *)&v33 + 2);
    if ( Object < 0 || *(_QWORD *)((char *)&v33 + 4) != __PAIR64__(HIDWORD(v33), v33) )
      goto LABEL_24;
    if ( !DWORD2(v33) )
    {
LABEL_22:
      *v6 = 1;
      goto LABEL_28;
    }
    v21 = memcmp(PoolWithTag, Buf2, DWORD2(v33)) == 0;
  }
  if ( v21 )
    goto LABEL_22;
LABEL_24:
  PiDmCacheDataFree(v18);
  if ( Object >= 0 && LODWORD(v11[v15 + 2]) == 1 && !HIDWORD(v11[v15 + 1]) )
    Object = PiDmCacheDataEncode((unsigned int)v33, Buf2, HIDWORD(v33), LODWORD(v11[v15 + 1]), 0, v18);
LABEL_28:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !LODWORD(v11[v15 + 2]) || *v6 )
    goto LABEL_50;
  v22 = 0;
  v23 = &PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v24 = v23[1];
    if ( *(_DWORD *)(v24 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v25 = 56LL * v22;
      v26 = *(_QWORD *)v24 - *(_QWORD *)a5;
      if ( *(_QWORD *)v24 == *(_QWORD *)a5 )
        v26 = *(_QWORD *)(v24 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v26 && a1 == *(_DWORD *)v23 )
        break;
    }
    ++v22;
    v23 += 7;
    if ( v22 >= 3 )
      goto LABEL_50;
  }
  v27 = (char *)&PiDmAggregatedBooleanDefs + v25;
  if ( !(_UNKNOWN *)((char *)&PiDmAggregatedBooleanDefs + v25)
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              (int)a2,
              BugCheckParameter2,
              v24,
              *((_QWORD *)v27 + 2),
              *((_DWORD *)v27 + 6),
              (PVOID *)&v35) < 0 )
  {
    goto LABEL_50;
  }
  v28 = KeGetCurrentThread();
  v29 = *((_QWORD *)v27 + 6);
  v30 = v35;
  --v28->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v35, 0LL);
  if ( Object < 0 || (v31 = *(_DWORD *)(v30 + v29), v31 == 0x80000000) )
  {
    *(_DWORD *)(v30 + v29) = 0x80000000;
    goto LABEL_49;
  }
  if ( DWORD1(v33) != 17 )
    goto LABEL_46;
  if ( LOBYTE(PoolWithTag->Data1) == 0xFF && ((_DWORD)v33 != 17 || !*(_BYTE *)Buf2) )
  {
    v32 = v31 - 1;
LABEL_48:
    *(_DWORD *)(v30 + v29) = v32;
    goto LABEL_49;
  }
  if ( !LOBYTE(PoolWithTag->Data1) )
  {
LABEL_46:
    if ( (_DWORD)v33 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_49;
    v32 = v31 + 1;
    goto LABEL_48;
  }
LABEL_49:
  ExReleasePushLockEx(v35, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_50:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v35 )
    PiDmObjectRelease((unsigned int *)v35);
  if ( v39 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}

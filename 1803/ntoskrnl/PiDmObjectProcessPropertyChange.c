/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x1405D2E6C
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140504430 (PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405079F8 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140507A48 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140507D4C (PiDmCacheDataDecode.c)
 *     PiDmCacheDataFree @ 0x1405D3614 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1405D364C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405E6390 (PiDmGetReferencedObjectFromProperty.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
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
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // r14
  int v21; // eax
  unsigned int v22; // ebx
  bool v23; // zf
  unsigned int v24; // r8d
  _QWORD *v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rcx
  char *v28; // rdi
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdi
  ULONG_PTR v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  int v35; // eax
  __int128 v36; // [rsp+68h] [rbp-19h] BYREF
  void *Buf2; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v38; // [rsp+80h] [rbp-1h] BYREF
  DEVPROPKEY **v39; // [rsp+88h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp+67h] BYREF
  char v42; // [rsp+F0h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v6 = a6;
  *((_QWORD *)&v36 + 1) = 0LL;
  v42 = 0;
  Object = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  Buf2 = 0LL;
  *(_QWORD *)&v36 = 0LL;
  v38 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v39, &a6);
  if ( !(_DWORD)a6 )
    return;
  v11 = v39;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v39, (unsigned int)a6, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2);
    if ( Object < 0 )
      return;
    v42 = 1;
  }
  v15 = 3 * v13;
  if ( LODWORD(v11[3 * v13 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(
               0x5A706E50u,
               0x10uLL,
               a2,
               a1,
               0LL,
               0LL,
               a5,
               (__int64)&v36,
               &Buf2,
               (_DWORD *)&v36 + 3,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v36) = 0;
      HIDWORD(v36) = 0;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v20 = (_DWORD *)(v17 + 8 * v15 + 112);
  if ( !*v20 )
  {
    if ( !LODWORD(v11[v15 + 2]) )
      goto LABEL_23;
    goto LABEL_34;
  }
  if ( *v20 == 1 || Object < 0 || !LODWORD(v11[v15 + 2]) )
    goto LABEL_34;
  v21 = PiDmCacheDataDecode((__int64)v20, (_DWORD *)&v36 + 1, 0LL, 0, (unsigned int *)&v36 + 2);
  Object = v21;
  if ( v21 == -1073741275 )
  {
    DWORD1(v36) = 0;
    Object = 0;
    v23 = (_DWORD)v36 == 0;
  }
  else
  {
    if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741789 )
      goto LABEL_34;
    v22 = DWORD2(v36);
    if ( DWORD2(v36) )
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, DWORD2(v36), 0x5A706E50u);
      if ( !PoolWithTag )
      {
        Object = -1073741670;
        goto LABEL_34;
      }
    }
    Object = PiDmCacheDataDecode((__int64)v20, (_DWORD *)&v36 + 1, PoolWithTag, v22, (unsigned int *)&v36 + 2);
    if ( Object < 0 || *(_QWORD *)((char *)&v36 + 4) != __PAIR64__(HIDWORD(v36), v36) )
      goto LABEL_34;
    if ( !DWORD2(v36) )
    {
LABEL_22:
      *v6 = 1;
      goto LABEL_23;
    }
    v23 = memcmp(PoolWithTag, Buf2, DWORD2(v36)) == 0;
  }
  if ( v23 )
    goto LABEL_22;
LABEL_34:
  PiDmCacheDataFree(v20);
  if ( Object >= 0 && LODWORD(v11[v15 + 2]) == 1 && !HIDWORD(v11[v15 + 1]) )
    Object = PiDmCacheDataEncode((unsigned int)v36, Buf2, HIDWORD(v36), LODWORD(v11[v15 + 1]), 0, v20);
LABEL_23:
  ExReleasePushLockEx(BugCheckParameter2, 0LL, v18, v19);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !LODWORD(v11[v15 + 2]) || *v6 )
    goto LABEL_25;
  v24 = 0;
  v25 = &PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v26 = v25[1];
    if ( *(_DWORD *)(v26 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v27 = *(_QWORD *)v26 - *(_QWORD *)a5;
      if ( *(_QWORD *)v26 == *(_QWORD *)a5 )
        v27 = *(_QWORD *)(v26 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v27 && a1 == *(_DWORD *)v25 )
        break;
    }
    ++v24;
    v25 += 7;
    if ( v24 >= 3 )
      goto LABEL_25;
  }
  v28 = (char *)&PiDmAggregatedBooleanDefs + 56 * v24;
  if ( !v28
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              a2,
              BugCheckParameter2,
              v26,
              *((_QWORD *)v28 + 2),
              *((_DWORD *)v28 + 6),
              (__int64)&v38) < 0 )
  {
    goto LABEL_25;
  }
  v29 = KeGetCurrentThread();
  v30 = *((_QWORD *)v28 + 6);
  v31 = v38;
  --v29->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v38, 0LL);
  if ( Object < 0 || (v34 = *(_DWORD *)(v31 + v30), v34 == 0x80000000) )
  {
    *(_DWORD *)(v31 + v30) = 0x80000000;
    goto LABEL_59;
  }
  if ( DWORD1(v36) != 17 )
    goto LABEL_56;
  if ( LOBYTE(PoolWithTag->Data1) == 0xFF && ((_DWORD)v36 != 17 || !*(_BYTE *)Buf2) )
  {
    v35 = v34 - 1;
LABEL_58:
    *(_DWORD *)(v31 + v30) = v35;
    goto LABEL_59;
  }
  if ( !LOBYTE(PoolWithTag->Data1) )
  {
LABEL_56:
    if ( (_DWORD)v36 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_59;
    v35 = v34 + 1;
    goto LABEL_58;
  }
LABEL_59:
  ExReleasePushLockEx(v38, 0LL, v32, v33);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_25:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v38 )
    PiDmObjectRelease((unsigned int *)v38);
  if ( v42 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}

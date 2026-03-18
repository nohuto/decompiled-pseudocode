/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x140528FC4
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDmCacheDataEncode @ 0x140518820 (PiDmCacheDataEncode.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140523F38 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140523F88 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140524640 (PiDmCacheDataDecode.c)
 *     PnpGetObjectProperty @ 0x14052531C (PnpGetObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405882E8 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmCacheDataFree @ 0x140590AE4 (PiDmCacheDataFree.c)
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
  _DWORD *v18; // r14
  int v19; // eax
  unsigned int v20; // ebx
  bool v21; // zf
  unsigned int v22; // r8d
  _QWORD *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  char *v26; // rdi
  struct _KTHREAD *v27; // rax
  __int64 v28; // rdi
  ULONG_PTR v29; // rsi
  int v30; // eax
  int v31; // eax
  __int128 v32; // [rsp+68h] [rbp-19h] BYREF
  void *Buf2; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v34; // [rsp+80h] [rbp-1h] BYREF
  DEVPROPKEY **v35; // [rsp+88h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp+67h] BYREF
  char v38; // [rsp+F0h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v6 = a6;
  *((_QWORD *)&v32 + 1) = 0LL;
  v38 = 0;
  Object = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  Buf2 = 0LL;
  *(_QWORD *)&v32 = 0LL;
  v34 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v35, &a6);
  if ( !(_DWORD)a6 )
    return;
  v11 = v35;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v35, (unsigned int)a6, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2);
    if ( Object < 0 )
      return;
    v38 = 1;
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
               (__int64)&v32,
               &Buf2,
               (_DWORD *)&v32 + 3,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v32) = 0;
      HIDWORD(v32) = 0;
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
      goto LABEL_22;
    goto LABEL_33;
  }
  if ( *v18 == 1 || Object < 0 || !LODWORD(v11[v15 + 2]) )
    goto LABEL_33;
  v19 = PiDmCacheDataDecode((__int64)v18, (_DWORD *)&v32 + 1, 0LL, 0, (unsigned int *)&v32 + 2);
  Object = v19;
  if ( v19 == -1073741275 )
  {
    DWORD1(v32) = 0;
    Object = 0;
    v21 = (_DWORD)v32 == 0;
  }
  else
  {
    if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
      goto LABEL_33;
    v20 = DWORD2(v32);
    if ( DWORD2(v32) )
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, DWORD2(v32), 0x5A706E50u);
      if ( !PoolWithTag )
      {
        Object = -1073741670;
        goto LABEL_33;
      }
    }
    Object = PiDmCacheDataDecode((__int64)v18, (_DWORD *)&v32 + 1, PoolWithTag, v20, (unsigned int *)&v32 + 2);
    if ( Object < 0 || *(_QWORD *)((char *)&v32 + 4) != __PAIR64__(HIDWORD(v32), v32) )
      goto LABEL_33;
    if ( !DWORD2(v32) )
    {
LABEL_21:
      *v6 = 1;
      goto LABEL_22;
    }
    v21 = memcmp(PoolWithTag, Buf2, DWORD2(v32)) == 0;
  }
  if ( v21 )
    goto LABEL_21;
LABEL_33:
  PiDmCacheDataFree(v18);
  if ( Object >= 0 && LODWORD(v11[v15 + 2]) == 1 && !HIDWORD(v11[v15 + 1]) )
    Object = PiDmCacheDataEncode(v32, (__int128 *)Buf2, HIDWORD(v32), (int)v11[v15 + 1], 0, (__int64)v18);
LABEL_22:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !LODWORD(v11[v15 + 2]) || *v6 )
    goto LABEL_24;
  v22 = 0;
  v23 = &PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v24 = v23[1];
    if ( *(_DWORD *)(v24 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v25 = *(_QWORD *)v24 - *(_QWORD *)a5;
      if ( *(_QWORD *)v24 == *(_QWORD *)a5 )
        v25 = *(_QWORD *)(v24 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v25 && a1 == *(_DWORD *)v23 )
        break;
    }
    ++v22;
    v23 += 7;
    if ( v22 >= 3 )
      goto LABEL_24;
  }
  v26 = (char *)&PiDmAggregatedBooleanDefs + 56 * v22;
  if ( !v26
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              a2,
              BugCheckParameter2,
              v24,
              *((_QWORD *)v26 + 2),
              *((_DWORD *)v26 + 6),
              (__int64)&v34) < 0 )
  {
    goto LABEL_24;
  }
  v27 = KeGetCurrentThread();
  v28 = *((_QWORD *)v26 + 6);
  v29 = v34;
  --v27->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v34, 0LL);
  if ( Object < 0 || (v30 = *(_DWORD *)(v29 + v28), v30 == 0x80000000) )
  {
    *(_DWORD *)(v29 + v28) = 0x80000000;
    goto LABEL_58;
  }
  if ( DWORD1(v32) != 17 )
    goto LABEL_55;
  if ( LOBYTE(PoolWithTag->Data1) == 0xFF && ((_DWORD)v32 != 17 || !*(_BYTE *)Buf2) )
  {
    v31 = v30 - 1;
LABEL_57:
    *(_DWORD *)(v29 + v28) = v31;
    goto LABEL_58;
  }
  if ( !LOBYTE(PoolWithTag->Data1) )
  {
LABEL_55:
    if ( (_DWORD)v32 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_58;
    v31 = v30 + 1;
    goto LABEL_57;
  }
LABEL_58:
  ExReleasePushLockEx(v34, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_24:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v34 )
    PiDmObjectRelease((unsigned int *)v34);
  if ( v38 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}

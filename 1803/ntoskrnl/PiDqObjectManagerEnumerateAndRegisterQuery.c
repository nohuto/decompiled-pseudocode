/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14050D2A0 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PiDqQueryEnumObject @ 0x1404FDAD4 (PiDqQueryEnumObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405040D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x140509908 (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x140509AC4 (PiDmObjectIsEnumerable.c)
 *     _PnpStringFromGuid @ 0x14050B138 (_PnpStringFromGuid.c)
 *     PiDqQueryAppendActionEntry @ 0x14056C100 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14056C150 (PiDqQueryActionQueueEntryCreate.c)
 *     ConstraintEval @ 0x14056C1DC (ConstraintEval.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  char v6; // r14
  wchar_t *v7; // r12
  struct _KTHREAD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // rsi
  unsigned int *v16; // rcx
  ULONG_PTR v17; // rsi
  unsigned int *v19; // rsi
  unsigned int j; // r14d
  _DWORD *v21; // r13
  __int128 *v22; // rax
  __int64 v23; // r9
  __int128 v24; // xmm0
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  const wchar_t *v30; // rsi
  __int64 v31; // rax
  const wchar_t *i; // r14
  __int64 v33; // rax
  int Object; // eax
  unsigned int *v35; // r14
  __int64 v36; // rax
  struct _KTHREAD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v42; // [rsp+40h] [rbp-99h] BYREF
  int *v43[7]; // [rsp+48h] [rbp-91h] BYREF
  _OWORD v44[2]; // [rsp+80h] [rbp-59h] BYREF
  wchar_t v45[40]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  EnumObject = 0;
  v6 = *(_BYTE *)(v2 + 40) & 1;
  v7 = 0LL;
  v40 = v6;
  memset(v44, 0, sizeof(v44));
  memset(v43, 0, sizeof(v43));
  if ( !v6 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&Resource[1]);
  if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
  {
    EnumObject = -1073741670;
  }
  else
  {
    SpinLock = (PERESOURCE *)Resource[1].SpinLock;
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
    *SpinLock = (PERESOURCE)a2;
    Resource[1].SpinLock = a2;
    ++LODWORD(Resource[2].OwnerTable);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
    v11 = *(_QWORD *)(a2 + 24);
    v12 = *(_DWORD *)(v11 + 20);
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          v30 = *(const wchar_t **)(v11 + 32);
          while ( 2 )
          {
            if ( *v30 )
            {
              v31 = -1LL;
              do
                ++v31;
              while ( v30[v31] );
              for ( i = &v30[v31 + 1]; *i; i += v33 + 1 )
              {
                if ( !wcsicmp(v30, i) )
                  goto LABEL_61;
                v33 = -1LL;
                do
                  ++v33;
                while ( i[v33] );
              }
              Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, (__int64)v30, (__int64 *)&P);
              EnumObject = Object;
              if ( Object == -1073741772 )
                goto LABEL_61;
              if ( Object >= 0 )
              {
                v35 = (unsigned int *)P;
                if ( PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject(a2, (__int64)v35);
                PiDmObjectRelease(v35);
                P = 0LL;
                if ( EnumObject >= 0 )
                {
LABEL_61:
                  v36 = -1LL;
                  do
                    ++v36;
                  while ( v30[v36] );
                  v30 += v36 + 1;
                  continue;
                }
              }
              goto LABEL_12;
            }
            break;
          }
        }
        goto LABEL_10;
      }
      v14 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v11 + 24), (__int64 *)&P);
      EnumObject = v14;
      if ( v14 != -1073741772 )
      {
        if ( v14 < 0 )
          goto LABEL_12;
        v15 = (unsigned int *)P;
        if ( PiDmObjectIsEnumerable((ULONG_PTR)P) )
          EnumObject = PiDqQueryEnumObject(a2, (__int64)v15);
        v16 = v15;
LABEL_9:
        PiDmObjectRelease(v16);
        if ( EnumObject >= 0 )
          goto LABEL_10;
LABEL_12:
        v17 = a2 + 64;
        ExReleasePushLockEx(a2 + 64, 0LL, v9, v10);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v6 = v40;
        goto LABEL_13;
      }
    }
    else
    {
      v19 = (unsigned int *)&PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 6; ++j )
      {
        v21 = v19;
        if ( *v19 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v22 = (__int128 *)*((_QWORD *)v19 + 1);
          v23 = v19[4];
          v24 = *v22;
          LODWORD(v44[1]) = *((_DWORD *)v22 + 4);
          v25 = *(_QWORD *)(a2 + 24);
          v44[0] = v24;
          EnumObject = ConstraintEval(*(unsigned int *)(v25 + 80), *(_QWORD *)(v25 + 88), v44, v23, v43);
          if ( EnumObject != -1073741823 )
            break;
        }
        v19 += 8;
      }
      if ( EnumObject < 0 )
      {
        if ( EnumObject != -1073741823 )
          goto LABEL_12;
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(_DWORD *)&Resource[2].ActiveCount,
                       (__int64 (__fastcall *)(unsigned int *, __int64, _BYTE *))PiDqEnumQueryObjectsCallback,
                       a2);
        if ( EnumObject < 0 )
          goto LABEL_12;
      }
      else if ( LODWORD(v43[5]) == v21[5] )
      {
        if ( LODWORD(v43[5]) == 13 )
        {
          EnumObject = PnpStringFromGuid(v43[6], v45);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v7 = v45;
        }
        else if ( LODWORD(v43[5]) == 18 )
        {
          v7 = (wchar_t *)v43[6];
        }
        v26 = PiDmGetObject((unsigned int)v21[6], (__int64)v7, (__int64 *)&P);
        EnumObject = v26;
        if ( v26 != -1073741772 )
        {
          if ( v26 < 0 )
            goto LABEL_12;
          v27 = PiDmListEnumObjectsWithCallback(v21[7], (ULONG_PTR)P, PiDqEnumQueryObjectsCallback, a2);
          v16 = (unsigned int *)P;
          EnumObject = v27;
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v42);
    if ( EnumObject >= 0 )
    {
      PiDqQueryAppendActionEntry(a2, v42);
      *(_DWORD *)(a2 + 216) |= 0x20u;
    }
    goto LABEL_12;
  }
  v17 = a2 + 64;
LABEL_13:
  if ( EnumObject < 0 )
  {
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v17, 0LL);
    *(_DWORD *)(a2 + 216) |= 1u;
    PiDqQueryFreeActiveData(a2);
    ExReleasePushLockEx(v17, 0LL, v38, v39);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v6 )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)EnumObject;
}

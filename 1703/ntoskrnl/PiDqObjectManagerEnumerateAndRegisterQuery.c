/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ConstraintEval @ 0x14044A89C (ConstraintEval.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x140488028 (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1404881E4 (PiDmObjectIsEnumerable.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryEnumObject @ 0x1404B9B98 (PiDqQueryEnumObject.c)
 *     PiDqQueryAppendActionEntry @ 0x1404BD794 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1404BD7E4 (PiDqQueryActionQueueEntryCreate.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // edi
  char v6; // bl
  _WORD *v7; // r12
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // rbx
  bool v14; // sf
  _DWORD *v16; // rbx
  unsigned int j; // r14d
  _DWORD *v18; // r13
  __int128 *v19; // rax
  int v20; // r9d
  __int128 v21; // xmm0
  __int64 v22; // rax
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  wchar_t *v26; // rbx
  __int64 v27; // rax
  const wchar_t *i; // r14
  __int64 v29; // rax
  int Object; // eax
  unsigned int *v31; // r14
  __int64 v32; // rax
  struct _KTHREAD *v33; // rax
  char v34; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 *v36; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v37[7]; // [rsp+48h] [rbp-91h] BYREF
  _OWORD v38[2]; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v39[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  EnumObject = 0;
  v6 = *(_BYTE *)(v2 + 40) & 1;
  v7 = 0LL;
  v34 = v6;
  memset(v38, 0, sizeof(v38));
  LODWORD(v37[0]) = 0;
  memset(&v37[1], 0, 0x30uLL);
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
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_DWORD *)(v9 + 20);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v26 = *(wchar_t **)(v9 + 32);
          while ( 2 )
          {
            if ( *v26 )
            {
              v27 = -1LL;
              do
                ++v27;
              while ( v26[v27] );
              for ( i = &v26[v27 + 1]; *i; i += v29 + 1 )
              {
                if ( !wcsicmp(v26, i) )
                  goto LABEL_60;
                v29 = -1LL;
                do
                  ++v29;
                while ( i[v29] );
              }
              Object = PiDmGetObject(*(_DWORD *)&Resource[2].ActiveCount, v26, (__int64 *)&P);
              EnumObject = Object;
              if ( Object == -1073741772 )
              {
                EnumObject = 0;
              }
              else
              {
                if ( Object < 0 )
                  goto LABEL_14;
                v31 = (unsigned int *)P;
                if ( PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject((struct _SECURITY_SUBJECT_CONTEXT *)a2, (__int64)v31);
                PiDmObjectRelease(v31);
                P = 0LL;
                if ( EnumObject < 0 )
                {
LABEL_14:
                  ExReleasePushLockEx(a2 + 64, 0LL);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  if ( EnumObject >= 0 )
                    goto LABEL_15;
                  goto LABEL_66;
                }
              }
LABEL_60:
              v32 = -1LL;
              do
                ++v32;
              while ( v26[v32] );
              v26 += v32 + 1;
              continue;
            }
            break;
          }
        }
        goto LABEL_11;
      }
      v12 = PiDmGetObject(*(_DWORD *)&Resource[2].ActiveCount, *(_WORD **)(v9 + 24), (__int64 *)&P);
      EnumObject = v12;
      if ( v12 == -1073741772 )
      {
LABEL_12:
        EnumObject = PiDqQueryActionQueueEntryCreate(0, 0LL, 0LL, (__int64)&v36);
        if ( EnumObject >= 0 )
        {
          PiDqQueryAppendActionEntry(a2, v36);
          *(_DWORD *)(a2 + 216) |= 0x20u;
        }
        goto LABEL_14;
      }
      if ( v12 < 0 )
        goto LABEL_14;
      v13 = (unsigned int *)P;
      if ( PiDmObjectIsEnumerable((ULONG_PTR)P) )
        EnumObject = PiDqQueryEnumObject((struct _SECURITY_SUBJECT_CONTEXT *)a2, (__int64)v13);
      PiDmObjectRelease(v13);
    }
    else
    {
      v16 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 5; ++j )
      {
        v18 = v16;
        if ( *v16 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v19 = (__int128 *)*((_QWORD *)v16 + 1);
          v20 = v16[4];
          v21 = *v19;
          LODWORD(v38[1]) = *((_DWORD *)v19 + 4);
          v22 = *(_QWORD *)(a2 + 24);
          v38[0] = v21;
          EnumObject = ConstraintEval(*(_DWORD *)(v22 + 80), *(_DWORD **)(v22 + 88), (__int64)v38, v20, (__int64)v37);
          if ( EnumObject != -1073741823 )
            break;
        }
        v16 += 8;
      }
      if ( EnumObject < 0 )
      {
        if ( EnumObject != -1073741823 )
          goto LABEL_14;
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(_DWORD *)&Resource[2].ActiveCount,
                       (__int64 (__fastcall *)(unsigned int *, __int64, _BYTE *))PiDqEnumQueryObjectsCallback,
                       a2);
        v14 = EnumObject < 0;
        goto LABEL_10;
      }
      if ( LODWORD(v37[5]) != v18[5] )
        goto LABEL_11;
      if ( LODWORD(v37[5]) == 13 )
      {
        EnumObject = PnpStringFromGuid(v37[6], v39);
        if ( EnumObject < 0 )
          goto LABEL_14;
        v7 = v39;
      }
      else if ( LODWORD(v37[5]) == 18 )
      {
        v7 = (_WORD *)v37[6];
      }
      v23 = PiDmGetObject(v18[6], v7, (__int64 *)&P);
      EnumObject = v23;
      if ( v23 == -1073741772 )
        goto LABEL_12;
      if ( v23 < 0 )
        goto LABEL_14;
      EnumObject = PiDmListEnumObjectsWithCallback(v18[7], (ULONG_PTR)P, PiDqEnumQueryObjectsCallback, a2);
      PiDmObjectRelease((unsigned int *)P);
    }
    v14 = EnumObject < 0;
LABEL_10:
    if ( v14 )
      goto LABEL_14;
LABEL_11:
    if ( EnumObject < 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
LABEL_66:
  v33 = KeGetCurrentThread();
  --v33->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 216) |= 1u;
  PiDqQueryFreeActiveData(a2);
  ExReleasePushLockEx(a2 + 64, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_15:
  if ( v34 )
  {
    ExReleaseResourceLite(Resource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)EnumObject;
}

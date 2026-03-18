/*
 * XREFs of FsRtlNotifyFilterReportChangeLite @ 0x140432250
 * Callers:
 *     <none>
 * Callees:
 *     PsChargePoolQuota @ 0x140018850 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x14043271C (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x140432DA0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x14045D5C0 (FsRtlNotifyUninitializeSync.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  const void **v9; // r13
  const void **v10; // r12
  _QWORD **v11; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  unsigned __int8 (__fastcall *v16)(_QWORD); // rax
  __int16 v17; // r8
  unsigned int v18; // r15d
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  _DWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r10
  PVOID PoolWithTag; // rax
  _DWORD *v28; // rbx
  _WORD *v29; // rbx
  __int64 (__fastcall *v30)(_QWORD, __int64, _QWORD); // rax
  char v31; // al
  _QWORD *v32; // [rsp+50h] [rbp-78h]
  PNOTIFY_SYNC NotifySync[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v34; // [rsp+80h] [rbp-48h]

  v9 = a4;
  v10 = a3;
  v11 = (_QWORD **)a2;
  if ( (_QWORD *)*a2 == a2 )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync[0], 0LL) )
      FsRtlNotifyUninitializeSync(NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  v14 = *v11;
  while ( 1 )
  {
    v32 = v14;
    if ( v14 == v11 )
      break;
    v15 = v14 - 4;
    if ( (*((_DWORD *)v14 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (v15[9] & 1) != 0
       && ((v30 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v15[2]) == 0LL || (v31 = v30(v15[1], a7, v15[3])) != 0)) )
    {
      v16 = (unsigned __int8 (__fastcall *)(_QWORD))v15[8];
      if ( !v16 || !a8 || v16(v15[1]) )
      {
        v17 = *((_WORD *)v15 + 36);
        if ( (v17 & 2) == 0 )
        {
          v18 = *((_DWORD *)v15 + 24);
          if ( v18 )
          {
            v19 = 0LL;
            v34 = 0LL;
            if ( *((_DWORD *)v15 + 25) )
            {
              v18 = *((_DWORD *)v15 + 25);
            }
            else
            {
              v20 = (_QWORD *)v15[6];
              if ( v20 != v15 + 6 )
              {
                v19 = v20 - 21;
                v34 = v20 - 21;
                v18 = *(_DWORD *)(v20[2] + 8LL);
              }
            }
            v21 = *(unsigned __int16 *)v10 + 12;
            if ( v9 )
              v21 += *(unsigned __int16 *)v9 + 2;
            v22 = (*((_DWORD *)v15 + 26) + 3) & 0xFFFFFFFC;
            if ( v21 > v18 || v21 + v22 > v18 )
            {
              *((_WORD *)v15 + 36) = v17 | 2;
            }
            else
            {
              v23 = 0LL;
              v24 = v15[11];
              if ( v24 )
              {
                *(_DWORD *)(v24 + *((unsigned int *)v15 + 27)) = v22 - *((_DWORD *)v15 + 27);
                *((_DWORD *)v15 + 27) = v22;
                v23 = (_DWORD *)(v15[11] + v22);
              }
              else
              {
                if ( !v19 )
                  goto LABEL_36;
                v25 = v19[3];
                if ( v25 )
                {
                  v23 = (_DWORD *)v19[3];
                  v15[11] = v25;
                }
                else
                {
                  v26 = v19[1];
                  if ( !v26 )
                    goto LABEL_36;
                  if ( (*(_BYTE *)(v26 + 10) & 5) != 0 )
                    v23 = *(_DWORD **)(v26 + 24);
                  else
                    v23 = MmMapLockedPagesSpecifyCache((PMDL)v26, 0, MmCached, 0LL, 0, 0x40000010u);
                  v15[11] = v23;
                }
                *((_DWORD *)v15 + 25) = v18;
              }
LABEL_36:
              if ( !v15[11] )
              {
                PsChargePoolQuota((PEPROCESS)v15[15], PagedPool, v18);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v18, 0x4E725346u);
                v15[11] = PoolWithTag;
                v15[10] = PoolWithTag;
                memset((void *)v15[11], 0, v18);
                *((_DWORD *)v15 + 25) = v18;
                v23 = (_DWORD *)v15[11];
              }
              if ( v23 )
              {
                *v23 = 0;
                v23[1] = a6;
                v23[2] = v21 - 12;
                v28 = v23 + 3;
                memmove(v23 + 3, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v29 = (_WORD *)((char *)v28 + *(unsigned __int16 *)a3);
                  *v29 = 58;
                  memmove(v29 + 1, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v15 + 26) = v21 + v22;
                v14 = v32;
              }
            }
            if ( (v15[9] & 2) != 0 && v15[11] )
            {
              if ( v15[10] )
              {
                PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v15[15], *((unsigned int *)v15 + 25));
                ExFreePoolWithTag((PVOID)v15[10], 0);
              }
              v15[11] = 0LL;
              v15[10] = 0LL;
              v15[13] = 0LL;
              *((_DWORD *)v15 + 25) = 0;
            }
            v9 = a4;
            v10 = a3;
          }
        }
        if ( a6 == 4 )
        {
          *((_WORD *)v15 + 36) |= 8u;
        }
        else
        {
          *((_WORD *)v15 + 36) &= ~8u;
          if ( (_QWORD *)v15[6] != v15 + 6 )
            FsRtlNotifyCompleteIrpList(v15, 0LL);
        }
      }
    }
    v14 = (_QWORD *)*v14;
    v11 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}

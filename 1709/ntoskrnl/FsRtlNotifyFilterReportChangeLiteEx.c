/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x1406B2320 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     PsChargePoolQuota @ 0x140108060 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1405675BC (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x140567C60 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x14059ACD0 (FsRtlNotifyUninitializeSync.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  _QWORD **v10; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  _WORD *v15; // r14
  char v16; // r15
  unsigned __int8 (__fastcall *v17)(_QWORD); // rax
  __int16 v18; // cx
  unsigned int v19; // r13d
  _QWORD *v20; // rdx
  _QWORD *v21; // r8
  unsigned int v22; // r15d
  unsigned int v23; // ebx
  __int64 (__fastcall *v24)(_QWORD, __int64, _QWORD); // rax
  _DWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r10
  PVOID PoolWithTag; // rax
  char *v30; // rbx
  char *v31; // rbx
  char v32; // al
  char v33; // [rsp+31h] [rbp-A7h]
  _QWORD *v34; // [rsp+48h] [rbp-90h]
  unsigned int v35; // [rsp+54h] [rbp-84h]
  PNOTIFY_SYNC NotifySync[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD *v37; // [rsp+80h] [rbp-58h]
  _WORD *v38; // [rsp+88h] [rbp-50h]

  v10 = (_QWORD **)a2;
  if ( (_QWORD *)*a2 == a2 || a10 && *(_DWORD *)a10 < 0x50u )
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
  v13 = *v10;
  while ( 1 )
  {
    v34 = v13;
    if ( v13 == v10 )
      break;
    v14 = v13 - 4;
    v15 = v13 + 5;
    v38 = v15;
    v16 = (unsigned __int8)*v15 >> 7;
    v33 = v16;
    if ( (*((_DWORD *)v13 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (*v15 & 1) != 0
       && ((v24 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v14[2]) == 0LL || (v32 = v24(v14[1], a7, v14[3])) != 0)) )
    {
      v17 = (unsigned __int8 (__fastcall *)(_QWORD))v14[8];
      if ( !v17 || !a8 || v17(v14[1]) )
      {
        v18 = *v15;
        if ( (*v15 & 2) == 0 )
        {
          v19 = *((_DWORD *)v14 + 24);
          if ( v19 )
          {
            v20 = 0LL;
            v37 = 0LL;
            if ( *((_DWORD *)v14 + 25) )
            {
              v19 = *((_DWORD *)v14 + 25);
            }
            else
            {
              v21 = (_QWORD *)v14[6];
              if ( v21 != v14 + 6 )
              {
                v20 = v21 - 21;
                v37 = v21 - 21;
                v19 = *(_DWORD *)(v21[2] + 8LL);
              }
            }
            v22 = *(unsigned __int16 *)a3 + (v16 != 0 ? 84 : 12);
            if ( a4 )
              v22 += *(unsigned __int16 *)a4 + 2;
            v23 = (*((_DWORD *)v14 + 26) + 3) & 0xFFFFFFFC;
            v35 = v23;
            if ( v22 > v19 || v23 + v22 > v19 )
            {
              *v15 = v18 | 2;
            }
            else
            {
              v25 = 0LL;
              v26 = v14[11];
              if ( v26 )
              {
                *(_DWORD *)(v26 + *((unsigned int *)v14 + 27)) = v23 - *((_DWORD *)v14 + 27);
                *((_DWORD *)v14 + 27) = v23;
                v25 = (_DWORD *)(v14[11] + v23);
              }
              else
              {
                if ( !v20 )
                  goto LABEL_39;
                v27 = v20[3];
                if ( v27 )
                {
                  v25 = (_DWORD *)v20[3];
                  v14[11] = v27;
                }
                else
                {
                  v28 = v20[1];
                  if ( !v28 )
                    goto LABEL_39;
                  if ( (*(_BYTE *)(v28 + 10) & 5) != 0 )
                    v25 = *(_DWORD **)(v28 + 24);
                  else
                    v25 = MmMapLockedPagesSpecifyCache((PMDL)v28, 0, MmCached, 0LL, 0, 0x40000010u);
                  v14[11] = v25;
                }
                *((_DWORD *)v14 + 25) = v19;
              }
LABEL_39:
              if ( !v14[11] )
              {
                PsChargePoolQuota((PEPROCESS)v14[15], PagedPool, v19);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v19, 0x4E725346u);
                v14[11] = PoolWithTag;
                v14[10] = PoolWithTag;
                memset((void *)v14[11], 0, v19);
                *((_DWORD *)v14 + 25) = v19;
                v25 = (_DWORD *)v14[11];
              }
              if ( v25 )
              {
                *v25 = 0;
                v25[1] = a6;
                if ( v33 )
                {
                  *((_QWORD *)v25 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v25 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v25 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v25 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v25 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v25 + 6) = *(_QWORD *)(a10 + 48);
                  v25[14] = *(_DWORD *)(a10 + 56);
                  v25[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v25 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v25 + 9) = *(_QWORD *)(a10 + 72);
                  v25[20] = v22 - 84;
                  v30 = (char *)(v25 + 21);
                }
                else
                {
                  v25[2] = v22 - 12;
                  v30 = (char *)(v25 + 3);
                }
                memmove(v30, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v31 = &v30[*(unsigned __int16 *)a3];
                  *(_WORD *)v31 = 58;
                  memmove(v31 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v14 + 26) = v22 + v35;
              }
            }
            if ( (*(_BYTE *)v15 & 2) != 0 && v14[11] )
            {
              if ( v14[10] )
              {
                PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v14[15], *((unsigned int *)v14 + 25));
                ExFreePoolWithTag((PVOID)v14[10], 0);
              }
              v14[11] = 0LL;
              v14[10] = 0LL;
              v14[13] = 0LL;
              *((_DWORD *)v14 + 25) = 0;
            }
            v13 = v34;
          }
        }
        if ( a6 == 4 )
        {
          *v15 |= 8u;
        }
        else
        {
          *v15 &= ~8u;
          if ( (_QWORD *)v14[6] != v14 + 6 )
            FsRtlNotifyCompleteIrpList(v14, 0LL);
        }
      }
    }
    v13 = (_QWORD *)*v13;
    v10 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}

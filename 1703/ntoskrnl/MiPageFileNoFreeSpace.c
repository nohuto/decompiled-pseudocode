/*
 * XREFs of MiPageFileNoFreeSpace @ 0x14021A3F4
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCauseOverCommitPopup @ 0x140218018 (MiCauseOverCommitPopup.c)
 *     MiFreeModifiedReservations @ 0x14021A050 (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequestNoWait @ 0x14021A398 (MiIssuePageExtendRequestNoWait.c)
 */

__int64 __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rdi
  int v6; // ebp
  _QWORD *v7; // rcx
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  MiFreeModifiedReservations(a1, 1);
  v5 = 0LL;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = *(_QWORD **)(v2 + 944);
    if ( *v7 != v2 + 936 )
      __fastfail(3u);
    *a2 = v2 + 936;
    a2[1] = v7;
    *v7 = a2;
    *(_QWORD *)(v2 + 944) = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v6 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_QWORD *)&v8 = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v6 == 1 )
  {
    *(_QWORD *)&v8 = 2575857425LL;
    *a2 = 2575857425LL;
    v9 = *(_QWORD *)(v2 + 6248);
    v10 = *(_QWORD *)(v2 + 6128);
    if ( v10 > v9 )
      v10 = *(_QWORD *)(v2 + 6248);
    if ( (*(_BYTE *)(a1 + 204) & 0x10) == 0 )
    {
      v8 = v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      if ( v10 > (*((_QWORD *)&v8 + 1) & 0xFFFFFFFFFFFFFFF8uLL) && v9 < *(_QWORD *)(v2 + 4936) )
      {
        MiCauseOverCommitPopup(v2);
        v11 = 1LL;
LABEL_22:
        *(_QWORD *)&v8 = *(_QWORD *)(v2 + 6248);
        if ( (unsigned __int64)v8 < *(_QWORD *)(v2 + 4936) )
          *(_QWORD *)&v8 = MiIssuePageExtendRequestNoWait(v2, v11, 1);
        return v8;
      }
      if ( *(_QWORD *)(v2 + 6256) >= 0x1000uLL )
      {
        v12 = *(_DWORD *)(v2 + 5592);
        v13 = 0;
        if ( v12 )
        {
          v14 = v2 + 5600;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v14 + 204LL) & 0x50) == 0 )
            {
              if ( v5 + *(_QWORD *)(*(_QWORD *)v14 + 24LL) < v5 )
                break;
              v5 += *(_QWORD *)(*(_QWORD *)v14 + 24LL);
            }
            ++v13;
            v14 += 8LL;
          }
          while ( v13 < v12 );
        }
        v15 = *(_QWORD *)(v2 + 6256);
        if ( v15 > v5 )
        {
          v11 = v15 - v5;
          if ( v11 )
            goto LABEL_22;
        }
      }
    }
  }
  return v8;
}

/*
 * XREFs of MiPageFileNoFreeSpace @ 0x140226984
 * Callers:
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCauseOverCommitPopup @ 0x1402222C8 (MiCauseOverCommitPopup.c)
 *     MiFreeModifiedReservations @ 0x140225BB0 (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequest @ 0x1402266AC (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rsi
  int v7; // r15d
  _QWORD *v8; // rcx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  v4 = 1LL;
  MiFreeModifiedReservations(a1, 1);
  v6 = 0LL;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v8 = *(_QWORD **)(v2 + 896);
    if ( *v8 != v2 + 888 )
      __fastfail(3u);
    *a2 = v2 + 888;
    a2[1] = v8;
    *v8 = a2;
    *(_QWORD *)(v2 + 896) = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v7 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_QWORD *)&v9 = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v7 == 1 )
  {
    *(_QWORD *)&v9 = 2575857425LL;
    *a2 = 2575857425LL;
    v10 = *(_QWORD *)(v2 + 6440);
    v11 = *(_QWORD *)(v2 + 6320);
    if ( v11 > v10 )
      v11 = *(_QWORD *)(v2 + 6440);
    if ( (*(_BYTE *)(a1 + 204) & 0x10) == 0 )
    {
      v9 = v10 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      if ( v11 > (*((_QWORD *)&v9 + 1) & 0xFFFFFFFFFFFFFFF8uLL) && v10 < *(_QWORD *)(v2 + 5064) )
      {
        MiCauseOverCommitPopup(v2);
LABEL_22:
        *(_QWORD *)&v9 = *(_QWORD *)(v2 + 6440);
        if ( (unsigned __int64)v9 < *(_QWORD *)(v2 + 5064) )
          *(_QWORD *)&v9 = MiIssuePageExtendRequest(v2, v4, 6LL, 0);
        return v9;
      }
      if ( *(_QWORD *)(v2 + 6448) >= 0x1000uLL )
      {
        v12 = *(_DWORD *)(v2 + 5784);
        v13 = 0;
        if ( v12 )
        {
          v14 = v2 + 5792;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v14 + 204LL) & 0x50) == 0 )
            {
              if ( v6 + *(_QWORD *)(*(_QWORD *)v14 + 24LL) < v6 )
                break;
              v6 += *(_QWORD *)(*(_QWORD *)v14 + 24LL);
            }
            ++v13;
            v14 += 8LL;
          }
          while ( v13 < v12 );
        }
        v15 = *(_QWORD *)(v2 + 6448);
        if ( v15 > v6 )
        {
          v4 = v15 - v6;
          if ( v4 )
            goto LABEL_22;
        }
      }
    }
  }
  return v9;
}

/*
 * XREFs of MiIssuePageExtendRequest @ 0x1402266AC
 * Callers:
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x1400815F0 (MmResourcesAvailable.c)
 *     MiPageFileNoFreeSpace @ 0x140226984 (MiPageFileNoFreeSpace.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406EC81C (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MiQueuePageFileExtension @ 0x140226B10 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  int v7; // r14d
  int v9; // r12d
  __int64 *v10; // rdi
  unsigned int v11; // ecx
  LARGE_INTEGER *Timeout; // rsi
  unsigned int v13; // r10d
  __int64 v14; // r9
  KIRQL v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 **v18; // rdx
  __int64 v19; // [rsp+30h] [rbp-29h] BYREF
  __int16 v20; // [rsp+60h] [rbp+7h]
  char v21; // [rsp+62h] [rbp+9h]
  int v22; // [rsp+64h] [rbp+Bh]
  _QWORD v23[2]; // [rsp+68h] [rbp+Fh] BYREF
  int v24; // [rsp+78h] [rbp+1Fh]
  char v25; // [rsp+7Ch] [rbp+23h]
  char v26; // [rsp+7Fh] [rbp+26h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v7 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 1609) )
    return 0LL;
  v9 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v10 = (__int64 *)((v7 != 0 ? 0x3A8 : 0) + a1 + 424);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)v10 + 18, 1, 0) )
    {
      a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (a3 & 4) != 0 )
        *((_BYTE *)v10 + 79) |= 1u;
      else
        *((_BYTE *)v10 + 79) &= ~1u;
      v11 = 0;
      goto LABEL_10;
    }
    return 0LL;
  }
  if ( (ULONG_PTR *(__fastcall *)(__int64))CurrentThread[1].ApcState.ApcListHead[0].Blink == MiDereferenceSegmentThread
    || KeGetCurrentIrql() >= 2u )
  {
    return 0LL;
  }
  if ( (a3 & 8) != 0 )
    a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v13 = *(_DWORD *)(a1 + 5784);
  v10 = &v19;
  v11 = 1;
  v24 = 1;
  v19 = 0LL;
  v25 = a4;
  if ( (a3 & 1) != 0 )
    v26 = v26 & 0xE8 | 2;
  else
    v26 &= 0xE8u;
  v20 = 0;
  v23[1] = v23;
  v23[0] = v23;
  v21 = 6;
  v22 = 0;
  if ( (a3 & 8) != 0 )
  {
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
  }
  else
  {
    if ( a4 < v13 )
    {
LABEL_10:
      Timeout = 0LL;
      goto LABEL_27;
    }
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
    a3 = 0LL;
    if ( v13 )
    {
      v14 = a1 + 5792;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v14 + 204LL) & 0x50) == 0 && **(_QWORD **)v14 < *(_QWORD *)(*(_QWORD *)v14 + 8LL) )
          break;
        a3 = (unsigned int)(a3 + 1);
        v14 += 8LL;
      }
      while ( (unsigned int)a3 < v13 );
    }
    if ( (_DWORD)a3 == v13 )
      return 0LL;
  }
LABEL_27:
  if ( v7 )
    *((_BYTE *)v10 + 79) |= 8u;
  else
    *((_BYTE *)v10 + 79) &= ~8u;
  v10[4] = a2;
  LOBYTE(a3) = 17;
  v10[5] = 0LL;
  v10[3] = a1;
  v10[10] = 0LL;
  MiQueuePageFileExtension(v10, v11, a3);
  if ( v9 )
    return 0LL;
  if ( KeWaitForSingleObject(v10 + 6, Executive, 0, 0, Timeout) == 258 )
  {
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
    if ( !*((_DWORD *)v10 + 13) )
    {
      v16 = v10[10];
      if ( v16 )
      {
        *(_QWORD *)(v16 + 80) = 0LL;
      }
      else
      {
        v17 = v10[1];
        if ( *(__int64 **)(v17 + 8) != v10 + 1 || (v18 = (__int64 **)v10[2], *v18 != v10 + 1) )
          __fastfail(3u);
        *v18 = (__int64 *)v17;
        *(_QWORD *)(v17 + 8) = v18;
      }
      v10[5] = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
    __writecr8(v15);
  }
  LOBYTE(v5) = v10[5] != 0;
  return v5;
}

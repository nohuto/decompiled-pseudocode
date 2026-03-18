/*
 * XREFs of PspIumReplenishPartitionPages @ 0x14024FB68
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     PspIumGetPhysicalPage @ 0x14071ABF4 (PspIumGetPhysicalPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmAllocateNonChargedSecurePages @ 0x140217718 (MmAllocateNonChargedSecurePages.c)
 */

bool __fastcall PspIumReplenishPartitionPages(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // bp
  volatile LONG *v6; // rsi
  __int64 v8; // rdx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 160) + 48LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = (volatile LONG *)(a1 + 88);
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(a1 + 88)) )
  {
    if ( *(_DWORD *)(a1 + 4) >= a2 )
    {
      __writecr8(CurrentIrql);
      return 1;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(v6);
  }
  v8 = *(unsigned int *)(a1 + 156);
  v13 = *(_DWORD *)(a1 + 152) - v8 - *(_DWORD *)(a1 + 4);
  if ( v13 )
  {
    MmAllocateNonChargedSecurePages(*(ULONG_PTR ***)(a1 + 8), &v13, (__int64 *)(v3 + 8 * v8));
    *(_DWORD *)(a1 + 156) += v13;
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 < 8 )
  {
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 0) )
      _mm_pause();
    while ( *(_DWORD *)(a1 + 4) < 8u )
    {
      v10 = *(_DWORD *)(a1 + 156);
      if ( !v10 )
        break;
      v11 = *(unsigned int *)(a1 + 4);
      v12 = (unsigned int)(v10 - 1);
      *(_DWORD *)(a1 + 156) = v12;
      *(_QWORD *)(a1 + 8 * v11 + 24) = *(_QWORD *)(v3 + 8 * v12);
      ++*(_DWORD *)(a1 + 4);
    }
    v9 = *(_DWORD *)(a1 + 4);
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  __writecr8(CurrentIrql);
  return v9 >= a2;
}

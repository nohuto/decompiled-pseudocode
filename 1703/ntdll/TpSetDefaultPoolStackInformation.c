/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x1800856A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     TpSetPoolStackInformation @ 0x1800857C0 (TpSetPoolStackInformation.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(SIZE_T *a1)
{
  PTP_POOL_STACK_INFORMATION Heap; // rax
  SIZE_T v3; // rcx
  _TP_POOL *v4; // rax
  NTSTATUS v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+40h] [rbp+8h]

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !PoolStackInformation || PoolStackInformation->StackCommit < a1[1] || PoolStackInformation->StackReserve < *a1 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015C380);
    Heap = PoolStackInformation;
    if ( PoolStackInformation
      || (Heap = (PTP_POOL_STACK_INFORMATION)RtlAllocateHeap(
                                               NtCurrentPeb()->ProcessHeap,
                                               (dword_18015C000 + 786432) | 8,
                                               0x10uLL),
          (PoolStackInformation = Heap) != 0LL) )
    {
      v3 = a1[1];
      if ( Heap->StackCommit < v3 )
      {
        Heap->StackCommit = v3;
        v7 = 1;
      }
      if ( Heap->StackReserve < *a1 )
      {
        Heap->StackReserve = *a1;
        v7 = 1;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&stru_18015C380);
  }
  if ( v7 && v6 >= 0 )
  {
    v4 = (_TP_POOL *)sub_1800857E8();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4, PoolStackInformation);
      sub_180018928((const void **)&qword_18015C378, &stru_18015C380);
    }
  }
  return (unsigned int)v6;
}

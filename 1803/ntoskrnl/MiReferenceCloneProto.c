/*
 * XREFs of MiReferenceCloneProto @ 0x140141EDC
 * Callers:
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14026AE50 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14026B568 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiReferenceCloneProto(
        __int64 a1,
        volatile signed __int64 *a2,
        char a3,
        _QWORD *a4,
        volatile signed __int64 **a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v10; // r8
  int v12; // r14d
  __int64 v13; // rdi

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  CloneAddress = MiLocateCloneAddress((__int64)CurrentThread->ApcState.Process, (unsigned __int64)a2);
  if ( !CloneAddress )
    return 1LL;
  v12 = 0;
  v13 = *(_QWORD *)(CloneAddress[7] + 24LL);
  if ( *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v10 + 174)) != v13 )
  {
    if ( (a3 & 1) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit(v13, 1uLL, 0) )
        return 0LL;
      v12 = 1;
    }
    if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v13) )
    {
      if ( v12 )
        MiReturnCommit(v13, 1uLL);
      return 0LL;
    }
    if ( _InterlockedIncrement64(a2 + 1) != 1 )
      MiReturnCrossPartitionCloneCharges(v13);
  }
  _InterlockedAdd64(a2 + 3, 1uLL);
  if ( (a3 & 1) != 0 )
  {
    if ( (_InterlockedIncrement64(a2 + 2) & 0x7FFFFFFFFFFFFFFLL) == 1 )
    {
      if ( v12 )
        ++*a4;
      else
        ++a4[1];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 7560), 1uLL);
    }
    else
    {
      ++*a4;
      if ( v12 )
        MiReturnCommit(v13, 1uLL);
    }
    *a5 = a2;
  }
  return 1LL;
}

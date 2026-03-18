/*
 * XREFs of MiReferenceCloneProto @ 0x1400EA030
 * Callers:
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402301C0 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140230230 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiReferenceCloneProto(
        __int64 a1,
        volatile signed __int64 *a2,
        char a3,
        _QWORD *a4,
        volatile signed __int64 **a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 CloneAddress; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // r14d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  CloneAddress = MiLocateCloneAddress(CurrentThread->ApcState.Process, a2, a1, a4);
  if ( !CloneAddress )
    return 1LL;
  v14 = 0;
  v15 = *(_QWORD *)(*(_QWORD *)(CloneAddress + 56) + 24LL);
  if ( *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v11 + 172)) == v15 )
    goto LABEL_4;
  if ( (a3 & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v15, 1uLL, 0LL, v12) )
      return 0LL;
    v14 = 1;
  }
  if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v15) )
  {
    if ( v14 )
      MiReturnCommit(v15, 1uLL);
    return 0LL;
  }
  if ( _InterlockedIncrement64(a2 + 1) != 1 )
    MiReturnCrossPartitionCloneCharges(v15, v16, v17);
LABEL_4:
  _InterlockedAdd64(a2 + 3, 1uLL);
  if ( (a3 & 1) != 0 )
  {
    if ( (_InterlockedIncrement64(a2 + 2) & 0x7FFFFFFFFFFFFFFLL) == 1 )
    {
      if ( v14 )
        ++*a4;
      else
        ++a4[1];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 6472), 1uLL);
    }
    else
    {
      ++*a4;
      if ( v14 )
        MiReturnCommit(v15, 1uLL);
    }
    *a5 = a2;
  }
  return 1LL;
}

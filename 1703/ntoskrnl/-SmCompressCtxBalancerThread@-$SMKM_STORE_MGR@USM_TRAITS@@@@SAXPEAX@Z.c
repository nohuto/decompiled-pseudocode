/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140168E30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14012FBAC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(
        __int64 a1,
        __int64 a2,
        _SINGLE_LIST_ENTRY *a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v4; // rbx
  KIRQL v6; // si
  unsigned int Count; // ecx
  unsigned __int64 Ptr_high; // rax

  v4 = *(struct _EX_RUNDOWN_REF **)a1;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25, a3, a4);
  while ( 1 )
  {
    KeWaitForSingleObject(&v4[6], WrKernel, 0, 0, 0LL);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4);
    KeResetEvent((PRKEVENT)&v4[6]);
    Count = v4[11].Count;
    if ( !Count )
      break;
    Ptr_high = HIDWORD(v4[11].Ptr);
    if ( Count <= (unsigned int)Ptr_high || *(_QWORD *)v4[2].Count >> 1 <= Ptr_high )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
      __writecr8(v6);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
      __writecr8(v6);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread((__int64)v4, *(_QWORD *)(a1 + 8), 1u);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
  __writecr8(v6);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)a1);
}

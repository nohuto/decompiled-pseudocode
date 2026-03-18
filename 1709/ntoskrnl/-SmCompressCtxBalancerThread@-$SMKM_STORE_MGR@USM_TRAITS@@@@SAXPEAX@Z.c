/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265030
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140264F84 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140265110 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(
        struct _EX_RUNDOWN_REF **P,
        __int64 a2,
        _SINGLE_LIST_ENTRY *a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v4; // rbx
  KIRQL v6; // si
  unsigned int Count; // ecx
  unsigned __int64 Ptr_high; // rax

  v4 = *P;
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
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v4, P[1], 1LL);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
  __writecr8(v6);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams(P);
}

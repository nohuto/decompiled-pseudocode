/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401828E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1400D151C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1400D286C (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(__int64 *P)
{
  __int64 v1; // rbx
  KIRQL v3; // bp
  unsigned int v4; // eax
  unsigned __int64 v5; // r8
  BOOL v6; // esi

  v1 = *P;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(v1 + 48), WrKernel, 0, 0, 0LL);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    KeResetEvent((PRKEVENT)(v1 + 48));
    v4 = *(_DWORD *)(v1 + 88);
    if ( !v4 )
      break;
    v5 = *(unsigned int *)(v1 + 92);
    v6 = v4 > (unsigned int)v5 && **(_QWORD **)(v1 + 16) >> 1 > v5;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
    __writecr8(v3);
    if ( v6 )
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v1, P[1], 1u);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
  __writecr8(v3);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)P);
}

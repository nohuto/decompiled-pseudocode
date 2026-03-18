/*
 * XREFs of ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14003A2A8
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400539A0 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition(
        PEX_SPIN_LOCK SpinLock,
        int a2,
        int a3)
{
  int v5; // edi
  ULONG ActiveProcessorCount; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  KIRQL v9; // bp
  __int64 result; // rax
  __int64 **i; // r14

  if ( a2 == 4 )
    v5 = 7;
  else
    v5 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[a2];
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = ActiveProcessorCount;
  if ( !a3 )
    goto LABEL_4;
  if ( v5 <= 7 )
  {
    v7 = 3 * ActiveProcessorCount;
LABEL_9:
    v8 = v7 >> 2;
    goto LABEL_10;
  }
  if ( v5 > 8 )
  {
    if ( v5 <= 10 )
      goto LABEL_9;
    v8 = ActiveProcessorCount >> 3;
  }
  else
  {
    v8 = ActiveProcessorCount >> 1;
  }
LABEL_10:
  if ( !v8 )
  {
LABEL_4:
    v8 = 1;
    goto LABEL_5;
  }
  if ( v8 >= 0x10 )
    v8 = 16;
LABEL_5:
  v9 = ExAcquireSpinLockExclusive(SpinLock);
  if ( *((_DWORD *)SpinLock + 32) != v5 )
  {
    *((_DWORD *)SpinLock + 32) = v5;
    for ( i = (__int64 **)*((_QWORD *)SpinLock + 9); i != (__int64 **)(SpinLock + 18); i = (__int64 **)*i )
      KeSetActualBasePriorityThread(i[2], (unsigned int)v5);
  }
  *((_DWORD *)SpinLock + 22) = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  result = v9;
  __writecr8(v9);
  return result;
}

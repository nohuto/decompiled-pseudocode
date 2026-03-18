/*
 * XREFs of MiFreeLargePageView @ 0x1406BEB6C
 * Callers:
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, char a3)
{
  __int64 *VadWakeList; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v10; // rsi
  int v11; // edi

  VadWakeList = MiGetVadWakeList(a2, 16);
  if ( VadWakeList )
  {
    if ( (a3 & 1) == 0 )
    {
      v7 = *(unsigned int *)(a2 + 52);
      v8 = *(unsigned __int8 *)(a2 + 34);
      LODWORD(v7) = v7 & 0x7FFFFFFF;
      CurrentThread = KeGetCurrentThread();
      v10 = v7 | (v8 << 31);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1600), -(__int64)v10);
      v11 = a3 & 2;
      if ( !v11 )
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiReturnFullProcessCommitment(a1, v10);
      if ( !v11 )
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    ExFreePoolWithTag(VadWakeList, 0);
  }
}

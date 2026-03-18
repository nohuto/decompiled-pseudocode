/*
 * XREFs of MiFreeLargePageView @ 0x14075595C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, char a3)
{
  __int64 *VadWakeList; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // ebp

  VadWakeList = MiGetVadWakeList(a2, 16LL);
  if ( VadWakeList )
  {
    v7 = *(unsigned int *)(a2 + 52);
    LODWORD(v7) = v7 & 0x7FFFFFFF;
    v8 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
    if ( v8 )
    {
      CurrentThread = KeGetCurrentThread();
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1600), -(__int64)v8);
      v10 = a3 & 1;
      if ( !v10 )
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiReturnFullProcessCommitment(a1, v8);
      if ( !v10 )
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    ExFreePoolWithTag(VadWakeList, 0);
  }
}

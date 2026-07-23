/*
 * XREFs of MiReserveDriverPtes @ 0x140541558
 * Callers:
 *     MiSelectSystemImageAddress @ 0x140541514 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x1406DF2D0 (MmMapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiUnlockDriverMappings @ 0x1400F8C80 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400F8E80 (MiLockDriverMappings.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(unsigned int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r12
  ULONG v4; // esi
  _RTL_BITMAP *i; // rbx
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  _RTL_BITMAP *PoolWithTag; // r14
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  __int64 PteAddress; // rax
  __int64 v15; // rdi
  ULONG StartingIndex; // [rsp+60h] [rbp+8h]
  unsigned __int64 v17; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = (unsigned int)(a2 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = (_RTL_BITMAP *)qword_140388408[v3]; i; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    if ( i[1].SizeOfBitMap >= v4 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(i + 1, v4, i[2].SizeOfBitMap);
      if ( ClearBitsAndSet != -1 )
      {
        i[2].SizeOfBitMap = v4 + ClearBitsAndSet;
        v7 = (unsigned __int64)&i->Buffer[2 * ((unsigned __int64)(ClearBitsAndSet << 16) >> 12)];
LABEL_6:
        MiUnlockDriverMappings((__int64)CurrentThread);
        return v7;
      }
    }
  }
  StartingIndex = (unsigned __int8)ExGenRandom(1);
  v9 = (16 * (StartingIndex + v4) + 511) & 0xFFFFFE00;
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                 (POOL_TYPE)((_DWORD)InitializationPhase != 0 ? PagedPool : NonPagedPoolNx),
                                 (v9 >> 7) + 40,
                                 0x70446D4Du);
  if ( !PoolWithTag )
  {
    v7 = 0LL;
    goto LABEL_6;
  }
  v12 = 12 - ((_DWORD)v3 != 0);
  v13 = MiObtainSystemVa((unsigned int)v9 >> 9, v12, v10);
  v17 = v13;
  if ( v13 )
  {
    PteAddress = MiGetPteAddress(v13);
    v15 = PteAddress;
    if ( (_DWORD)v3 || (unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress - 8 + 8 * v9, 1, v12) )
    {
      memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) >> 7);
      PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
      PoolWithTag[1].SizeOfBitMap = (unsigned int)v9 >> 4;
      RtlSetBits(PoolWithTag + 1, StartingIndex, v4);
      PoolWithTag->Buffer = (unsigned int *)v15;
      PoolWithTag[2].SizeOfBitMap = StartingIndex + v4;
      *(_QWORD *)&PoolWithTag->SizeOfBitMap = qword_140388408[v3];
      qword_140388408[v3] = PoolWithTag;
      MiUnlockDriverMappings((__int64)CurrentThread);
      return v15 + 8 * ((unsigned __int64)(StartingIndex << 16) >> 12);
    }
    MiReturnSystemVa(
      v17,
      (__int64)((v15 << 25) + ((unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) << 28)) >> 16,
      v12,
      0LL);
  }
  MiUnlockDriverMappings((__int64)CurrentThread);
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}

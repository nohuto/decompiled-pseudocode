/*
 * XREFs of MiReserveDriverPtes @ 0x14055D0C4
 * Callers:
 *     MiSelectSystemImageAddress @ 0x14055D080 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x1406B3320 (MmMapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiUnlockDriverMappings @ 0x140125548 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x140125758 (MiLockDriverMappings.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  _RTL_BITMAP *PoolWithTag; // r14
  int v11; // ebx
  unsigned __int64 v12; // rax
  __int64 PteAddress; // rax
  __int64 v14; // rdi
  ULONG StartingIndex; // [rsp+60h] [rbp+8h]
  unsigned __int64 v16; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = (unsigned int)(a2 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = (_RTL_BITMAP *)qword_14036C0C8[v3]; i; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
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
  v11 = 12 - ((_DWORD)v3 != 0);
  v12 = MiObtainSystemVa((unsigned int)v9 >> 9, v11);
  v16 = v12;
  if ( v12 )
  {
    PteAddress = MiGetPteAddress(v12);
    v14 = PteAddress;
    if ( (_DWORD)v3 || (unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress - 8 + 8 * v9, 1, v11) )
    {
      memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) >> 7);
      PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
      PoolWithTag[1].SizeOfBitMap = (unsigned int)v9 >> 4;
      RtlSetBits(PoolWithTag + 1, StartingIndex, v4);
      PoolWithTag->Buffer = (unsigned int *)v14;
      PoolWithTag[2].SizeOfBitMap = StartingIndex + v4;
      *(_QWORD *)&PoolWithTag->SizeOfBitMap = qword_14036C0C8[v3];
      qword_14036C0C8[v3] = PoolWithTag;
      MiUnlockDriverMappings((__int64)CurrentThread);
      return v14 + 8 * ((unsigned __int64)(StartingIndex << 16) >> 12);
    }
    MiReturnSystemVa(
      v16,
      (__int64)((v14 << 25) + ((unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) << 28)) >> 16,
      v11,
      0LL);
  }
  MiUnlockDriverMappings((__int64)CurrentThread);
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}

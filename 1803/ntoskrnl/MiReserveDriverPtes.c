/*
 * XREFs of MiReserveDriverPtes @ 0x1405F6850
 * Callers:
 *     MiSelectSystemImageAddress @ 0x1405F680C (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x14074A240 (MmMapLockedRestartPages.c)
 *     MiGetNewAddressForBootImage @ 0x1408AE02C (MiGetNewAddressForBootImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     MiUnlockDriverMappings @ 0x140160550 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x140160750 (MiLockDriverMappings.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(unsigned int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r12
  ULONG v4; // esi
  __int64 i; // rbx
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // r15
  _RTL_BITMAP *PoolWithTag; // r14
  int v14; // ebx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 PteAddress; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG StartingIndex; // [rsp+60h] [rbp+8h]
  unsigned __int64 v25; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = (unsigned int)(a2 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = qword_1403CB588[v3]; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) >= v4 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(i + 16), v4, *(_DWORD *)(i + 32));
      if ( ClearBitsAndSet != -1 )
      {
        *(_DWORD *)(i + 32) = v4 + ClearBitsAndSet;
        v10 = *(_QWORD *)(i + 8) + 8 * ((unsigned __int64)(ClearBitsAndSet << 16) >> 12);
LABEL_6:
        MiUnlockDriverMappings((__int64)CurrentThread, v7, v8, v9);
        return v10;
      }
    }
  }
  StartingIndex = (unsigned __int8)ExGenRandom(1);
  v12 = (16 * (StartingIndex + v4) + 511) & 0xFFFFFE00;
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                 (POOL_TYPE)((_DWORD)InitializationPhase != 0 ? PagedPool : NonPagedPoolNx),
                                 (v12 >> 7) + 40,
                                 0x70446D4Du);
  if ( !PoolWithTag )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
  v14 = 12 - ((_DWORD)v3 != 0);
  v15 = MiObtainSystemVa((unsigned int)v12 >> 9, v14);
  v25 = v15;
  if ( v15 )
  {
    PteAddress = MiGetPteAddress(v15);
    v20 = PteAddress;
    if ( (_DWORD)v3 || (unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress - 8 + 8 * v12, 1u, v14) )
    {
      memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) >> 7);
      PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
      PoolWithTag[1].SizeOfBitMap = (unsigned int)v12 >> 4;
      RtlSetBits(PoolWithTag + 1, StartingIndex, v4);
      PoolWithTag->Buffer = (unsigned int *)v20;
      PoolWithTag[2].SizeOfBitMap = StartingIndex + v4;
      v21 = qword_1403CB588[v3];
      *(&PoolWithTag[2].SizeOfBitMap + 1) = 0;
      *(_QWORD *)&PoolWithTag->SizeOfBitMap = v21;
      qword_1403CB588[v3] = (__int64)PoolWithTag;
      MiUnlockDriverMappings((__int64)CurrentThread, (__int64)qword_1403CB588, v22, v23);
      return v20 + 8 * ((unsigned __int64)(StartingIndex << 16) >> 12);
    }
    MiReturnSystemVa(
      v25,
      (__int64)((v20 << 25) + ((unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) << 28)) >> 16,
      v14);
  }
  MiUnlockDriverMappings((__int64)CurrentThread, v16, v17, v18);
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}

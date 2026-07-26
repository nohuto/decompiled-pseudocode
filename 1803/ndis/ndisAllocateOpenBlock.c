/*
 * XREFs of ndisAllocateOpenBlock @ 0x1C00BFFC4
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisNblTrackerRegisterComponent @ 0x1C001C010 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C001C11C (ndisAllocatePerProcessorSlot.c)
 *     ndisFreePerProcessorSlot @ 0x1C0021C18 (ndisFreePerProcessorSlot.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     NdisAllocateRefCount @ 0x1C00C08B0 (NdisAllocateRefCount.c)
 */

__int64 __fastcall ndisAllocateOpenBlock(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR PerProcessorSlot; // rsi
  SIZE_T v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax

  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6F6D444Eu);
  if ( !PerProcessorSlot )
    return 0LL;
  v7 = (-(__int64)((*(_DWORD *)(a1 + 120) & 0x20000) != 0) & 0x90) + 1016;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6F6D444Eu);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    ndisFreePerProcessorSlot(PerProcessorSlot, 0x6F6D444EuLL);
    return 0LL;
  }
  memset(PoolWithTag, 0, v7);
  *(_QWORD *)(v9 + 816) = PerProcessorSlot;
  if ( a3 )
  {
    *(_WORD *)v9 = 274;
    *(_WORD *)(v9 + 2) = v7;
  }
  *(_QWORD *)(v9 + 840) = v9 + 832;
  *(_QWORD *)(v9 + 832) = v9 + 832;
  *(_QWORD *)(v9 + 864) = v9 + 856;
  *(_QWORD *)(v9 + 856) = v9 + 856;
  *(_QWORD *)(v9 + 912) = v9 + 904;
  *(_QWORD *)(v9 + 904) = v9 + 904;
  *(_QWORD *)(v9 + 936) = v9 + 928;
  *(_QWORD *)(v9 + 928) = v9 + 928;
  KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 696));
  *(_QWORD *)(v9 + 680) = NdisNblTrackerRegisterComponent(2, v9, a2 + 72);
  LOBYTE(v10) = 19;
  *(_QWORD *)(v9 + 688) = NdisAllocateRefCount(v10, 0LL);
  *(_QWORD *)(v9 + 960) = 0LL;
  *(_QWORD *)(v9 + 976) = ndisCompleteUnsolicitedUnbind;
  result = v9;
  *(_QWORD *)(v9 + 984) = v9;
  return result;
}

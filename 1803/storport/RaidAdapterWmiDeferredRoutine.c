/*
 * XREFs of RaidAdapterWmiDeferredRoutine @ 0x1C003F0C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C00037FC (RaidFreeDeferredItem.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     StorPortGetLogicalUnit @ 0x1C0030770 (StorPortGetLogicalUnit.c)
 */

PSLIST_ENTRY __fastcall RaidAdapterWmiDeferredRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v6; // dl
  struct _DEVICE_OBJECT *v7; // rbx
  __int64 LogicalUnit; // rax
  _DWORD *Pool; // rax
  _DWORD *v10; // rbp

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_BYTE *)(a2 + 32);
  if ( v6 == -1 )
  {
    v7 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v4 + 104) & 4) != 0));
  }
  else
  {
    LOBYTE(a4) = *(_BYTE *)(a2 + 34);
    LOBYTE(a3) = *(_BYTE *)(a2 + 33);
    LogicalUnit = StorPortGetLogicalUnit(*(_QWORD *)(a1 + 64), v6, a3, a4);
    if ( !LogicalUnit || (*(_BYTE *)(LogicalUnit + 152) & 0x10) == 0 )
      return RaidFreeDeferredItem((union _SLIST_HEADER *)(v4 + 1472), a2);
    v7 = *(struct _DEVICE_OBJECT **)(LogicalUnit + 8);
  }
  if ( v7 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a2 + 40), 0x4D576152u, *(_QWORD *)(v4 + 8));
    v10 = Pool;
    if ( Pool )
    {
      memmove(Pool, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v10[1] = IoWMIDeviceObjectToProviderId(v7);
      *((_QWORD *)v10 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v10) < 0 )
        ExFreePoolWithTag(v10, 0x4D576152u);
    }
  }
  return RaidFreeDeferredItem((union _SLIST_HEADER *)(v4 + 1472), a2);
}

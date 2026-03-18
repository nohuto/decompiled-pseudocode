/*
 * XREFs of ExReinitializeResourceLite @ 0x14011C340
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1400EF440 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpOwnerEntryToThread @ 0x14011C4A0 (ExpOwnerEntryToThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140255E24 (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v3; // r15d
  unsigned int TableSize; // r14d
  ERESOURCE_THREAD OwnerThread; // rax
  struct _KTHREAD *v6; // rbp
  ULONG *p_TableSize; // rdx
  unsigned int v9; // ebp
  ULONG *v10; // r12
  struct _KTHREAD *v11; // r13

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    p_TableSize = &OwnerTable->TableSize;
    v9 = 1;
    if ( TableSize > 1 )
    {
      v10 = &OwnerTable->TableSize;
      do
      {
        v10 += 4;
        v11 = (struct _KTHREAD *)ExpOwnerEntryToThread(v10 - 2);
        if ( v11 )
        {
          ++v3;
          if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource) && (*v10 & 2) == 0 && v11 != KeGetCurrentThread() )
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v11, 3uLL);
          if ( (*v10 & 1) != 0 )
            PsBoostThreadIoEx((__int64)v11, 1, 0, 0LL);
          if ( (*v10 & 4) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)&v11[1].Timer.DueTime.HighPart);
          if ( (*v10 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v11, 0x746C6644u);
        }
        ++v9;
      }
      while ( v9 < TableSize );
      p_TableSize = &OwnerTable->TableSize;
    }
    memset(&OwnerTable[1], 0, 16LL * (*p_TableSize - 1));
  }
  else
  {
    TableSize = 0;
  }
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( OwnerThread )
  {
    ++TableSize;
    if ( (OwnerThread & 3) == 0 )
      ++v3;
  }
  v6 = (struct _KTHREAD *)ExpOwnerEntryToThread(&Resource->OwnerEntry);
  if ( v6 )
  {
    if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && v6 != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v6, 4uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx((__int64)v6, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)&v6[1].Timer.DueTime.HighPart);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag(v6, 0x746C6644u);
  }
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->OwnerEntry.OwnerThread = 0LL;
  *(_QWORD *)&Resource->OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x649Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}

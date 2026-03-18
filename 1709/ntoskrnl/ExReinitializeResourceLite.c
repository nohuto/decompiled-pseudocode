/*
 * XREFs of ExReinitializeResourceLite @ 0x14001F1C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14001F1A0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpOwnerEntryToThread @ 0x14001F330 (ExpOwnerEntryToThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14027E6E0 (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  __int64 v1; // rdx
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v4; // r14d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v7; // eax
  ERESOURCE_THREAD v8; // rsi
  ULONG *p_TableSize; // rdx
  unsigned int v11; // r15d
  ULONG *v12; // r12
  struct _KTHREAD *v13; // r13
  __int64 v14; // rdx

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v4 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    p_TableSize = &OwnerTable->TableSize;
    v11 = 1;
    if ( TableSize > 1 )
    {
      v12 = &OwnerTable->TableSize;
      do
      {
        v12 += 4;
        v13 = (struct _KTHREAD *)ExpOwnerEntryToThread(v12 - 2);
        if ( v13 )
        {
          ++v4;
          if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource) && (*v12 & 2) == 0 && v13 != KeGetCurrentThread() )
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v13, 3uLL);
          if ( (*v12 & 1) != 0 )
          {
            LOBYTE(v14) = 1;
            PsBoostThreadIoEx(v13, v14, 0LL, 0LL);
          }
          if ( (*v12 & 4) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)&v13[1].Timer.DueTime.HighPart);
          if ( (*v12 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v13, 0x746C6644u);
        }
        ++v11;
      }
      while ( v11 < TableSize );
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
      ++v4;
  }
  v7 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  v8 = Resource->OwnerEntry.OwnerThread;
  if ( (*(_BYTE *)&v7 & 2) != 0 )
  {
    v8 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v8 & 3) != 0 )
  {
    goto LABEL_18;
  }
  if ( v8 )
  {
    if ( ((Resource->ReservedLowFlags & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (*(_BYTE *)&v7 & 2) == 0
      && (struct _KTHREAD *)v8 != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), v8, 4uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
    {
      LOBYTE(v1) = 1;
      PsBoostThreadIoEx(v8, v1, 0LL, 0LL);
    }
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 1804));
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v8, 0x746C6644u);
  }
LABEL_18:
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->OwnerEntry.OwnerThread = 0LL;
  *(_QWORD *)&Resource->OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x635Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v4);
  return 0;
}

/*
 * XREFs of ExReinitializeResourceLite @ 0x1400AA920
 * Callers:
 *     <none>
 * Callees:
 *     ExpOwnerEntryToThread @ 0x1400AAA88 (ExpOwnerEntryToThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140102960 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1402B18AC (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  __int64 v1; // rdx
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v4; // r14d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rsi
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v7; // eax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v8; // ecx
  unsigned int v10; // r15d
  unsigned int v11; // eax
  ULONG *p_TableSize; // r12
  struct _KTHREAD *v13; // r13
  __int64 v14; // rdx
  ULONG v15; // eax

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v4 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v10 = 1;
    v11 = TableSize;
    if ( TableSize > 1 )
    {
      p_TableSize = &OwnerTable->TableSize;
      do
      {
        p_TableSize += 4;
        v13 = (struct _KTHREAD *)ExpOwnerEntryToThread(p_TableSize - 2);
        if ( v13 )
        {
          ++v4;
          if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
            && (*p_TableSize & 2) == 0
            && v13 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v13, 3uLL);
          }
          v15 = *p_TableSize;
          if ( (*p_TableSize & 1) != 0 )
          {
            LOBYTE(v14) = 1;
            PsBoostThreadIoEx(v13, v14, 0LL, 0LL);
            v15 = *p_TableSize;
          }
          if ( (v15 & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)&v13[1].Timer.DueTime.HighPart);
            v15 = *p_TableSize;
          }
          if ( (v15 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v13, 0x746C6644u);
        }
        ++v10;
      }
      while ( v10 < TableSize );
      v11 = OwnerTable->TableSize;
    }
    memset(&OwnerTable[1], 0, 16LL * (v11 - 1));
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
  if ( (*(_BYTE *)&v7 & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_19;
  }
  if ( OwnerThread )
  {
    if ( (Resource->ReservedLowFlags & 1) != 0 || ExpResourceEnforceOwnerTransfer )
    {
      *(_BYTE *)&v8 = Resource->OwnerEntry.TableSize;
      if ( (*(_BYTE *)&v7 & 2) == 0 && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
        KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    else
    {
      *(_BYTE *)&v8 = Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v8 & 1) != 0 )
    {
      LOBYTE(v1) = 1;
      PsBoostThreadIoEx(OwnerThread, v1, 0LL, 0LL);
      v8 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v8 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1804));
      v8 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v8 & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_19:
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

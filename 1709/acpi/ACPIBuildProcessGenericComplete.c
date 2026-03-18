/*
 * XREFs of ACPIBuildProcessGenericComplete @ 0x1C0002690
 * Callers:
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C00027A0 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessSynchronizationList @ 0x1C0027B5C (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1C0043840 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessPowerResourceFailure @ 0x1C0043970 (ACPIBuildProcessPowerResourceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C0043FD0 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIBuildProcessGenericComplete(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rax
  __int64 v3; // rdi
  _SLIST_ENTRY *v4; // rdx
  PSLIST_ENTRY *v5; // rax
  __int64 v6; // rcx

  Next = ListEntry[4].Next;
  if ( Next )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))Next)(
      *((_QWORD *)&ListEntry[2].Next + 1),
      *((_QWORD *)&ListEntry[4].Next + 1),
      LODWORD(ListEntry[3].Next));
  if ( (HIDWORD(ListEntry[1].Next) & 8) != 0 )
  {
    v3 = *((_QWORD *)&ListEntry[2].Next + 1);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 684));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = ListEntry->Next;
  AcpiBuildDpcFlags |= 2u;
  if ( *(&v4->Next + 1) != ListEntry || (v5 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1), *v5 != ListEntry) )
    __fastfail(3u);
  *v5 = v4;
  *((_QWORD *)&v4->Next + 1) = v5;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  v6 = *((_QWORD *)&ListEntry[3].Next + 1);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *((_QWORD *)&ListEntry[3].Next + 1) = 0LL;
  }
  ++dword_1C0079A5C;
  if ( ExQueryDepthSList(&BuildRequestLookAsideList) < (unsigned __int16)word_1C0079A50 )
  {
    ExpInterlockedPushEntrySList(&BuildRequestLookAsideList, ListEntry);
  }
  else
  {
    ++dword_1C0079A60;
    ((void (__fastcall *)(PSLIST_ENTRY))qword_1C0079A78)(ListEntry);
  }
  return 0LL;
}

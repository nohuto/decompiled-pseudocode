/*
 * XREFs of ExEnumHandleTable @ 0x140506320
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401FA8E0 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x140506270 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x14053923C (ObInitProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406B9408 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1406C0E2C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x1406EF22C (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x14074D884 (EtwpObjectHandleRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x1405064FC (ExpGetNextHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        unsigned int *a1,
        __int64 (__fastcall *a2)(unsigned int *, signed __int64 *, _QWORD, __int64),
        __int64 a3,
        _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  signed __int64 *NextHandleTableEntry; // rdi
  signed __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r9
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, 0LL, v15);
  if ( !NextHandleTableEntry )
    goto LABEL_13;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(NextHandleTableEntry);
        v11 = *NextHandleTableEntry;
        if ( (*NextHandleTableEntry & 1) != 0 )
          break;
        if ( !v11 )
        {
          v12 = v15[0];
          goto LABEL_5;
        }
        ExpBlockOnLockedHandleEntry(a1, NextHandleTableEntry, v11);
      }
    }
    while ( v11 != _InterlockedCompareExchange64(NextHandleTableEntry, v11 - 1, v11) );
    v12 = v15[0];
    v5 = a2(a1, NextHandleTableEntry, v15[0], a3);
    if ( v5 )
      break;
LABEL_5:
    v13 = v12 + 4;
    if ( (v12 ^ (unsigned __int64)(v12 + 4)) >= 0x400 )
      NextHandleTableEntry = (signed __int64 *)ExpLookupHandleTableEntry(a1, v12 + 8);
    else
      NextHandleTableEntry += 2;
    v15[0] = v13;
    if ( !NextHandleTableEntry )
      goto LABEL_13;
  }
  if ( a4 )
    *a4 = v12;
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}

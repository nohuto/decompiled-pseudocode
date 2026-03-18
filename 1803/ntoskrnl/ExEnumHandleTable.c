/*
 * XREFs of ExEnumHandleTable @ 0x14054B830
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140237700 (IoRevokeHandlesForProcess.c)
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x14054B780 (ObFindHandleForObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x14071E3A8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140726B0C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x14075870C (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x1407AF0F4 (EtwpObjectHandleRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExpGetNextHandleTableEntry @ 0x14054BA14 (ExpGetNextHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, signed __int64 *, _QWORD, __int64),
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
  do
  {
    while ( 1 )
    {
      _m_prefetchw(NextHandleTableEntry);
      v11 = *NextHandleTableEntry;
      if ( (*NextHandleTableEntry & 1) != 0 )
        break;
      if ( v11 )
      {
        ExpBlockOnLockedHandleEntry(a1, NextHandleTableEntry, v11);
      }
      else
      {
        v12 = v15[0];
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
    }
  }
  while ( v11 != _InterlockedCompareExchange64(NextHandleTableEntry, v11 - 1, v11) );
  v12 = v15[0];
  v5 = a2(a1, NextHandleTableEntry, v15[0], a3);
  if ( !v5 )
    goto LABEL_5;
  if ( a4 )
    *a4 = v12;
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}

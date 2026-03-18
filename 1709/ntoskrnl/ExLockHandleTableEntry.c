/*
 * XREFs of ExLockHandleTableEntry @ 0x1400BD9D4
 * Callers:
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PspReferenceCidTableEntry @ 0x1404C5740 (PspReferenceCidTableEntry.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     ExDupHandleTable @ 0x140506C10 (ExDupHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140507D70 (ObpReferenceProcessObjectByHandle.c)
 *     ExQueryProcessHandleInformation @ 0x1405D4F3C (ExQueryProcessHandleInformation.c)
 *     ObpAuditObjectAccess @ 0x1406EF914 (ObpAuditObjectAccess.c)
 *     ExpSnapShotHandleTables @ 0x140756B50 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  __int64 v5; // rtt

  do
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) != 0 )
        break;
      if ( !v4 )
        return v4;
      ExpBlockOnLockedHandleEntry(a1, a2, *a2);
    }
    v5 = *a2;
  }
  while ( v5 != _InterlockedCompareExchange64(a2, v4 - 1, v4) );
  LOBYTE(v4) = 1;
  return v4;
}

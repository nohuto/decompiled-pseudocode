/*
 * XREFs of ExLockHandleTableEntry @ 0x14003EC38
 * Callers:
 *     ObpReferenceProcessObjectByHandle @ 0x1404B7360 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     ExDupHandleTable @ 0x1405533A0 (ExDupHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x14059B080 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ExQueryProcessHandleInformation @ 0x1405C0B08 (ExQueryProcessHandleInformation.c)
 *     ObpAuditObjectAccess @ 0x140758D94 (ObpAuditObjectAccess.c)
 *     ExpSnapShotHandleTables @ 0x1407BD5E8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
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

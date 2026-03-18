/*
 * XREFs of ExLockHandleTableEntry @ 0x1400B0390
 * Callers:
 *     ExQueryProcessHandleInformation @ 0x14041EA08 (ExQueryProcessHandleInformation.c)
 *     ExDupHandleTable @ 0x14042B980 (ExDupHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     PspReferenceCidTableEntry @ 0x14050F9F0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140517B10 (ObpReferenceProcessObjectByHandle.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     ObpAuditObjectAccess @ 0x1406C0E1C (ObpAuditObjectAccess.c)
 *     ExpSnapShotHandleTables @ 0x1407173E0 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
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

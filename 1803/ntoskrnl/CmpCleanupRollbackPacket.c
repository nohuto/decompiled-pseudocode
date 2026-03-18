/*
 * XREFs of CmpCleanupRollbackPacket @ 0x14054E0A8
 * Callers:
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 */

void __fastcall CmpCleanupRollbackPacket(__int64 a1)
{
  __int64 i; // rdi
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v4 )
    {
      if ( (v4 & 1) != 0 )
        CmpTransDereferenceTransaction(v4);
      else
        ObfDereferenceObject((PVOID)v4);
    }
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v3 )
    CmSiFreeMemory(v3);
}

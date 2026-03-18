/*
 * XREFs of CmpCleanupRollbackPacket @ 0x1404E691C
 * Callers:
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 */

void __fastcall CmpCleanupRollbackPacket(__int64 a1)
{
  __int64 i; // rdi
  struct _PRIVILEGE_SET *v3; // rcx
  void *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v4 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v4 )
    {
      if ( ((unsigned __int8)v4 & 1) != 0 )
        CmpTransDereferenceTransaction(v4);
      else
        ObfDereferenceObject(v4);
    }
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v3 )
    MiDeleteSubsection(v3);
}

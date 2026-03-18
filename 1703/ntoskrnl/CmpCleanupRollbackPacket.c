/*
 * XREFs of CmpCleanupRollbackPacket @ 0x1404CC6FC
 * Callers:
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
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
    MiDeleteSubsection(v3);
}

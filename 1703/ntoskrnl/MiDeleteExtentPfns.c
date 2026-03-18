/*
 * XREFs of MiDeleteExtentPfns @ 0x140218800
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiDeleteExtentPfns(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // si
  __int64 result; // rax

  do
  {
    while ( qword_14036BF20 )
      MiRemovePhysicalMemory(0LL, 0LL, 50LL);
    v2 = ExAcquireSpinLockExclusive(&dword_14036BF28);
    v3 = qword_14036BF20;
    v4 = v2;
    if ( !qword_14036BF20 )
    {
      if ( a1 )
        byte_14036BF50 = qword_14036BF20;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BF28);
    result = v4;
    __writecr8(v4);
  }
  while ( v3 );
  return result;
}

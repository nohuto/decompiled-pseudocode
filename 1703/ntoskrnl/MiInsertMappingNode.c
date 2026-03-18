/*
 * XREFs of MiInsertMappingNode @ 0x140135178
 * Callers:
 *     MmAllocateMappingAddress @ 0x1405728D0 (MmAllocateMappingAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall MiInsertMappingNode(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // r10
  bool v5; // dl
  KIRQL v6; // si
  _QWORD *v7; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = ExAcquireSpinLockExclusive(&dword_14036CDA0);
  v4 = (_QWORD *)qword_14036CDA8;
  v5 = 0;
  v6 = v3;
  if ( qword_14036CDA8 )
  {
    while ( 1 )
    {
      if ( v1 < v4[3] )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  RtlAvlInsertNodeEx(&qword_14036CDA8, (unsigned __int64)v4, v5, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036CDA0);
  result = v6;
  __writecr8(v6);
  return result;
}

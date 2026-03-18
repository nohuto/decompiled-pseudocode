/*
 * XREFs of MiInsertMappingNode @ 0x1400C5508
 * Callers:
 *     MmAllocateMappingAddress @ 0x140572870 (MmAllocateMappingAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiInsertMappingNode(__int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  _QWORD *v5; // r10
  char v6; // dl
  KIRQL v7; // si
  _QWORD *v8; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = ExAcquireSpinLockExclusive(&SpinLock);
  v5 = (_QWORD *)qword_1403CC2C8;
  v6 = 0;
  v7 = v3;
  if ( qword_1403CC2C8 )
  {
    while ( 1 )
    {
      if ( v1 < v5[3] )
      {
        v8 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
      }
      else
      {
        v8 = (_QWORD *)v5[1];
        if ( !v8 )
        {
          v6 = 1;
          break;
        }
      }
      v5 = v8;
    }
  }
  LOBYTE(v4) = v6;
  RtlAvlInsertNodeEx(&qword_1403CC2C8, v5, v4, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  result = v7;
  __writecr8(v7);
  return result;
}

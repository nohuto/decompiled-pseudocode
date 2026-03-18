/*
 * XREFs of MiInsertMappingNode @ 0x140125C94
 * Callers:
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
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
  v3 = ExAcquireSpinLockExclusive(&dword_140389010);
  v4 = (_QWORD *)qword_140389018;
  v5 = 0;
  v6 = v3;
  if ( qword_140389018 )
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
  RtlAvlInsertNodeEx(&qword_140389018, (unsigned __int64)v4, v5, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140389010);
  result = v6;
  __writecr8(v6);
  return result;
}

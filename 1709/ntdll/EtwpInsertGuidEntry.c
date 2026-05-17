/*
 * XREFs of EtwpInsertGuidEntry @ 0x180064370
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x180064304 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180094960 (memcmp.c)
 */

signed __int64 __fastcall EtwpInsertGuidEntry(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  bool v5; // bl
  unsigned __int64 v6; // rdi
  int v7; // esi
  unsigned __int64 v8; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v5 = 0;
  v6 = EtwpGuidEntryTable;
  v7 = byte_180160400 & 1;
  if ( EtwpGuidEntryTable )
  {
    while ( 1 )
    {
      if ( memcmp((const void *)(a1 + 24), (const void *)(v6 + 24), 0x10uLL) < 0 )
      {
        v8 = *(_QWORD *)v6;
        if ( v7 )
        {
          if ( !v8 )
            break;
          v8 ^= v6;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( !v8 )
          {
LABEL_9:
            v5 = 1;
            break;
          }
          v8 ^= v6;
        }
        if ( !v8 )
          goto LABEL_9;
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((__int64)&EtwpGuidEntryTable, v6, v5, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}

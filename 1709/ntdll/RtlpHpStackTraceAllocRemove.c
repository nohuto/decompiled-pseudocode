/*
 * XREFs of RtlpHpStackTraceAllocRemove @ 0x1801003D0
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x180100A6C (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x180100308 (RtlpHpStackTraceAllocFindMapping.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocRemove(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *Mapping; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD *i; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h]

  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3, a4);
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  Mapping = (_QWORD *)RtlpHpStackTraceAllocFindMapping(a1, a2);
  v7 = (unsigned __int64)Mapping;
  if ( Mapping )
  {
    v11 = Mapping[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8LL
                       * ((37
                         * (BYTE6(v11)
                          + 37
                          * (BYTE5(v11)
                           + 37
                           * (BYTE4(v11)
                            + 37
                            * (BYTE3(v11)
                             + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                         + HIBYTE(v11)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == Mapping )
      {
        *i = *Mapping;
        --*(_DWORD *)(a1 + 16);
        *Mapping |= 0x8000000000000002uLL;
        break;
      }
    }
    v8 = Mapping[2];
  }
  else
  {
    v8 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  if ( v7 )
    RtlpHpMetadataFree(v7);
  return v8;
}

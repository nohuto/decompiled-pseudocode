/*
 * XREFs of RtlStackDbStackRemove @ 0x18010D838
 * Callers:
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180100A6C (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpStackDbEntryCleanup @ 0x18010D9A4 (RtlpStackDbEntryCleanup.c)
 */

signed __int64 __fastcall RtlStackDbStackRemove(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  unsigned __int64 v5; // rbx
  signed __int64 result; // rax
  unsigned __int64 *v8; // r8
  volatile signed __int64 *v9; // rsi
  _QWORD *i; // rdx
  __int64 v11; // [rsp+38h] [rbp+10h]

  v4 = *(_DWORD *)(a2 + 16);
  v5 = a2;
  LODWORD(result) = v4;
  while ( 1 )
  {
    result &= 0xFFFFFFu;
    if ( (_DWORD)result == 1 )
      break;
    a2 = v4 ^ (v4 ^ (v4 - 1)) & 0xFFFFFFu;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 16), a2, v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  v8 = (unsigned __int64 *)(v4 & 0xFFFFFF);
  if ( (unsigned int)v8 <= 1 )
  {
    v9 = (volatile signed __int64 *)(a1 + 32);
    RtlAcquireSRWLockExclusive(a1 + 32, a2, v8, a4);
    if ( (_InterlockedDecrement((volatile signed __int32 *)(v5 + 16)) & 0xFFFFFF) != 0 )
    {
      return RtlReleaseSRWLockExclusive(v9);
    }
    else
    {
      v11 = *(_QWORD *)(v5 + 8) & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
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
                           + HIBYTE(v11)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1)));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == v5 )
        {
          *i = *(_QWORD *)v5;
          --*(_DWORD *)(a1 + 16);
          *(_QWORD *)v5 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive(v9);
      return RtlpStackDbEntryCleanup(a1, v5);
    }
  }
  return result;
}

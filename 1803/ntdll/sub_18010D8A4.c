/*
 * XREFs of sub_18010D8A4 @ 0x18010D8A4
 * Callers:
 *     sub_1800FC6F0 @ 0x1800FC6F0 (sub_1800FC6F0.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18010DA2C @ 0x18010DA2C (sub_18010DA2C.c)
 */

signed __int64 __fastcall sub_18010D8A4(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  unsigned __int64 v5; // rbx
  signed __int64 result; // rax
  unsigned __int64 *v8; // r8
  volatile signed __int64 *v9; // rsi
  unsigned __int64 v10; // r10
  _QWORD *i; // rdx

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
      v10 = *(_QWORD *)(v5 + 8) & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                         + 8
                         * ((HIBYTE(v10)
                           + 37
                           * (BYTE6(v10)
                            + 37
                            * (BYTE5(v10)
                             + 37
                             * (BYTE4(v10)
                              + 37
                              * (BYTE3(v10)
                               + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1)));
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
      return sub_18010DA2C(a1, v5);
    }
  }
  return result;
}

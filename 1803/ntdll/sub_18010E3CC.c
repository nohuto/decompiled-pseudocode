/*
 * XREFs of sub_18010E3CC @ 0x18010E3CC
 * Callers:
 *     sub_18010DA2C @ 0x18010DA2C (sub_18010DA2C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18010E3CC(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  signed __int32 i; // eax
  _RTL_SRWLOCK *v6; // rsi
  unsigned __int64 v7; // r10
  _QWORD *j; // rdx

  v2 = *(_DWORD *)(a2 + 16);
  for ( i = v2; (i & 0xFFFFFF) != 1; v2 = i )
  {
    i = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF, v2);
    if ( v2 == i )
      break;
  }
  if ( (v2 & 0xFFFFFFu) <= 1 )
  {
    v6 = (_RTL_SRWLOCK *)(a1 + 40);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 16)) & 0xFFFFFF) != 0 )
    {
      RtlReleaseSRWLockExclusive(v6);
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8
                         * ((HIBYTE(v7)
                           + 37
                           * (BYTE6(v7)
                            + 37
                            * (BYTE5(v7)
                             + 37
                             * (BYTE4(v7)
                              + 37
                              * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
            (*j & 1) == 0;
            j = (_QWORD *)*j )
      {
        if ( *j == a2 )
        {
          *j = *(_QWORD *)a2;
          --*(_DWORD *)a1;
          *(_QWORD *)a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive(v6);
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *(_QWORD *)(a1 + 64));
    }
  }
}

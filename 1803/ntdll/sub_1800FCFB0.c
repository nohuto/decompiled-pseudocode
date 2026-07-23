/*
 * XREFs of sub_1800FCFB0 @ 0x1800FCFB0
 * Callers:
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_1800FCEAC @ 0x1800FCEAC (sub_1800FCEAC.c)
 */

__int64 __fastcall sub_1800FCFB0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  _QWORD *i; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v4 = (_QWORD *)sub_1800FCEAC(a1, a2);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v7 = v4[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8
                       * ((HIBYTE(v7)
                         + 37
                         * (BYTE6(v7)
                          + 37
                          * (BYTE5(v7)
                           + 37
                           * (BYTE4(v7)
                            + 37
                            * ((((_DWORD)v4[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)(((_DWORD)v4[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(v4[1] & (-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v7 + 11623883)))))))) & ((*(_DWORD *)(a1 + 20) >> 5) - 1)));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v4 )
      {
        *i = *v4;
        --*(_DWORD *)(a1 + 16);
        *v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    v6 = v4[2];
  }
  else
  {
    v6 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  if ( v5 )
  {
    v10 = xmmword_18015A790;
    sub_18005F840(v5, &v10);
  }
  return v6;
}

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

__int64 __fastcall sub_1800FCFB0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // r9
  _QWORD *i; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3, a4);
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = (_QWORD *)sub_1800FCEAC(a1, a2);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v9 = v6[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8
                       * ((HIBYTE(v9)
                         + 37
                         * (BYTE6(v9)
                          + 37
                          * (BYTE5(v9)
                           + 37
                           * (BYTE4(v9)
                            + 37
                            * ((((_DWORD)v6[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)(((_DWORD)v6[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(v6[1] & (-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v9 + 11623883)))))))) & ((*(_DWORD *)(a1 + 20) >> 5) - 1)));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v6 )
      {
        *i = *v6;
        --*(_DWORD *)(a1 + 16);
        *v6 |= 0x8000000000000002uLL;
        break;
      }
    }
    v8 = v6[2];
  }
  else
  {
    v8 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  if ( v7 )
  {
    v12 = xmmword_18015A790;
    sub_18005F840(v7, &v12);
  }
  return v8;
}

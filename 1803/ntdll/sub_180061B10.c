/*
 * XREFs of sub_180061B10 @ 0x180061B10
 * Callers:
 *     sub_18001A8A0 @ 0x18001A8A0 (sub_18001A8A0.c)
 *     sub_1800FF314 @ 0x1800FF314 (sub_1800FF314.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_180061CD0 @ 0x180061CD0 (sub_180061CD0.c)
 *     sub_180061D14 @ 0x180061D14 (sub_180061D14.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180061B10(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rax
  signed __int64 v8; // rbx
  __int128 v9; // xmm0
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // di
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  signed __int64 *v19; // roff
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  __int128 v24; // [rsp+30h] [rbp-28h] BYREF

  v23 = xmmword_18015A790;
  v7 = sub_18005E238(0x30uLL, 0x30uLL, 0, &v23);
  v8 = (signed __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015AA20, v10, v11, v12);
    v13 = sub_180061D14(&qword_18015AA20, a2, a3);
    if ( v13 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 32), a4);
      v15 = *(_WORD *)(v13 + 40);
    }
    else
    {
      v14 = sub_180061CD0();
      v15 = v14;
      if ( v14 )
      {
        *(_WORD *)(v8 + 40) = v14;
        *(_QWORD *)(qword_18015AA38 + 8LL * v14 - 8) = v8;
        v16 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_18015AA2C & 0x1F));
        v17 = qword_18015AA30;
        v18 = (HIBYTE(v16)
             + 37
             * (BYTE6(v16)
              + 37
              * (BYTE5(v16)
               + 37
               * (BYTE4(v16)
                + 37
                * (((*(_DWORD *)(v8 + 8) & (unsigned int)(-1 << (dword_18015AA2C & 0x1F))) >> 24)
                 + 37
                 * ((unsigned __int8)((*(_DWORD *)(v8 + 8) & (unsigned int)(-1 << (dword_18015AA2C & 0x1F))) >> 16)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v8 + 8) & (-1 << (dword_18015AA2C & 0x1F))) >> 8)
                   + 37 * ((unsigned __int8)v16 + 11623883)))))))) & (((unsigned int)dword_18015AA2C >> 5) - 1);
        v19 = (signed __int64 *)(qword_18015AA30 + 8 * v18);
        _m_prefetchw(v19);
        v20 = *v19;
        do
        {
          *(_QWORD *)v8 = v20;
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 8 * v18), v8, v20);
        }
        while ( v21 != v20 );
        word_18015AA40 = v15;
        ++dword_18015AA28;
        v8 = 0LL;
        ++word_18015AA42;
      }
    }
    RtlReleaseSRWLockExclusive(&qword_18015AA20);
    if ( v8 )
    {
      v24 = xmmword_18015A790;
      sub_18005F840(v8, &v24);
    }
  }
  else
  {
    return 0;
  }
  return v15;
}

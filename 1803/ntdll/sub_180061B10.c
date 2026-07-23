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
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // di
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  signed __int64 *v16; // roff
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF

  v20 = xmmword_18015A790;
  v7 = sub_18005E238(0x30uLL, 0x30uLL, 0, &v20);
  v8 = (signed __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive(&Parameter);
    v10 = sub_180061D14(&Parameter, a2, a3);
    if ( v10 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 32), a4);
      v12 = *(_WORD *)(v10 + 40);
    }
    else
    {
      v11 = sub_180061CD0();
      v12 = v11;
      if ( v11 )
      {
        *(_WORD *)(v8 + 40) = v11;
        *(_QWORD *)(qword_18015AA38 + 8LL * v11 - 8) = v8;
        v13 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_18015AA2C & 0x1F));
        v14 = qword_18015AA30;
        v15 = (HIBYTE(v13)
             + 37
             * (BYTE6(v13)
              + 37
              * (BYTE5(v13)
               + 37
               * (BYTE4(v13)
                + 37
                * (((*(_DWORD *)(v8 + 8) & (unsigned int)(-1 << (dword_18015AA2C & 0x1F))) >> 24)
                 + 37
                 * ((unsigned __int8)((*(_DWORD *)(v8 + 8) & (unsigned int)(-1 << (dword_18015AA2C & 0x1F))) >> 16)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v8 + 8) & (-1 << (dword_18015AA2C & 0x1F))) >> 8)
                   + 37 * ((unsigned __int8)v13 + 11623883)))))))) & (((unsigned int)dword_18015AA2C >> 5) - 1);
        v16 = (signed __int64 *)(qword_18015AA30 + 8 * v15);
        _m_prefetchw(v16);
        v17 = *v16;
        do
        {
          *(_QWORD *)v8 = v17;
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8 * v15), v8, v17);
        }
        while ( v18 != v17 );
        word_18015AA40 = v12;
        ++dword_18015AA28;
        v8 = 0LL;
        ++word_18015AA42;
      }
    }
    RtlReleaseSRWLockExclusive(&Parameter);
    if ( v8 )
    {
      v21 = xmmword_18015A790;
      sub_18005F840(v8, &v21);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}

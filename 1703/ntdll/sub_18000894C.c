/*
 * XREFs of sub_18000894C @ 0x18000894C
 * Callers:
 *     sub_18002C840 @ 0x18002C840 (sub_18002C840.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 * Callees:
 *     sub_180008B20 @ 0x180008B20 (sub_180008B20.c)
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000894C(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rax
  signed __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int16 i; // r9
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // di
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int64 *v17; // roff
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v21; // [rsp+40h] [rbp+8h]

  v7 = (void *)sub_1800093FC(0x30uLL);
  v8 = (signed __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive(&Parameter);
    v10 = sub_180008B20(&Parameter, a2, a3);
    if ( v10 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 32), a4);
      v14 = *(_WORD *)(v10 + 40);
    }
    else if ( word_1801598E2 == 1024 )
    {
      v14 = 0;
    }
    else
    {
      for ( i = word_1801598E0; ; i = v12 + 1 )
      {
        v12 = 0;
        if ( i != 1024 )
          v12 = i;
        if ( !*(_QWORD *)(qword_1801598D8 + 8LL * v12) )
          break;
      }
      v13 = v12 + 1;
      v14 = v12 + 1;
      if ( v12 != 0xFFFF )
      {
        *(_WORD *)(v8 + 40) = v13;
        *(_QWORD *)(qword_1801598D8 + 8LL * (v13 - 1)) = v8;
        v21 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_1801598CC & 0x1F));
        v15 = qword_1801598D0;
        v16 = (37
             * (BYTE6(v21)
              + 37
              * (BYTE5(v21)
               + 37
               * (BYTE4(v21)
                + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
             + HIBYTE(v21)) & (((unsigned int)dword_1801598CC >> 5) - 1);
        v17 = (signed __int64 *)(qword_1801598D0 + 8 * v16);
        _m_prefetchw(v17);
        v18 = *v17;
        do
        {
          *(_QWORD *)v8 = v18;
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 8 * v16), v8, v18);
        }
        while ( v19 != v18 );
        ++dword_1801598C8;
        v8 = 0LL;
        ++word_1801598E2;
        word_1801598E0 = v13;
      }
    }
    RtlReleaseSRWLockExclusive(&Parameter);
    if ( v8 )
      sub_18000913C(v8);
  }
  else
  {
    return 0;
  }
  return v14;
}

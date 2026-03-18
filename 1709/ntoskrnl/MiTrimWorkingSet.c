/*
 * XREFs of MiTrimWorkingSet @ 0x14000B9A4
 * Callers:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 * Callees:
 *     MiLogTrimWs @ 0x14000BBA0 (MiLogTrimWs.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 v7; // rsi
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  bool v12; // zf
  _QWORD *v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD v18[32]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v19[10]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v20[68]; // [rsp+1D0h] [rbp+D0h] BYREF

  v7 = a4;
  memset(&v18[1], 0, 0xF0uLL);
  memset(v19, 0, 0x98uLL);
  v9 = v7 & 0xF;
  LODWORD(v18[0]) = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x20u;
    LODWORD(v18[0]) = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x40u;
    LODWORD(v18[0]) = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x80u;
    LODWORD(v18[0]) = v9;
  }
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x100u;
    LODWORD(v18[0]) = v9;
  }
  if ( (a5 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 136);
    v9 |= 0x400u;
    LODWORD(v18[0]) = v9;
    v18[6] = v10;
    if ( (a5 & 0x20) != 0 )
    {
      v9 |= 0x800u;
      LODWORD(v18[0]) = v9;
    }
  }
  if ( dword_140388C68 )
    LODWORD(v18[0]) = v9 | 0x10;
  HIDWORD(v18[8]) = 0;
  v11 = MiTbFlushType(a1);
  v18[9] = 0LL;
  v18[10] = 0LL;
  v12 = (*(_BYTE *)(a1 + 192) & 7) == 0;
  LODWORD(v18[7]) = v11;
  WORD2(v18[7]) = 4;
  LODWORD(v18[8]) = 20;
  if ( v12 && *(_QWORD *)(a1 + 584) )
  {
    v20[0] = 0;
    v18[30] = v20;
    v20[1] = 32;
  }
  v13 = *(_QWORD **)(a1 + 16);
  v14 = 0LL;
  if ( (unsigned int)v7 >= 8 )
    return 0LL;
  v15 = (_QWORD *)(a1 + 8 * (v7 + 5));
  v16 = (unsigned int)(8 - v7);
  do
  {
    v14 += *v15++;
    --v16;
  }
  while ( v16 );
  v18[5] = v14;
  if ( !v14 )
    return 0LL;
  v18[1] = a2;
  BYTE7(v19[0]) = v18[0] & 0xF;
  *(_QWORD *)&v19[9] = v18;
  *(_QWORD *)&v19[8] = MiTrimPte;
  *((_QWORD *)&v19[8] + 1) = MiTrimWorkingSetTail;
  LODWORD(v19[0]) = 18;
  *((_QWORD *)&v19[0] + 1) = a1;
  BYTE4(v19[0]) = a3;
  *(_QWORD *)&v19[2] = *v13;
  if ( !*(_QWORD *)&v19[2] )
    v19[1] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
  MiWalkPageTables(v19);
  MiLogTrimWs(a1, v18[4], v18[2], v7, a5);
  return v18[2];
}

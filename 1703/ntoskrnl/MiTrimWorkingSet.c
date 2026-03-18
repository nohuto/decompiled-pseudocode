/*
 * XREFs of MiTrimWorkingSet @ 0x14007F5E8
 * Callers:
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 * Callees:
 *     MiLogTrimWs @ 0x14007F7C0 (MiLogTrimWs.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  int v11; // ecx
  int v12; // eax
  _QWORD *v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  int v17; // r8d
  __int64 v18; // rax
  _OWORD v20[9]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[30]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = a4;
  LODWORD(v21[0]) = 0;
  memset(&v21[1], 0, 0xE0uLL);
  memset(v20, 0, sizeof(v20));
  v10 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172)) + 5544LL);
  v11 = v6 & 0xF;
  LODWORD(v21[0]) = v11;
  if ( (a5 & 2) != 0 )
  {
    v11 |= 0x20u;
    LODWORD(v21[0]) = v11;
  }
  if ( (a5 & 4) != 0 )
  {
    v11 |= 0x40u;
    LODWORD(v21[0]) = v11;
  }
  if ( (a5 & 1) != 0 )
  {
    v11 |= 0x80u;
    LODWORD(v21[0]) = v11;
  }
  if ( (a5 & 8) != 0 )
  {
    v11 |= 0x100u;
    LODWORD(v21[0]) = v11;
  }
  if ( dword_14036CA68 )
    LODWORD(v21[0]) = v11 | 0x10;
  v21[7] = 20LL;
  v12 = MiTbFlushType(a1, v9);
  v13 = *(_QWORD **)(a1 + 16);
  v14 = 0LL;
  LODWORD(v21[6]) = v12;
  WORD2(v21[6]) = 4;
  v21[8] = 0LL;
  v21[9] = 0LL;
  if ( (unsigned int)v6 >= 8 )
    return 0LL;
  v15 = (_QWORD *)(a1 + 40 + 8 * v6);
  v16 = (unsigned int)(8 - v6);
  do
  {
    v14 += *v15++;
    --v16;
  }
  while ( v16 );
  v21[5] = v14;
  if ( !v14 )
    return 0LL;
  v21[1] = a2;
  *((_QWORD *)&v20[8] + 1) = v21;
  *((_QWORD *)&v20[7] + 1) = MiTrimPte;
  *(_QWORD *)&v20[8] = MiTrimWorkingSetTail;
  LODWORD(v20[0]) = 2;
  *((_QWORD *)&v20[0] + 1) = a1;
  BYTE4(v20[0]) = a3;
  *(_QWORD *)&v20[2] = *v13;
  if ( !*(_QWORD *)&v20[2] )
    v20[1] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
  MiWalkPageTables(v20);
  v17 = v21[2];
  v18 = v21[2] - v21[3];
  if ( SLOBYTE(v21[0]) < 0 )
  {
    *(_QWORD *)(v10 + 8 * v6 + 2584) += v18;
    *(_QWORD *)(a1 + 8) += v18;
    v17 = v21[2];
  }
  MiLogTrimWs(a1, v21[4], v17, v6, a5);
  return v21[2];
}

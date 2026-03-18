/*
 * XREFs of MiTrimWorkingSet @ 0x140083D80
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiReduceWs @ 0x140083CE4 (MiReduceWs.c)
 *     MiForcedTrim @ 0x140084224 (MiForcedTrim.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiLogTrimWs @ 0x140083F9C (MiLogTrimWs.c)
 *     MiGenerateRandomPte @ 0x140084070 (MiGenerateRandomPte.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r11d
  bool v14; // zf
  __int64 *v15; // r10
  __int64 v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // r9
  __int64 RandomPte; // rcx
  __int64 v20; // rax
  _QWORD v22[32]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v23[22]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v24[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  v6 = a4;
  memset(v22, 0, 0xF8uLL);
  memset(v23, 0, sizeof(v23));
  v9 = v6 & 0xF;
  LODWORD(v22[0]) = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x20u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x40u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x80u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x100u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 0x40) != 0 )
  {
    v9 |= 0x1000u;
    LODWORD(v22[0]) = v9;
  }
  if ( (a5 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 136);
    v9 |= 0x400u;
    LODWORD(v22[0]) = v9;
    v22[6] = v10;
    if ( a2 > v10 )
      a2 = v10;
    if ( (a5 & 0x20) != 0 )
    {
      v9 |= 0x800u;
      LODWORD(v22[0]) = v9;
    }
  }
  if ( dword_1403CBF28 )
    LODWORD(v22[0]) = v9 | 0x10;
  v22[8] = 20LL;
  v11 = MiTbFlushType(a1);
  v14 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  LODWORD(v22[7]) = v11;
  WORD2(v22[7]) = 4;
  v22[9] = 0LL;
  v22[10] = 0LL;
  if ( v14 && *(_QWORD *)(a1 + 584) )
  {
    v24[0] = 0;
    v22[30] = v24;
    v24[1] = 32;
  }
  v15 = *(__int64 **)(a1 + 16);
  v16 = 0LL;
  if ( (unsigned int)v6 >= 8 )
    return 0LL;
  v17 = (_QWORD *)(a1 + 8 * (v6 + 5));
  v18 = (unsigned int)(8 - v6);
  do
  {
    v16 += *v17++;
    --v18;
  }
  while ( v18 );
  v22[5] = v16;
  if ( !v16 )
    return 0LL;
  v22[1] = a2;
  HIBYTE(v23[0]) = v22[0] & 0xF;
  v23[21] = v22;
  v23[19] = MiTrimPte;
  v23[20] = MiTrimWorkingSetTail;
  LODWORD(v23[0]) = 22;
  v23[3] = a1;
  BYTE4(v23[0]) = a3;
  if ( ((unsigned int)v12 & v13) != 0 )
  {
    RandomPte = MiGenerateRandomPte(v23, v12, v17, 0LL);
    v23[7] = RandomPte;
  }
  else
  {
    RandomPte = *v15;
    v23[7] = *v15;
  }
  v20 = v23[5];
  if ( !RandomPte )
    v20 = -1LL;
  v23[5] = v20;
  MiWalkPageTables((int *)v23);
  MiLogTrimWs(a1, v22[4], v22[2], v6, a5);
  return v22[2];
}

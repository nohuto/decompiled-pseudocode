/*
 * XREFs of MiSimpleAging @ 0x14000BC74
 * Callers:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiSimpleAging(__int64 a1, char a2)
{
  unsigned __int128 v4; // rax
  char v5; // di
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[34]; // [rsp+C0h] [rbp-40h] BYREF
  int v16; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v17; // [rsp+1D4h] [rbp+D4h]
  __int64 v18; // [rsp+1D8h] [rbp+D8h]
  __int64 v19; // [rsp+1E0h] [rbp+E0h]
  __int64 v20; // [rsp+1E8h] [rbp+E8h]
  _DWORD v21[68]; // [rsp+290h] [rbp+190h] BYREF

  memset(v15, 0, 0x108uLL);
  *(_QWORD *)&v4 = memset(v14, 0, 0x98uLL);
  v5 = *(_BYTE *)(a1 + 192);
  if ( (v5 & 0x40) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 136);
    v4 = *(unsigned __int64 *)(a1 + 152) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v6 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v4 = v6 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v8 + v7 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) && v6 - v8 - v7 < 0x400 )
      {
        v9 = v7 >> 5;
        v18 = 20LL;
        if ( v9 < 8 )
          v9 = 8LL;
        v15[7] = v9;
        v16 = MiTbFlushType(a1);
        v15[8] = &v16;
        v17 = v10;
        v19 = v10;
        v20 = v10;
        if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 584) != v10 )
        {
          v21[0] = v10;
          v15[32] = v21;
          v21[1] = 32;
        }
        v14[18] = v15;
        v12 = *(_QWORD *)(v11 + 8);
        v14[3] = -1LL;
        v14[4] = v12;
        v14[16] = MiSimpleAgePte;
        v14[17] = MiSimpleAgeWorkingSetTail;
        LODWORD(v14[0]) = 2;
        v14[1] = a1;
        BYTE4(v14[0]) = a2;
        *(_QWORD *)&v4 = MiWalkPageTables(v14);
      }
    }
  }
  return v4;
}

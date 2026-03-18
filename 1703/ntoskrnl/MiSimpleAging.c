/*
 * XREFs of MiSimpleAging @ 0x14007EAB8
 * Callers:
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 * Callees:
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiSimpleAging(__int64 a1, char a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rax
  _QWORD v13[18]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v15; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v16; // [rsp+1B4h] [rbp+B4h]
  __int64 v17; // [rsp+1B8h] [rbp+B8h]
  __int64 v18; // [rsp+1C0h] [rbp+C0h]
  __int64 v19; // [rsp+1C8h] [rbp+C8h]

  LODWORD(v14[0]) = 9;
  memset((char *)v14 + 4, 0, 0xFCuLL);
  *(_QWORD *)&v4 = memset(v13, 0, sizeof(v13));
  if ( (*(_BYTE *)(a1 + 192) & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v4 = *(unsigned __int64 *)(a1 + 152) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v5 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v4 = v5 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v7 + v6 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) && v5 - v7 - v6 < 0x400 )
      {
        v8 = v6 >> 5;
        v17 = 20LL;
        if ( v8 < 8 )
          v8 = 8LL;
        v14[7] = v8;
        v15 = MiTbFlushType(a1, 0LL);
        v16 = v9;
        v14[8] = &v15;
        v13[17] = v14;
        v18 = v9;
        v19 = v9;
        v11 = *(_QWORD *)(v10 + 8);
        v13[3] = -1LL;
        v13[4] = v11;
        v13[15] = MiSimpleAgePte;
        v13[16] = MiSimpleAgeWorkingSetTail;
        LODWORD(v13[0]) = 2;
        v13[1] = a1;
        BYTE4(v13[0]) = a2;
        *(_QWORD *)&v4 = MiWalkPageTables(v13);
      }
    }
  }
  return v4;
}

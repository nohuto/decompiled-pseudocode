/*
 * XREFs of MiDeletePteRange @ 0x14013BCF4
 * Callers:
 *     MiDeleteSessionPdes @ 0x14013BC30 (MiDeleteSessionPdes.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 * Callees:
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiFreeUnmappedPageTables @ 0x1400824C8 (MiFreeUnmappedPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 *     MiDeleteValidSystemPte @ 0x14013BF5C (MiDeleteValidSystemPte.c)
 *     MiReplicatePteChange @ 0x140164BE0 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeletePteRange(char *a1, int a2, unsigned __int64 a3, __int64 a4)
{
  char *AnyMultiplexedVm; // rdi
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 NextPageTable; // rax
  unsigned __int64 v12; // rdi
  _KPROCESS *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r10
  int v18; // r11d
  __int64 v20; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  char *v23; // [rsp+48h] [rbp-B8h]
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _QWORD v26[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+80h] [rbp-80h] BYREF
  __int16 v28; // [rsp+84h] [rbp-7Ch]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]

  v23 = a1;
  AnyMultiplexedVm = a1;
  memset(v26, 0, sizeof(v26));
  if ( (AnyMultiplexedVm[192] & 7) == 2 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v23 = AnyMultiplexedVm;
  }
  v7 = MiTbFlushType((__int64)AnyMultiplexedVm);
  v29 = 20LL;
  v28 = 0;
  v9 = 0LL;
  v30 = 0LL;
  v10 = a4 - 8;
  v31 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v27 = v7;
  while ( a3 <= v10 )
  {
    LOBYTE(v8) = 17;
    NextPageTable = MiGetNextPageTable(a3, v10, 0LL, v8, 5, &v24);
    a3 = NextPageTable;
    if ( !NextPageTable )
      break;
    v25 = NextPageTable;
    do
    {
      v12 = a3;
      if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) != 0 )
      {
        ++v20;
        MiDeleteValidSystemPte(a3, (__int64)&v22);
      }
      a3 += 8LL;
    }
    while ( a3 <= v10 && (a3 & 0xFFF) != 0 );
    if ( a2 == 3 && (v23[192] & 7) != 0 )
    {
      v14 = v25;
      v15 = 3LL;
      do
      {
        v14 = v14 << 25 >> 16;
        v12 = (__int64)(v12 << 25) >> 16;
        --v15;
      }
      while ( v15 );
      MiReplicatePteChange(v14, v12);
    }
    MiFlushTbList((__int64)&v27, v13);
    MiFreeUnmappedPageTables(v22, v26, 1);
    v22 = 0LL;
    if ( a2 == 3
      || (v23[192] & 7u) >= 2 && a2 == 1
      || (v16 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          (*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(v16) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1) )
    {
      v9 = v20;
    }
    else
    {
      v9 = MiDeletePteRange(v17, (unsigned int)(v18 + 1), v16, v16 + 8) + v20;
      v20 = v9;
    }
  }
  return v9;
}

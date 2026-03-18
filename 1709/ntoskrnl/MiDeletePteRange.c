/*
 * XREFs of MiDeletePteRange @ 0x1402151D4
 * Callers:
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 *     MiDeleteSessionPdes @ 0x14021989C (MiDeleteSessionPdes.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiFreeUnmappedPageTables @ 0x1400F6C7C (MiFreeUnmappedPageTables.c)
 *     MiReplicatePteChange @ 0x140152B20 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiDeleteValidSystemPte @ 0x14022FBD0 (MiDeleteValidSystemPte.c)
 */

__int64 __fastcall MiDeletePteRange(char *a1, int a2, unsigned __int64 a3, __int64 a4)
{
  char *AnyMultiplexedVm; // rdi
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 NextPageTable; // rax
  _KPROCESS *v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r10
  int v21; // r11d
  __int64 v23; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  char *v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-A8h]
  _QWORD v29[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+80h] [rbp-80h] BYREF
  __int16 v31; // [rsp+84h] [rbp-7Ch]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]

  v26 = a1;
  AnyMultiplexedVm = a1;
  memset(v29, 0, sizeof(v29));
  if ( (AnyMultiplexedVm[192] & 7) == 2 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v26 = AnyMultiplexedVm;
  }
  v7 = MiTbFlushType((__int64)AnyMultiplexedVm);
  v32 = 20LL;
  v31 = 0;
  v8 = 0LL;
  v33 = 0LL;
  v9 = a4 - 8;
  v34 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v30 = v7;
  while ( a3 <= v9 )
  {
    NextPageTable = MiGetNextPageTable(a3, v9, 0LL, 0x11u, 5u, &v27);
    a3 = NextPageTable;
    if ( !NextPageTable )
      break;
    v28 = NextPageTable;
    do
    {
      v12 = *(_QWORD *)a3;
      v13 = a3;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v12) = MiReadPteShadow();
      if ( (v12 & 1) != 0 )
      {
        ++v23;
        MiDeleteValidSystemPte(a3, (__int64)&v25);
      }
      a3 += 8LL;
    }
    while ( a3 <= v9 && (a3 & 0xFFF) != 0 );
    if ( a2 == 3 && (v26[192] & 7) != 0 )
    {
      v14 = v28;
      v15 = 3LL;
      do
      {
        v14 = (__int64)(v14 << 25) >> 16;
        v13 = (__int64)(v13 << 25) >> 16;
        --v15;
      }
      while ( v15 );
      MiReplicatePteChange(v14, v13);
    }
    MiFlushTbList((__int64)&v30, v11);
    MiFreeUnmappedPageTables(v25, v29, 1);
    v25 = 0LL;
    if ( a2 == 3
      || (v26[192] & 7u) >= 2 && a2 == 1
      || (v19 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          (*(_QWORD *)(MI_GET_PFN_FROM_PTE(v19, v16, v17, v18) + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1) )
    {
      v8 = v23;
    }
    else
    {
      v8 = MiDeletePteRange(v20, (unsigned int)(v21 + 1), v19, v19 + 8) + v23;
      v23 = v8;
    }
  }
  return v8;
}

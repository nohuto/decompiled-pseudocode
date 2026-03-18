/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140229C98
 * Callers:
 *     MiDirtypageStateInformationHelper @ 0x14021B9A8 (MiDirtypageStateInformationHelper.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, _KPROCESS *a2, __int64 a3, unsigned __int8 a4, int a5)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 *NextPageTable; // rax
  unsigned __int64 *v9; // rbx
  __int64 PteShadow; // r9
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+44h] [rbp-BCh]
  int i; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+4Ch] [rbp-B4h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]

  v18 = 0;
  v16 = 0;
  v19 = 0LL;
  v7 = a1;
  v20 = 0LL;
  v15 = 1;
  for ( i = 20; v7 <= (unsigned __int64)a2; v7 = (unsigned __int64)(v9 + 1) )
  {
    NextPageTable = (unsigned __int64 *)MiGetNextPageTable(v7, (unsigned __int64)a2, 0LL, a4, 5u, &v13);
    v9 = NextPageTable;
    if ( !NextPageTable )
      break;
    PteShadow = *NextPageTable;
    if ( (unsigned __int64)NextPageTable >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
    }
    v14 = PteShadow;
    if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) != 0 )
    {
      v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v14);
      if ( a5 || v12 >= 0 && (MiGetWsleContents(0LL, (__int64)((_QWORD)v9 << 25) >> 16) & 0xF) != 9 )
      {
        MiWriteValidPteNewPage(v9, v12 & 0xFFFFFFFFFFFFFFBDuLL);
        MiInsertTbFlushEntry(&v15, (__int64)((_QWORD)v9 << 25) >> 16, 1LL, 0);
        MiLockPageAndSetDirty(48 * v11 - 0x58000000000LL, 1);
      }
    }
  }
  MiFlushTbList((__int64)&v15, a2);
}

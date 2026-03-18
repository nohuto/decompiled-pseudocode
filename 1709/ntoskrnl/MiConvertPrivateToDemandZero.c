/*
 * XREFs of MiConvertPrivateToDemandZero @ 0x14011E33C
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 * Callees:
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiPfnCanBecomeDemandZero @ 0x14011E440 (MiPfnCanBecomeDemandZero.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeCheckForZeroPage @ 0x140184CB0 (KeCheckForZeroPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiConvertPrivateToDemandZero(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v10; // [rsp+24h] [rbp-E4h]
  __int64 v11; // [rsp+28h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]

  v6 = 0;
  if ( KeCheckForZeroPage(a2) )
    return 0LL;
  v8 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiPfnCanBecomeDemandZero(a1, 48 * v8 - 0x58000000000LL) )
    return 0LL;
  v11 = 20LL;
  v9 = MiTbFlushType(a1);
  v10 = 4;
  v12 = 0LL;
  v13 = 0LL;
  MiInsertTbFlushEntry(&v9, a3, 1LL, 0);
  LOBYTE(v6) = MiFreeWsleList(a1, (__int64)&v9, 2u) == 0;
  return v6;
}

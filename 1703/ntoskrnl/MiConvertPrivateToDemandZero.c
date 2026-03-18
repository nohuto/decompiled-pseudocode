/*
 * XREFs of MiConvertPrivateToDemandZero @ 0x14007F8B0
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 * Callees:
 *     MiPfnCanBecomeDemandZero @ 0x14007F9B4 (MiPfnCanBecomeDemandZero.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeCheckForZeroPage @ 0x140185210 (KeCheckForZeroPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiConvertPrivateToDemandZero(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v11; // [rsp+24h] [rbp-E4h]
  __int64 v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]

  v6 = 0;
  if ( KeCheckForZeroPage(a2) )
    return 0LL;
  v8 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiPfnCanBecomeDemandZero(a1, 48 * v8 - 0x58000000000LL) )
    return 0LL;
  v12 = 20LL;
  v10 = MiTbFlushType(a1, v9);
  v11 = 4;
  v13 = 0LL;
  v14 = 0LL;
  MiInsertTbFlushEntry(&v10, a3, 1LL, 0LL);
  LOBYTE(v6) = MiFreeWsleList(a1, &v10, 2LL) == 0;
  return v6;
}

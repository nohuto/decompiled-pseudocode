/*
 * XREFs of MiProtectSharedUserPage @ 0x1408574D4
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

void MiProtectSharedUserPage()
{
  _KPROCESS *v0; // rdx
  int v1; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+24h] [rbp-D4h]
  __int64 v3; // [rsp+28h] [rbp-D0h]
  __int64 v4; // [rsp+30h] [rbp-C8h]
  __int64 v5; // [rsp+38h] [rbp-C0h]

  if ( MEMORY[0xFFFFF6FBC0000000] >= 0 || (MEMORY[0xFFFFF6FBC0000001] & 1) != (_BYTE)word_1403885F8 )
  {
    v3 = 20LL;
    v1 = 0;
    v2 = 0;
    v4 = 0LL;
    v5 = 0LL;
    MiWriteValidPteNewPage(
      (unsigned __int64 *)0xFFFFF6FBC0000000LL,
      MEMORY[0xFFFFF6FBC0000000] & 0xFFFFFFFFFFFFFEFFuLL | ((word_1403885F8 & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry(&v1, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)&v1, v0);
  }
}

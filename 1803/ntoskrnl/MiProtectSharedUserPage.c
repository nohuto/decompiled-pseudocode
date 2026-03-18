/*
 * XREFs of MiProtectSharedUserPage @ 0x1408CA06C
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  unsigned __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v5; // [rsp+24h] [rbp-D4h]
  __int64 v6; // [rsp+28h] [rbp-D0h]
  __int64 v7; // [rsp+30h] [rbp-C8h]
  __int64 v8; // [rsp+38h] [rbp-C0h]

  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_1403CB7D0 )
  {
    v6 = 20LL;
    v4 = 0;
    v5 = 0;
    v7 = 0LL;
    v8 = 0LL;
    MiWriteValidPteNewProtection(v1, v0 & 0xFFFFFFFFFFFFFEFFuLL | ((word_1403CB7D0 & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry((__int64)&v4, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)&v4, v2, v3);
  }
}

/*
 * XREFs of MiProtectSharedUserPage @ 0x14081347C
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void MiProtectSharedUserPage()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r9
  _KPROCESS *v2; // rdx
  int v3; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v4; // [rsp+24h] [rbp-D4h]
  __int64 v5; // [rsp+28h] [rbp-D0h]
  __int64 v6; // [rsp+30h] [rbp-C8h]
  __int64 v7; // [rsp+38h] [rbp-C0h]

  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 < 0x8000000000000000uLL || (BYTE1(v0) & 1) != (_BYTE)word_14036C2A8 )
  {
    v5 = 20LL;
    v3 = 0;
    v4 = 0;
    v6 = 0LL;
    v7 = 0LL;
    MiWriteValidPteNewProtection(v1);
    MiInsertTbFlushEntry((__int64)&v3, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)&v3, v2);
  }
}

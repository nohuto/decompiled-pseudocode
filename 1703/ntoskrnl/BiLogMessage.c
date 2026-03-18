/*
 * XREFs of BiLogMessage @ 0x14058C1E4
 * Callers:
 *     BiLogFileOwnerProcess @ 0x140265F0C (BiLogFileOwnerProcess.c)
 *     BcdFlushStore @ 0x140578E8C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x14057B770 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140589778 (BiAddStoreFromFile.c)
 *     BcdOpenStore @ 0x140589990 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     BiGetSystemStorePath @ 0x140589C14 (BiGetSystemStorePath.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     BiLoadHive @ 0x14058CF74 (BiLoadHive.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _vsnwprintf_s @ 0x14016F490 (_vsnwprintf_s.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 BiLogMessage(unsigned int a1, const wchar_t *a2, ...)
{
  wchar_t DstBuf[512]; // [rsp+30h] [rbp-428h] BYREF
  va_list va; // [rsp+470h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( byte_1407AC01E && a1 <= 4 )
  {
    vsnwprintf_s(DstBuf, 0x200uLL, 0xFFFFFFFFFFFFFFFFuLL, a2, va);
    DstBuf[511] = 0;
    MEMORY[0](a1, DstBuf);
  }
  return 0LL;
}

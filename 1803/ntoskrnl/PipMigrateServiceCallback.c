/*
 * XREFs of PipMigrateServiceCallback @ 0x1408DF060
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegCloseKey @ 0x1406342AC (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1406342C4 (_PnpCtxRegOpenKey.c)
 *     PiDevCfgMigrateService @ 0x14072D250 (PiDevCfgMigrateService.c)
 */

__int64 __fastcall PipMigrateServiceCallback(__int64 a1, __int64 a2, const WCHAR *a3)
{
  __int64 v4; // rcx
  void *v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( (int)PnpCtxRegOpenKey(a1, a2, (__int64)a3, 0, 0xF003Fu, (__int64)&v6) >= 0 )
    PiDevCfgMigrateService(v4, a3, v6);
  if ( v6 )
    PnpCtxRegCloseKey(v4, v6);
  return 0LL;
}

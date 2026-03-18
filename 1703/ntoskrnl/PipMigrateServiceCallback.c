/*
 * XREFs of PipMigrateServiceCallback @ 0x140833750
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x1405D1A38 (_PnpCtxRegOpenKey.c)
 *     PiDevCfgMigrateService @ 0x14069AB80 (PiDevCfgMigrateService.c)
 *     _PnpCtxRegCloseKey @ 0x140739BD0 (_PnpCtxRegCloseKey.c)
 */

__int64 __fastcall PipMigrateServiceCallback(__int64 *a1, __int64 a2, const WCHAR *a3)
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

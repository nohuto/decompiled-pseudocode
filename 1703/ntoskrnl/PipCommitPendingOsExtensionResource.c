/*
 * XREFs of PipCommitPendingOsExtensionResource @ 0x140833A90
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateKey @ 0x1404DB470 (_PnpCtxRegCreateKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140593AB8 (PiDevCfgCopyDeviceKeys.c)
 *     _PnpCtxRegOpenKey @ 0x1405D1A38 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegDeleteTree @ 0x1405D4C78 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegCloseKey @ 0x140739BD0 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140739C44 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegEnumKey @ 0x140739C78 (_PnpCtxRegEnumKey.c)
 */

__int64 __fastcall PipCommitPendingOsExtensionResource(const WCHAR *a1, char *a2, void *a3)
{
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v8; // r9
  __int64 v9; // r9
  char *v11; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v12; // [rsp+48h] [rbp-28h] BYREF
  char *v13; // [rsp+50h] [rbp-20h] BYREF
  char *v14; // [rsp+58h] [rbp-18h] BYREF
  void *v15; // [rsp+60h] [rbp-10h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v11);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( !a2 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 **)&PiPnpRtlCtx,
                               (__int64)v11,
                               (__int64)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
                               0,
                               0x2001Fu,
                               (__int64)&v14);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a2 = v14;
    }
    if ( !a3 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 **)&PiPnpRtlCtx,
                               (__int64)a2,
                               (__int64)a1,
                               0,
                               0x20019u,
                               (__int64)&v15);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a3 = v15;
    }
    CachedContextBaseKey = PnpCtxRegCreateKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             v11,
                             L"Control\\OsExtensionDatabase",
                             v8,
                             0x20006u,
                             0LL,
                             (HANDLE *)&v13,
                             0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v13, a1, v9, 0x20006u, 0LL, &v12, 0LL);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v12, 1, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, a2, a1);
          if ( CachedContextBaseKey >= 0 )
          {
            LODWORD(v11) = 0;
            if ( (unsigned int)PnpCtxRegEnumKey(v6, a2, 0, 0LL, (unsigned int *)&v11) == -2147483622 )
              PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, a2, 0LL);
          }
        }
      }
    }
  }
LABEL_14:
  if ( v12 )
    PnpCtxRegCloseKey(v6, v12);
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  if ( v14 )
    PnpCtxRegCloseKey(v6, v14);
  if ( v15 )
    PnpCtxRegCloseKey(v6, v15);
  return (unsigned int)CachedContextBaseKey;
}

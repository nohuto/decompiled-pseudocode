/*
 * XREFs of PiDevCfgMigrateService @ 0x14069AB80
 * Callers:
 *     PipMigrateServiceCallback @ 0x140833750 (PipMigrateServiceCallback.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PiDevCfgMigrateService(__int64 a1, const WCHAR *a2, HANDLE a3)
{
  int CachedContextBaseKey; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+30h]
  HANDLE v13; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v14; // [rsp+98h] [rbp+48h]

  v14 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    Handle = a3;
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 6, &v11);
    if ( CachedContextBaseKey >= 0 )
    {
      v6 = 0LL;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v6 = **(_QWORD **)&PiPnpRtlCtx;
      v7 = SysCtxRegOpenKey(v6, v11, (__int64)a2, 0, 2u, (__int64)&v13);
      CachedContextBaseKey = v7;
      if ( v7 == -1073741772 )
      {
        CachedContextBaseKey = 0;
      }
      else if ( v7 >= 0 )
      {
        v8 = *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx
           ? RegRtlCopyTreeInternal(
               (_DWORD)Handle,
               0,
               (_DWORD)v13,
               0,
               0,
               *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL),
               0)
           : RegRtlCopyTreeInternal((_DWORD)Handle, 0, (_DWORD)v13, 0, 0, 0LL, 0);
        CachedContextBaseKey = v8;
        if ( v8 >= 0 )
        {
          if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
            v9 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
          else
            v9 = 0LL;
          RegRtlDeleteTreeInternal((char *)v14, a2, v9, 0);
        }
      }
    }
  }
  else
  {
    CachedContextBaseKey = -1073741811;
  }
  if ( Handle && Handle != a3 )
    ZwClose(Handle);
  if ( v14 )
    ZwClose(v14);
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)CachedContextBaseKey;
}

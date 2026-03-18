/*
 * XREFs of PiDevCfgMigrateService @ 0x14072D250
 * Callers:
 *     PipMigrateServiceCallback @ 0x1408DF060 (PipMigrateServiceCallback.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x1407F09B8 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PiDevCfgMigrateService(__int64 a1, const WCHAR *a2, void *a3)
{
  void *v3; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  HANDLE v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 6, (__int64)&v16);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      else
        v7 = 0LL;
      v8 = SysCtxRegOpenKey(v7, v16, (__int64)a2, 0, 2u, (__int64)&v15);
      CachedContextBaseKey = v8;
      if ( v8 == -1073741772 )
      {
        CachedContextBaseKey = 0;
      }
      else if ( v8 >= 0 )
      {
        if ( *(_QWORD *)&PiPnpRtlCtx && (v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
          v10 = *(_QWORD *)(v9 + 8);
        else
          v10 = 0LL;
        CachedContextBaseKey = RegRtlCopyTreeInternal((_DWORD)a3, 0, (_DWORD)v15, 0, 0, v10, 0);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( *(_QWORD *)&PiPnpRtlCtx && (v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
            v12 = *(_QWORD *)(v11 + 8);
          else
            v12 = 0LL;
          RegRtlDeleteTreeInternal(0LL, a2, v12, 0);
        }
      }
    }
    v3 = a3;
  }
  else
  {
    CachedContextBaseKey = -1073741811;
  }
  if ( v3 && v3 != a3 )
    ZwClose(v3);
  if ( v15 )
    ZwClose(v15);
  return (unsigned int)CachedContextBaseKey;
}

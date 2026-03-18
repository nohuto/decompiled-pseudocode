/*
 * XREFs of PnpCheckDriverDependencies @ 0x140695738
 * Callers:
 *     PiDevCfgResolveDriverDependencies @ 0x14058EB78 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14069C020 (PiDevCfgResolveDeviceDependencies.c)
 *     PipProcessPendingObjects @ 0x140834030 (PipProcessPendingObjects.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCheckDriverDependencies(wchar_t *Str1, _BYTE *a2, _BYTE *a3)
{
  char v6; // r15
  int CachedContextBaseKey; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  int v21; // [rsp+A0h] [rbp+50h] BYREF
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v6 = 0;
  v22 = 0;
  v21 = 0;
  *a2 = 0;
  if ( a3 )
    *a3 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v19);
  if ( CachedContextBaseKey >= 0 )
  {
    for ( ; *Str1; Str1 += v15 + 1 )
    {
      if ( !wcsicmp(Str1, L"*") )
      {
        if ( a3 )
          *a3 = 1;
        goto LABEL_40;
      }
      if ( !v6 )
      {
        if ( !v18 )
        {
          v8 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v8 = **(_QWORD **)&PiPnpRtlCtx;
          v9 = SysCtxRegOpenKey(v8, v19, (__int64)L"Control\\FirmwareResources", 0, 0x20019u, (__int64)&v18);
          CachedContextBaseKey = v9;
          if ( v9 == -1073741772 || v9 == -1073741444 )
          {
            v6 = 1;
LABEL_39:
            CachedContextBaseKey = 0;
            goto LABEL_40;
          }
          if ( v9 < 0 )
            goto LABEL_33;
        }
        if ( Handle )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        v10 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v10 = **(_QWORD **)&PiPnpRtlCtx;
        v11 = SysCtxRegOpenKey(v10, (__int64)v18, (__int64)Str1, 0, 1u, (__int64)&Handle);
        CachedContextBaseKey = v11;
        if ( v11 == -1073741772 || v11 == -1073741444 )
          goto LABEL_39;
        if ( v11 < 0 )
          goto LABEL_33;
        LODWORD(v20) = 4;
        v12 = RegRtlQueryValue(Handle, L"Phase", &v16, &v21, (unsigned int *)&v20);
        CachedContextBaseKey = v12;
        if ( v12 == -1073741772 )
        {
          CachedContextBaseKey = 0;
          goto LABEL_31;
        }
        if ( v12 == -1073741444 )
          goto LABEL_39;
        if ( v12 < 0 )
          goto LABEL_33;
        if ( v21 != 2 )
          break;
        LODWORD(v20) = 4;
        v13 = RegRtlQueryValue(Handle, L"LastAttemptStatus", &v16, &v22, (unsigned int *)&v20);
        CachedContextBaseKey = v13;
        if ( v13 == -1073741772 )
        {
          CachedContextBaseKey = 0;
          break;
        }
        if ( v13 == -1073741444 )
          goto LABEL_39;
        if ( v13 < 0 )
          goto LABEL_33;
        if ( v22 )
          break;
      }
LABEL_40:
      v15 = -1LL;
      do
        ++v15;
      while ( Str1[v15] );
    }
    if ( CachedContextBaseKey >= 0 )
    {
LABEL_31:
      if ( !*Str1 )
        *a2 = 1;
    }
  }
LABEL_33:
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}

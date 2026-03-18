/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x1405EB420
 * Callers:
 *     PiCMOpenClassKey @ 0x140573DB4 (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14058983C (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 *v5; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(__int64 **)&PiPnpRtlCtx;
  v11 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, a2, &v11);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v5 )
      v8 = *v5;
    else
      v8 = 0LL;
    v9 = SysCtxRegOpenKey(v8, v11, (__int64)&word_1405F52C0, 0, a4, a5);
    if ( v9 == -1073741444 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v9 < 0 )
    {
      return (unsigned int)v9;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}

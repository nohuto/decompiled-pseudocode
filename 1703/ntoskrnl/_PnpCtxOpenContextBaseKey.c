/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x14059478C
 * Callers:
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14059326C (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14069DC50 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
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
    v9 = SysCtxRegOpenKey(v8, v11, (__int64)&cchOriginalDestLength, 0, a4, a5);
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

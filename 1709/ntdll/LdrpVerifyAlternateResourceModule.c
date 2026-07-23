/*
 * XREFs of LdrpVerifyAlternateResourceModule @ 0x18007DAD8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModule(void *a1, void *a2, const wchar_t *a3, __int16 a4)
{
  __int64 v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  _DWORD *RcConfig; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig(a1, 0LL, &RcConfig, 4096, 1) < 0 || (int)LdrResGetRCConfig(a2, 0LL, &v11, 4096, 0) < 0 )
      return 0;
    v7 = v11;
  }
  else
  {
    RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( !RcConfig )
      return 0;
    v7 = LdrpGetRcConfig(a2, v6, 0, 0);
    v11 = v7;
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)(RcConfig + 11) - *(_QWORD *)(v7 + 11);
  if ( !v8 )
    v8 = *(_QWORD *)(RcConfig + 13) - *(_QWORD *)(v7 + 13);
  return !v8 && !wcsicmp(a3, (const wchar_t *)((char *)v7 + (unsigned int)v7[29]));
}

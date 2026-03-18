/*
 * XREFs of LdrpVerifyAlternateResourceModule @ 0x140132090
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DCE94 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1400DD0A8 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     LdrResGetRCConfig @ 0x1405DBD24 (LdrResGetRCConfig.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModule(void *a1, void *a2, const wchar_t *a3, __int16 a4)
{
  __int64 v6; // rdx
  _DWORD *RcConfig; // rbx
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _DWORD *v11; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v12, 4096, 1) < 0
      || (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v11, 4096, 0) < 0 )
    {
      return 0;
    }
    RcConfig = v12;
    v8 = v11;
  }
  else
  {
    RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( !RcConfig )
      return 0;
    v8 = LdrpGetRcConfig(a2, v6, 0, 0);
    if ( !v8 )
      return 0;
  }
  v9 = *(_QWORD *)(RcConfig + 11) - *(_QWORD *)(v8 + 11);
  if ( !v9 )
    v9 = *(_QWORD *)(RcConfig + 13) - *(_QWORD *)(v8 + 13);
  return !v9 && !wcsicmp(a3, (const wchar_t *)((char *)v8 + (unsigned int)v8[29]));
}

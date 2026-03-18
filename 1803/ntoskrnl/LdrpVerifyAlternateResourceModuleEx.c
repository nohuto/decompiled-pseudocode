/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x14016DF18
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14013DC84 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x14013DB50 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     LdrResGetRCConfig @ 0x140610F00 (LdrResGetRCConfig.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, __int16 a5)
{
  __int64 v7; // rdx
  __int64 RcConfig; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  if ( !a4 )
    return 0;
  if ( (a5 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v13, 4096, 1) < 0
      || (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v12, 4096, 0) < 0 )
    {
      return 0;
    }
    RcConfig = v13;
    v9 = v12;
  }
  else
  {
    RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( !RcConfig )
      return 0;
    v9 = LdrpGetRcConfig(a2, v7, 0, 0);
    if ( !v9 )
      return 0;
  }
  v10 = *(_QWORD *)(RcConfig + 44) - *(_QWORD *)(v9 + 44);
  if ( !v10 )
    v10 = *(_QWORD *)(RcConfig + 52) - *(_QWORD *)(v9 + 52);
  return !v10 && !wcsicmp(a4, (const wchar_t *)(v9 + *(unsigned int *)(v9 + 116)));
}

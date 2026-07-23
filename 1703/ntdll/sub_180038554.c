/*
 * XREFs of sub_180038554 @ 0x180038554
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     LdrResGetRCConfig @ 0x18005C640 (LdrResGetRCConfig.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 */

bool __fastcall sub_180038554(void *a1, void *a2, const wchar_t *a3, __int16 a4)
{
  __int64 v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  _DWORD *v10; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v10, 4096, 1) < 0
      || (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v11, 4096, 0) < 0 )
    {
      return 0;
    }
    v7 = v11;
  }
  else
  {
    v10 = sub_18003660C(a1, (__int64)a2, 0, 1);
    if ( !v10 )
      return 0;
    v7 = sub_18003660C(a2, v6, 0, 0);
    v11 = v7;
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)(v10 + 11) - *(_QWORD *)(v7 + 11);
  if ( !v8 )
    v8 = *(_QWORD *)(v10 + 13) - *(_QWORD *)(v7 + 13);
  return !v8 && !wcsicmp(a3, (const wchar_t *)((char *)v7 + (unsigned int)v7[29]));
}

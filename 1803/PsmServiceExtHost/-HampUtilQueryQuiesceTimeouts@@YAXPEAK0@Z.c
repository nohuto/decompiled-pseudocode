/*
 * XREFs of ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x1800087E4
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800108C4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180008890 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 */

void __fastcall HampUtilQueryQuiesceTimeouts(unsigned int *a1, unsigned int *a2)
{
  LSTATUS v4; // eax
  bool v5; // sf
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+38h] BYREF

  hKey = 0LL;
  v9 = 5000;
  v10 = 600000;
  v4 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         1u,
         &hKey);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( v5
    || (v8 = 4, HampSystemQueryValue(hKey, L"QuiesceDurationMs", &v9, &v8) < 0)
    || v8 != 4
    || (v8 = 4, HampSystemQueryValue(hKey, L"EeDurationMs", &v10, &v8) < 0)
    || v8 != 4
    || (v6 = v9, v7 = v10, v9 > v10)
    || !v10 )
  {
    v6 = 5000;
    v7 = 600000;
    v9 = 5000;
    v10 = 600000;
  }
  *a1 = v6;
  if ( a2 )
    *a2 = v7;
  if ( hKey )
    RegCloseKey(hKey);
}

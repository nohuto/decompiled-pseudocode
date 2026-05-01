/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z @ 0x180008208
 * Callers:
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800070EC (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEAU_RM_PSM_KEY@@PEAT_RM_SID@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180008540 (-HampUtilQueryRegistryTerminateReason@@YAJPEAU_RM_PSM_KEY@@PEAT_RM_SID@@PEAW4_HAM_TERMINATE_REAS.c)
 * Callees:
 *     ?HampUtilCreateUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z @ 0x1800082A4 (-HampUtilCreateUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z.c)
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x1800083D0 (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(union _RM_SID *a1, unsigned int a2, HKEY *a3)
{
  int v5; // edi
  HKEY v6; // rcx
  HKEY hKey; // [rsp+30h] [rbp-18h] BYREF
  HKEY v9; // [rsp+68h] [rbp+20h] BYREF

  hKey = 0LL;
  v9 = 0LL;
  v5 = HampUtilCreateUserRegKey(a1, a2, &hKey);
  if ( v5 < 0 )
  {
    v6 = v9;
  }
  else
  {
    HampSystemCreateKey(hKey, L"Volatile", 1u, a2, &v9);
    v6 = 0LL;
    *a3 = v9;
    v5 = 0;
    v9 = 0LL;
  }
  if ( v6 )
    RegCloseKey(v6);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}

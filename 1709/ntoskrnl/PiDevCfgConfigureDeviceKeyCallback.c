/*
 * XREFs of PiDevCfgConfigureDeviceKeyCallback @ 0x140589B60
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140589BE4 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeyCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  if ( *(_DWORD *)(a3 + 16) == 16 && !wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKey(a4, 1, 0LL, a6);
  else
    return PiDevCfgCopyDeviceKeys(a4, a5, 1LL, a6);
}

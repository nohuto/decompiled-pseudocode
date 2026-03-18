/*
 * XREFs of PiDevCfgConfigureDeviceKeyCallback @ 0x1405DB0F0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1405D80DC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeyCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        void *a5,
        __int64 a6)
{
  if ( *(_DWORD *)(a3 + 16) == 16 && !wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKey(a4, a5, *(_QWORD *)(a2 + 8), 1u, 1, 0LL, a6);
  else
    return PiDevCfgCopyDeviceKeys(a4, a5, 1, a6);
}

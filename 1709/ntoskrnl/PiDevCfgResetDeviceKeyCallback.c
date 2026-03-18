/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x1406C7750
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140589BE4 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5)
{
  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKeys(a4, a5, 0, 0LL);
  else
    return PiDevCfgCopyDeviceKey(a4, a5, *(_QWORD *)(a2 + 8), 1u, 0, 0LL, 0LL);
}

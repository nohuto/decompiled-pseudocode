/*
 * XREFs of ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00371A0
 * Callers:
 *     FxInitialize @ 0x1C00158D0 (FxInitialize.c)
 *     FxRegistrySettingsInitialize @ 0x1C0015F60 (FxRegistrySettingsInitialize.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C00287C0 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0036FD8 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C0080808 (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryTrackPower @ 0x1C00809F8 (FxVerifierQueryTrackPower.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C0099BC4 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 */

__int64 __fastcall FxRegKey::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS v4; // edx
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  v4 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147483643) && *(_DWORD *)&buffer[4] != 4 )
    v4 = -1073741788;
  if ( v4 >= 0 )
    *Value = *(_DWORD *)&buffer[12];
  return (unsigned int)v4;
}

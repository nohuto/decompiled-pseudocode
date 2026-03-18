/*
 * XREFs of ACPIDockIntfUpdateDeparture @ 0x1C0072D00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 */

__int64 __fastcall ACPIDockIntfUpdateDeparture(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  char v6; // [rsp+60h] [rbp+8h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension;
  if ( *(char *)(DeviceExtension + 8) < 0 )
    return 3221225486LL;
  if ( *(_DWORD *)(DeviceExtension + 192) != 3 )
    return 3221225488LL;
  v4 = *(_QWORD *)(DeviceExtension + 184);
  if ( *(_DWORD *)(DeviceExtension + 200) == 1 )
  {
    return 0;
  }
  else
  {
    KdDisableDebugger();
    v5 = ACPIGet(v4, 0x4B43445Fu, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v6, 0LL);
    KdEnableDebugger();
    *(_DWORD *)(v2 + 200) = 1;
  }
  return v5;
}

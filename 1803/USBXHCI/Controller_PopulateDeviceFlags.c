/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C00545F4
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C000C9B0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008BD4 (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_dx @ 0x1C000E220 (WPP_RECORDER_SF_dx.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00546A0 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateInternalDeviceFlags @ 0x1C0054EE4 (Controller_PopulateInternalDeviceFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C00550D4 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  v4 = (_QWORD *)(a1 + 272);
  v5 = 0;
  if ( Controller_IsSecureDevice(a1) )
    *v4 |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 529) )
    *(_QWORD *)(a1 + 280) &= ~1uLL;
  Controller_PopulateInternalDeviceFlags();
  do
  {
    result = WPP_RECORDER_SF_dx(*(_QWORD *)(a1 + 72), 4u, v6, 0xA3u, v8);
    ++v5;
    ++v4;
  }
  while ( v5 < 2 );
  return result;
}

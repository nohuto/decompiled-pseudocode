/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C0057684
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0014620 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00118AC (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_dx @ 0x1C0015580 (WPP_RECORDER_SF_dx.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C0057734 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateInternalDeviceFlags @ 0x1C0057F70 (Controller_PopulateInternalDeviceFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C0058148 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  v4 = 0;
  if ( Controller_IsSecureDevice(a1) )
    *(_QWORD *)(a1 + 272) |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 528) )
    *(_QWORD *)(a1 + 280) &= ~1uLL;
  Controller_PopulateInternalDeviceFlags();
  v6 = a1 + 272;
  do
  {
    result = WPP_RECORDER_SF_dx(*(_QWORD *)(a1 + 72), 4u, v5, 0xA2u, v8);
    ++v4;
    v6 += 8LL;
  }
  while ( v4 < 2 );
  return result;
}

/*
 * XREFs of StorPortGetDeviceBase @ 0x1C0030660
 * Callers:
 *     StorPortGetDeviceBaseVrfy @ 0x1C006A210 (StorPortGetDeviceBaseVrfy.c)
 * Callees:
 *     WPP_SF_xs @ 0x1C0033CBC (WPP_SF_xs.c)
 *     RaidTranslateResourceListAddress @ 0x1C0037A3C (RaidTranslateResourceListAddress.c)
 *     RaidAllocateAddressMapping @ 0x1C0039528 (RaidAllocateAddressMapping.c)
 */

__int64 __fastcall StorPortGetDeviceBase(__int64 a1, int a2, int a3, int a4, unsigned int a5, char a6)
{
  __int64 v8; // rbp
  int v9; // r8d
  const char *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // [rsp+60h] [rbp+8h]

  v8 = **(_QWORD **)(a1 - 16);
  if ( (int)RaidTranslateResourceListAddress((int)v8 + 280, a2, a3, a4, a5) < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v10 = "Io";
      if ( !a6 )
        v10 = "Memory";
      WPP_SF_xs(WPP_GLOBAL_Control->AttachedDevice, (unsigned int)"Memory", v9, a4, (__int64)v10);
    }
    return 0LL;
  }
  if ( a6 )
    return v14;
  v12 = MmMapIoSpaceEx(v14, a5, 516LL);
  v13 = v12;
  if ( v12 && (int)RaidAllocateAddressMapping((int)v8 + 760, a4, v12, a5, a3, *(_QWORD *)(v8 + 8)) < 0 )
    return 0LL;
  return v13;
}

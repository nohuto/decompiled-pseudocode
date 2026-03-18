/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1C007C120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00297F4 (ACPIQueryGedDeviceInterface.c)
 */

__int64 __fastcall ACPIFilterIrpStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10
  char v11; // r11
  int v12; // eax
  int v13; // edx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (_QWORD *)DeviceExtension;
  if ( DeviceExtension )
  {
    v6 = 0x200000000000LL;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v6 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v6, *(_BYTE *)(v2 + 1));
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x17u,
    (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
    a2,
    IrpText,
    *(_DWORD *)(a2 + 48),
    v11,
    v9,
    v10);
  if ( (v7[119] & 0x4000000000LL) != 0 )
  {
    v12 = ACPIQueryGedDeviceInterface(v7);
    if ( v12 < 0 )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        8,
        24,
        (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
        v12);
    }
  }
  result = ACPIInitStartDevice(
             a1,
             v2,
             (void (__fastcall *)(__int64, __int64, _QWORD))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}

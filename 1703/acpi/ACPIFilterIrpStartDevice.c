/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1C008BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C004FE58 (ACPIQueryGedDeviceInterface.c)
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
  __int64 result; // rax
  int v13; // eax
  int v14; // edx

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
    (__int64)&WPP_0a6d19c5c580341afc0214e049fe0a3d_Traceguids,
    a2,
    IrpText,
    *(_DWORD *)(a2 + 48),
    v11,
    v9,
    v10);
  if ( (v7[119] & 0x4000000000LL) != 0 )
  {
    v13 = ACPIQueryGedDeviceInterface(v7);
    if ( v13 < 0 )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        8,
        24,
        (__int64)&WPP_0a6d19c5c580341afc0214e049fe0a3d_Traceguids,
        v13);
    }
  }
  result = ACPIInitStartDevice(
             a1,
             v2,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}

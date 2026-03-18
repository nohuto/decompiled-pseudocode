/*
 * XREFs of ACPIBusAndFilterIrpSetLock @ 0x1C0076350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpSetLock(ULONG_PTR a1, __int64 a2)
{
  char v2; // bl
  unsigned int v3; // edi
  unsigned __int8 v4; // si
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char *IrpText; // rax
  char v8; // r8
  const char *v9; // r10
  const char *v10; // r11

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 48);
  v4 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension )
    v6 = *(_QWORD *)(DeviceExtension + 8);
  IrpText = ACPIDebugGetIrpText(v6, v4);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x18u,
    (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
    v2,
    IrpText,
    v3,
    v8,
    v9,
    v10);
  return v3;
}

/*
 * XREFs of ACPIFilterIrpQueryIdCompletion @ 0x1C007BA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C002A604 (ACPIInternalSetFlags.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C003F524 (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C008B2E4 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIFilterIrpQueryIdCompletion(ULONG_PTR a1, __int64 a2)
{
  char v2; // di
  char v4; // r15
  unsigned __int8 v5; // r12
  __int64 v6; // rcx
  __int64 DeviceExtension; // rbx
  _WORD *v8; // rsi
  unsigned int v9; // ebp
  int v10; // eax
  int FailDeviceResetOnOpenHandles; // eax
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10
  int v16; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension )
  {
    v8 = *(_WORD **)(a2 + 56);
    v9 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( (AcpiOverrideAttributes & 0x100000) != 0 && (*(_DWORD *)(DeviceExtension + 952) & 0x800000) == 0 && v9 - 1 <= 1 )
    {
      if ( v8 )
      {
        v10 = ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(v9, *(_QWORD *)(a2 + 56), &v16);
        v4 = v10;
        if ( v10 >= 0 && v16 == 2 )
          ACPIInternalSetFlags((void *)(DeviceExtension + 952), 0x800000uLL);
      }
    }
    if ( (AcpiOverrideAttributes & 0x200000) != 0
      && (*(_DWORD *)(DeviceExtension + 952) & 0x40000000) == 0
      && v9 - 1 <= 1 )
    {
      if ( v8 )
      {
        FailDeviceResetOnOpenHandles = ACPIEmQueryFailDeviceResetOnOpenHandles(v9, v8);
        v4 = FailDeviceResetOnOpenHandles;
        if ( FailDeviceResetOnOpenHandles >= 0 && v16 == 2 )
          ACPIInternalSetFlags((void *)(DeviceExtension + 952), 0x40000000uLL);
      }
    }
  }
  if ( DeviceExtension )
  {
    v6 = 0x200000000000LL;
    v2 = DeviceExtension;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v6 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v6, v5);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x14u,
    (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
    a2,
    IrpText,
    v4,
    v2,
    v13,
    v14);
  return 0LL;
}

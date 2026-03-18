/*
 * XREFs of ACPIDockIrpQueryCapabilities @ 0x1C0073030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIDockIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG_PTR v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 MinorFunction; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 v9; // rax
  const char *v10; // rdi
  const char *v11; // rcx
  unsigned int v12; // esi
  _QWORD *v13; // rsi
  int DeviceCapabilities; // eax
  __int64 SecurityQos_low; // rcx
  const char *v16; // rdi
  __int64 v17; // rax
  const char *v18; // rdx
  const char *v19; // rcx
  char *IrpText; // rax
  const char *v21; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  v6 = *(_QWORD *)(DeviceExtension + 184);
  MinorFunction = CurrentStackLocation->MinorFunction;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( v6 )
  {
    v13 = *(_QWORD **)(v6 + 712);
    HIDWORD(SecurityContext->SecurityQos) |= 0x1F0u;
    if ( AMLIIsNamedChildPresent(v13, 810173791) )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( AMLIIsNamedChildPresent(v13, 826951007)
      || AMLIIsNamedChildPresent(v13, 843728223)
      || AMLIIsNamedChildPresent(v13, 860505439)
      || AMLIIsNamedChildPresent(v13, 877282655) )
    {
      HIDWORD(SecurityContext->SecurityQos) |= 0x10000u;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v5);
    LODWORD(SecurityContext[1].SecurityQos) = 4;
    v12 = DeviceCapabilities;
    HIDWORD(SecurityContext[1].SecurityQos) = 4;
    LODWORD(SecurityContext[1].AccessState) = 4;
    *(_OWORD *)(v5 + 460) = *(_OWORD *)&SecurityContext->SecurityQos;
    *(_QWORD *)(v5 + 476) = *(_QWORD *)&SecurityContext->DesiredAccess;
    SecurityQos_low = LODWORD(SecurityContext[1].SecurityQos);
    v16 = byte_1C005B1F0;
    *(_DWORD *)(v5 + 484) = SecurityQos_low;
    if ( DeviceCapabilities < 0 )
    {
      v17 = *(_QWORD *)(v5 + 8);
      v18 = byte_1C005B1F0;
      v19 = byte_1C005B1F0;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v18 = *(const char **)(v5 + 560);
        if ( (v17 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(v5 + 568);
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xDu,
        (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
        v12,
        v5,
        v18,
        v19);
    }
    if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
      v16 = *(const char **)(v5 + 560);
    IrpText = ACPIDebugGetIrpText(SecurityQos_low, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xEu,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      IrpText,
      v12,
      v5,
      v16,
      v21);
  }
  else
  {
    v9 = *(_QWORD *)(DeviceExtension + 8);
    v10 = byte_1C005B1F0;
    v11 = byte_1C005B1F0;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v5 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v5 + 568);
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0xCu,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      v5,
      v10,
      v11);
    v12 = -1073741823;
  }
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return v12;
}

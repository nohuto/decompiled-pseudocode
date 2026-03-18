/*
 * XREFs of ACPIRootIrpQueryBusRelations @ 0x1C008C928
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0083480 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C008AE90 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDetectPdoDevices @ 0x1C0008074 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C00132C4 (ACPIDetectDockDevices.c)
 *     AcpiCheckExternalConnection @ 0x1C008C8D4 (AcpiCheckExternalConnection.c)
 */

__int64 __fastcall ACPIRootIrpQueryBusRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // rbx
  unsigned __int8 v8; // r14
  int v9; // edi
  char *v11; // rax
  const char *v12; // r8
  const char *v13; // r10
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10
  char *v17; // rax
  const char *v18; // r8
  const char *v19; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = DeviceExtension;
  v8 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    AcpiCheckExternalConnection();
    v9 = ACPIDetectPdoDevices(a1, a3);
    if ( v9 < 0 )
    {
      IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v7 + 8), v8);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xDu,
        (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
        a2,
        IrpText,
        v9,
        v7,
        v15,
        v16);
    }
    else
    {
      v9 = ACPIDetectDockDevices(v7, a3);
      if ( v9 < 0 )
      {
        v17 = ACPIDebugGetIrpText(*(_QWORD *)(v7 + 8), v8);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x12u,
          0xEu,
          (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
          a2,
          v17,
          v9,
          v7,
          v18,
          v19);
      }
    }
    return (unsigned int)v9;
  }
  else
  {
    v11 = ACPIDebugGetIrpText(*(_QWORD *)(DeviceExtension + 8), *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL));
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xCu,
      (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
      a2,
      v11,
      0,
      v7,
      v12,
      v13);
    return 3221225485LL;
  }
}

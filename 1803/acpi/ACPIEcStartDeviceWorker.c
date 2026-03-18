/*
 * XREFs of ACPIEcStartDeviceWorker @ 0x1C00221F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcConnectInterrupt @ 0x1C0079FEC (ACPIEcConnectInterrupt.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A194 (ACPIEcGetUid.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C007A234 (ACPIEcInstallOpRegionHandler.c)
 *     ACPIEcGetResources @ 0x1C007A2AC (ACPIEcGetResources.c)
 */

__int64 __fastcall ACPIEcStartDeviceWorker(__int64 a1)
{
  int Resources; // edi
  __int64 DeviceExtension; // rax
  IRP *v4; // rbp
  _QWORD *v5; // rsi
  _BYTE *v6; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MinorFunction; // r14
  int GpeVector; // eax
  __int64 v10; // rax
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax

  Resources = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = (_QWORD *)DeviceExtension;
  v6 = *(_BYTE **)(DeviceExtension + 184);
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( v6 != (_BYTE *)gECDTContext )
  {
    Resources = ACPIEcGetResources(
                  CurrentStackLocation->Parameters.WMI.ProviderId,
                  CurrentStackLocation->Parameters.QueryDirectory.FileName,
                  *(_QWORD *)(DeviceExtension + 184));
    if ( Resources >= 0 )
    {
      GpeVector = ACPIEcGetGpeVector(v6);
      Resources = GpeVector;
      if ( GpeVector < 0 )
      {
        if ( GpeVector != -1073741772 || !*((_BYTE *)AcpiInformation + 133) || !v6[804] )
          goto LABEL_11;
        v6[805] = 1;
      }
      ACPIEcGetUid(v6);
      Resources = ACPIEcConnectInterrupt(v6);
      if ( Resources >= 0 )
      {
        Resources = ACPIEcInstallOpRegionHandler(v6);
        if ( Resources >= 0 )
          v6[120] = 1;
      }
    }
  }
LABEL_11:
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Resources;
  IofCompleteRequest(v4, 0);
  v10 = v5[1];
  v11 = (const char *)&unk_1C005B1F0;
  v12 = (const char *)&unk_1C005B1F0;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = (const char *)v5[70];
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = (const char *)v5[71];
  }
  v13 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v13 = 26LL;
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0xBu,
           (__int64)&WPP_b957356af329370ae22505bc83b99e2e_Traceguids,
           (char)v4,
           ACPIDispatchPnpTableNames[v13],
           Resources,
           (char)v5,
           v11,
           v12);
}

/*
 * XREFs of ACPIInitializeAMLI @ 0x1C009A2F4
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ACPIInitGlobalHeapSize @ 0x1C007D19C (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 *     OSInitializeCallbacks @ 0x1C0098E48 (OSInitializeCallbacks.c)
 *     OSReadAcpiConfigurationData @ 0x1C009B124 (OSReadAcpiConfigurationData.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // eax
  int v2; // edx
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v8) = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, (unsigned int *)&v8) < 0 )
    gAMLIInitFlags = 0;
  LODWORD(v8) = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, (unsigned int *)&v8) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v1 = OSReadAcpiConfigurationData(&v8);
  v3 = v1;
  if ( v1 >= 0 )
  {
    E820Info = (PVOID)(v8 + 44);
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v4, v0, v5, v6);
  }
  else
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      36,
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
      v1);
  }
  return v3;
}

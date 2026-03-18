/*
 * XREFs of ACPIInitializeAMLI @ 0x1C00AD404
 * Callers:
 *     ACPIInitialize @ 0x1C00AF648 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     ACPIInitGlobalHeapSize @ 0x1C008E034 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C008E0E8 (OSReadRegValue.c)
 *     OSInitializeCallbacks @ 0x1C00AC4C0 (OSInitializeCallbacks.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00ADED8 (OSReadAcpiConfigurationData.c)
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
  if ( v1 < 0 )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      36,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v1);
  }
  else
  {
    E820Info = v8 + 44;
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v4, v0, v5, v6);
  }
  return v3;
}

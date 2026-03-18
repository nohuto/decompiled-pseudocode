/*
 * XREFs of ACPIInitializeAMLI @ 0x1C00AB7A8
 * Callers:
 *     ACPIInitialize @ 0x1C00AA7F0 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0089EA8 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C0089F5C (OSReadRegValue.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AB0E4 (OSReadAcpiConfigurationData.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 *     OSInitializeCallbacks @ 0x1C00ACC5C (OSInitializeCallbacks.c)
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
      (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
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

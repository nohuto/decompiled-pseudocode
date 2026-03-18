/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1401476F8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1405D66A4 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1405D6C60 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildIndirectString @ 0x1405D8850 (PiDevCfgBuildIndirectString.c)
 *     CmSetAcpiHwProfile @ 0x14062CD80 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14062DB6C (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14073DAB4 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     PopDiagTraceIdleWakeSourceSummary @ 0x140767F08 (PopDiagTraceIdleWakeSourceSummary.c)
 *     CmpCreateControlSet @ 0x1408AE63C (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x1408AE8A8 (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x1408DD524 (CmpAddAliasEntry.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x14014776C (RtlUnicodeStringValidateDestWorker.c)
 *     _vsnwprintf @ 0x140187B70 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  int v3; // ebx
  int v4; // eax
  size_t v6; // [rsp+20h] [rbp-38h]
  ULONG v7; // [rsp+28h] [rbp-30h]
  size_t Count; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-20h] BYREF
  __int64 Args; // [rsp+70h] [rbp+18h] BYREF
  size_t *v12; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF
  va_list Argsa; // [rsp+70h] [rbp+18h]

  va_start(va1, pszFormat);
  va_start(Argsa, pszFormat);
  Args = va_arg(va1, _QWORD);
  v12 = va_arg(va1, size_t *);
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &Dest, &Count, v12, v6, v7);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, pszFormat, Argsa);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return v3;
}

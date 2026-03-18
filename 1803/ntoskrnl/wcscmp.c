/*
 * XREFs of wcscmp @ 0x14018A5F0
 * Callers:
 *     PiDqDispatch @ 0x14050B510 (PiDqDispatch.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmValidateDeviceContainerName @ 0x140586F0C (_CmValidateDeviceContainerName.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405D5428 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1405D5544 (_CmGetDeviceContainerIdFromBase.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x140838AE0 (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *Str2;
  v3 = *Str1 - v2;
  if ( !v3 )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      v3 = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}

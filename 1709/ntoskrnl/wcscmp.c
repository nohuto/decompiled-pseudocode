/*
 * XREFs of wcscmp @ 0x140160450
 * Callers:
 *     PiDqDispatch @ 0x14054C640 (PiDqDispatch.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14054E090 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140550CA0 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x140551048 (_CmValidateDeviceContainerName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405C60D8 (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x1407CBAE0 (HdlspAddLogEntry.c)
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

/*
 * XREFs of wcscmp @ 0x14016BB70
 * Callers:
 *     PiDqDispatch @ 0x1404B9020 (PiDqDispatch.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404DA754 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404DF81C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x1404E0500 (_CmValidateDeviceContainerName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcContainerRequiresConfiguration @ 0x140594944 (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x14078E008 (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // r8d
  int result; // eax
  signed __int64 v4; // rcx

  v2 = *Str2;
  result = *Str1 - v2;
  if ( !result )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      result = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !result );
  }
  if ( result < 0 )
    return -1;
  if ( result > 0 )
    return 1;
  return result;
}

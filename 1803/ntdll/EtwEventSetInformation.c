/*
 * XREFs of EtwEventSetInformation @ 0x180072750
 * Callers:
 *     sub_1800726B8 @ 0x1800726B8 (sub_1800726B8.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  __int32 v4; // edx

  if ( InformationClass )
  {
    v4 = InformationClass - 2;
    if ( !v4 )
    {
      if ( EventInformation && InformationLength - 3 <= 0xFFFC )
        return sub_18007278C(RegHandle, EventInformation, (unsigned __int16)InformationLength);
      return 87;
    }
    if ( v4 != 1 )
      return 50;
    if ( EventInformation && InformationLength == 1 )
      return sub_1801068A8(RegHandle, EventInformation);
    return 87;
  }
  if ( InformationLength )
    return 87;
  return sub_1800728E0(RegHandle);
}

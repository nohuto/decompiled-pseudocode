/*
 * XREFs of EtwEventSetInformation @ 0x180019E30
 * Callers:
 *     sub_180086558 @ 0x180086558 (sub_180086558.c)
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
        return sub_180019E6C(RegHandle, EventInformation, (unsigned __int16)InformationLength);
      return 87;
    }
    if ( v4 != 1 )
      return 50;
    if ( EventInformation && InformationLength == 1 )
      return sub_180104668(RegHandle, EventInformation);
    return 87;
  }
  if ( InformationLength )
    return 87;
  return sub_18008354C(RegHandle);
}

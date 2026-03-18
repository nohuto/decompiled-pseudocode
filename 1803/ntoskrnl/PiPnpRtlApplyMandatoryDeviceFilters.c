/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x140501658
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405017B8 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x140583250 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140586510 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 * Callees:
 *     PiPnpRtlIsDeviceValidForSession @ 0x1405016C8 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1405019EC (PiPnpRtlIsDeviceEnumerableForUser.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(int a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, a4, (BOOLEAN)a5);
  if ( (int)result < 0 )
    goto LABEL_5;
  if ( *a5 )
    result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, a5);
  if ( (int)result < 0 )
LABEL_5:
    *a5 = 0;
  return result;
}

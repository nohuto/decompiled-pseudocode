/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x140489D6C
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x14045B380 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140489ECC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1404E6AE8 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 * Callees:
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x140489C64 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140489DDC (PiPnpRtlIsDeviceValidForSession.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(
        int a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, (int)a4, (BOOLEAN)a5);
  if ( (int)result < 0 )
    goto LABEL_5;
  if ( *a5 )
    result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, (__int64)a5);
  if ( (int)result < 0 )
LABEL_5:
    *a5 = 0;
  return result;
}

/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x14006DC90
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x140503E94 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14050421C (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x140505C80 (_CmValidateDeviceName.c)
 *     _PnpParseIndirectResourceString @ 0x140552CF4 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14056D80C (_PnpParseIndirectInfString.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _RegRtlCreateTreeTransacted @ 0x140587028 (_RegRtlCreateTreeTransacted.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405CC920 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405DB02C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x1405E70CC (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1407F0EF8 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x1407F3E74 (DrvDbValidateDeviceIdName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz )
  {
    v3 = cchMax;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( v3 )
        *pcchLength = cchMax - v3;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}

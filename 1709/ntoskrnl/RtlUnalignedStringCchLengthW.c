/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x1400DEC00
 * Callers:
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140459DBC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpGetGenericStoreProperty @ 0x14051F7DC (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _PnpSetPropertyWorker @ 0x14053034C (_PnpSetPropertyWorker.c)
 *     _RegRtlCreateTreeTransacted @ 0x140533308 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpParseIndirectResourceString @ 0x140566914 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14057D4DC (_PnpParseIndirectInfString.c)
 *     _PnpDeletePropertyWorker @ 0x14059B510 (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 *     _RegRtlDeletePathInternal @ 0x140786114 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x1407876F4 (DrvDbValidateDeviceIdName.c)
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

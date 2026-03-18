/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C0005220
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0004F24 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0023924 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C0023C60 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0024328 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00244A4 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0024790 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C004EE94 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004EF84 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C004F320 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}

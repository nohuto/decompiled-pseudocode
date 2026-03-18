/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C000E298
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000DE4C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0026040 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C002637C (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0026A44 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0026BC0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0026EAC (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C004E888 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004E978 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C004ED10 (ACPIDeviceIdMutiStringMatchCallback.c)
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

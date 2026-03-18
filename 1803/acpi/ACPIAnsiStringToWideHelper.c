/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C00022AC
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C00020B0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025548 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00259C0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0025E58 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00260AC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C00263C8 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C00264B8 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetProcessorIDWide @ 0x1C0026634 (ACPIGetProcessorIDWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0027F10 (ACPIDeviceIdMutiStringMatchCallback.c)
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

/*
 * XREFs of IovDetachDevice @ 0x140811FAC
 * Callers:
 *     IoDetachDevice @ 0x14009F4B0 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x14082156C (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}

/*
 * XREFs of IovDetachDevice @ 0x140763314
 * Callers:
 *     IoDetachDevice @ 0x140005810 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140772608 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}

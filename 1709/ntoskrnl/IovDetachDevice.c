/*
 * XREFs of IovDetachDevice @ 0x1407A4FE0
 * Callers:
 *     IoDetachDevice @ 0x1400FA6E0 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x1407B43B8 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}

/*
 * XREFs of ACPIInterruptInitialize @ 0x1C0090DB4
 * Callers:
 *     ACPIInitialize @ 0x1C00AF648 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     OSInterruptVector @ 0x1C00AF5A8 (OSInterruptVector.c)
 */

__int64 ACPIInterruptInitialize()
{
  int v0; // edx
  int v1; // ebx

  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    return 0;
  }
  else
  {
    v1 = OSInterruptVector();
    if ( v1 < 0 )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        22,
        39,
        (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids);
    }
  }
  return (unsigned int)v1;
}

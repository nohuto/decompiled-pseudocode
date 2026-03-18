/*
 * XREFs of ACPIInterruptInitialize @ 0x1C007D708
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     OSInterruptVector @ 0x1C009902C (OSInterruptVector.c)
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
        (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids);
    }
  }
  return (unsigned int)v1;
}

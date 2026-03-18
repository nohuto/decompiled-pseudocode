/*
 * XREFs of ACPIInterruptInitialize @ 0x1C0083F70
 * Callers:
 *     ACPIInitialize @ 0x1C00AA7F0 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     OSInterruptVector @ 0x1C00AAB98 (OSInterruptVector.c)
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
        (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids);
    }
  }
  return (unsigned int)v1;
}

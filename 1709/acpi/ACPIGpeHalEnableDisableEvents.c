/*
 * XREFs of ACPIGpeHalEnableDisableEvents @ 0x1C004EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x1C0013CA4 (ACPIReadGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 *     READ_PM1_STATUS @ 0x1C0021B84 (READ_PM1_STATUS.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

void *__fastcall ACPIGpeHalEnableDisableEvents(char a1)
{
  void *result; // rax
  __int64 v2; // rbx
  PVOID v4; // rcx

  result = AcpiInformation;
  v2 = 0LL;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( a1 )
    {
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        do
        {
          *((_BYTE *)GpeSavedWakeStatus + v2) = ACPIReadGpeStatusRegister(v2);
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *((unsigned __int16 *)AcpiInformation + 51) );
      }
      *((_WORD *)AcpiInformation + 58) = READ_PM1_STATUS();
      AcpiPowerSavedGpeBitsValid = 1;
    }
    else
    {
      v4 = GpeSavedWakeMask;
      *((_WORD *)AcpiInformation + 57) = 0;
      memset(v4, 0, *((unsigned __int16 *)AcpiInformation + 51));
    }
    return ACPIGpeEnableDisableEvents(a1);
  }
  return result;
}

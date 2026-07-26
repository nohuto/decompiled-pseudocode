/*
 * XREFs of ndisStartNsiProvider @ 0x1C00A8B1C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 */

__int64 ndisStartNsiProvider()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_(0x1Du, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &ndisNsiInterfaceProviderHandle);
  v1 = v0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_d(0x1Eu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v0);
  return v1;
}

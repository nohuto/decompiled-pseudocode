/*
 * XREFs of ndisStartNsiProvider @ 0x1C00C983C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

__int64 ndisStartNsiProvider()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_(0x1Du, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &ndisNsiInterfaceProviderHandle);
  v1 = v0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_d(0x1Eu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v0);
  return v1;
}

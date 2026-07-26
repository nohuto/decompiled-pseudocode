/*
 * XREFs of ndisStartNsiProvider @ 0x1C00C8AAC
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00213FC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

__int64 ndisStartNsiProvider()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx

  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_(0x1Du, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &ndisNsiInterfaceProviderHandle);
  v1 = v0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_d(0x1Eu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v0);
  return v1;
}

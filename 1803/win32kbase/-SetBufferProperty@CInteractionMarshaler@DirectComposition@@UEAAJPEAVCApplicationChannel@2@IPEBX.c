/*
 * XREFs of ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00043A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0005094 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetBufferProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  char *v6; // rcx

  *a6 = 0;
  if ( a4 && a5 == 16 && a3 )
  {
    if ( a3 <= 3 )
    {
      v6 = (char *)this + 40;
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(v6, a4);
    }
    if ( a3 - 6 <= 1 )
    {
      v6 = (char *)this + 144;
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(v6, a4);
    }
  }
  return 3221225485LL;
}

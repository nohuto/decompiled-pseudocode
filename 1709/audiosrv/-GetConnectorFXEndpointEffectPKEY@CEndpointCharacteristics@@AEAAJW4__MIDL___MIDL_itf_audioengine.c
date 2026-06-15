/*
 * XREFs of ?GetConnectorFXEndpointEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x1800B5224
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800B4464 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetConnectorFXEndpointEffectPKEY(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _tagpropertykey *a3,
        struct _tagpropertykey *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a2 )
  {
    if ( a2 == eKeywordDetectorConnector )
    {
      *a3 = PKEY_FX_KeywordDetector_EndpointEffectClsid;
      *a4 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid;
    }
    else
    {
      return (unsigned int)-2147023728;
    }
  }
  else
  {
    *a3 = PKEY_FX_EndpointEffectClsid;
    *a4 = PKEY_CompositeFX_EndpointEffectClsid;
  }
  return v4;
}

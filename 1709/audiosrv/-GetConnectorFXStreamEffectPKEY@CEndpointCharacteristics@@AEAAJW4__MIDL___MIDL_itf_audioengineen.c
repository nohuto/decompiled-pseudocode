/*
 * XREFs of ?GetConnectorFXStreamEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x1800B532C
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800B4464 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetConnectorFXStreamEffectPKEY(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _tagpropertykey *a3,
        struct _tagpropertykey *a4)
{
  unsigned int v4; // r10d
  int v5; // edx
  GUID fmtid; // xmm0
  DWORD pid; // eax

  v4 = 0;
  if ( a2 == eHostProcessConnector )
  {
    *a3 = PKEY_FX_StreamEffectClsid;
    *a4 = PKEY_CompositeFX_StreamEffectClsid;
    return v4;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    *a3 = PKEY_FX_Offload_StreamEffectClsid;
    fmtid = PKEY_CompositeFX_Offload_StreamEffectClsid.fmtid;
    pid = PKEY_CompositeFX_Offload_StreamEffectClsid.pid;
    goto LABEL_6;
  }
  if ( v5 == 2 )
  {
    *a3 = PKEY_FX_KeywordDetector_StreamEffectClsid;
    fmtid = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.fmtid;
    pid = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.pid;
LABEL_6:
    a4->fmtid = fmtid;
    a4->pid = pid;
    return v4;
  }
  return (unsigned int)-2147023728;
}

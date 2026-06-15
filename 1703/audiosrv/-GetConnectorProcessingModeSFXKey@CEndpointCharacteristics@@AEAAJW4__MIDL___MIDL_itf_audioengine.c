/*
 * XREFs of ?GetConnectorProcessingModeSFXKey@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@@Z @ 0x18004243C
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeSFXKey(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _tagpropertykey *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  GUID fmtid; // xmm0
  DWORD pid; // eax

  v3 = 0;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 2 )
        return (unsigned int)-2147023728;
      fmtid = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
      pid = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
    }
    else
    {
      fmtid = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
      pid = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
    }
    a3->fmtid = fmtid;
    a3->pid = pid;
  }
  else
  {
    *a3 = PKEY_SFX_ProcessingModes_Supported_For_Streaming;
  }
  return v3;
}

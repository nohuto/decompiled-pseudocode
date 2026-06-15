/*
 * XREFs of ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800B6E00
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18005A2DC (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAudioSignalProcessingModeMap::Lookup(
        CAudioSignalProcessingModeMap *this,
        struct _GUID *__return_ptr retstr,
        struct _GUID *a3)
{
  int v3; // r9d
  int v4; // eax
  _QWORD *v7; // r8
  __int64 v8; // rcx
  GUID v9; // xmm0

  v3 = *((_DWORD *)this + 4);
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_6:
    v4 = -1;
  }
  else
  {
    while ( 1 )
    {
      v7 = (_QWORD *)(*(_QWORD *)this + 16LL * v4);
      v8 = *v7 - *(_QWORD *)&a3->Data1;
      if ( *v7 == *(_QWORD *)&a3->Data1 )
        v8 = v7[1] - *(_QWORD *)a3->Data4;
      if ( !v8 )
        break;
      if ( ++v4 >= v3 )
        goto LABEL_6;
    }
  }
  if ( v4 == -1 )
  {
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    if ( v4 < 0 || v4 >= v3 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800B6E83LL);
    }
    v9 = *(GUID *)(*((_QWORD *)this + 1) + 16LL * v4);
  }
  *retstr = v9;
  return retstr;
}

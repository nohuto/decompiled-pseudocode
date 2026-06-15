/*
 * XREFs of ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180107DC8
 * Callers:
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180064D88 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800BE2F8 (-SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessingModeSpecificDevicePipeFormatKey(struct _GUID *a1, int a2, struct _tagpropertykey *a3)
{
  unsigned int v3; // r9d
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 result; // rax

  v3 = 0;
  while ( 1 )
  {
    v4 = &qword_180189130[2 * v3];
    v5 = *v4 - *(_QWORD *)&a1->Data1;
    if ( *v4 == *(_QWORD *)&a1->Data1 )
      v5 = v4[1] - *(_QWORD *)a1->Data4;
    if ( !v5 )
      break;
    if ( ++v3 >= 8 )
      return 2147943568LL;
  }
  a3->pid = v3 + (a2 != 0 ? 602 : 2);
  result = 0LL;
  a3->fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  return result;
}

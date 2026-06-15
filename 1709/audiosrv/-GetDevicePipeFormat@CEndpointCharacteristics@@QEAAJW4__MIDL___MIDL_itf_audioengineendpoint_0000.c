/*
 * XREFs of ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022814
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000A70C (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180030718 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180031248 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180031688 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008682C (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDevicePipeFormat(
        struct _RTL_CRITICAL_SECTION *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int ProcessingModeSpecificDevicePipeFormatKey; // ebx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp-40h]
  struct _GUID v14; // [rsp+50h] [rbp-30h] BYREF
  struct _tagpropertykey v15; // [rsp+60h] [rbp-20h] BYREF

  v12 = -2LL;
  v8 = this + 212;
  EnterCriticalSection(this + 212);
  v13 = v8;
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  v14 = *a3;
  ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                &v14,
                                                a2 == eKeywordDetectorConnector,
                                                &v15);
  if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
  {
    if ( (*(int (__fastcall **)(ULONG_PTR, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)this->SpinCount
                                                                                             + 40LL))(
           this->SpinCount,
           &v15,
           &pvar) >= 0
      && pvar.vt == 65
      && (unsigned int)IsValidWfxBlob(&pvar) )
    {
      goto LABEL_5;
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    ProcessingModeSpecificDevicePipeFormatKey = CPolicyConfig::RefreshDeviceFormat(
                                                  (struct CEndpointCharacteristics *)this,
                                                  a2);
    if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
    {
      if ( (*(int (__fastcall **)(ULONG_PTR, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)this->SpinCount
                                                                                               + 40LL))(
             this->SpinCount,
             &v15,
             &pvar) < 0
        || pvar.vt != 65
        || !(unsigned int)IsValidWfxBlob(&pvar) )
      {
LABEL_10:
        ProcessingModeSpecificDevicePipeFormatKey = -2004287480;
        goto LABEL_7;
      }
LABEL_5:
      if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
      {
        ProcessingModeSpecificDevicePipeFormatKey = CloneWaveFormat(
                                                      (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                      a5);
        goto LABEL_7;
      }
      goto LABEL_10;
    }
  }
LABEL_7:
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDevicePipeFormat", 6435, ProcessingModeSpecificDevicePipeFormatKey);
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
}

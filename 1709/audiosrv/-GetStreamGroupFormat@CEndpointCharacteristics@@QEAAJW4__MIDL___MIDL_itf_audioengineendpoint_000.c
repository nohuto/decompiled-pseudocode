/*
 * XREFs of ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022708
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18000A428 (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180031248 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180031688 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetStreamGroupFormat(
        struct _RTL_CRITICAL_SECTION *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int ProcessingModeSpecificStreamGroupFormatKey; // ebx
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
  *a4 = 0LL;
  v14 = *a3;
  ProcessingModeSpecificStreamGroupFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(
                                                 &v14,
                                                 a2 == eKeywordDetectorConnector,
                                                 &v15);
  if ( ProcessingModeSpecificStreamGroupFormatKey >= 0 )
  {
    if ( (*(int (__fastcall **)(ULONG_PTR, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)this->SpinCount
                                                                                             + 40LL))(
           this->SpinCount,
           &v15,
           &pvar) < 0
      || pvar.vt != 65
      || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      goto LABEL_4;
    }
    if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
    {
      ProcessingModeSpecificStreamGroupFormatKey = -2004287480;
      goto LABEL_5;
    }
    ProcessingModeSpecificStreamGroupFormatKey = CloneWaveFormat(
                                                   (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                   a4);
    if ( ProcessingModeSpecificStreamGroupFormatKey >= 0 )
LABEL_4:
      ProcessingModeSpecificStreamGroupFormatKey = *a4 == 0LL ? 0x80070490 : 0;
  }
LABEL_5:
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetStreamGroupFormat", 6476, ProcessingModeSpecificStreamGroupFormatKey);
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)ProcessingModeSpecificStreamGroupFormatKey;
}

/*
 * XREFs of ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180038580 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     _lambda_c1fb52f6c005678af697d2769b0a97a1_::operator() @ 0x1800B84D4 (_lambda_c1fb52f6c005678af697d2769b0a97a1_--operator().c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDC84 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDFF8 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E8BD8 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180051DF8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x1800EFDC8 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800FDB98 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
        struct IMMDevice **this,
        char a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct tWAVEFORMATEX *a4)
{
  int v8; // edi
  const PROPERTYKEY *v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+40h] [rbp-81h] BYREF
  __int64 v13; // [rsp+48h] [rbp-79h] BYREF
  __int64 v14; // [rsp+50h] [rbp-71h] BYREF
  PROPVARIANT propvar1; // [rsp+58h] [rbp-69h] BYREF
  __int64 v16; // [rsp+60h] [rbp-61h]
  struct tWAVEFORMATEX *v17; // [rsp+68h] [rbp-59h]
  PROPVARIANT propvar2[5]; // [rsp+70h] [rbp-51h] BYREF
  int v19[4]; // [rsp+98h] [rbp-29h] BYREF
  GUID v20; // [rsp+A8h] [rbp-19h]
  GUID v21; // [rsp+B8h] [rbp-9h]
  GUID v22; // [rsp+C8h] [rbp+7h]
  GUID fmtid; // [rsp+D8h] [rbp+17h] BYREF
  DWORD pid; // [rsp+E8h] [rbp+27h]

  propvar2[3] = (PROPVARIANT)-2LL;
  v8 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  propvar1 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(propvar2, 0, 24);
  if ( a4 )
  {
    v8 = ValidateWaveFormatEx(a4);
    if ( v8 < 0 )
      goto LABEL_22;
    LOWORD(propvar1) = 65;
    LODWORD(v16) = a4->cbSize + 18;
    v17 = a4;
  }
  else
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 203), this[2]);
  }
  v9 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  if ( a3 != eKeywordDetectorConnector )
    v9 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v9->fmtid;
  pid = v9->pid;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, PROPVARIANT *))this[4]->lpVtbl->GetId)(
         this[4],
         &fmtid,
         propvar2) >= 0
    && !PropVariantCompareEx(&propvar1, propvar2, PVCU_DEFAULT, 0)
    || (v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, PROPVARIANT *))this[4]->lpVtbl->GetState)(
               this[4],
               &fmtid,
               &propvar1),
        v8 >= 0) )
  {
    if ( a4 )
    {
      if ( !a2 && a3 != eKeywordDetectorConnector && !*((_DWORD *)this + 6) )
      {
        CEndpointCharacteristics::SetSpatialAudioSettings(this, 0LL, a3, a4);
        v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))this[2]->lpVtbl->Activate)(
               this[2],
               &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
               1LL);
        if ( v8 >= 0 )
        {
          v19[0] = 64;
          v20 = GUID_73647561_0000_0010_8000_00aa00389b71;
          v21 = GUID_00000001_0000_0010_8000_00aa00389b71;
          v22 = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
          v8 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, _QWORD, __int64 *))(MEMORY[0] + 24LL))(
                 0LL,
                 v19,
                 64LL,
                 0LL,
                 &v14);
          if ( v8 >= 0
            && (*(int (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(MEMORY[0] + 32LL))(
                 0LL,
                 v14,
                 &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                 &v13) >= 0
            && (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 104LL))(
                 v13,
                 1LL,
                 &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                 &v12) >= 0 )
          {
            if ( a4->wFormatTag == 0xFFFE )
              v10 = *(unsigned int *)&a4[1].nChannels;
            else
              v10 = (unsigned int)(a4->nChannels != 2) + 3;
            (*(void (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v12 + 24LL))(
              v12,
              v10,
              &EVENTCONTEXT_POLICYCONFIG);
          }
        }
      }
    }
  }
LABEL_22:
  PropVariantClear(propvar2);
  LogEPCError("CEndpointCharacteristics::UpdateDeviceFormatEPProperty", 6317, v8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v8;
}

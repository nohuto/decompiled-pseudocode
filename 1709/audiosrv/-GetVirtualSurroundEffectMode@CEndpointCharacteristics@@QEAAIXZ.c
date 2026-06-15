/*
 * XREFs of ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180020C30
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x1800B0DA0 (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x180028200 (-GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectM.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDev.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028CD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180028CD0.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029518 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetVirtualSurroundEffectMode(CEndpointCharacteristics *this)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 (__fastcall *v3)(_QWORD, GUID *, SpatialAudioDevicePropertyReader **); // rax
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rcx
  void (*v6)(void); // rax
  __int64 (__fastcall *v7)(SpatialAudioDevicePropertyReader *__hidden, enum VirtualSurroundEffectMode *); // rax
  int v8; // eax
  SpatialAudioDevicePropertyReader *v9; // rcx
  void (*v10)(void); // rax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  unsigned int v14; // [rsp+38h] [rbp-39h] BYREF
  SpatialAudioDevicePropertyReader *v15; // [rsp+40h] [rbp-31h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, SpatialAudioDevicePropertyReader **); // [rsp+48h] [rbp-29h] BYREF
  __int64 v17; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  __int64 *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  _QWORD *v24; // [rsp+A8h] [rbp+37h]
  int v25; // [rsp+B0h] [rbp+3Fh]
  int v26; // [rsp+B4h] [rbp+43h]

  v18[1] = -2LL;
  v1 = 0;
  v14 = 0;
  v18[0] = *((_QWORD *)this + 4);
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
         &v16,
         &v17,
         v18);
  LODWORD(v18[0]) = v2;
  if ( v2 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDevicePropertyReader");
      LODWORD(v17) = 181;
      v21 = &v17;
      v22 = 4;
      v23 = 0;
      v24 = v18;
      v25 = 4;
      v26 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v12, v13, 5u, &pData);
    }
  }
  else
  {
    v3 = **v16;
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::QueryInterface )
      v4 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::QueryInterface(
             v16,
             &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d,
             &v15);
    else
      v4 = v3(v16, &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d, &v15);
    v2 = v4;
  }
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
  if ( v16 )
  {
    v16 = 0LL;
    v6 = (void (*)(void))(*v5)[2];
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release();
    else
      v6();
  }
  if ( v2 >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *__hidden, enum VirtualSurroundEffectMode *))(*(_QWORD *)v15 + 184LL);
    v8 = v7 == SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode
       ? SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(v15, (enum VirtualSurroundEffectMode *)&v14)
       : v7(v15, (enum VirtualSurroundEffectMode *)&v14);
    if ( v8 >= 0 )
      v1 = v14;
  }
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release();
    else
      v10();
  }
  return v1;
}

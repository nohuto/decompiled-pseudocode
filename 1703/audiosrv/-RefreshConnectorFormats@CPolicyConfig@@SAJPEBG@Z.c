/*
 * XREFs of ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18009D148
 * Callers:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800A3D34 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800399F0 (--1-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DBFC (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BE6F8 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::RefreshConnectorFormats(const unsigned __int16 *a1)
{
  int AliasedEndpointCharacteristics; // eax
  unsigned int v3; // ebx
  struct IMMDevice *v4; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v5; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+10h] BYREF
  CEndpointCharacteristics *v9; // [rsp+50h] [rbp+18h] BYREF
  struct IMMDevice *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a1, 0, &v9);
  v3 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    v4 = (struct IMMDevice *)*((_QWORD *)v9 + 2);
    v10 = v4;
    ((void (__fastcall *)(struct IMMDevice *))v4->lpVtbl->AddRef)(v4);
    ((void (__fastcall *)(struct IMMDevice *, int *))v4->lpVtbl->GetState)(v4, &v8);
    if ( v8 != 4 )
    {
      CPolicyConfig::DisconnectHelper(v4);
      CEndpointCharacteristics::RefreshDefaultConnectorFormats(v9, v5);
      CPolicyConfig::SetDeviceFormat(g_PolicyConfig, v4, 0LL);
      (*(void (__fastcall **)(CPolicyConfig *, const unsigned __int16 *))(*(_QWORD *)g_PolicyConfig + 40LL))(
        g_PolicyConfig,
        a1);
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE4A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)AliasedEndpointCharacteristics);
  }
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::~com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>((volatile signed __int32 **)&v9);
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v10);
  return v3;
}

/*
 * XREFs of ??1?$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005384
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$1 @ 0x180067242 (_CAudioSessionManager--Disconnect_--_1_--dtor$1.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800BCB5C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     _CPolicyConfig::RefreshConnectorFormats_::_1_::dtor$2 @ 0x1800BCD4C (_CPolicyConfig--RefreshConnectorFormats_--_1_--dtor$2.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDE10 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$2 @ 0x1800BDFDD (_CPolicyConfig--SetDeviceFormatInternal_--_1_--dtor$2.c)
 *     AudioServerGetEndpointVpoContext @ 0x1800C41C0 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetEndpointVpoContext$dtor$1 @ 0x1800C44D5 (AudioServerGetEndpointVpoContext$dtor$1.c)
 *     AudioServerGetStreamVpoContext @ 0x1800C4AB0 (AudioServerGetStreamVpoContext.c)
 *     AudioServerGetStreamVpoContext$dtor$8 @ 0x1800C5362 (AudioServerGetStreamVpoContext$dtor$8.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800D2530 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019D10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 */

void __fastcall wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release();
    else
      v2();
  }
}

/*
 * XREFs of ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AC8A4
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AB950 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ACB20 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     wil::scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___ @ 0x18002EE6C (wil--scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180079C64 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _lambda_cbe9e4feebe37314cade45d366e33fc3_::operator() @ 0x1800AA1AC (_lambda_cbe9e4feebe37314cade45d366e33fc3_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForExclusive(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        LPVOID *p_pv,
        unsigned int a7,
        struct CAudioSessionManager *a8,
        struct ISaDeviceProxy **a9)
{
  __int64 v10; // rax
  int EndpointId; // esi
  __int64 v12; // r14
  struct ISaDeviceProxy **v13; // r12
  unsigned int v14; // r13d
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // rdi
  char v20; // al
  _QWORD *v22; // [rsp+58h] [rbp-28h] BYREF
  char v23; // [rsp+60h] [rbp-20h]
  void *v24[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  LPVOID pv; // [rsp+C0h] [rbp+40h] BYREF
  struct SaDeviceParams *v28; // [rsp+D0h] [rbp+50h]
  unsigned int v29; // [rsp+D8h] [rbp+58h]

  v29 = a4;
  v28 = a3;
  pv = 0LL;
  v10 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v24, (__int64)&pv);
  EndpointId = CEndpointCharacteristics::GetEndpointId(a2, (unsigned __int16 **)(v10 + 8));
  if ( (_BYTE)v25 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)v24[0],
      v24[1]);
  if ( EndpointId < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x808,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointId);
    goto LABEL_27;
  }
  p_pv = &pv;
  wil::scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___((__int64)&v22, &p_pv);
  v12 = 5LL;
  v13 = a9;
  v14 = a7;
  while ( 1 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
        v12);
    }
    *(_OWORD *)v24 = 0LL;
    v25 = 0LL;
    EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphStore *, void **))(*(_QWORD *)g_DeviceGraphStore + 40LL))(
                   g_DeviceGraphStore,
                   v24);
    v15 = v24[0];
    v16 = v24[1];
    while ( v15 != v16 )
    {
      (*(void (__fastcall **)(_QWORD, LPVOID))(*(_QWORD *)*v15 + 376LL))(*v15, pv);
      ++v15;
    }
    v17 = (__int64 *)v24[0];
    if ( v24[0] )
    {
      v18 = (__int64 *)v24[1];
      if ( v24[0] != v24[1] )
      {
        do
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v17++);
        while ( v17 != v18 );
        v17 = (__int64 *)v24[0];
      }
      std::_Deallocate(v17, (v25 - (__int64)v17) >> 3, 8uLL);
    }
    if ( EndpointId < 0 )
      goto LABEL_22;
    EndpointId = CAudioSessionManager::Disconnect((__int64)a8, 5u, 1);
    if ( EndpointId < 0 )
      goto LABEL_22;
    EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                   g_DeviceGraphManager,
                   a2,
                   v28,
                   v29,
                   a5,
                   0LL,
                   v14,
                   v13);
    if ( EndpointId >= 0 )
      break;
    Sleep(0xAu);
LABEL_22:
    if ( !v12-- )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x839,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointId);
      v20 = v23;
      goto LABEL_25;
    }
  }
  v20 = 0;
  EndpointId = 0;
LABEL_25:
  if ( v20 )
  {
    v23 = 0;
    lambda_cbe9e4feebe37314cade45d366e33fc3_::operator()(&v22);
  }
LABEL_27:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)EndpointId;
}

/*
 * XREFs of ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009B8E8
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009A82C (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009BB5C (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180016B80 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18005A438 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     _lambda_750b57c9ef9b9d871fb25902b17e3c86_::operator() @ 0x180098980 (_lambda_750b57c9ef9b9d871fb25902b17e3c86_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForExclusive(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct CAudioSessionManager *a8,
        struct ISaDeviceProxy **a9)
{
  char v10; // si
  int EndpointId; // edi
  __int64 v12; // r15
  struct ISaDeviceProxy **v13; // r13
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // r14
  __int64 *v16; // rbx
  unsigned __int16 *v17; // r14
  LPVOID *p_pv; // [rsp+58h] [rbp-28h] BYREF
  char v21; // [rsp+60h] [rbp-20h]
  unsigned __int16 *v22[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  LPVOID pv; // [rsp+C0h] [rbp+40h] BYREF
  struct SaDeviceParams *v26; // [rsp+D0h] [rbp+50h]
  unsigned int v27; // [rsp+D8h] [rbp+58h]

  v27 = a4;
  v26 = a3;
  pv = 0LL;
  v22[0] = (unsigned __int16 *)&pv;
  v22[1] = 0LL;
  v10 = 1;
  LOBYTE(v23) = 1;
  EndpointId = CEndpointCharacteristics::GetEndpointId(a2, &v22[1]);
  if ( (_BYTE)v23 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)v22[0],
      v22[1]);
  if ( EndpointId < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x839,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointId);
    goto LABEL_27;
  }
  p_pv = &pv;
  v21 = 1;
  v12 = 5LL;
  v13 = a9;
  while ( 1 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
        v12);
    }
    *(_OWORD *)v22 = 0LL;
    v23 = 0LL;
    EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 **))(*(_QWORD *)g_DeviceGraphStore
                                                                                     + 48LL))(
                   g_DeviceGraphStore,
                   v22);
    v14 = v22[0];
    v15 = v22[1];
    while ( v14 != v15 )
    {
      (*(void (__fastcall **)(_QWORD, LPVOID))(**(_QWORD **)v14 + 368LL))(*(_QWORD *)v14, pv);
      v14 += 4;
    }
    v16 = (__int64 *)v22[0];
    if ( v22[0] )
    {
      v17 = v22[1];
      if ( v22[0] != v22[1] )
      {
        do
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v16++);
        while ( v16 != (__int64 *)v17 );
        v16 = (__int64 *)v22[0];
      }
      std::_Deallocate(v16, (v23 - (__int64)v16) >> 3, 8uLL);
    }
    if ( EndpointId < 0 )
      goto LABEL_22;
    EndpointId = CAudioSessionManager::Disconnect((__int64)a8, 5u, 1);
    if ( EndpointId < 0 )
      goto LABEL_22;
    EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                   g_DeviceGraphManager,
                   a2,
                   v26,
                   v27,
                   a5,
                   0LL,
                   a7,
                   v13);
    if ( EndpointId >= 0 )
      break;
    Sleep(0xAu);
LABEL_22:
    if ( !v12-- )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x86A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointId);
      goto LABEL_25;
    }
  }
  v10 = 0;
  EndpointId = 0;
LABEL_25:
  if ( v10 )
  {
    v21 = 0;
    lambda_750b57c9ef9b9d871fb25902b17e3c86_::operator()(&p_pv);
  }
LABEL_27:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)EndpointId;
}

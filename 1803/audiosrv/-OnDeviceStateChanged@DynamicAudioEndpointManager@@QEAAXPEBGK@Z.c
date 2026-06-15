/*
 * XREFs of ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x1800FC6B8
 * Callers:
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800BE670 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     s_mmeNotifyDeviceStateChanged @ 0x1800DC840 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z @ 0x1800FC970 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z @ 0x1800FCBF8 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall DynamicAudioEndpointManager::OnDeviceStateChanged(
        DynamicAudioEndpointManager *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  DynamicAudioEndpointManager *v4; // r14
  struct IAudioProcess *v5; // rcx
  int *v6; // rdi
  _QWORD **v7; // rbx
  __int64 v8; // r15
  _QWORD *Next; // rax
  __int64 v10; // rsi
  int v12; // [rsp+3Ch] [rbp-55h] BYREF
  struct IUnknown *v13; // [rsp+40h] [rbp-51h] BYREF
  struct IAudioProcess *v14; // [rsp+48h] [rbp-49h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-41h] BYREF
  __int64 v16; // [rsp+58h] [rbp-39h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-31h] BYREF
  char v18; // [rsp+68h] [rbp-29h]
  __int64 v19; // [rsp+70h] [rbp-21h]
  int v20[7]; // [rsp+78h] [rbp-19h] BYREF

  v19 = -2LL;
  v4 = g_DynamicAudioEndpointManager;
  memset_0(v20, 0, 0x38uLL);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 24);
  v18 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = v20;
  v7 = (_QWORD **)((char *)v4 + 64);
  v16 = 2LL;
  do
  {
    v8 = 7LL;
    do
    {
      v15 = *v7;
      while ( v15 )
      {
        Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                 (__int64)v5,
                 &v15);
        v10 = *Next;
        if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, int *))(*(_QWORD *)*Next + 56LL))(
               *Next,
               a2,
               a3,
               &v12) >= 0
          && v12 == 2 )
        {
          v14 = 0LL;
          if ( (*(int (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)v10 + 48LL))(v10, &v14) >= 0 )
          {
            v13 = 0LL;
            if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v10)(
                   v10,
                   &GUID_00000000_0000_0000_c000_000000000046,
                   &v13) >= 0 )
            {
              DynamicAudioEndpointManager::RemoveRule(v4, v14, v13, 0);
              *v6 = 1;
            }
            if ( v13 )
              ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
          }
          v5 = v14;
          if ( v14 )
            (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      v7 += 6;
      ++v6;
      --v8;
    }
    while ( v8 );
    --v16;
  }
  while ( v16 );
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  DynamicAudioEndpointManager::RefreshPublishedDefaults(v4, (int (*const)[7])v20);
}

/*
 * XREFs of ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIMMDevice@@@Z @ 0x18003FE30
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x180036970 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z @ 0x1800FC970 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002FDF0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800370D4 (--1-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTraits@V.c)
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180037120 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x180039AD4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEBAPEAU__POSITION@@PEBGPEAU3@@Z @ 0x18009A09C (-Find@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x1800FC268 (-GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z.c)
 *     ?NewNode@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@PEBGPEAV312@1@Z @ 0x1800FC46C (-NewNode@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct IMMDevice **a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  LPVOID v9; // r11
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdi
  _QWORD *Next; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // eax
  const unsigned __int16 *v18; // r11
  unsigned int DeviceFromDeviceId; // eax
  int v21; // [rsp+28h] [rbp-31h]
  __int64 v22; // [rsp+38h] [rbp-21h] BYREF
  __int64 v23; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-11h] BYREF
  LPCRITICAL_SECTION v25; // [rsp+58h] [rbp-1h] BYREF
  char v26; // [rsp+60h] [rbp+7h]
  __int128 v27; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+78h] [rbp+1Fh]
  __int128 v29; // [rsp+80h] [rbp+27h]
  int v30; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  LPVOID v32; // [rsp+B8h] [rbp+5Fh] BYREF

  v24[1] = -2LL;
  v5 = a4;
  v6 = a3;
  v25 = (LPCRITICAL_SECTION)(a1 + 24);
  v26 = 0;
  ATL::CCritSecLock::Lock(&v25);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 10;
  v9 = 0LL;
  v32 = 0LL;
  if ( (unsigned int)v5 <= 6 )
  {
    if ( (unsigned int)v6 > 1 )
    {
      v10 = 95LL;
      goto LABEL_5;
    }
    v12 = *(_QWORD *)(a1 + 48 * (v5 + 7 * v6) + 64);
    v22 = v12;
    v13 = *(_QWORD *)(a1 + 736);
    v23 = v13;
    if ( v12 )
    {
      do
      {
        Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                           v12,
                           &v22);
        if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*Next + 40LL))(*Next, v24) >= 0 )
        {
          v15 = ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::NewNode(
                  &v27,
                  v24[0],
                  *((_QWORD *)&v27 + 1));
          v12 = *((_QWORD *)&v27 + 1);
          if ( *((_QWORD *)&v27 + 1) )
            **((_QWORD **)&v27 + 1) = v15;
          else
            *(_QWORD *)&v27 = v15;
          *((_QWORD *)&v27 + 1) = v15;
        }
      }
      while ( v22 );
      v9 = v32;
    }
    if ( v13 )
    {
      while ( 1 )
      {
        v16 = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                          v12,
                          &v23);
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, LPVOID *))(*(_QWORD *)*v16 + 24LL))(
                *v16,
                a2,
                (unsigned int)v6,
                (unsigned int)v5,
                &v32);
        v9 = v32;
        if ( v17 >= 0 )
        {
          if ( v32 )
            break;
        }
        if ( !v23 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      if ( !v9 )
        goto LABEL_21;
    }
    if ( !ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
            &v27,
            v9) )
    {
      DeviceFromDeviceId = DynamicAudioEndpointManager::GetDeviceFromDeviceId(v18, a5);
LABEL_22:
      v11 = DeviceFromDeviceId;
      goto LABEL_23;
    }
LABEL_21:
    DeviceFromDeviceId = CDefaultDeviceManager::GetDefaultEndpoint(v12, v6, v5, &v27, a5);
    goto LABEL_22;
  }
  v10 = 94LL;
LABEL_5:
  v11 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    (const char *)0x80070057LL,
    v21);
LABEL_23:
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v32);
  ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::~CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>();
  ATL::CCritSecLock::~CCritSecLock(&v25);
  return v11;
}

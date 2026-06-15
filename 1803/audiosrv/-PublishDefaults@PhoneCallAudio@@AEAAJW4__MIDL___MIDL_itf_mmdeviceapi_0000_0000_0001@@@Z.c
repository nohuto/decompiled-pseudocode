/*
 * XREFs of ?PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FAF20
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FA288 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1800FAB40 (-OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1800FACEC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::PublishDefaults(PhoneCallAudio *this, unsigned int a2)
{
  unsigned int v3; // edi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  void (*v9)(void); // rax
  int v10; // eax
  void (*v11)(void); // rax
  void (*v12)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  EndpointDevice *v17; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0;
  v4 = eCapture;
  if ( a2 != 2 )
    v4 = a2;
  v5 = 0LL;
  if ( a2 != 2 )
    v5 = a2;
  if ( (unsigned int)v5 <= v4 )
  {
    while ( 1 )
    {
      v16 = 0LL;
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
      v6 = *((_QWORD *)this + v5 + 22);
      if ( v6 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v16);
        if ( v7 < 0 )
        {
          v3 = v7;
          if ( v15 )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_24;
        }
      }
      if ( v15 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v15 = 0;
      }
      if ( !v16 )
      {
        v17 = 0LL;
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, EndpointDevice **))(**((_QWORD **)this + 8) + 48LL))(
               *((_QWORD *)this + 8),
               (unsigned int)v5,
               0LL,
               &v17);
        if ( v8 < 0
          || (v8 = (*(__int64 (__fastcall **)(EndpointDevice *, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v16), v8 < 0) )
        {
          v3 = v8;
          if ( v17 )
          {
            v12 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
            if ( (char *)v12 == (char *)EndpointDevice::Release )
              EndpointDevice::Release(v17);
            else
              v12();
          }
LABEL_24:
          if ( !v16 )
            return v3;
          v11 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
          goto LABEL_32;
        }
        if ( v17 )
        {
          v9 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
          if ( (char *)v9 == (char *)EndpointDevice::Release )
            EndpointDevice::Release(v17);
          else
            v9();
        }
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 88LL))(
              *((_QWORD *)this + 15),
              v16,
              0LL,
              0LL);
      if ( v10 < 0 )
        break;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 > v4 )
        return v3;
    }
    v3 = v10;
    if ( !v16 )
      return v3;
    v11 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
LABEL_32:
    v11();
  }
  return v3;
}

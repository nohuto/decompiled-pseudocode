/*
 * XREFs of ?UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x1800FB7E8
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800FA4B0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB660 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::UpdateCommsPreferredEndpoint(
        PhoneCallAudio *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IUnknown *a3)
{
  __int64 v3; // rdi
  struct IUnknown *v5; // rdx
  void (*Release)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  struct IUnknown *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = a2;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  v10 = 0LL;
  if ( !*((_DWORD *)this + 21) )
  {
    v5 = (struct IUnknown *)*((_QWORD *)this + v3 + 24);
    if ( v5 )
    {
      ATL::AtlComPtrAssign(&v10, v5);
      if ( v10 )
      {
        Release = (void (*)(void))v10->lpVtbl->Release;
        if ( (char *)Release == (char *)EndpointDevice::Release )
          EndpointDevice::Release((EndpointDevice *)v10);
        else
          Release();
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}

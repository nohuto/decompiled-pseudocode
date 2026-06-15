/*
 * XREFs of ?UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x1800C8F08
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800C7FE0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8D70 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

__int64 __fastcall PhoneCallAudio::UpdateCommsPreferredEndpoint(
        PhoneCallAudio *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IUnknown *a3)
{
  __int64 v3; // rdi
  struct IUnknown *v5; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct IUnknown *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v3 = a2;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  v9 = 0LL;
  if ( !*((_DWORD *)this + 19) )
  {
    v5 = (struct IUnknown *)*((_QWORD *)this + v3 + 14);
    if ( v5 )
    {
      ATL::AtlComPtrAssign(&v9, v5);
      if ( v9 )
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}

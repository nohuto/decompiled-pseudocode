/*
 * XREFs of ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1800FAB40
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FAF20 (-PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PhoneCallAudio::OnDefaultDeviceChanged(__int64 a1, int a2, int a3, struct IUnknown *a4)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  struct IUnknown **v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  v6 = a2;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v12,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 208));
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8
    && *(_DWORD *)(a1 + 84)
    && a3 == *(_DWORD *)(a1 + 128)
    && (*(int (__fastcall **)(__int64, _QWORD, struct IUnknown *))(*(_QWORD *)v8 + 24LL))(v8, (unsigned int)v6, a4) >= 0 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
    v9 = (struct IUnknown **)(a1 + 8 * (v6 + 22));
    if ( *v9 != a4 )
      ATL::AtlComPtrAssign(v9, a4);
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    PhoneCallAudio::PublishDefaults((PhoneCallAudio *)a1, (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)v6);
  }
  if ( v13 )
    LeaveCriticalSection(v12);
}

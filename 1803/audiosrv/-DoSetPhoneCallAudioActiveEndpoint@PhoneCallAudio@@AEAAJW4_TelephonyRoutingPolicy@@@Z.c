/*
 * XREFs of ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FA288
 * Callers:
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB530 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB660 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FAF20 (-PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  ULONG (__stdcall *Release)(IUnknown *); // rax
  ULONG (__stdcall *v11)(IUnknown *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v14; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v15; // [rsp+48h] [rbp-18h] BYREF
  char v16; // [rsp+50h] [rbp-10h]
  struct IUnknown *v17; // [rsp+70h] [rbp+10h] BYREF
  struct IUnknown *v18; // [rsp+80h] [rbp+20h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v15,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 208));
  v18 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v7 = 4LL;
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = 6LL;
    goto LABEL_10;
  }
  v5 = v4 - 4;
  if ( !v5 )
  {
    v7 = 5LL;
LABEL_10:
    *(_DWORD *)(a1 + 128) = v7;
    goto LABEL_11;
  }
  if ( v5 != 2 )
  {
    v6 = -2147024809;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 + 128) = 2;
  v7 = 2LL;
LABEL_11:
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct IUnknown **))(**(_QWORD **)(a1 + 64) + 48LL))(
         *(_QWORD *)(a1 + 64),
         0LL,
         v7,
         &v18);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IUnknown **))(**(_QWORD **)(a1 + 64) + 48LL))(
           *(_QWORD *)(a1 + 64),
           1LL,
           *(unsigned int *)(a1 + 128),
           &v17);
    if ( v6 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 56);
      if ( !v8
        || (v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown *))(*(_QWORD *)v8 + 24LL))(v8, 0LL, v18),
            v6 >= 0)
        && (v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown *))(**(_QWORD **)(a1 + 56) + 24LL))(
                   *(_QWORD *)(a1 + 56),
                   1LL,
                   v17),
            v6 >= 0) )
      {
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&lpCriticalSection,
          (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
        if ( *(struct IUnknown **)(a1 + 176) != v18 )
          ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 176), v18);
        if ( *(struct IUnknown **)(a1 + 184) != v17 )
          ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 184), v17);
        if ( v14 )
          LeaveCriticalSection(lpCriticalSection);
        v9 = PhoneCallAudio::PublishDefaults((PhoneCallAudio *)a1, eAll);
        v6 = 0;
        if ( v9 < 0 )
          v6 = v9;
      }
    }
  }
LABEL_24:
  if ( v17 )
  {
    Release = v17->lpVtbl->Release;
    if ( (char *)Release == (char *)EndpointDevice::Release )
      EndpointDevice::Release((EndpointDevice *)v17);
    else
      ((void (__fastcall *)(struct IUnknown *))Release)(v17);
  }
  if ( v18 )
  {
    v11 = v18->lpVtbl->Release;
    if ( (char *)v11 == (char *)EndpointDevice::Release )
      EndpointDevice::Release((EndpointDevice *)v18);
    else
      ((void (__fastcall *)(struct IUnknown *))v11)(v18);
  }
  if ( v16 )
    LeaveCriticalSection(v15);
  return (unsigned int)v6;
}

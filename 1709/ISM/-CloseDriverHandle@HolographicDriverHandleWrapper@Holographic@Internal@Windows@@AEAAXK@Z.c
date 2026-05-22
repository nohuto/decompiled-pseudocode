/*
 * XREFs of ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x1800B41E8
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x1800B3DD0 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800B4570 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOT.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800B0990 (-StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDr.c)
 *     ?StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800B0FD8 (-StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B20FC (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B2194 (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProvider_ea_1800B2194.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BA350 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA76C (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BA8D0 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BB018 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
        RTL_SRWLOCK *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  signed int v4; // edi
  RTL_SRWLOCK *v6; // r14
  __int64 v7; // rbx
  __int64 *v8; // rax
  HSTRING Ptr; // rcx
  PCWSTR StringRawBuffer; // rax
  const wchar_t *v11; // rdi
  int v12; // r8d
  DWORD LastError; // edi
  void *v14; // rbx
  wil::details::ThreadFailureCallbackHolder *v15; // rcx
  PCWSTR v16; // rax
  const wchar_t *v17; // rdi
  int v18; // r8d
  DWORD v19; // edi
  void *v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-E0h] BYREF
  void **v22; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h]
  int *v25; // [rsp+58h] [rbp-A8h]
  int *v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h] BYREF
  char v28; // [rsp+6Ch] [rbp-94h]
  int v29; // [rsp+90h] [rbp-70h] BYREF
  const char *v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  char v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  _BYTE v34[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+148h] [rbp+48h]
  __int64 v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+158h] [rbp+58h]
  void *Block; // [rsp+160h] [rbp+60h]
  void **v39; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v40[3]; // [rsp+178h] [rbp+78h] BYREF
  int v41; // [rsp+190h] [rbp+90h]
  int *v42; // [rsp+198h] [rbp+98h]
  int *v43; // [rsp+1A0h] [rbp+A0h]
  int v44; // [rsp+1A8h] [rbp+A8h] BYREF
  char v45; // [rsp+1ACh] [rbp+ACh]
  int v46; // [rsp+1D0h] [rbp+D0h] BYREF
  const char *v47; // [rsp+1D8h] [rbp+D8h]
  __int64 v48; // [rsp+1E0h] [rbp+E0h]
  char v49; // [rsp+1E8h] [rbp+E8h]
  __int64 v50; // [rsp+1F0h] [rbp+F0h]
  _BYTE v51[144]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v52; // [rsp+288h] [rbp+188h]
  __int64 v53; // [rsp+290h] [rbp+190h]
  __int64 v54; // [rsp+298h] [rbp+198h]
  void *v55; // [rsp+2A0h] [rbp+1A0h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v4 = (unsigned __int16)a2 | 0x80070000;
  if ( a2 <= 0 )
    v4 = a2;
  if ( v4 >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23A,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      a4);
    JUMPOUT(0x1800B4568LL);
  }
  v6 = this + 7;
  v7 = -1LL;
  v21 = -1LL;
  AcquireSRWLockExclusive(this + 7);
  v8 = (__int64 *)&this[9];
  LODWORD(this[8].Ptr) = v4;
  if ( &v21 != (__int64 *)&this[9] )
  {
    v7 = *v8;
    v21 = *v8;
    *v8 = -1LL;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v7 != -1 )
  {
    Ptr = (HSTRING)this[4].Ptr;
    if ( Windows::Internal::Holographic::HolographicDeviceOpenCloseTelemetryEnabled )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(Ptr, 0LL);
      v23[0] = 0LL;
      v11 = StringRawBuffer;
      v23[2] = 0LL;
      v24 = 0;
      v23[1] = &v22;
      v27 = 0;
      v25 = &v29;
      v28 = 0;
      v26 = &v27;
      v30 = "TelemetryCloseHolographicDevice";
      v32 = 0;
      v29 = 0;
      v31 = 0LL;
      v33 = 1LL;
      v35 = 0LL;
      v36 = 0LL;
      memset(v34, 0, sizeof(v34));
      v12 = (int)this[1].Ptr;
      v22 = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      v37 = 0LL;
      Block = 0LL;
      HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity(
        (__int64)&v22,
        v11,
        v12,
        (__int64)&this[1].Ptr + 4);
      CancelIoEx((HANDLE)v7, 0LL);
      if ( v7 )
      {
        LastError = GetLastError();
        CloseHandle((HANDLE)v7);
        SetLastError(LastError);
      }
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v22);
      v22 = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v22);
      if ( Block )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 1 )
        {
          v14 = Block;
          if ( Block )
          {
            wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)Block + 8);
            operator delete(v14);
          }
        }
        Block = 0LL;
      }
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)&v27);
      v15 = (wil::details::ThreadFailureCallbackHolder *)v23;
    }
    else
    {
      v16 = WindowsGetStringRawBuffer(Ptr, 0LL);
      v40[0] = 0LL;
      v17 = v16;
      v40[2] = 0LL;
      v41 = 0;
      v40[1] = &v39;
      v44 = 0;
      v42 = &v46;
      v45 = 0;
      v43 = &v44;
      v47 = "CloseHolographicDevice";
      v49 = 0;
      v46 = 0;
      v48 = 0LL;
      v50 = 1LL;
      v52 = 0LL;
      v53 = 0LL;
      memset(v51, 0, sizeof(v51));
      v18 = (int)this[1].Ptr;
      v39 = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      v54 = 0LL;
      v55 = 0LL;
      HolographicDriverClientTrace::CloseHolographicDevice::StartActivity(
        (__int64)&v39,
        v17,
        v18,
        (__int64)&this[1].Ptr + 4);
      CancelIoEx((HANDLE)v7, 0LL);
      if ( v7 )
      {
        v19 = GetLastError();
        CloseHandle((HANDLE)v7);
        SetLastError(v19);
      }
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v39);
      v39 = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v39);
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v55, 0xFFFFFFFF) == 1 )
        {
          v20 = v55;
          if ( v55 )
          {
            wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)v55 + 8);
            operator delete(v20);
          }
        }
        v55 = 0LL;
      }
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)&v44);
      v15 = (wil::details::ThreadFailureCallbackHolder *)v40;
    }
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder(v15);
  }
}

/*
 * XREFs of ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x1800C07E8
 * Callers:
 *     ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x1800BFFD0 (-Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800C0CB0 (-DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAU.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800BBED0 (-StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDr.c)
 *     ?StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800BC508 (-StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@.c)
 *     ??1?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BE71C (--1-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ??1?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BE7D0 (--1-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CA090 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800CA4AC (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CA600 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800CAD3C (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  signed int v5; // edi
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r13
  bool v14; // zf
  HSTRING v15; // rcx
  const WCHAR *StringRawBuffer; // rdi
  DWORD LastError; // edi
  const WCHAR *v18; // rdi
  DWORD v19; // edi
  RTL_SRWLOCK *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  _QWORD v24[3]; // [rsp+30h] [rbp-D8h] BYREF
  void **v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  void ***v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __int64 v29; // [rsp+68h] [rbp-A0h]
  int *v30; // [rsp+70h] [rbp-98h]
  int *v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-88h] BYREF
  char v33; // [rsp+84h] [rbp-84h]
  int v34; // [rsp+A8h] [rbp-60h] BYREF
  const char *v35; // [rsp+B0h] [rbp-58h]
  __int64 v36; // [rsp+B8h] [rbp-50h]
  char v37; // [rsp+C0h] [rbp-48h]
  __int64 v38; // [rsp+C8h] [rbp-40h]
  _BYTE v39[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+160h] [rbp+58h]
  __int64 v41; // [rsp+168h] [rbp+60h]
  __int64 v42; // [rsp+170h] [rbp+68h]
  __int64 v43; // [rsp+178h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v24[1] = -2LL;
  v5 = (unsigned __int16)a2 | 0x80070000;
  if ( a2 <= 0 )
    v5 = a2;
  v6 = retaddr;
  if ( v5 >= 0 )
  {
LABEL_30:
    wil::details::in1diag3::_FailFast_Unexpected(
      v6,
      (void *)0x22B,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      a4);
    JUMPOUT(0x1800C0B68LL);
  }
  v7 = -1LL;
  v8 = -1LL;
  v9 = (char *)this + 112;
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  *((_DWORD *)this + 30) = v5;
  v10 = (__int64 *)((char *)this + 128);
  v11 = -1LL;
  v12 = -1LL;
  v13 = -1LL;
  if ( v24 != (_QWORD *)((char *)this + 128) )
  {
    v8 = *v10;
    v11 = v8;
    *v10 = -1LL;
    v12 = v8;
    v13 = v8;
    v7 = v8;
  }
  v14 = v9 == 0LL;
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-112LL )
  {
    ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
    v14 = v9 == 0LL;
  }
  if ( v14 )
    v7 = v13;
  if ( this == (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-112LL )
    v12 = v11;
  if ( v12 != -1 )
  {
    v15 = (HSTRING)*((_QWORD *)this + 4);
    if ( Windows::Internal::Holographic::HolographicDeviceOpenCloseTelemetryEnabled )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(v15, 0LL);
      v26 = 0LL;
      v27 = &v25;
      v28 = 0LL;
      LODWORD(v29) = 0;
      v30 = &v34;
      v31 = &v32;
      v32 = 0;
      v33 = 0;
      v37 = 0;
      v34 = 0;
      v35 = "TelemetryCloseHolographicDevice";
      v36 = 0LL;
      v38 = 1LL;
      v40 = 0LL;
      memset_0(v39, 0, sizeof(v39));
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v25 = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity(
        (__int64)&v25,
        StringRawBuffer,
        *((_DWORD *)this + 2),
        (__int64)this + 12);
      CancelIoEx((HANDLE)v8, 0LL);
      if ( v7 )
      {
        LastError = GetLastError();
        CloseHandle((HANDLE)v8);
        SetLastError(LastError);
      }
      v8 = -1LL;
      v24[0] = -1LL;
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v25);
      v25 = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v25);
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)&v25);
    }
    else
    {
      v18 = WindowsGetStringRawBuffer(v15, 0LL);
      v26 = 0LL;
      v27 = &v25;
      v28 = 0LL;
      LODWORD(v29) = 0;
      v30 = &v34;
      v31 = &v32;
      v32 = 0;
      v33 = 0;
      v37 = 0;
      v34 = 0;
      v35 = "CloseHolographicDevice";
      v36 = 0LL;
      v38 = 1LL;
      v40 = 0LL;
      memset_0(v39, 0, sizeof(v39));
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v25 = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      HolographicDriverClientTrace::CloseHolographicDevice::StartActivity(
        (__int64)&v25,
        v18,
        *((_DWORD *)this + 2),
        (__int64)this + 12);
      CancelIoEx((HANDLE)v8, 0LL);
      if ( v7 )
      {
        v19 = GetLastError();
        CloseHandle((HANDLE)v8);
        SetLastError(v19);
      }
      v8 = -1LL;
      v24[0] = -1LL;
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v25);
      v25 = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v25);
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)&v25);
    }
    v20 = (RTL_SRWLOCK *)((char *)this + 56);
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    v24[2] = (char *)this + 56;
    v21 = *((_QWORD *)this + 8);
    v22 = *((_QWORD *)this + 9);
    while ( v21 != v22 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)v21 + 56LL);
      if ( !v23 )
      {
        std::_Xbad_function_call();
        goto LABEL_30;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v21 += 8LL;
    }
    if ( v20 )
      ReleaseSRWLockShared(v20);
  }
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v8);
}

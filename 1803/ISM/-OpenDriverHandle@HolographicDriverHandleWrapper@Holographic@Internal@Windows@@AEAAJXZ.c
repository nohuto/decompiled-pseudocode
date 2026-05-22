/*
 * XREFs of ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C0434
 * Callers:
 *     ?DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800C0CB0 (-DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAU.c)
 *     ??$?0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1800CDB04 (--$-0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800030E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1800BADB8 (-Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  RTL_SRWLOCK *v2; // rbp
  const char *v3; // r9
  wil::details::in1diag3 *v4; // rcx
  int v5; // ebx
  DWORD dwFlagsAndAttributes; // r15d
  const WCHAR *StringRawBuffer; // rax
  DWORD v8; // r8d
  DWORD v9; // edx
  HANDLE FileW; // rsi
  const char *v11; // r9
  char *v12; // r14
  DWORD LastError; // ebx
  const WCHAR *v14; // rax
  HANDLE v15; // r14
  char *v16; // rsi
  DWORD v17; // ebx
  void *v18; // rcx
  __int64 v19; // rdx
  void *v20; // rdx
  unsigned int v21; // ebx
  const char *v22; // r9
  int v23; // ebx
  _DWORD *v24; // rcx
  HolographicDriverClientTrace *v25; // rcx
  int v26; // eax
  RTL_SRWLOCK *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rcx
  _DWORD v32[4]; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-1C8h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 112);
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  v4 = retaddr;
  if ( *((_QWORD *)this + 16) != -1LL )
  {
LABEL_43:
    wil::details::in1diag3::_FailFast_Unexpected(
      v4,
      (void *)0x1C9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v3);
    __debugbreak();
  }
  if ( *((int *)this + 30) >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1CA,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v3);
    __debugbreak();
  }
  v5 = *((_DWORD *)this + 10);
  dwFlagsAndAttributes = *((_BYTE *)this + 161) != 0 ? 0x40000000 : 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
  v8 = 3;
  if ( v5 == 2 )
    v8 = 1;
  v9 = -1073741824;
  if ( v5 == 2 )
    v9 = 0x80000000;
  FileW = CreateFileW(StringRawBuffer, v9, v8, 0LL, 3u, dwFlagsAndAttributes, 0LL);
  v12 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v12);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 16) = FileW;
  if ( FileW == (HANDLE)-1LL && *((_DWORD *)this + 10) == 1 && GetLastError() == 5 )
  {
    v14 = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
    v15 = CreateFileW(v14, 0x80000000, 1u, 0LL, 3u, dwFlagsAndAttributes, 0LL);
    v16 = (char *)*((_QWORD *)this + 16);
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v17 = GetLastError();
      CloseHandle(v16);
      SetLastError(v17);
    }
    *((_QWORD *)this + 16) = v15;
  }
  v18 = (void *)*((_QWORD *)this + 16);
  if ( v18 == (void *)-1LL )
  {
    v19 = 502LL;
LABEL_20:
    v21 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v19,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
            v11);
    goto LABEL_39;
  }
  v20 = (void *)*((_QWORD *)this + 6);
  if ( v20 && !CreateIoCompletionPort(v18, v20, 0LL, 0) )
  {
    v19 = 506LL;
    goto LABEL_20;
  }
  *((_DWORD *)this + 30) = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 17);
  if ( *((_QWORD *)this + 18) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x202,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v22);
    JUMPOUT(0x1800C07E6LL);
  }
  memset_0(v32, 0, 0x1A0uLL);
  v32[0] = 416;
  v32[2] = 1;
  v33 = *((_QWORD *)this + 16);
  v23 = CM_Register_Notification(
          v32,
          this,
          &Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallbackStatic,
          (char *)this + 144);
  if ( v23 )
  {
    v24 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v24 && *v24 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::Log_Error_(
        v25,
        v23,
        L"CM_MapCrToWin32Err() failed, hresult is actually a CONFIGRET value");
    }
    v21 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-136LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 17);
  }
  else
  {
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-136LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 17);
    v26 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::HolographicDriverHandleWrapper *))(*(_QWORD *)this + 8LL))(this);
    v21 = v26;
    if ( v26 >= 0 )
    {
      v27 = (RTL_SRWLOCK *)((char *)this + 56);
      AcquireSRWLockShared((PSRWLOCK)this + 7);
      v28 = *((_QWORD *)this + 11);
      v29 = *((_QWORD *)this + 12);
      while ( v28 != v29 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)v28 + 56LL);
        if ( !v30 )
        {
          std::_Xbad_function_call();
          goto LABEL_43;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        v28 += 8LL;
      }
      if ( v27 )
        ReleaseSRWLockShared(v27);
      v21 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)(unsigned int)v26);
    }
  }
LABEL_39:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v21;
}

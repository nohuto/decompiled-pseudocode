/*
 * XREFs of ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800B3EC0
 * Callers:
 *     ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x1800B7340 (--0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@.c)
 *     ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x1800B75B0 (-OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1800AF7B4 (-Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  RTL_SRWLOCK *v1; // rbp
  const char *v3; // r9
  int v4; // ebx
  DWORD dwFlagsAndAttributes; // r15d
  const WCHAR *StringRawBuffer; // rax
  DWORD v7; // r8d
  DWORD v8; // edx
  HANDLE FileW; // rax
  const char *v10; // r9
  char *v11; // rsi
  HANDLE v12; // r14
  DWORD LastError; // ebx
  const WCHAR *v14; // rax
  HANDLE v15; // rax
  char *v16; // rsi
  HANDLE v17; // r14
  DWORD v18; // ebx
  void *v19; // rcx
  __int64 v20; // rdx
  void *v21; // rdx
  unsigned int v22; // ebx
  const char *v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // ebx
  _DWORD *v27; // rcx
  HolographicDriverClientTrace *v28; // rcx
  signed int v30; // eax
  unsigned __int64 v31; // rcx
  _QWORD v32[52]; // [rsp+40h] [rbp-1D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  v1 = (RTL_SRWLOCK *)((char *)this + 56);
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  if ( *((_QWORD *)this + 9) != -1LL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v3);
    __debugbreak();
  }
  if ( *((int *)this + 16) >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v3);
    __debugbreak();
  }
  v4 = *((_DWORD *)this + 10);
  dwFlagsAndAttributes = *((_BYTE *)this + 113) != 0 ? 0x40000000 : 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
  v7 = 3;
  v8 = -1073741824;
  if ( v4 == 2 )
  {
    v8 = 0x80000000;
    v7 = 1;
  }
  FileW = CreateFileW(StringRawBuffer, v8, v7, 0LL, 3u, dwFlagsAndAttributes, 0LL);
  v11 = (char *)*((_QWORD *)this + 9);
  v12 = FileW;
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v11);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 9) = v12;
  if ( v12 == (HANDLE)-1LL && *((_DWORD *)this + 10) == 1 && GetLastError() == 5 )
  {
    v14 = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
    v15 = CreateFileW(v14, 0x80000000, 1u, 0LL, 3u, dwFlagsAndAttributes, 0LL);
    v16 = (char *)*((_QWORD *)this + 9);
    v17 = v15;
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v18 = GetLastError();
      CloseHandle(v16);
      SetLastError(v18);
    }
    *((_QWORD *)this + 9) = v17;
  }
  v19 = (void *)*((_QWORD *)this + 9);
  if ( v19 == (void *)-1LL )
  {
    v20 = 531LL;
LABEL_18:
    v22 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v20,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
            v10);
    goto LABEL_32;
  }
  v21 = (void *)*((_QWORD *)this + 6);
  if ( v21 && !CreateIoCompletionPort(v19, v21, 0LL, 0) )
  {
    v20 = 535LL;
    goto LABEL_18;
  }
  *((_DWORD *)this + 16) = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  if ( *((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21F,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v23);
    __debugbreak();
  }
  memset(v32, 0, sizeof(v32));
  v24 = *((_QWORD *)this + 9);
  LODWORD(v32[0]) = 416;
  v25 = *((_QWORD *)this + 12);
  LODWORD(v32[1]) = 1;
  v32[2] = v24;
  if ( v25 )
  {
    if ( (unsigned int)CM_Unregister_Notification(v25) )
    {
      v30 = GetLastError();
      v31 = (unsigned __int16)v30 | 0x80070000;
      if ( v30 <= 0 )
        v31 = (unsigned int)v30;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v31);
      JUMPOUT(0x1800B41E4LL);
    }
    *((_QWORD *)this + 12) = 0LL;
  }
  v26 = CM_Register_Notification(
          v32,
          this,
          &Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallback,
          (char *)this + 96);
  if ( v26 )
  {
    v27 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v27 && *v27 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::Log_Error_(
        v28,
        v26,
        L"CM_MapCrToWin32Err() failed, hresult is actually a CONFIGRET value");
    }
    v22 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-80LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 10);
  }
  else
  {
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-80LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 10);
    v22 = 0;
  }
LABEL_32:
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  return v22;
}

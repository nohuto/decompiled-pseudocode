/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z @ 0x180014790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180019928 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::RpcCheckDataFlowAccess(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int a3)
{
  __int64 v3; // rsi
  __int64 v7; // r14
  HRESULT v8; // eax
  void *v9; // rdx
  unsigned int v10; // r8d
  int ActivationFactory; // eax
  unsigned int v12; // ebx
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  UINT32 v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  int v25; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v3 = a2;
  if ( a2 )
  {
    if ( a2 != eCapture )
      return 2147942487LL;
    v7 = 1LL;
  }
  else
  {
    *((_DWORD *)this + 64) = 0;
    v7 = 0LL;
  }
  if ( *((_DWORD *)this + v7 + 64) != -2147023728 )
    return *((unsigned int *)this + v7 + 64);
  v8 = CoInitializeEx(0LL, 0);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(retaddr, v9, v10, (const char *)(unsigned int)v8, v22);
    JUMPOUT(0x180014A2DLL);
  }
  v23 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.CapabilityAccess",
         0x32u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &v23);
  v12 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v13 = v23;
    v14 = -1LL;
    v24 = 0LL;
    do
      ++v14;
    while ( aMicrophone[v14] );
    v15 = -1;
    if ( v14 > 0xFFFFFFFF )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    else
      v15 = v14;
    WindowsCreateStringReference(L"microphone", v15, &hstringHeader, &string);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD, int, __int64 *))(*(_QWORD *)v13 + 56LL))(
            v13,
            0LL,
            string,
            *((unsigned int *)this + 50),
            a3,
            &v24);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 2922LL;
      goto LABEL_21;
    }
    v25 = 3;
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 112LL))(v24, &v25);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 2925LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v16);
      v18 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_23;
    }
    *((_DWORD *)this + v3 + 64) = v25 != 3 ? 0x887C0076 : 0;
    v20 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    CoUninitialize();
    return *((unsigned int *)this + v7 + 64);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB62,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_23:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  CoUninitialize();
  return v12;
}

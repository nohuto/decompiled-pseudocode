/*
 * XREFs of ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18005DAB8
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18005DFA0 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007E7C (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005D854 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x18005E680 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RuntimeClassInitialize(MPCRawInputProvider *this, struct IRawInputClient *a2)
{
  struct IRawInputClient *v4; // rcx
  struct IRawInputClient *v5; // rdx
  int v6; // ebx
  int v7; // eax
  void *v8; // rdx
  HANDLE Event; // rbx
  __int64 v10; // r8
  const char *v11; // r9
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  int v16; // eax
  PSRWLOCK v17; // rax
  RTL_SRWLOCK *v18; // rax
  RTL_SRWLOCK *v19; // rdi
  char v20; // bl
  __int128 v22; // [rsp+40h] [rbp-11h]
  __int128 v23; // [rsp+50h] [rbp-1h]
  void **v24; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v25; // [rsp+68h] [rbp+17h]
  __int128 v26; // [rsp+78h] [rbp+27h]
  void ***v27; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = (struct IRawInputClient *)*((_QWORD *)this + 2);
  if ( v4 != a2 )
  {
    v5 = v4;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *, struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2, v4);
      v5 = (struct IRawInputClient *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = (struct IRawInputClient *)*((_QWORD *)this + 2);
    }
  }
  v6 = (*(__int64 (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v4 + 32LL))(v4);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  *((_DWORD *)this + 6) = v6;
  *((_DWORD *)this + 7) = 512;
  *((_DWORD *)this + 252) = v7;
  *((_DWORD *)this + 253) = 0x20000;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::FailFast_GetLastError(retaddr, v8, v10, v11);
    JUMPOUT(0x18005DCF0LL);
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (void **)this + 252,
    Event);
  v12 = (_QWORD *)((char *)this + 2008);
  v13 = *((_QWORD *)this + 251);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = CoreUICreate((char *)this + 2008);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  if ( !*v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v15);
    __debugbreak();
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), MPCRawInputProvider *))(*(_QWORD *)*v12 + 264LL))(
          *v12,
          *((_QWORD *)this + 252),
          MPCRawInputProvider::InputReceivedStatic,
          this);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  *((_BYTE *)this + 2024) = 1;
  *(_QWORD *)&v22 = MPCRawInputProvider::OnCompositorRunningStateChanged;
  DWORD2(v22) = 0;
  *((_QWORD *)&v23 + 1) = this;
  v24 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,void,bool>::`vftable';
  v25 = v22;
  v26 = v23;
  v27 = &v24;
  MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(v17, (__int64)&v24, (unsigned int *)this + 524);
  MPC3DStateHelper::GetInstance();
  v19 = v18;
  AcquireSRWLockShared(v18);
  v20 = BYTE4(v19[2].Ptr);
  ReleaseSRWLockShared(v19);
  if ( v20 )
    MPCRawInputProvider::OnCompositorRunningStateChanged(this, 1);
  return 0LL;
}

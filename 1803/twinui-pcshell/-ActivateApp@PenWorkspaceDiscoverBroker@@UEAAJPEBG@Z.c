/*
 * XREFs of ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x180191AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629_____lambda_5599339c690d67fb68c6b7e13742e629___ @ 0x180190524 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___--CTaskW.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1802FD7E4 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PenWorkspaceDiscoverBroker::ActivateApp(
        PenWorkspaceDiscoverBroker *this,
        const unsigned __int16 *a2)
{
  int IsShellExperience; // eax
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  void *v9; // rbx
  void *v10; // rax
  DWORD CurrentThreadId; // eax
  __int64 v13; // [rsp+40h] [rbp-1h] BYREF
  __int64 v14; // [rsp+48h] [rbp+7h]
  __int64 v15; // [rsp+50h] [rbp+Fh]
  __int64 v16[3]; // [rsp+58h] [rbp+17h] BYREF
  char v17; // [rsp+70h] [rbp+2Fh]
  _QWORD v18[3]; // [rsp+78h] [rbp+37h] BYREF
  char v19; // [rsp+90h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  void *v21; // [rsp+B8h] [rbp+77h] BYREF

  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v4 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v13,
           (__int64)a2,
           0xFFFFFFFFFFFFFFFFuLL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = v14;
      v7 = v15;
      v8 = v13;
      v13 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      v16[1] = v6;
      v16[2] = v7;
      memset(v18, 0, sizeof(v18));
      v16[0] = v8;
      v17 = 0;
      v19 = 1;
      v9 = 0LL;
      v10 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v10 )
        v9 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629_____lambda_5599339c690d67fb68c6b7e13742e629___(
                       (__int64)v10,
                       v16);
      v21 = v9;
      CurrentThreadId = GetCurrentThreadId();
      v4 = Windows::Internal::ComTaskPool::RunTask(
             0,
             0,
             CurrentThreadId,
             0,
             (struct Windows::Internal::IComPoolTask *)v9,
             0LL);
      Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v21);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
      if ( v4 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)(unsigned int)v4);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v5);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
  }
  return (unsigned int)v4;
}

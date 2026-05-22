/*
 * XREFs of ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180084A78
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007E7C (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x1800847A4 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800863E0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  const WCHAR *p_lpValue; // r8
  int v7; // ebx
  MPCInputRouter *v8; // rax
  MPCInputRouter *v9; // rbx
  MPCInputRouter *v10; // rsi
  int v11; // r14d
  __int128 v12; // xmm0
  PSRWLOCK v13; // rax
  RTL_SRWLOCK *v14; // rax
  RTL_SRWLOCK *v15; // rdi
  char v16; // bl
  DWORD pcbData[2]; // [rsp+50h] [rbp-41h] BYREF
  __int128 pvData; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+78h] [rbp-19h]
  LPCWSTR lpValue; // [rsp+80h] [rbp-11h] BYREF
  __m256i v22; // [rsp+88h] [rbp-9h]
  LPCWSTR *v23; // [rsp+B8h] [rbp+27h]

  v20 = -2LL;
  std::wstring::wstring((unsigned __int64 *)&lpValue, L"WaitForDebugger", (__int64)a3);
  pcbData[0] = 4;
  LODWORD(pvData) = 0;
  p_lpValue = (const WCHAR *)&lpValue;
  if ( v22.m256i_i64[2] >= 8uLL )
    p_lpValue = lpValue;
  v7 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Ism3D",
          p_lpValue,
          0x10u,
          0LL,
          &pvData,
          pcbData) )
    v7 = pvData;
  std::wstring::_Tidy_deallocate((unsigned __int64 *)&lpValue);
  if ( v7 )
  {
    while ( !IsDebuggerPresent() )
      Sleep(0x64u);
    __debugbreak();
  }
  if ( a1 && a3 )
  {
    v8 = (MPCInputRouter *)malloc(0x340uLL);
    v9 = v8;
    if ( v8 )
      memset_0(v8, 0, 0x340uLL);
    *(_QWORD *)pcbData = v9;
    if ( v9 )
      v10 = MPCInputRouter::MPCInputRouter(v9, a1, a2);
    else
      v10 = 0LL;
    if ( v10 )
    {
      v11 = DWMInputRouter::Initialize(v10);
      if ( v11 >= 0 )
      {
        *(_QWORD *)pcbData = &lpValue;
        *(_QWORD *)&pvData = MPCInputRouter::On3DCompositorRunningChanged;
        DWORD2(pvData) = 0;
        v22.m256i_i64[2] = (__int64)v10;
        v12 = *(_OWORD *)&v22.m256i_u64[1];
        lpValue = (LPCWSTR)&std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCInputRouter::*)(bool),MPCInputRouter *,std::_Ph<1> const &>,void,bool>::`vftable';
        *(_OWORD *)v22.m256i_i8 = pvData;
        *(_OWORD *)&v22.m256i_u64[2] = v12;
        v23 = &lpValue;
        MPC3DStateHelper::GetInstance();
        MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(v13, (__int64)&lpValue, (unsigned int *)v10 + 201);
        MPC3DStateHelper::GetInstance();
        v15 = v14;
        AcquireSRWLockShared(v14);
        v16 = BYTE4(v15[2].Ptr);
        ReleaseSRWLockShared(v15);
        if ( v16 )
          MPCInputRouter::On3DCompositorRunningChanged(v10, 1);
      }
      if ( v11 >= 0 )
      {
        *a3 = v10;
        return (unsigned int)v11;
      }
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v11 = -2147024809;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v11;
}

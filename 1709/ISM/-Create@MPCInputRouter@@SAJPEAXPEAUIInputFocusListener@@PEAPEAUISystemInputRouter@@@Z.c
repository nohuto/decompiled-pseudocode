/*
 * XREFs of ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800A8B3C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007D08 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800340E8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x1800A8860 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800AA300 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  const WCHAR *p_lpValue; // r8
  int v7; // ebx
  __int64 v8; // rcx
  MPCInputRouter *v9; // rax
  MPCInputRouter *v10; // rbx
  MPCInputRouter *v11; // r14
  int v12; // esi
  int v13; // r9d
  int v14; // eax
  PSRWLOCK v15; // rax
  RTL_SRWLOCK *v16; // rax
  RTL_SRWLOCK *v17; // rdi
  char v18; // bl
  __int128 pvData; // [rsp+50h] [rbp-49h] BYREF
  DWORD pcbData[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v22; // [rsp+68h] [rbp-31h]
  void **lpValue; // [rsp+70h] [rbp-29h] BYREF
  _BYTE lpValue_8[24]; // [rsp+78h] [rbp-21h]
  MPCInputRouter *v25; // [rsp+90h] [rbp-9h]
  void ***v26; // [rsp+A8h] [rbp+Fh]

  v22 = -2LL;
  *(__m128i *)&lpValue_8[8] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(lpValue) = 0;
  std::wstring::assign(&lpValue, L"WaitForDebugger", (__int64)a3);
  pcbData[0] = 4;
  LODWORD(pvData) = 0;
  p_lpValue = (const WCHAR *)&lpValue;
  if ( *(_QWORD *)&lpValue_8[16] >= 8uLL )
    p_lpValue = (const WCHAR *)lpValue;
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
  if ( !a1 || !a3 )
  {
    LOBYTE(v12) = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_32;
    v13 = 108;
LABEL_31:
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v13, v12);
LABEL_32:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v9 = (MPCInputRouter *)malloc(0x350uLL);
  v10 = v9;
  if ( v9 )
    memset(v9, 0, 0x350uLL);
  *(_QWORD *)pcbData = v10;
  if ( v10 )
    v11 = MPCInputRouter::MPCInputRouter(v10, a1, a2);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    LOBYTE(v12) = 14;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_32;
    v13 = 118;
    goto LABEL_31;
  }
  v14 = DWMInputRouter::Initialize(v11);
  v12 = v14;
  if ( v14 >= 0 )
  {
    *(_QWORD *)pcbData = &lpValue;
    *(_QWORD *)&pvData = MPCInputRouter::On3DCompositorRunningChanged;
    DWORD2(pvData) = 0;
    lpValue = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCInputRouter::*)(bool),MPCInputRouter *,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
    *(_OWORD *)lpValue_8 = pvData;
    lpValue_8[16] = 0;
    v25 = v11;
    v26 = &lpValue;
    MPC3DStateHelper::GetInstance();
    MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(v15, (__int64)&lpValue, (_DWORD *)v11 + 204);
    MPC3DStateHelper::GetInstance();
    v17 = v16;
    AcquireSRWLockShared(v16);
    v18 = BYTE4(v17[2].Ptr);
    ReleaseSRWLockShared(v17);
    if ( v18 )
      MPCInputRouter::On3DCompositorRunningChanged(v11, 1);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 66, v14);
  }
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_32;
    v13 = 121;
    goto LABEL_31;
  }
  *a3 = v11;
  return (unsigned int)v12;
}

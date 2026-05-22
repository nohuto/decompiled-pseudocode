/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8
 * Callers:
 *     CreateSystemInputHost @ 0x180003DA0 (CreateSystemInputHost.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180005FC0 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800063BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180013740 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18001A088 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18007B310 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180084A78 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x1800E262C (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, struct IDWMInputProxy *a2)
{
  struct ISystemInputRouter **v3; // rdi
  int v4; // eax
  const char *v5; // r9
  struct ISystemInputRouter **v6; // r14
  struct ISystemInputRouter *v7; // rcx
  int v8; // esi
  int v9; // ebx
  DWMInputRouter *v10; // rax
  DWMInputRouter *v11; // rbx
  DWMInputRouter *v12; // rbp
  struct ISystemInputRouter *v13; // rcx
  struct ISystemInputRouter *v14; // rbp
  InputStateManager *v15; // rax
  InputStateManager *v16; // rbx
  int v17; // eax
  const char *v18; // r9
  struct ISystemInputRouter *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  DWMInputRouter *v25; // [rsp+70h] [rbp+18h]

  v3 = (struct ISystemInputRouter **)OneCoreUAPInputHost::s_pInputHost;
  v24 = 0LL;
  v4 = CoreUICreate(&v24);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *, bool, struct _FILETIME *), struct ISystemInputRouter **))(*(_QWORD *)v24 + 248LL))(
    v24,
    OneCoreUAPInputHost::DeferredInitializeStatic,
    v3);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v5);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    MITSetInputCallbacks(Win32kInterop::s_DeviceNotificationsCallback);
  v6 = v3 + 5;
  v7 = v3[5];
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *v6 = 0LL;
  v8 = -2147024809;
  if ( (unsigned __int8)IsGetMPCInputPostProcessorPresent(v7) )
  {
    v9 = MPCInputRouter::Create(
           a2,
           (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL)),
           v3 + 5);
  }
  else if ( a2 )
  {
    v10 = (DWMInputRouter *)malloc(0x2C8uLL);
    v11 = v10;
    if ( v10 )
      memset_0(v10, 0, 0x2C8uLL);
    v25 = v11;
    if ( v11 )
      v12 = DWMInputRouter::DWMInputRouter(
              v11,
              a2,
              (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL)));
    else
      v12 = 0LL;
    if ( v12 )
    {
      v9 = DWMInputRouter::Initialize(v12);
      if ( v9 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v12 + 9) + 24LL))((__int64)v12 + 72, 1LL);
      else
        *v6 = v12;
    }
    else
    {
      v9 = -2147024882;
    }
  }
  else
  {
    v9 = -2147024809;
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v13 = v3[6];
  if ( v13 )
  {
    v3[6] = 0LL;
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *v6;
  if ( *v6 )
  {
    v15 = (InputStateManager *)malloc(0x2078uLL);
    v16 = v15;
    if ( v15 )
      memset_0(v15, 0, 0x2078uLL);
    if ( v16 )
      v16 = InputStateManager::InputStateManager(v16, v14);
    if ( v16 )
    {
      v8 = InputStateManager::Initialize(v16);
      if ( v8 >= 0 )
        v3[6] = v16;
    }
    else
    {
      v8 = -2147024882;
    }
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v17 = InputProviderManager::InitializeHelper(v3 + 7, v3[6], 0LL);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v18);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v19 = v3[10];
    if ( v19 )
    {
      v3[10] = 0LL;
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = Win32kInterop::Create(v3[6], *v6, v3 + 10);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v20);
      JUMPOUT(0x1800043F2LL);
    }
  }
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}

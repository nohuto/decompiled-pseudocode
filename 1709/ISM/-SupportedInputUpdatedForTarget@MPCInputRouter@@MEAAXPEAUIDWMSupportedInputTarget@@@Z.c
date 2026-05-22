/*
 * XREFs of ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800AA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z @ 0x18005DFF8 (-OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::SupportedInputUpdatedForTarget(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IDWMSupportedInputTarget *, GUID *, __int64 *))
{
  int v3; // eax
  __int64 (__fastcall **v4)(struct IDWMSupportedInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v9[1] = -2LL;
  if ( MPCManager::s_instance )
  {
    v11 = 0;
    v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IDWMSupportedInputTarget *, GUID *, __int64 *), int *))(*a2)[5])(
           a2,
           &v11);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x334,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    if ( (v11 & 0x18040) != 0 )
    {
      v9[0] = 0LL;
      v4 = *a2;
      v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(v9);
      v6 = (*v4)((struct IDWMSupportedInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v5);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x33A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      v12 = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9[0] + 32LL))(v9[0], &v12);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x33E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      if ( v12 )
        MPCManager::OnGamepadIsSupportedForProcess(MPCManager::s_instance, v12);
      v8 = v9[0];
      if ( v9[0] )
      {
        v9[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
}

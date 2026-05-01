/*
 * XREFs of ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x180100AA0
 * Callers:
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1800FBD90 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF238 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_EnableSystemVisuals(
        HolographicPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        unsigned int a3)
{
  int (__fastcall **v5)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  HolographicPositioner *v12; // rcx
  __int64 v13; // rcx
  HolographicPositioner *v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HolographicPositioner *v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF

  v18 = this;
  v20 = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
  if ( (*v5)((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v6) < 0 )
    goto LABEL_16;
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HolographicPositioner **))(*(_QWORD *)v20 + 24LL))(v20, &v18);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v19 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(HolographicPositioner *, GUID *, __int64 *))v18)(
           v18,
           &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
           &v19);
    v8 = v9;
    if ( v9 < 0 )
    {
      v10 = 1938LL;
      goto LABEL_8;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 64LL))(v19, a3);
    v8 = v9;
    if ( v9 < 0 )
    {
      v10 = 1942LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      goto LABEL_10;
    }
    (*(void (__fastcall **)(HolographicPositioner *, bool))(*(_QWORD *)v18 + 240LL))(v18, a3 != 1);
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v14 + 16LL))(v14);
    }
LABEL_16:
    v8 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x78F,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  v12 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_17:
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v8;
}

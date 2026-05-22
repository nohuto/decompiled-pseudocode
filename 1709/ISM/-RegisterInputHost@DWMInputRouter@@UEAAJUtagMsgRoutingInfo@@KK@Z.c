/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800191F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800198FC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x180019E84 (-InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x18001EAE0 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x18001EC18 (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z @ 0x180021364 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterInputHost(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // esi
  int v9; // eax
  __int64 v10; // rcx
  struct IInputTarget *v11; // rcx
  struct IInputTarget *v12; // rdi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  struct IInputTarget *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IInputTarget **); // rcx
  unsigned int v21; // edi
  unsigned int v22; // r15d
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  struct IInputTarget *v31; // rcx
  struct IInputTarget *v32; // rcx
  struct IInputTarget *v34; // rdi
  int v35; // eax
  struct IInputTarget *v36; // rcx
  struct IInputTarget *v37; // [rsp+40h] [rbp-38h] BYREF
  struct IInputTarget *v38; // [rsp+48h] [rbp-30h] BYREF
  int v39; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-24h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-18h] BYREF
  struct IInputTarget *v43; // [rsp+68h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v5 = 0;
  if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(a1 + 24) )
    return v5;
  v37 = 0LL;
  v9 = DWMInputTarget::Create((const struct tagMsgRoutingInfo *)a2, 0LL, a3, a4, &v37);
  v5 = v9;
  if ( v9 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 770, v9);
    v11 = v37;
    if ( !v37 )
      return v5;
LABEL_42:
    v17 = *(_QWORD *)v11;
LABEL_43:
    (*(void (__fastcall **)(struct IInputTarget *))(v17 + 16))(v11);
    return v5;
  }
  v12 = v37;
  v38 = 0LL;
  v13 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IInputTarget **))v37)(
          v37,
          &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
          &v38);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x305,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, struct IInputTarget *))(*(_QWORD *)(a1 - 56) + 144LL))(a1 - 56, v38);
  v14 = DWMInputRouter::InformTargetOfAttachedDevices((DWMInputRouter *)(a1 - 56), v12);
  v5 = v14;
  if ( v14 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 783, v14);
    v16 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = *(_QWORD *)v12;
    v11 = v12;
    goto LABEL_43;
  }
  v42 = (unsigned __int64)v12;
  v18 = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(a1 + 24, a2, &v42);
  v5 = v18;
  if ( v18 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 787, v18);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( !*(_QWORD *)(a1 + 184) )
  {
LABEL_40:
    v11 = v38;
    if ( !v38 )
      return v5;
    v38 = 0LL;
    goto LABEL_42;
  }
  v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))(a1 + 184);
  v21 = *(_DWORD *)a2;
  v22 = *(_DWORD *)(a2 + 4);
  v39 = 0;
  v37 = 0LL;
  v23 = (**v20)(v20, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v37);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x325,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  v24 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v37 + 32LL))(v37, &v39);
  if ( v24 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x327,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  if ( v21 != v39 )
  {
LABEL_38:
    v36 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v36 + 16LL))(v36);
    }
    goto LABEL_40;
  }
  v41 = 0;
  v40 = 0;
  v42 = 0LL;
  v25 = *(_QWORD *)v37;
  v43 = 0LL;
  v26 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(v25 + 48))(v37, &v41);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x334,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
  v27 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v37 + 56LL))(v37, &v40);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x336,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  v28 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)v37 + 64LL))(v37, &v42);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x338,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v29 = DWMInputRouter::CreateAndRegisterTarget((DWMInputRouter *)(a1 - 56), v21, v22, v41, v40, v42, &v43);
  v30 = v29;
  if ( v29 >= 0 )
  {
    v34 = v43;
    v35 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *))(*(_QWORD *)(a1 - 56) + 136LL))(a1 - 56, v43);
    if ( v35 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x343,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v35);
      JUMPOUT(0x1800195FALL);
    }
    if ( v34 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v34 + 16LL))(v34);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x340,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v29);
  if ( v43 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v43 + 16LL))(v43);
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return v30;
}

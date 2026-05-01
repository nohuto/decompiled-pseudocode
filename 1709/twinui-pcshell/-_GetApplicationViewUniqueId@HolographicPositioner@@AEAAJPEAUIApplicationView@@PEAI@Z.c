/*
 * XREFs of ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x180100750
 * Callers:
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF94C (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_GetApplicationViewUniqueId(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  HolographicPositioner *v9; // rcx
  HolographicPositioner *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  HolographicPositioner *v16; // [rsp+60h] [rbp+28h] BYREF
  HolographicPositioner *v17; // [rsp+68h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+38h] BYREF
  struct IApplicationView *v19; // [rsp+78h] [rbp+40h]

  v16 = this;
  *a3 = 0;
  v19 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v18 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
         &v18) < 0 )
  {
    v16 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, HolographicPositioner **))a2)(
            a2,
            &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
            &v16);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(HolographicPositioner *, HolographicPositioner **))(*(_QWORD *)v16 + 24LL))(
              v16,
              &v17);
      v6 = v11;
      if ( v11 >= 0 )
      {
        *a3 = (unsigned int)v17;
        v6 = 0;
        goto LABEL_20;
      }
      v12 = 1890LL;
    }
    else
    {
      v12 = 1887LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v11);
LABEL_20:
    v10 = v16;
    if ( !v16 )
      goto LABEL_23;
    v16 = 0LL;
    goto LABEL_22;
  }
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HolographicPositioner **))(*(_QWORD *)v18 + 24LL))(v18, &v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v16 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(HolographicPositioner *, GUID *, HolographicPositioner **))v17)(
           v17,
           &GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8,
           &v16);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(HolographicPositioner *, unsigned int *))(*(_QWORD *)v16 + 48LL))(v16, a3);
      v6 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x759,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v8);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x757,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
    }
    v9 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x754,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
  }
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
LABEL_22:
    (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_23:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  return v6;
}

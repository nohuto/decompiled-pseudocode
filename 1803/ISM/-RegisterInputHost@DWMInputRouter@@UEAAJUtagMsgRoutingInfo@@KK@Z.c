/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18007D530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x1800182F4 (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x180081704 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800817FC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterInputHost(__int64 a1, unsigned int *a2, int a3, int a4)
{
  __int64 v4; // r13
  int Helper; // esi
  unsigned int *v8; // r15
  void (*v9)(void); // rax
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v12; // r12
  __int64 (__fastcall **v13)(_QWORD *, GUID *, unsigned int *); // rax
  unsigned __int64 v14; // r15
  _QWORD *v15; // r13
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // r10
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 (__fastcall **v23)(_QWORD *, GUID *, unsigned int *); // rax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, unsigned int **); // rcx
  unsigned int v25; // edi
  unsigned int v26; // r14d
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // edi
  unsigned int *v37; // rcx
  _QWORD *v38; // rcx
  struct IInputTarget *v40; // rdi
  int v41; // eax
  unsigned int *v42; // rcx
  _QWORD *v43; // rcx
  unsigned int *v44; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v45[2]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v46; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v47[2]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp+7h] BYREF
  int v49; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v50; // [rsp+7Ch] [rbp+13h] BYREF
  unsigned int v51; // [rsp+80h] [rbp+17h] BYREF
  struct IInputTarget *v52; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a1;
  *(_QWORD *)v47 = a1;
  v44 = a2;
  Helper = 0;
  v8 = a2;
  if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(a1 + 32) )
    return (unsigned int)Helper;
  *(_QWORD *)v45 = 0LL;
  v48 = 0LL;
  Helper = DWMInputTarget::CreateHelper((__int64)v8, (__int64 *)&v48, a3, a4, v45);
  if ( Helper < 0 )
  {
    if ( !*(_QWORD *)v45 )
      return (unsigned int)Helper;
    v9 = *(void (**)(void))(**(_QWORD **)v45 + 16LL);
    goto LABEL_70;
  }
  v10 = *(_QWORD **)v45;
  v46 = 0LL;
  v11 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))v45)(
          *(_QWORD *)v45,
          &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
          &v46);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x297,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = v4 - 56;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v4 - 56) + 120LL))(v4 - 56, v46);
  v13 = (__int64 (__fastcall **)(_QWORD *, GUID *, unsigned int *))*v10;
  *(_QWORD *)v45 = 0LL;
  Helper = (*v13)(v10, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, v45);
  if ( Helper < 0 )
  {
LABEL_7:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    goto LABEL_34;
  }
  if ( !*(_QWORD *)v45 )
  {
    Helper = -2147418113;
    goto LABEL_7;
  }
  v14 = *(unsigned int *)(v12 + 244);
  Helper = 0;
  if ( !(_DWORD)v14 )
    goto LABEL_33;
  v15 = operator new[](saturated_mul(v14, 8uLL));
  if ( !v15 )
  {
    Helper = -2147024882;
LABEL_15:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    goto LABEL_32;
  }
  v16 = 0LL;
  v17 = 0;
  if ( !*(_DWORD *)(v12 + 240) )
    goto LABEL_27;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v12 + 232);
    if ( *(_DWORD *)(v18 + 16LL * v17) != *(_DWORD *)(v12 + 248) )
      break;
LABEL_22:
    if ( ++v17 >= *(_DWORD *)(v12 + 240) )
      goto LABEL_27;
  }
  if ( (_DWORD)v16 != (_DWORD)v14 )
  {
    v19 = (unsigned int)v16;
    v16 = (unsigned int)(v16 + 1);
    v15[v19] = *(_QWORD *)(v18 + 16LL * v17 + 8);
    goto LABEL_22;
  }
  Helper = -2147024809;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_27:
  if ( Helper < 0 )
    goto LABEL_15;
  v20 = 0;
  while ( 1 )
  {
    Helper = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)v45 + 24LL))(
               *(_QWORD *)v45,
               v15[v20],
               v16);
    if ( Helper < 0 )
      break;
    if ( ++v20 >= (unsigned int)v14 )
    {
      operator delete(v15);
      break;
    }
  }
LABEL_32:
  v4 = *(_QWORD *)v47;
LABEL_33:
  v8 = v44;
LABEL_34:
  v21 = *(_QWORD *)v45;
  if ( *(_QWORD *)v45 )
  {
    *(_QWORD *)v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( Helper >= 0 )
  {
    v48 = (unsigned __int64)v10;
    Helper = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(v4 + 32, v8, &v48);
    if ( Helper >= 0 )
    {
      v24 = *(__int64 (__fastcall ****)(_QWORD, GUID *, unsigned int **))(v4 + 216);
      if ( v24 )
      {
        v25 = *v8;
        v26 = v8[1];
        v49 = 0;
        v44 = 0LL;
        v27 = (**v24)(v24, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v44);
        if ( v27 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2B7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v27);
          __debugbreak();
        }
        v28 = (*(__int64 (__fastcall **)(unsigned int *, int *))(*(_QWORD *)v44 + 32LL))(v44, &v49);
        if ( v28 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2B9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v28);
          __debugbreak();
        }
        if ( v25 == v49 )
        {
          v45[0] = 0;
          v47[0] = 0;
          v48 = 0LL;
          v51 = 0;
          v50 = 0;
          v29 = *(_QWORD *)v44;
          v52 = 0LL;
          v30 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(v29 + 48))(v44, v45);
          if ( v30 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2C8,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v30);
            __debugbreak();
          }
          v31 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(*(_QWORD *)v44 + 56LL))(v44, v47);
          if ( v31 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2CA,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v31);
            __debugbreak();
          }
          v32 = (*(__int64 (__fastcall **)(unsigned int *, unsigned __int64 *))(*(_QWORD *)v44 + 64LL))(v44, &v48);
          if ( v32 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2CC,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v32);
            __debugbreak();
          }
          v33 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(*(_QWORD *)v44 + 72LL))(v44, &v51);
          if ( v33 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2CE,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v33);
            __debugbreak();
          }
          v34 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(*(_QWORD *)v44 + 80LL))(v44, &v50);
          if ( v34 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2D0,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v34);
            __debugbreak();
          }
          v35 = DWMInputRouter::CreateAndRegisterTarget(
                  (DWMInputRouter *)v12,
                  v25,
                  v26,
                  v45[0],
                  v47[0],
                  v48,
                  v51,
                  v50,
                  &v52);
          v36 = v35;
          if ( v35 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2DA,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v35);
            if ( v52 )
              (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v52 + 16LL))(v52);
            v37 = v44;
            if ( v44 )
            {
              v44 = 0LL;
              (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v37 + 16LL))(v37);
            }
            v38 = v46;
            if ( v46 )
            {
              v46 = 0LL;
              (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
            }
            return v36;
          }
          v40 = v52;
          v41 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *))(*(_QWORD *)v12 + 112LL))(v12, v52);
          if ( v41 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2DD,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v41);
            JUMPOUT(0x18007DAE7LL);
          }
          if ( v40 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v40 + 16LL))(v40);
        }
        v42 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    else
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
    v43 = v46;
    if ( !v46 )
      return (unsigned int)Helper;
    v46 = 0LL;
    v23 = (__int64 (__fastcall **)(_QWORD *, GUID *, unsigned int *))*v43;
LABEL_69:
    v9 = (void (*)(void))v23[2];
LABEL_70:
    v9();
    return (unsigned int)Helper;
  }
  v22 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
  }
  if ( v10 )
  {
    v23 = (__int64 (__fastcall **)(_QWORD *, GUID *, unsigned int *))*v10;
    goto LABEL_69;
  }
  return (unsigned int)Helper;
}

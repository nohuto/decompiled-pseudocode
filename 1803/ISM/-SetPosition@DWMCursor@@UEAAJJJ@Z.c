/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18008B220
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007E1C (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, int a2, int a3)
{
  int v6; // ebx
  const char *v7; // r9
  PSRWLOCK v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  int v14; // eax
  PSRWLOCK v15; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  int v21[2]; // [rsp+38h] [rbp-48h] BYREF
  int v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+44h] [rbp-3Ch] BYREF
  int v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  _DWORD v26[6]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v25 = -2LL;
  *((_DWORD *)this + 22) = a2;
  *((_DWORD *)this + 23) = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9), 2LL);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         2LL,
         1LL);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v7);
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v10,
      (void *)0xE8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_20;
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  MPC3DStateHelper::GetInstance();
  if ( !MPC3DStateHelper::GetPostProcessor(v8) )
    return (unsigned int)v6;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  *(_QWORD *)v21 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**(_QWORD **)(*((_QWORD *)this + 4) + 1472LL)
                                                                        + 64LL))(
         *(_QWORD *)(*((_QWORD *)this + 4) + 1472LL),
         0LL,
         0LL,
         0LL,
         v21);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_19;
  v20 = 0LL;
  if ( *(_QWORD *)v21
    && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v21)(
         *(_QWORD *)v21,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v20) >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 32LL))(v20, &v22);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v23);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xEE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 48LL))(v20, &v24);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xEF,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      goto LABEL_13;
    }
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0xED,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
LABEL_13:
  v26[0] = v22;
  v26[1] = v23;
  v26[2] = v24;
  v26[3] = a2;
  v26[4] = a3;
  MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(v15);
  v6 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *))(*(_QWORD *)PostProcessor + 56LL))(
         PostProcessor,
         v26);
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *(_QWORD *)v21;
  if ( *(_QWORD *)v21 )
  {
    *(_QWORD *)v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v6;
}

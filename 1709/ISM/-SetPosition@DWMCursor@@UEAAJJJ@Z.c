/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180026DF0
 * Callers:
 *     ?SetPosition@DWMHardwareCursor@@UEAAJJJ@Z @ 0x180028990 (-SetPosition@DWMHardwareCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007CD8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, int a2, int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  const char *v10; // r9
  PSRWLOCK v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  PSRWLOCK v16; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  int v24[2]; // [rsp+38h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+44h] [rbp-3Ch] BYREF
  int v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-30h]
  _DWORD v29[6]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = -2LL;
  *((_DWORD *)this + 24) = a2;
  *((_DWORD *)this + 25) = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), 2LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 40LL))(
           *((_QWORD *)this + 10),
           2LL,
           1LL);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v8;
      v9 = 213;
      goto LABEL_4;
    }
    if ( !ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x20,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        v10);
      __debugbreak();
    }
    if ( !*(_BYTE *)ISMTestMode::s_instance )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9));
      v8 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v8;
        v9 = 217;
        goto LABEL_4;
      }
    }
    MPC3DStateHelper::GetInstance();
    if ( MPC3DStateHelper::GetPostProcessor(v11) )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      *(_QWORD *)v24 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**(_QWORD **)(*((_QWORD *)this + 5)
                                                                                           + 1480LL)
                                                                             + 64LL))(
              *(_QWORD *)(*((_QWORD *)this + 5) + 1480LL),
              0LL,
              0LL,
              0LL,
              v24);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xEA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      v23 = 0LL;
      if ( *(_QWORD *)v24
        && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v24)(
             *(_QWORD *)v24,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v23) >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 32LL))(v23, &v25);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xEF,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 40LL))(v23, &v26);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xF0,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
        v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v27);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xF1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
            (const char *)(unsigned int)v15);
          __debugbreak();
        }
      }
      v29[0] = v25;
      v29[1] = v26;
      v29[2] = v27;
      v29[3] = a2;
      v29[4] = a3;
      MPC3DStateHelper::GetInstance();
      PostProcessor = MPC3DStateHelper::GetPostProcessor(v16);
      v18 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *))(*(_QWORD *)PostProcessor + 56LL))(
              PostProcessor,
              v29);
      v8 = v18;
      if ( v18 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 252, v18);
      v20 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 )
      {
        *(_QWORD *)v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 212;
LABEL_4:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v9, v6);
  }
  return v8;
}

/*
 * XREFs of ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003C950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180016A30 (-GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z.c)
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004C330 (-GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::OnTitleBarDrawnByAppUpdated(CApplicationManager *this, HWND a2)
{
  int v4; // ebx
  CImmersiveApp *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // esi
  __int64 (__fastcall *v10)(_QWORD, HWND *, _QWORD); // rax
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, CImmersiveApp **); // rcx
  __int64 (__fastcall *v15)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **); // rax
  int FrameInternal; // eax
  CImmersiveApp *v17; // rcx
  __int64 (__fastcall *v18)(CApplicationFrameWrapper *, struct IApplicationFrameTitleBar **); // rax
  int TitleBar; // eax
  int v20; // eax
  struct IApplicationFrameTitleBar *v21; // rcx
  CApplicationFrameWrapper *v22; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  _QWORD v26[5]; // [rsp+20h] [rbp-40h] BYREF
  HWND v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  CImmersiveApp *v30; // [rsp+A0h] [rbp+40h] BYREF
  struct IApplicationFrameTitleBar *v31; // [rsp+B0h] [rbp+50h] BYREF
  CApplicationFrameWrapper *v32; // [rsp+B8h] [rbp+58h] BYREF

  v26[1] = -2LL;
  v4 = -2147467261;
  v32 = 0LL;
  if ( !*((_QWORD *)this + 32) )
    goto LABEL_43;
  v30 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v30 = 0LL;
  v26[2] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 36) )
  {
    v26[3] = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 35) + 8 * v7);
      v26[4] = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = -1;
      v26[0] = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD *))v8)(v8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v26) >= 0 )
      {
        v27 = a2;
        v28 = 0LL;
        v10 = *(__int64 (__fastcall **)(_QWORD, HWND *, _QWORD))(*(_QWORD *)v26[0] + 296LL);
        v11 = (char *)v10 == (char *)CImmersiveApp::MatchByWindow
            ? CImmersiveApp::MatchByWindow(v26[0], &v27, 0LL)
            : v10(v26[0], &v27, 0LL);
        v9 = (v11 != 0) - 1;
        v12 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      v13 = v26[0];
      if ( v26[0] )
      {
        v26[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( !v9 )
        break;
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 36) )
        goto LABEL_37;
    }
    v6 = v7;
    v4 = 0;
  }
  else
  {
LABEL_37:
    v4 = -2147319765;
  }
  if ( v4 >= 0 )
  {
    v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, CImmersiveApp **))(*((_QWORD *)this + 35) + 8 * v6);
    v4 = (**v14)(v14, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v30);
    if ( v4 >= 0 )
    {
      v15 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **))(*(_QWORD *)v30 + 496LL);
      if ( v15 == CImmersiveApp::GetFrameInternal )
        FrameInternal = CImmersiveApp::GetFrameInternal(v30, &v32);
      else
        FrameInternal = v15(v30, &v32);
      v4 = FrameInternal;
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v4 < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F40,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v4,
      v26[0]);
    goto LABEL_32;
  }
  v31 = 0LL;
  v18 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, struct IApplicationFrameTitleBar **))(*(_QWORD *)v32
                                                                                                  + 144LL);
  if ( v18 == CApplicationFrameWrapper::GetTitleBar )
    TitleBar = CApplicationFrameWrapper::GetTitleBar(v32, &v31);
  else
    TitleBar = v18(v32, &v31);
  v4 = TitleBar;
  if ( TitleBar < 0 )
  {
    v24 = (unsigned int)TitleBar;
    v25 = 8003LL;
  }
  else
  {
    v20 = (*(__int64 (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v31 + 88LL))(v31);
    v4 = v20;
    if ( v20 >= 0 )
    {
      v4 = 0;
      goto LABEL_30;
    }
    v24 = (unsigned int)v20;
    v25 = 8004LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v24,
    v26[0]);
LABEL_30:
  v21 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_32:
  v22 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(CApplicationFrameWrapper *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v4;
}

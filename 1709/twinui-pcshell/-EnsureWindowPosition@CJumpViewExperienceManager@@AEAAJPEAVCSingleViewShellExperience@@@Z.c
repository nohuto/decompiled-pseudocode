/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE618
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE000 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800BEAE4 (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x1800BECA0 (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int MonitorInformation; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // esi
  struct tagRECT v18; // xmm6
  int v19; // ebx
  int v20; // edi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+48h] [rbp-89h] BYREF
  int v26; // [rsp+50h] [rbp-81h]
  __int64 v27; // [rsp+58h] [rbp-79h] BYREF
  __int64 v28; // [rsp+60h] [rbp-71h] BYREF
  struct tagPOINT v29; // [rsp+68h] [rbp-69h] BYREF
  __int64 v30; // [rsp+70h] [rbp-61h] BYREF
  int nNumerator; // [rsp+78h] [rbp-59h] BYREF
  __int64 v32; // [rsp+80h] [rbp-51h]
  struct tagRECT v33; // [rsp+88h] [rbp-49h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-31h]
  struct tagRECT v35; // [rsp+A8h] [rbp-29h] BYREF
  _BYTE v36[24]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v32 = -2LL;
  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v28 = 0LL;
  MonitorInformation = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
                         *((_QWORD *)a2 + 4),
                         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
                         &v28);
  v5 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v25 = 0LL;
    v26 = 0;
    v7 = v28;
    v29 = (struct tagPOINT)&v25;
    v30 = 0LL;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)&v33,
           (const WCHAR **)&JumpViewExperienceEvents::Param_Position);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, *(_QWORD *)(v8 + 24), &v30);
    v34 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v29);
    if ( v5 < 0 )
    {
      v9 = 645LL;
      goto LABEL_13;
    }
    v29 = 0LL;
    v27 = 0LL;
    if ( v26 != 7 )
    {
      v5 = -2147316576;
      if ( v26 < 0 )
        v5 = v26;
      goto LABEL_12;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 184LL))(v25, &v27);
    if ( v5 < 0 )
    {
LABEL_12:
      v9 = 648LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      v10 = v25;
      if ( !v25 )
        goto LABEL_54;
LABEL_27:
      if ( ((v26 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      goto LABEL_54;
    }
    v29.x = (int)*(float *)&v27;
    v29.y = (int)*((float *)&v27 + 1);
    if ( v25 && ((v26 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
    v26 = 0;
    v11 = v28;
    *(_QWORD *)&v33.left = &v25;
    *(_QWORD *)&v33.right = 0LL;
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v36,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, LONG *))(*(_QWORD *)v11 + 48LL))(
           v11,
           *(_QWORD *)(v12 + 24),
           &v33.right);
    v37 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v33);
    if ( v5 < 0 )
    {
      v13 = 657LL;
      goto LABEL_26;
    }
    LODWORD(v27) = 0;
    if ( v26 != 7 )
    {
      v5 = -2147316576;
      if ( v26 < 0 )
        v5 = v26;
      goto LABEL_25;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 88LL))(v25, &v27);
    v14 = v27;
    if ( v5 < 0 )
    {
LABEL_25:
      v13 = 660LL;
      goto LABEL_26;
    }
    if ( v25 && ((v26 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
    v25 = 0LL;
    v26 = 0;
    v15 = v28;
    *(_QWORD *)&v33.left = &v25;
    *(_QWORD *)&v33.right = 0LL;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v36,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, LONG *))(*(_QWORD *)v15 + 48LL))(
           v15,
           *(_QWORD *)(v16 + 24),
           &v33.right);
    v37 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v33);
    if ( v5 < 0 )
    {
      v13 = 667LL;
      goto LABEL_26;
    }
    LODWORD(v27) = 0;
    if ( v26 != 7 )
    {
      v5 = -2147316576;
      if ( v26 < 0 )
        v5 = v26;
      goto LABEL_39;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 88LL))(v25, &v27);
    v17 = v27;
    if ( v5 < 0 )
    {
LABEL_39:
      v13 = 670LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      v10 = v25;
      if ( !v25 )
        goto LABEL_54;
      goto LABEL_27;
    }
    if ( v25 && ((v26 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v29,
                           &v33,
                           (unsigned int *)&nNumerator,
                           (CJumpViewExperienceManager *)((char *)this + 464));
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v6 = 679LL;
      goto LABEL_4;
    }
    v18 = v33;
    *((struct tagRECT *)this + 30) = v33;
    v19 = nNumerator;
    v20 = MulDiv((int)*((float *)a2 + 11), nNumerator, 96);
    v21 = MulDiv((int)*((float *)a2 + 12), v19, 96);
    if ( v20 <= 0 || v21 <= 0 )
    {
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)0x80070057LL);
      goto LABEL_54;
    }
    v33 = v18;
    MonitorInformation = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))CJumpViewExperienceManager::CalcWindowPosition)(
                           &v33,
                           v29,
                           (unsigned int)v20,
                           (unsigned int)v21,
                           v14,
                           v17,
                           &v35);
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v6 = 692LL;
      goto LABEL_4;
    }
    MonitorInformation = CSingleViewShellExperience::SetPosition(a2, &v35);
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v6 = 693LL;
      goto LABEL_4;
    }
    v22 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return 0LL;
  }
  v6 = 642LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)MonitorInformation);
LABEL_54:
  v23 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v5;
}

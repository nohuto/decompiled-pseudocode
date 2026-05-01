/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180043F90
 * Callers:
 *     ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180026B10 (-HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z.c)
 * Callees:
 *     ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18008B7A0 (-BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORM.c)
 *     ?IsDesktopVisible@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x18008EF20 (-IsDesktopVisible@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800900A4 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *const a2)
{
  unsigned __int64 v4; // r14
  int v5; // ebx
  bool v6; // al
  int v7; // ecx
  signed int ApartmentId; // ebx
  int v9; // edi
  bool v10; // r15
  __int64 v11; // r12
  __int64 (__fastcall *v12)(CPerMonitorDesktopVisibilityService *__hidden, struct IImmersiveMonitor *, int *); // rax
  int v13; // eax
  CPerMonitorDesktopVisibilityService *v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  CImmersiveApplicationTransitionHelper *v17; // rcx
  __int64 (__fastcall *v18)(CImmersiveApplicationTransitionHelper *__hidden, const struct APP_TRANSITION_INFORMATION *const); // rax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _BYTE *v24; // rcx
  int cchValue; // [rsp+28h] [rbp-E0h]
  unsigned int v26[2]; // [rsp+38h] [rbp-D0h] BYREF
  CPerMonitorDesktopVisibilityService *v27; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v28; // [rsp+48h] [rbp-C0h]
  _QWORD v29[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+6Ch] [rbp-9Ch]
  __int64 v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  _BYTE *v35; // [rsp+88h] [rbp-80h]
  bool v36; // [rsp+90h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-70h]
  unsigned __int64 v38; // [rsp+A0h] [rbp-68h]
  signed int v39; // [rsp+A8h] [rbp-60h]
  _BYTE v40[24]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v41[80]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR Filename[264]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v37 = -2LL;
  v4 = ((unsigned __int64)this + 144) & -(__int64)(this != (CApplicationManager *)240);
  v38 = v4;
  v5 = *(_DWORD *)(v4 + 0x2C);
  v6 = v5 == 2;
  if ( v5 == 2 )
  {
LABEL_5:
    if ( !v6 )
      goto LABEL_6;
    goto LABEL_38;
  }
  v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
  {
LABEL_3:
    if ( v7 != 1 )
    {
LABEL_4:
      v6 = 0;
      goto LABEL_5;
    }
    goto LABEL_38;
  }
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v20 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v20;
  }
  else
  {
    v20 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v20 != 1 )
    goto LABEL_4;
  if ( v5 == 1 )
  {
    v21 = IsAppCompatModeEnabled(16LL);
    v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v21 )
      v7 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v7;
    goto LABEL_3;
  }
LABEL_38:
  if ( *(_DWORD *)(v4 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v26);
    if ( ApartmentId >= 0 && v26[0] != *(_DWORD *)(v4 + 40) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_7;
    }
  }
LABEL_6:
  ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
LABEL_7:
  v39 = ApartmentId;
  v9 = *((_DWORD *)a2 + 4);
  if ( (v9 != 1 && *((_DWORD *)a2 + 4) != 8 || v9 == 1 || *((_QWORD *)this + 33)) && *((_QWORD *)this + 38) )
  {
    v10 = 0;
    v11 = 0LL;
    v28 = 0LL;
    memset_0(v41, 0, 0x48uLL);
    if ( v9 == 1 || v9 == 8 )
    {
      if ( v9 == 1 )
      {
        v10 = 1;
        v27 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, CPerMonitorDesktopVisibilityService **))(**((_QWORD **)this + 39) + 88LL))(
               *((_QWORD *)this + 39),
               *((_QWORD *)this + 30),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v27) >= 0 )
        {
          v12 = *(__int64 (__fastcall **)(CPerMonitorDesktopVisibilityService *__hidden, struct IImmersiveMonitor *, int *))(*(_QWORD *)v27 + 24LL);
          v13 = v12 == CPerMonitorDesktopVisibilityService::IsDesktopVisible
              ? CPerMonitorDesktopVisibilityService::IsDesktopVisible(v27, 0LL, (int *)v26)
              : v12(v27, 0LL, (int *)v26);
          if ( v13 >= 0 )
            v10 = v26[0] != 0;
        }
        v14 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(CPerMonitorDesktopVisibilityService *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 280LL))(*((_QWORD *)this + 33)) & 4;
        v10 = v22 != 0;
        if ( v22 )
          v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 384LL))(*((_QWORD *)this + 33));
        v23 = (*(__int64 (__fastcall **)(_QWORD, CPerMonitorDesktopVisibilityService **, _BYTE *))(**((_QWORD **)this + 33)
                                                                                                 + 328LL))(
                *((_QWORD *)this + 33),
                &v27,
                v40);
        v24 = v40;
        if ( v23 < 0 )
          v24 = v28;
        v28 = v24;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 33) + 344LL))(*((_QWORD *)this + 33), v41);
      }
    }
    v15 = *((_QWORD *)this + 30);
    v16 = *((_DWORD *)this + 64);
    *(_OWORD *)&v29[1] = *(_OWORD *)a2;
    v30 = *((_DWORD *)a2 + 4);
    v31 = v16;
    LODWORD(v32) = 0;
    v33 = v11;
    v34 = v15;
    v35 = v28;
    v36 = v10;
    v17 = (CImmersiveApplicationTransitionHelper *)*((_QWORD *)this + 38);
    v18 = *(__int64 (__fastcall **)(CImmersiveApplicationTransitionHelper *__hidden, const struct APP_TRANSITION_INFORMATION *const))(*(_QWORD *)v17 + 40LL);
    if ( v18 == CImmersiveApplicationTransitionHelper::BeginAppTransitionRequest )
      v19 = CImmersiveApplicationTransitionHelper::BeginAppTransitionRequest(
              v17,
              (const struct APP_TRANSITION_INFORMATION *const)&v29[1]);
    else
      v19 = v18(v17, (const struct APP_TRANSITION_INFORMATION *const)&v29[1]);
    *((_BYTE *)this + 232) = v19 >= 0;
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}

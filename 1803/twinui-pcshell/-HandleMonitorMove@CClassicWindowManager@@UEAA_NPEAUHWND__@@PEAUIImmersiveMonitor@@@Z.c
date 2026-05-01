/*
 * XREFs of ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x180007620
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x180007D60 (--_GCClassicWindow@@MEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800900A4 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_BOOL8 __fastcall CClassicWindowManager::HandleMonitorMove(
        CClassicWindowManager *this,
        HWND a2,
        struct IImmersiveMonitor *a3)
{
  char *v4; // r14
  char *v5; // r15
  int v6; // ebx
  int v7; // eax
  int ApartmentId; // ebp
  int v9; // edi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, unsigned int *); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, unsigned int *); // rax
  volatile int *v14; // rdx
  CClassicWindow *v15; // r10
  bool (__fastcall *v16)(CClassicWindow *__hidden, HWND); // rax
  bool v17; // al
  void (*v18)(void); // rax
  CClassicWindow *v19; // r10
  void *(__fastcall *v20)(CClassicWindow *__hidden, unsigned int); // rax
  int v21; // ebx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  bool v23; // bl
  __int64 v24; // rcx
  int cchValue; // [rsp+20h] [rbp-2B8h]
  unsigned int v27[2]; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-2A0h] BYREF
  struct IImmersiveMonitor *v29; // [rsp+40h] [rbp-298h]
  __int64 v30; // [rsp+48h] [rbp-290h]
  __int64 v31; // [rsp+50h] [rbp-288h]
  __int64 v32; // [rsp+58h] [rbp-280h]
  int (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-278h]
  char *v34; // [rsp+68h] [rbp-270h]
  int v35; // [rsp+70h] [rbp-268h]
  WCHAR Filename[264]; // [rsp+80h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+0h]

  v30 = -2LL;
  v29 = a3;
  v4 = (char *)this - 72;
  v5 = (char *)this + 64;
  if ( this == (CClassicWindowManager *)72 )
    v5 = 0LL;
  v34 = v5;
  v6 = *((_DWORD *)v5 + 11);
  if ( v6 != 2 )
  {
    v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_12;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_19;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_20;
    }
    if ( v6 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_12:
        if ( v7 != 1 )
          goto LABEL_20;
        goto LABEL_13;
      }
LABEL_19:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_20;
    }
  }
LABEL_13:
  if ( *((_DWORD *)v5 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v27);
    if ( ApartmentId >= 0 && v27[0] != *((_DWORD *)v5 + 10) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      v9 = 0;
      goto LABEL_22;
    }
  }
LABEL_20:
  ApartmentId = -2147417842;
  v9 = 0;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v5) )
    ApartmentId = 0;
LABEL_22:
  v35 = ApartmentId;
  v28 = 0LL;
  v31 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)v4 + 25) )
  {
    v32 = 0LL;
    do
    {
      v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, unsigned int *))(*((_QWORD *)v4 + 24) + 8 * v11);
      v33 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
      if ( v12 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, unsigned int *)))(*v12)[1])(v12);
      *(_QWORD *)v27 = 0LL;
      v13 = **v12;
      if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface )
      {
        *(_QWORD *)v27 = v12;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, unsigned int *)))(*v12)[1])(v12);
      }
      else if ( (int)v13(v12, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, v27) < 0 )
      {
        v15 = *(CClassicWindow **)v27;
LABEL_35:
        v9 = -1;
        goto LABEL_36;
      }
      v15 = *(CClassicWindow **)v27;
      v16 = *(bool (__fastcall **)(CClassicWindow *__hidden, HWND))(**(_QWORD **)v27 + 192LL);
      if ( v16 == CClassicWindow::IsEqualByHWND )
      {
        v17 = a2 == *(HWND *)(*(_QWORD *)v27 + 16LL);
      }
      else
      {
        v17 = v16(*(CClassicWindow **)v27, a2);
        v15 = *(CClassicWindow **)v27;
      }
      if ( !v17 )
        goto LABEL_35;
LABEL_36:
      if ( !v15 )
        goto LABEL_46;
      *(_QWORD *)v27 = 0LL;
      v18 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
      if ( (char *)v18 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
        goto LABEL_45;
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((CClassicWindow *)((char *)v15 + 12), v14) )
      {
        v20 = *(void *(__fastcall **)(CClassicWindow *__hidden, unsigned int))(*(_QWORD *)v19 + 216LL);
        if ( v20 == CClassicWindow::`scalar deleting destructor' )
          CClassicWindow::`scalar deleting destructor'(v19, 1u);
        else
          v20(v19, 1u);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v18 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
          if ( (char *)v18 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          {
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
            goto LABEL_46;
          }
LABEL_45:
          v18();
        }
      }
LABEL_46:
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, unsigned int *)))(*v12)[2])(v12);
      if ( !v9 )
      {
        v10 = v11;
        v21 = 0;
        goto LABEL_49;
      }
      ++v11;
      v9 = 0;
    }
    while ( v11 < *((_QWORD *)v4 + 25) );
  }
  v21 = -2147319765;
LABEL_49:
  if ( v21 >= 0 )
  {
    v22 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)v4 + 24) + 8 * v10);
    v21 = (**v22)(v22, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v28);
    if ( v21 >= 0 )
      (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v28 + 88LL))(v28, v29);
  }
  v23 = v21 >= 0;
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  return v23;
}

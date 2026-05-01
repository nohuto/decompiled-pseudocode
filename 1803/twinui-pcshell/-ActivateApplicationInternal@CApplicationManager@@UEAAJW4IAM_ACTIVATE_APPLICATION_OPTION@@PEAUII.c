/*
 * XREFs of ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x180044430
 * Callers:
 *     ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x180044D10 (-ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICA.c)
 * Callees:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18004C810 (-IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x18008F0A0 (-NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x18010EB38 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::ActivateApplicationInternal(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveApplication *a3)
{
  __int64 v5; // r13
  HWND v6; // r14
  int v7; // ecx
  signed int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // edi
  __int64 (__fastcall *v14)(CImmersiveApp *__hidden, struct IImmersiveApplication *, int *); // rax
  CImmersiveApp *v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD *); // rax
  int WindowAndPrepareForActivation; // eax
  __int64 v19; // rcx
  HWND LastActivePopup; // rbx
  HWND v21; // rdi
  PVOID Ptr; // rcx
  void (__fastcall *v23)(PVOID, HWND, __int64); // rax
  CImmersiveApp *v25; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[5]; // [rsp+38h] [rbp-28h] BYREF
  int v27; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+48h]
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  v28 = a2;
  v26[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = a1 - 240;
  v6 = 0LL;
  v7 = *(_DWORD *)(v5 + 824);
  v8 = v7 != 2 ? 0x80070005 : 0;
  if ( v7 == 2 )
  {
    v9 = 0LL;
    v29 = 0LL;
    v26[0] = a3;
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
      v9 = v29;
    }
    if ( v9 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v29 = 0LL;
    v26[2] = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    if ( *(_QWORD *)(v5 + 632) )
    {
      v26[3] = 0LL;
      while ( 1 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v5 + 624) + 8 * v11);
        v26[4] = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v13 = -1;
        v25 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, CImmersiveApp **))v12)(
               v12,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v25) >= 0 )
        {
          v14 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveApplication *, int *))(*(_QWORD *)v25 + 104LL);
          if ( v14 == CImmersiveApp::IsEqualByApp )
            CImmersiveApp::IsEqualByApp(v25, a3, &v27);
          else
            v14(v25, a3, &v27);
          v13 = (v27 != 0) - 1;
        }
        v15 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v15 + 16LL))(v15);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( !v13 )
          break;
        if ( (unsigned __int64)++v11 >= *(_QWORD *)(v5 + 632) )
          goto LABEL_44;
      }
      v10 = v11;
      v8 = 0;
    }
    else
    {
LABEL_44:
      v8 = -2147319765;
    }
    if ( v8 >= 0 )
    {
      v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v5 + 624) + 8 * v10);
      v8 = (**v16)(v16, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v29);
    }
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 16LL))(a3);
    if ( v8 >= 0 )
    {
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v29 + 312LL);
      if ( (char *)v17 == (char *)CImmersiveApp::GetWindowAndPrepareForActivation )
        WindowAndPrepareForActivation = CImmersiveApp::GetWindowAndPrepareForActivation(v29, v28, v26);
      else
        WindowAndPrepareForActivation = v17(v29, v28, v26);
      v8 = WindowAndPrepareForActivation;
      if ( WindowAndPrepareForActivation == -2147023598 )
      {
        CApplicationManager::_ForgetApplicationNoLock(v5, v29, 1LL);
      }
      else if ( WindowAndPrepareForActivation >= 0 )
      {
        v6 = (HWND)v26[0];
      }
    }
    v19 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v8 >= 0 )
  {
    LastActivePopup = GetLastActivePopup(v6);
    v21 = v6;
    if ( IsWindowVisible(LastActivePopup) )
      v21 = LastActivePopup;
    if ( SetForegroundWindow(v21) )
    {
      v8 = 0;
      if ( IsIconic(v6) )
        SwitchToThisWindow(v6, 1);
      if ( !(unsigned int)IsShellFrameWindow(v21) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_AttemptPendingActivationTracking((CApplicationManager *)v5, v21, a3);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[18].Ptr;
      v23 = *(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)Ptr + 24LL);
      if ( (char *)v23 == (char *)CPrivilegedNotificationOperations::NotifyWindowWithQEvent )
        CPrivilegedNotificationOperations::NotifyWindowWithQEvent(Ptr, v21, 3LL);
      else
        v23(Ptr, v21, 3LL);
    }
    else
    {
      return (unsigned int)-2147024891;
    }
  }
  return (unsigned int)v8;
}

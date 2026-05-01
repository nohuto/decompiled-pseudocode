/*
 * XREFs of ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C570
 * Callers:
 *     <none>
 * Callees:
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x18000C750 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018100 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18002A680 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ActivateApplicationInternal(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveApplication *a3)
{
  CApplicationManager *v6; // r15
  CApplicationManagerUtility *v7; // rdi
  int v8; // ecx
  signed int First; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  HWND v13; // rdx
  HWND LastActiveVisiblePopupOrSelf; // r14
  int v15; // eax
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  CApplicationManagerUtility *v18; // [rsp+88h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (CApplicationManager *)(a1 - 200);
  v7 = 0LL;
  v8 = *((_DWORD *)v6 + 190);
  First = v8 != 2 ? 0x80070005 : 0;
  if ( v8 == 2 )
  {
    v10 = 0LL;
    v17 = 0LL;
    v18 = a3;
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = v17;
    }
    if ( v10 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(v6, &v18, &v17, 0LL);
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 16LL))(a3);
    if ( First >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, CApplicationManagerUtility **))(*(_QWORD *)v17 + 312LL))(
              v17,
              a2,
              &v18);
      First = v11;
      if ( v11 == -2147023598 )
      {
        CApplicationManager::_ForgetApplicationNoLock(v6, v17, 1LL);
      }
      else if ( v11 >= 0 )
      {
        v7 = v18;
      }
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( First >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(v7, v13);
    v15 = -SetForegroundWindow(LastActiveVisiblePopupOrSelf);
    First = v15 == 0 ? 0x80070005 : 0;
    if ( v15 )
    {
      if ( IsIconic((HWND)v7) )
        SwitchToThisWindow((HWND)v7, 1);
      if ( !(unsigned int)IsShellFrameWindow(LastActiveVisiblePopupOrSelf) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_AttemptPendingActivationTracking(v6, LastActiveVisiblePopupOrSelf, a3);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
        LastActiveVisiblePopupOrSelf,
        3LL);
    }
  }
  return (unsigned int)First;
}

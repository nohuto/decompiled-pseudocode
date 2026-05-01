/*
 * XREFs of ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800086FC
 * Callers:
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x1800085E4 (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18000877C (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180008800 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke @ 0x18011B610 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18011B610.c)
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18011B650 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18011B870 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x18000B710 (-SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetActiveProcessForRotation(CRotationManagerSync *this, unsigned int a2)
{
  CPrivilegedDesktopOperations *Ptr; // rcx
  __int64 (__fastcall *v4)(CPrivilegedDesktopOperations *__hidden, unsigned int); // rax
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 128) )
  {
    *((_DWORD *)this + 33) = a2;
  }
  else
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(this, &ImmersiveShell_AppManager_SetActiveProcess_Start);
    Ptr = (CPrivilegedDesktopOperations *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr;
    v4 = *(__int64 (__fastcall **)(CPrivilegedDesktopOperations *__hidden, unsigned int))(*(_QWORD *)Ptr + 32LL);
    if ( v4 == CPrivilegedDesktopOperations::SetActiveProcess )
      CPrivilegedDesktopOperations::SetActiveProcess(Ptr, a2);
    else
      v4(Ptr, a2);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v5, &ImmersiveShell_AppManager_SetActiveProcess_Stop);
  }
}

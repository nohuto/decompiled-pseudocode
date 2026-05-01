/*
 * XREFs of ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18003B3E0
 * Callers:
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18003AE10 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18003AF20 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18003B314 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke @ 0x18003B930 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ptr64_--Dele.c)
 * Callees:
 *     McTemplateU0 @ 0x180025CB8 (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetActiveProcessForRotation(CRotationManagerSync *this, unsigned int a2)
{
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 136) )
  {
    *((_DWORD *)this + 35) = a2;
  }
  else
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0((__int64)this, &ImmersiveShell_AppManager_SetActiveProcess_Start);
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
      a2);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v3, &ImmersiveShell_AppManager_SetActiveProcess_Stop);
  }
}

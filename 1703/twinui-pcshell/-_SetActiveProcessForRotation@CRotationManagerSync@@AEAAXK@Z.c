/*
 * XREFs of ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180039FA0
 * Callers:
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1800399C0 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x180039AD0 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180039EDC (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722__1__1_::Invoke @ 0x18003A320 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722__1.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x180025530 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetActiveProcessForRotation(CRotationManagerSync *this, unsigned int a2)
{
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 112) )
  {
    *((_DWORD *)this + 29) = a2;
  }
  else
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      TemplateEventDescriptor((__int64)this, &ImmersiveShell_AppManager_SetActiveProcess_Start);
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
      a2);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      TemplateEventDescriptor(v3, &ImmersiveShell_AppManager_SetActiveProcess_Stop);
  }
}

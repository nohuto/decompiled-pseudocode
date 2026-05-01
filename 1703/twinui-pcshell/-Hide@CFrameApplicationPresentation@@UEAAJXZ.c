/*
 * XREFs of ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x180067180
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c74e0b72836ee903ef781163810980c0___ @ 0x18006A4F0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c74e0b72836ee903ef781163810980c0___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Hide(CFrameApplicationPresentation *this)
{
  if ( *((_BYTE *)this + 44) )
  {
    if ( *((_DWORD *)this + 49) )
      CFrameApplicationPresentation::_AddTaskToQueue__lambda_c74e0b72836ee903ef781163810980c0___(this, this);
    else
      (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                     + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
        *((_QWORD *)this + 15),
        1LL);
    *((_BYTE *)this + 44) = 0;
  }
  return 0LL;
}

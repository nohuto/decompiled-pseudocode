/*
 * XREFs of ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x180067130
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___ @ 0x18006A3E8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Show(CFrameApplicationPresentation *this)
{
  if ( !*((_BYTE *)this + 44) )
  {
    if ( *((_DWORD *)this + 49) )
      CFrameApplicationPresentation::_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___(this, this);
    else
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
        *((_QWORD *)this + 15),
        0LL);
    *((_BYTE *)this + 44) = 1;
  }
  return 0LL;
}

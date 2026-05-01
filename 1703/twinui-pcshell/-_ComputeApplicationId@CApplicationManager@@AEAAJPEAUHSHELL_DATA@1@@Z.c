/*
 * XREFs of ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x180015740
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18001129C (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801757E4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::_ComputeApplicationId(
        CApplicationManager *this,
        HWND *a2,
        unsigned __int16 **a3)
{
  int ImmersiveAppIdFromWindow; // edi
  HWND v5; // rdx
  __int64 v6; // rcx
  HWND v7; // rdx
  CApplicationManager *pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  pvAttribute = this;
  ImmersiveAppIdFromWindow = 0;
  v5 = (HWND)(a2 + 4);
  if ( !*(_QWORD *)v5 && *((_DWORD *)a2 + 4) == 2 && (unsigned __int64)*a2 <= 0x1D )
  {
    v6 = 604110848LL;
    if ( _bittest64(&v6, (unsigned __int64)*a2) )
    {
      ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2[1], v5, a3);
      if ( ImmersiveAppIdFromWindow < 0
        && CApplicationManagerUtility::IsValidWindow((CApplicationManagerUtility *)a2[1], v7)
        && !GetWindow(a2[1], 4u)
        && DwmGetWindowAttribute(a2[1], 0xEu, &pvAttribute, 4u) >= 0
        && !(_DWORD)pvAttribute )
      {
        (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                     + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
          a2[1],
          1LL);
      }
    }
  }
  return (unsigned int)ImmersiveAppIdFromWindow;
}

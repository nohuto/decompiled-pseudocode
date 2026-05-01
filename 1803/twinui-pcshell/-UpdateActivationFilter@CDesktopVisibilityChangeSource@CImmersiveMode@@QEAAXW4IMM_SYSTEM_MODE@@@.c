/*
 * XREFs of ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x18000B5C4
 * Callers:
 *     ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800265F4 (-_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ.c)
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180026D80 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180116C4C (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801181D0 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x18000B660 (-SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ldddd @ 0x180118DC0 (WPP_SF_ldddd.c)
 */

unsigned __int8 __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(__int64 a1, int a2)
{
  unsigned __int8 result; // al
  HWND v4; // rdx
  unsigned int v5; // edi
  CPrivilegedDesktopOperations *Ptr; // rcx
  __int64 (__fastcall *v7)(CPrivilegedDesktopOperations *__hidden, HWND, int); // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagRECT Rect; // [rsp+40h] [rbp-28h] BYREF

  result = 0;
  if ( !a2 && (!*(_BYTE *)(a1 + 12) || *(_BYTE *)(a1 + 13)) )
    result = 1;
  if ( result != *(_BYTE *)(a1 + 14) )
  {
    v4 = *(HWND *)(a1 + 16);
    *(_BYTE *)(a1 + 14) = result;
    v5 = result;
    Ptr = (CPrivilegedDesktopOperations *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr;
    v7 = *(__int64 (__fastcall **)(CPrivilegedDesktopOperations *__hidden, HWND, int))(*(_QWORD *)Ptr + 48LL);
    if ( v7 == CPrivilegedDesktopOperations::SetActivationFilter )
      CPrivilegedDesktopOperations::SetActivationFilter(Ptr, v4, v5);
    else
      v7(Ptr, v4, v5);
    result = (unsigned __int8)WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
    {
      result = GetWindowRect(*(HWND *)(a1 + 16), &Rect);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        return WPP_SF_ldddd(
                 *((_QWORD *)WPP_GLOBAL_Control + 2),
                 v8,
                 v9,
                 v5,
                 Rect.left,
                 Rect.top,
                 Rect.right,
                 Rect.bottom);
    }
  }
  return result;
}

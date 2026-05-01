/*
 * XREFs of ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180031F60
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18003308C (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1800334A4 (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveMode::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  CImmersiveMode *v5; // rcx
  __int64 v6; // rdi
  HWND *v7; // rbx
  int v9; // [rsp+40h] [rbp-28h] BYREF
  int X[4]; // [rsp+48h] [rbp-20h] BYREF

  if ( (a3 & 0x20) != 0 )
  {
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v9) >= 0 )
    {
      v5 = (CImmersiveMode *)(a1 - 144);
      if ( v9 )
        CImmersiveMode::_RegisterDesktopVisibilitySource(v5, a2);
      else
        CImmersiveMode::_UnregisterDesktopVisibilitySource(v5, a2);
    }
  }
  else if ( (a3 & 1) != 0 )
  {
    v6 = 0LL;
    if ( *(_QWORD *)(a1 + 304) )
    {
      while ( !(unsigned int)SHIsSameObject(
                               **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 296) + 8 * v6),
                               (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
      {
        if ( (unsigned __int64)++v6 >= *(_QWORD *)(a1 + 304) )
          return 0LL;
      }
      v7 = *(HWND **)(*(_QWORD *)(a1 + 296) + 8 * v6);
      if ( (*(int (__fastcall **)(HWND, int *))(*(_QWORD *)*v7 + 72LL))(*v7, X) >= 0 )
        SetWindowPos(v7[2], 0LL, X[0], X[1], 0, 0, 0x14u);
    }
  }
  return 0LL;
}

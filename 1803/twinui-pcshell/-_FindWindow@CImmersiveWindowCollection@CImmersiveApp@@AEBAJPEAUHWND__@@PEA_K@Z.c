/*
 * XREFs of ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C23C
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x18004C600 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x18012F660 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x180130290 (-SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180130604 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801306C4 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180131984 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  CTaskWindow *v9; // rcx
  __int64 (__fastcall *v10)(CTaskWindow *); // rax
  HWND v11; // rax

  *a3 = 0LL;
  result = *((_QWORD *)this + 20) == 0LL ? 0x8002802B : 0;
  if ( *((_QWORD *)this + 20) && a2 )
  {
    *a3 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    if ( *((_QWORD *)this + 20) )
    {
      while ( 1 )
      {
        v9 = *(CTaskWindow **)(*((_QWORD *)this + 19) + 8 * v8);
        v10 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)v9 + 32LL);
        v11 = (HWND)(v10 == CTaskWindow::GetNativeWindow
                   ? CTaskWindow::GetNativeWindow(v9)
                   : ((__int64 (__fastcall *)(CTaskWindow *, __int64 (__fastcall *)(CTaskWindow *), unsigned __int64 *))v10)(
                       v9,
                       CTaskWindow::GetNativeWindow,
                       a3));
        if ( v11 == a2 )
          break;
        if ( ++v8 >= *((_QWORD *)this + 20) )
          goto LABEL_12;
      }
      v7 = v8;
      result = 0LL;
    }
    else
    {
LABEL_12:
      result = 2147647531LL;
    }
    if ( (int)result >= 0 )
      *a3 = v7;
  }
  return result;
}

/*
 * XREFs of ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1801B1150
 * Callers:
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1801B0D10 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1801B0E60 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B17BC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::SetNoActivate(AccessibilityExperienceManager *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  LONG WindowLongW; // eax
  LONG v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v5 = *((_QWORD *)this + 30);
  if ( v5 )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v5 + 32LL))(*((_QWORD *)this + 30), &v8) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v8 + 24LL))(v8, &hWnd) >= 0 )
    {
      WindowLongW = GetWindowLongW(hWnd, -20);
      if ( a2 )
      {
        v7 = WindowLongW | 0x8000000;
        *((_DWORD *)this + 81) = 0x8000000;
      }
      else
      {
        v7 = WindowLongW & 0xF7FFFFFF;
        *((_DWORD *)this + 81) = 0;
      }
      SetWindowLongW(hWnd, -20, v7);
    }
    v4 = v8;
  }
  if ( v4 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}

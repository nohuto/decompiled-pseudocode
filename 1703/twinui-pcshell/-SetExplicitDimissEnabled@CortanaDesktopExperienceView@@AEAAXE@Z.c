/*
 * XREFs of ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1800C8520
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1800C2960 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C4124 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C82DC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800C85A4 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 */

void __fastcall CortanaDesktopExperienceView::SetExplicitDimissEnabled(CortanaDesktopExperienceView *this, char a2)
{
  HWND v3; // rcx
  HWND v4; // rsi
  DWORD LastError; // ebx

  *((_BYTE *)this + 129) = a2;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 29) )
    {
      CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow(this);
      v3 = (HWND)*((_QWORD *)this + 29);
      if ( v3 )
        ShowWindow(v3, 4);
    }
  }
  else
  {
    v4 = (HWND)*((_QWORD *)this + 29);
    if ( v4 )
    {
      LastError = GetLastError();
      DestroyWindow(v4);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 29) = 0LL;
  }
}

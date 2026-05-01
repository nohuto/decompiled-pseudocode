/*
 * XREFs of ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E3A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x180185EBC (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1802E33AC (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 */

LRESULT __fastcall JointDivider::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, const WCHAR *lParam)
{
  __int64 v5; // rbx
  HWND v9; // rcx
  HDC v10; // rax
  void *ppvOut; // [rsp+30h] [rbp-41h] BYREF
  struct tagPOINT Points; // [rsp+38h] [rbp-39h] BYREF
  tagPAINTSTRUCT Paint; // [rsp+40h] [rbp-31h] BYREF

  v5 = 0LL;
  if ( a3 == 15 )
  {
    v10 = (HDC)a4;
    if ( !a4 )
      v10 = BeginPaint(this[1], &Paint);
    JointDivider::HandlePaint((JointDivider *)(this - 5), v10);
    if ( !a4 )
      EndPaint(this[1], &Paint);
  }
  else
  {
    if ( a3 == 26 )
    {
      if ( !CImmersiveColor::IsColorSchemeChangeMessage(26, lParam) )
        return DefWindowProcW(this[1], a3, a4, (LPARAM)lParam);
LABEL_13:
      InvalidateRect(this[1], 0LL, 1);
      return DefWindowProcW(this[1], a3, a4, (LPARAM)lParam);
    }
    if ( a3 == 33 )
    {
      return 3LL;
    }
    else
    {
      if ( a3 != 513 )
      {
        if ( a3 != 794 )
        {
          if ( a3 == 798 )
            DwmpTransitionWindow(this[1], 1073741846LL);
          return DefWindowProcW(this[1], a3, a4, (LPARAM)lParam);
        }
        goto LABEL_13;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             (IUnknown *)*(this - 3),
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &ppvOut) >= 0 )
      {
        v9 = this[1];
        Points.x = (__int16)lParam;
        Points.y = SWORD1(lParam);
        MapWindowPoints(v9, 0LL, &Points, 1u);
        (*(void (__fastcall **)(void *, _QWORD, __int64, struct tagPOINT))(*(_QWORD *)ppvOut + 72LL))(
          ppvOut,
          0LL,
          3LL,
          Points);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  return v5;
}

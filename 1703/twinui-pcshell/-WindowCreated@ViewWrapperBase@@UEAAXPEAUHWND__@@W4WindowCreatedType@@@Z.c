/*
 * XREFs of ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801137F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x180112054 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1801141A0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180117368 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x18011745C (-PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180117638 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ??$WindowCreated@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180119498 (--$WindowCreated@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND_.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18011B9B4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::WindowCreated(__int64 a1, HWND a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  _DWORD *v7; // rcx
  _OWORD *v8; // rbx
  HWND Ancestor; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  const WCHAR *StringRawBuffer; // rax
  DWORD dwProcessId; // [rsp+20h] [rbp-58h] BYREF
  DWORD v14[3]; // [rsp+24h] [rbp-54h] BYREF
  struct tagPOINT Points[2]; // [rsp+30h] [rbp-48h] BYREF

  Points[0] = (struct tagPOINT)a2;
  if ( a2 != *(HWND *)(a1 + 232) )
  {
    v6 = 0LL;
    v7 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
    if ( v7 && *v7 )
    {
      v14[0] = GetWindowThreadProcessId(a2, &dwProcessId);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
        a1 + 124,
        Points,
        v14,
        &dwProcessId);
    }
    *(_QWORD *)(a1 + 232) = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 8) + 160LL))(a1 - 8, a3);
    WindowReadyState::SetWindow(a1 + 320, *(_QWORD *)(a1 + 232), a3);
    if ( a3 == 1 )
    {
      GetWindowBand(a2, a1 + 184);
      v8 = (_OWORD *)(a1 + 168);
      GetWindowRect(a2, (LPRECT)(a1 + 168));
      Ancestor = GetAncestor(a2, 1u);
      if ( Ancestor )
      {
        *(_OWORD *)&Points[0].x = *v8;
        if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
          *v8 = *(_OWORD *)&Points[0].x;
      }
      EnumPropsExW(a2, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, a1 + 80);
    }
    else
    {
      ViewWrapperBase::PushDesiredZbidToWindow((ViewWrapperBase *)(a1 - 8));
      ViewWrapperBase::PushDesiredPositionToWindow(a1 - 8, 3LL);
      if ( *(_QWORD *)(a1 + 88) )
      {
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v6);
          v11 = *(_DWORD *)(v10 + 16);
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v10 + 8), 0LL);
          SetPropW(a2, StringRawBuffer, (HANDLE)v11);
          ++v6;
        }
        while ( v6 < *(_QWORD *)(a1 + 88) );
      }
    }
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1 - 8, a2, 0LL);
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)(a1 - 8));
  }
}

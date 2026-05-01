/*
 * XREFs of _lambda_84ae6e21f9379359c5dabe643d80e783_::operator() @ 0x1801F0970
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_84ae6e21f9379359c5dabe643d80e783___::Run @ 0x1801F3220 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_84ae6e21f9379359c5dabe643d80e783___--Run.c)
 * Callees:
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18005B600 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1800FAAE4 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801F2894 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z @ 0x1801F2BD0 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z.c)
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1801F2D90 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x1801F2EA4 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021B964 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall lambda_84ae6e21f9379359c5dabe643d80e783_::operator()(int *a1)
{
  int v2; // eax
  HWND v3; // rdi
  HWND Ancestor; // rax
  __int64 v5; // rcx
  wil *v6; // rcx
  const char *v8; // r9
  unsigned int v11; // [rsp+20h] [rbp-48h]
  struct tagPOINT Points[2]; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
      *(_QWORD *)a1 + 160LL,
      *((_QWORD *)a1 + 1));
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 160LL) + 48LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 160LL),
           *(_QWORD *)a1 + 328LL);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1108LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2);
    v3 = (HWND)*(int *)(*(_QWORD *)a1 + 328LL);
    WindowReadyState::SetWindow(*(_QWORD *)a1 + 360LL, v3, a1[4]);
    if ( a1[4] == 1 )
    {
      GetWindowBand(v3, *(_QWORD *)a1 + 472LL);
      GetWindowRect(v3, &Rect);
      *(float *)(*(_QWORD *)a1 + 216LL) = (float)Rect.left;
      *(float *)(*(_QWORD *)a1 + 220LL) = (float)Rect.top;
      *(float *)(*(_QWORD *)a1 + 224LL) = (float)(Rect.right - Rect.left);
      *(float *)(*(_QWORD *)a1 + 228LL) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v3, 1u);
      if ( Ancestor )
      {
        *(struct tagRECT *)&Points[0].x = Rect;
        if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
        {
          *(float *)(*(_QWORD *)a1 + 216LL) = (float)Points[0].x;
          *(float *)(*(_QWORD *)a1 + 220LL) = (float)Points[0].y;
          *(float *)(*(_QWORD *)a1 + 224LL) = (float)(Points[1].x - Points[0].x);
          *(float *)(*(_QWORD *)a1 + 228LL) = (float)(Points[1].y - Points[0].y);
        }
      }
      EnumPropsExW(v3, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, *(_QWORD *)a1 + 248LL);
    }
    else
    {
      WindowWrapperBase::PushZbidToWindow(*(_QWORD *)a1, *(unsigned int *)(*(_QWORD *)a1 + 472LL));
      v5 = *(_QWORD *)a1;
      *(_OWORD *)&Points[0].x = *(_OWORD *)(*(_QWORD *)a1 + 216LL);
      WindowWrapperBase::PushBoundsToWindow(v5, Points);
      LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(*(_QWORD *)a1 + 248LL), v3);
    }
    WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(*(_QWORD *)a1, v3, 0LL);
    WindowWrapperBase::ReconcileSessionIdleTaskCompletion(*(WindowWrapperBase **)a1);
  }
  catch ( ... )
  {
    **((_DWORD **)a1 + 3) = wil::ResultFromCaughtException(v6);
    v8 = (const char *)**((unsigned int **)a1 + 3);
    v11 = (unsigned int)v8;
    if ( (int)v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v8);
    return v11;
  }
  return 0LL;
}

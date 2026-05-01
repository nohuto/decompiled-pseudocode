/*
 * XREFs of ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18005B600
 * Callers:
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180051290 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_56c6782606ebfbd5986f99ce5cf01b42_::operator() @ 0x1801EFEFC (_lambda_56c6782606ebfbd5986f99ce5cf01b42_--operator().c)
 *     _lambda_84ae6e21f9379359c5dabe643d80e783_::operator() @ 0x1801F0970 (_lambda_84ae6e21f9379359c5dabe643d80e783_--operator().c)
 *     ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x1801F4770 (-WindowRemoved@WindowWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A5A4 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005B5B4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18005B684 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18008E184 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

char __fastcall WindowReadyState::SetWindow(__int64 a1, HWND a2, int a3)
{
  bool IsReadyForPresentation; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r14
  char result; // al
  __int64 v11; // rdx
  unsigned int PropW; // eax
  int v13; // eax
  struct tagRECT Rect; // [rsp+20h] [rbp-38h] BYREF

  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  *(_QWORD *)v8 = v7;
  v9 = IsReadyForPresentation;
  WindowReadyState::WaitFlags::Clear((int *)(v8 + 8), (__int64 *)v8, 14);
  if ( a2 )
  {
    PropW = (unsigned int)GetPropW(a2, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
    *(_BYTE *)(a1 + 24) = PropW == 1;
    if ( PropW == 1 && a3 != 1 )
      WindowReadyState::WaitFlags::Set((int *)(a1 + 8), (__int64 *)a1, 2);
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v13 = Rect.right - Rect.left;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 28) = v13;
    *(_DWORD *)(a1 + 32) = Rect.bottom - Rect.top;
    WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)a1);
  }
  result = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  if ( result != v9 )
  {
    LOBYTE(v11) = result;
    return std::_Func_class<void,bool>::operator()(a1 + 40, v11);
  }
  return result;
}

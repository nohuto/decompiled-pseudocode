/*
 * XREFs of ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x1800691B8
 * Callers:
 *     _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator() @ 0x1800665DC (_lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a713dc744d2e33656eb13ccb399d0571___::Run @ 0x18006B500 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a713dc744d2e33656eb13ccb399d0571___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_UpdateMinSizePreferences(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  unsigned int PropW; // ebx
  unsigned int v6; // eax
  bool v7; // zf
  unsigned int *v8; // rax
  int v9; // eax
  int v10; // eax
  void *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+54h] [rbp+1Ch]

  if ( *((_DWORD *)this + 12) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x552,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    if ( a2 && a2 == **((HWND **)this + 13) )
    {
      PropW = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.X");
      v6 = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.Y");
      v14 = PropW;
      v15 = v6;
      if ( !PropW || (v7 = v6 == 0, v8 = &v14, v7) )
        v8 = (unsigned int *)((char *)this + 152);
      *((_QWORD *)this + 18) = *(_QWORD *)v8;
      v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 14) + 80LL))(
             *((_QWORD *)this + 14),
             (char *)this + 144);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x55F,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v9);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 192LL))(this);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      ppvOut = 0LL;
      if ( IUnknown_QueryService(
             (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &ppvOut) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 64LL))(
                ppvOut,
                *((_QWORD *)this + 26),
                *((_QWORD *)this + 18));
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x56C,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v10);
      }
      v11 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    return 0LL;
  }
}

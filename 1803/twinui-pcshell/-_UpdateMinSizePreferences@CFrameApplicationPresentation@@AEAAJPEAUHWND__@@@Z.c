/*
 * XREFs of ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180012D50
 * Callers:
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a713dc744d2e33656eb13ccb399d0571___::Run @ 0x180090EB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a713dc744d2e33656eb13ccb399d0571___--Run.c)
 * Callees:
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180013BD0 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?SetMinimumSize@CApplicationFrameWrapper@@UEAAJPEBUtagSIZE@@@Z @ 0x180016EA0 (-SetMinimumSize@CApplicationFrameWrapper@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_UpdateMinSizePreferences(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  unsigned int PropW; // ebx
  unsigned int v5; // eax
  bool v6; // zf
  unsigned int *v7; // rax
  CApplicationFrameWrapper *v8; // rcx
  __int64 (__fastcall *v9)(CApplicationFrameWrapper *__hidden, const struct tagSIZE *); // rax
  const struct tagSIZE *v10; // rdx
  int v11; // eax
  __int64 (__fastcall *v12)(CFrameApplicationPresentation *__hidden); // rax
  int v13; // eax
  void *v14; // rcx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+54h] [rbp+1Ch]

  v16 = -2;
  if ( *((_DWORD *)this + 14) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B6,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      -2);
    return 2147947423LL;
  }
  else
  {
    if ( a2 && a2 == **((HWND **)this + 14) )
    {
      PropW = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.X");
      v5 = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.Y");
      v19 = PropW;
      v20 = v5;
      if ( !PropW || (v6 = v5 == 0, v7 = &v19, v6) )
        v7 = (unsigned int *)((char *)this + 160);
      *((_QWORD *)this + 19) = *(_QWORD *)v7;
      v8 = (CApplicationFrameWrapper *)*((_QWORD *)this + 15);
      v9 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *__hidden, const struct tagSIZE *))(*(_QWORD *)v8 + 80LL);
      v10 = (const struct tagSIZE *)((char *)this + 152);
      if ( v9 == CApplicationFrameWrapper::SetMinimumSize )
        v11 = CApplicationFrameWrapper::SetMinimumSize(v8, v10);
      else
        v11 = v9(v8, v10);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6C3,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v11,
          -2);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v12 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *__hidden))(*(_QWORD *)this + 192LL);
      if ( v12 == CFrameApplicationPresentation::UpdateSizeConstraints )
        CFrameApplicationPresentation::UpdateSizeConstraints(this);
      else
        v12(this);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      ppvOut = 0LL;
      if ( IUnknown_QueryService(
             (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &ppvOut) >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 64LL))(
                ppvOut,
                *((_QWORD *)this + 68),
                *((_QWORD *)this + 19));
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6D0,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v13,
            v16);
      }
      v14 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    return 0LL;
  }
}
